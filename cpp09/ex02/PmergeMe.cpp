/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:54:04 by iassil            #+#    #+#             */
/*   Updated: 2024/10/10 08:34:49 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() { }

PmergeMe::PmergeMe( const PmergeMe& obj )
	:	av(obj.av), isSorted(obj.isSorted), size(obj.size), vec(obj.vec), deq(obj.deq) { }

PmergeMe& PmergeMe::operator=( const PmergeMe& obj ) {
	if ( &obj != this ) {
		vec = obj.vec;
		deq = obj.deq;
		av = obj.av;
		isSorted = obj.isSorted;
		size = obj.size;
	}
	return ( *this );
}

PmergeMe::~PmergeMe() { }

PmergeMe::PmergeMe( char** av, size_t size )
	:	av(av), isSorted(true), size(size) { }

void	PmergeMe::printArguments( void ) {
	for ( size_t i = 0; i < size; i++ ) {
		std::cout << av[i];
		if (i + 1 < size)
			std::cout << ' ';
	}
	std::cout << std::endl;
}

void	PmergeMe::parseVector( void ) {
	for ( size_t i = 0; i < size; i++ ) {
		if ( av[i][0] == '\0' || !PmergeMe::isNum(av[i]) || std::strlen(av[i]) > 11 ) {
			throw std::invalid_argument("Invalid input!");
		}
		int64_t val = PmergeMe::atoi(av[i]);
		if ( PmergeMe::isDuplicate(vec, val) ) {
			throw std::invalid_argument("Duplicate elements!");
		}
		if ( val < 0 )
			throw std::invalid_argument("Negative number!");
		if ( i != 0 && val < vec.at(i - 1) )
			isSorted = false;
		vec.push_back( val );
	}
}

void	PmergeMe::parseDeque( void ) {
	for ( size_t i = 0; i < size; i++ ) {
		if ( av[i][0] == '\0' || !PmergeMe::isNum(av[i]) || std::strlen(av[i]) > 11 ) {
			throw std::invalid_argument("Invalid input!");
		}
		int64_t val = PmergeMe::atoi(av[i]);
		if ( PmergeMe::isDuplicate(deq, val) ) {
			throw std::invalid_argument("Duplicate elements!");
		}
		if ( val < 0 )
			throw std::invalid_argument("Negative number!");
		if ( i != 0 && val < deq.at(i - 1) )
			isSorted = false;
		deq.push_back( val );
	}
}

void	PmergeMe::execute( void ) {

	double	duration;
	clock_t	vec_start, vec_end, deq_start, deq_end;

	try {
		/** ================ Vector ================ */
		vec_start	= clock();
		parseVector();
		
		if ( isSorted ) {
			std::cout << "Input already sorted" << std::endl;
			return ;
		}

		vec_sort();
		vec_end		= clock();
		/** ================ ====== ================ */

		std::cout << "Before\t: ";
		printArguments();

		/** ================ Deque ================ */
		deq_start	= clock();
		parseDeque();
		deq_sort();
		deq_end		= clock();
		/** ================ ===== ================ */
	
	} catch ( const std::exception& e ) {
		throw ;
	}


	std::cout << "After\t: ";
	PmergeMe::printVec(vec);
	
	if ( !std::is_sorted(deq.begin(), deq.end()) || !std::is_sorted(vec.begin(), vec.end()) ) {
		std::cout << "Not Sorted" << std::endl;
		return ;
	}

	std::cout << "Time to process a range of " << vec.size();
	std::cout << " elements with std::vector<> : ";
	duration = static_cast<double>(vec_end - vec_start) / CLOCKS_PER_SEC;
	std::cout << std::fixed << std::setprecision(5) << duration << " us";
	std::cout << std::endl;
	
	std::cout << "Time to process a range of " << deq.size();
	std::cout << " elements with std::deque<>  : ";
	duration = static_cast<double>(deq_end - deq_start) / CLOCKS_PER_SEC;
	std::cout << std::fixed << std::setprecision(5) << duration << " us";
	std::cout << std::endl;
}

bool	PmergeMe::isNum( char *str ) {
	size_t	size = std::strlen(str);
	size_t	i = 0;

	if ( str[i] && (str[i] == '-' || str[i] == '+') )
		i++;
	if ( str[i] == '\0' )
		return ( false );
	for ( ; i < size; i++ ) {
		if ( !(str[i] >= '0' && str[i] <= '9') )
			return ( false );
	}
	return ( true );
}

int64_t	PmergeMe::atoi( char *str ) {
	size_t	i = 0;
	bool	sign = false;
	int64_t	ans = 0;

	if ( str[i] && (str[i] == '-' || str[i] == '+') ) {
		if ( str[i] == '-' )
			sign = true;
		i++;
	}

	size_t size = std::strlen(str);
	for ( ; i < size; i++ ) {
		if ( str[i] && ( str[i] >= '0' && str[i] <= '9' ) ) {
			ans = (ans * 10) + (str[i] - '0');
		} else {
			throw std::invalid_argument("Invalid Character!");
		}
	}
	int64_t	res = sign ? (ans * -1) : ans;
	if (res > INT_MAX || res < INT_MIN) {
		throw std::invalid_argument("Number too large!");	
	}
	return ( res );
}

void	PmergeMe::vec_sort( void ) {
	std::vector< std::pair<int64_t, int64_t> >	v;
	size_t	v_size = vec.size();
	int64_t	unpaired = 0;
	bool	is_odd = false;

	/*
		* If the size of the Vector (number of elements) is odd
		* we have to exclude it because we want to work with pair elements
		* the excluded element will be held in a variable
		* and will be added when we finish our work
		* Before	[4], [9], [2], [1], [5], [7], [8]
		* After		[4], [9], [2], [1], [5], [7] 		| unpaired = [8]
	*/
	if ( v_size % 2 != 0 ) {
		is_odd = true;
		unpaired = vec.at(v_size - 1);
		vec.pop_back();
	}

	/*
		* Add the numbers in a pair of elements and sort
		* them in a descending order (biggest to smallest number)
		* Before	[4], [9], [2], [1], [5], [7]
		* 			[4, 9][2, 1][5, 7]
		* After		[9, 4][2, 1][7, 5]
	*/
	for ( size_t i = 0, j = 0; i < v_size - 1; i += 2, j++ ) {
		v.push_back( std::make_pair( vec.at(i), vec.at(i + 1) ) );

		if ( v[j].first < v[j].second )
			std::swap( v[j].first, v[j].second );
	}

	/*
		* Sort the pair of elements in an ascending order
		* of their first element in the pair
		* Before	[9, 4][2, 1][7, 5]
		* After		[2, 1][7, 5][9, 4]
	*/
	sortPairs(v);

	std::vector<int64_t>	mainChain, pendChain;

	/*
		* Putting the first `pend` element in the mainChain
		* because we know that the first `pend` is lesser than `a1` from
		* the mainChain and the first `a1` is the lesser element in the mainChain
		* [2, 1][7, 5][9, 4]
		* mainChain	[1]
		* pendChain	[]
	*/
	mainChain.push_back(v[0].second);

	/*
		* Fill the mainChain with first element from the pairs
		* [2, 1][7, 5][9, 4]
		* mainChain	[1, 2, 7, 9]
		* pendChain	[5, 4]
	*/
	for ( size_t i = 0; i < v.size(); ) {
		mainChain.push_back( v[i].first );
		if ( ++i < v.size() )
			pendChain.push_back( v[i].second );
	}

	/*
		* Increase the Capacity of the mainChain to hold all
		* Numbers from the pendChain for better optimization
	*/
	mainChain.reserve( mainChain.size() + pendChain.size() );

	/*
		* Generate the Jacobsthal Numbers
		* A sequence of integers defined by a specific type of
		* Lucas Sequence Un(P, Q)) where P = 1 & Q = -2
		* J(n) = J (n − 2) + 2 ⋅ J (n − 1)
		**
		** The utility of the Jacobsthal Numbers is
		** to improve the efficiency of Merging Two Sorted Containers
		** 
	*/
	std::vector<int64_t> JacNumbers = JacobsthalNumber< std::vector<int64_t> >( vec.size() );

	/*
		* Insert the elements of the pendChain into the mainChain
		* with the help of the Jacobsthal Numbers
		* mainChain		[1, 2, 7, 9]
		* pendChain		[5, 4]
		* JacNumbers	[1, 3, 2, 5, 4, ...]
	*/
	for ( size_t PendIdx = 0, JacIdx = 0; PendIdx < pendChain.size() && JacIdx < JacNumbers.size(); JacIdx++ ) {
		size_t	index = JacNumbers[JacIdx];
		
		if ( index <= pendChain.size() ) {
			int64_t	value = pendChain[index - 1];
			
			std::vector<int64_t>::iterator	insert_position = std::upper_bound(
				mainChain.begin(),
				mainChain.end(),
				value
			);
			
			mainChain.insert(insert_position, value);

			PendIdx++;
		}
	}

	/*
		* Insert the unpaired element that we excluded at the beginning
	*/
	if ( is_odd ) {
		std::vector<int64_t>::iterator	insert_position;
		insert_position = std::upper_bound(
			mainChain.begin(),
			mainChain.end(),
			unpaired
		);
		mainChain.insert(insert_position, unpaired);
	}

	/*
		* Clear the mainChain and put the sorted elements
		* from the mainChain back to the original vector
	*/
	vec.clear();
	vec = mainChain;
}

void	PmergeMe::deq_sort( void ) {
	std::deque< std::pair<int64_t, int64_t> >	d;
	size_t	v_size = deq.size();
	int64_t	unpaired = 0;
	bool	is_odd = false;

	if ( v_size % 2 != 0 ) {
		is_odd = true;
		unpaired = deq.at(v_size - 1);
		deq.pop_back();
	}

	for ( size_t i = 0, j = 0; i < v_size - 1; i += 2, j++ ) {
		d.push_back( std::make_pair( deq.at(i), deq.at(i + 1) ) );

		if ( d[j].first < d[j].second )
			std::swap( d[j].first, d[j].second );
	}

	sortPairs(d);

	std::deque<int64_t>	mainChain, pendChain;

	mainChain.push_back(d[0].second);

	for ( size_t i = 0; i < d.size(); ) {
		mainChain.push_back( d[i].first );
		if ( ++i < d.size() )
			pendChain.push_back( d[i].second );
	}

	std::deque<int64_t> JacNumbers = JacobsthalNumber< std::deque<int64_t> >( deq.size() );

	for ( size_t PendIdx = 0, JacIdx = 0; PendIdx < pendChain.size() && JacIdx < JacNumbers.size(); JacIdx++ ) {
		size_t	index = JacNumbers[JacIdx];
		
		if ( index <= pendChain.size() ) {
			int64_t	value = pendChain[index - 1];
			
			std::deque<int64_t>::iterator	insert_position = std::upper_bound(
				mainChain.begin(),
				mainChain.end(),
				value
			);
			
			mainChain.insert(insert_position, value);

			PendIdx++;
		}
	}

	if ( is_odd ) {
		std::deque<int64_t>::iterator	insert_position;
		insert_position = std::upper_bound(
			mainChain.begin(),
			mainChain.end(),
			unpaired
		);
		mainChain.insert(insert_position, unpaired);
	}

	deq.clear();
	deq = mainChain;
}

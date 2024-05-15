#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include "phonebook.h"

class Contact {
	public: // Called access specifier
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
};

class PhoneBook {
	private: // 
		Contact contact[8];
		int	size;
		int position;
	public:
		PhoneBook() : size(0), position(0) {}
		void add(std::string str[6])
		{
			if (size == 8) {
				// Adjust the Contacts
			} else {
				contact[position].first_name = str[1];
				contact[position].last_name = str[2];
				contact[position].nick_name = str[3];
				contact[position].phone_number = str[4];
				contact[position].darkest_secret = str[5];
			}
		}
};

#endif

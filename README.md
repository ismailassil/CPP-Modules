---
# C++ Modules - 42cursus

## Introduction

This repository contains the solutions and explanations for the **C++ Modules** as part of the **42cursus** at 42 school. The C++ Modules project introduces key C++ concepts and explores Object-Oriented Programming (OOP) using the C++98 standard.

The repository is organized into multiple modules, each focusing on specific C++ concepts, such as object-oriented programming, memory management, exceptions, and advanced features like templates and STL.

## Modules Overview

### 00 - **Namespaces, Classes, and Member Functions**
In this module, you'll learn the basics of C++ such as:
- Namespace, class, and member function definitions
- Constructors, destructors, and initialization lists
- Access specifiers (`private`, `protected`, `public`)
- Instances and member function calls

### 01 - **Memory Allocation, References, and Pointers**
Key concepts covered include:
- Stack vs. Heap memory
- References and pointers
- Dynamic memory allocation with `new` and `delete`
- Introduction to the Orthodox Canonical Form (OCF) with copy constructors and assignment operators

### 02 - **Ad-hoc Polymorphism, Operator Overloading, and the Orthodox Canonical Form**
This module covers:
- Operator overloading (e.g., `+`, `=`, `<<`)
- Ad-hoc polymorphism through function overloading
- Full understanding and implementation of the Orthodox Canonical Form

### 03 - **Inheritance and Polymorphism**
Main topics include:
- Inheritance in C++
- Virtual functions and the concept of polymorphism
- Abstract classes and pure virtual functions

### 04 - **Subtype Polymorphism, Abstract Classes, Interfaces**
In this module, you'll dive deeper into:
- Abstract base classes and interfaces
- Polymorphism via inheritance

### 05 - **Exceptions and Exception Handling**
This module introduces:
- Exception handling using `try`, `catch`, and `throw`
- Standard exception types in C++ (`std::exception`)
- Creating custom exception classes
- Best practices for exception-safe code

### 06 - **C++ Casts**
This module focuses on the different casting mechanisms in C++:
- `static_cast`
- `dynamic_cast`
- `const_cast`
- `reinterpret_cast`
- Safe usage of casts and their appropriate use cases

### 07 - **Templates**
Key topics include:
- Introduction to templates in C++
- Function templates
- Class templates
- Template specialization and instantiation

### 08 - **Templated containers, iterators, algorithms**
Key topics include:
- Iterators
- Algorithms (e.g., `find`, `sort`)
- Functors and function objects

### 09 - **The Standard Template Library (STL)**
This module introduces the powerful C++ Standard Template Library (STL):
- Containers (e.g., `vector`, `list`, `map`, `stack`, `deque`)
- Implementing the Merge-Insert Sort Algorithm

## Project Structure

Each module folder contains:
- `ex00/`, `ex01/`, etc.: Exercises for the module with source code and headers.
- `README.md`: Module-specific instructions and explanations.
- `Makefile`: To compile the project.
  
To compile and run the examples, navigate to the specific module and run:

```bash
make
./executable_name
```

## Requirements

- The project uses **C++98** standard, which means no modern C++11+ features are used.
- A compiler supporting the C++98 standard (e.g., `g++`, `clang++`).

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/ismailassil/CPP-Modules.git
   ```
2. Navigate to a specific module:
   ```bash
   cd CPP-Modules/module_00
   ```
3. Compile and run:
   ```bash
   make
   ./executable_name
   ```

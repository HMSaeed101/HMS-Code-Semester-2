# Semester 2 - OOP Programming Coursework

## Overview

This repository contains comprehensive coursework from **Semester 2** at the University of Engineering and Technology (UET), covering fundamental programming concepts with a focus on **Object-Oriented Programming (OOP)** and **Memory Management** in C++.

---

## 📁 Directory Structure

```
Semester # 2/
├── Memory/
│   ├── Practice/        # Foundational memory concepts
│   └── Tasks/           # Memory management assignments
│
└── OOP/
    ├── OOP Assign/      # Object-Oriented Programming assignments (5 assignments)
    ├── OOP Lab Tasks/   # Laboratory practical work (6 lab manuals)
    └── Practice Questions/  # Practice questions and system implementations
```

---

## 📚 Detailed Content

### 1. **Memory Management** (`Memory/`)

#### Practice (`Memory/Practice/`)
Fundamental exercises covering:
- **Pointer basics and memory allocation**
- Dynamic memory management with `new` and `delete`
- Stack vs. Heap memory concepts
- Address and value operations

**Key Topics:**
- Pointer declaration and initialization
- Heap memory allocation/deallocation
- Memory leak prevention

#### Tasks (`Memory/Tasks/`)
Applied memory management problems with working solutions.

---

### 2. **Object-Oriented Programming** (`OOP/`)

#### OOP Assignments (`OOP/OOP Assign/`)

**5 Complete Assignments** demonstrating progressive OOP mastery:

- **Assignment #1** - Class fundamentals
  - Basic class structure
  - Data members and member functions
  - Encapsulation principles

- **Assignment #2** - Constructors and initialization
  - Default constructors
  - Parameterized constructors
  - Object initialization patterns

- **Assignment #3** - Advanced class design
  - Static members
  - Const functions
  - Class method implementation

- **Assignment #4** - Operator overloading & advanced features
  - Custom operators
  - Assignment operators
  - Comparison operators

- **Assignment #5** - Complex systems
  - Multi-class applications
  - Data persistence
  - Real-world system modeling

#### OOP Lab Tasks (`OOP/OOP Lab Tasks/`)

**6 Lab Manuals** with practical implementations:

- **Lab Manual #1** - Introduction to classes and objects
- **Lab Manual #2-3** - Banking system concepts
  - Account management
  - Deposit/Withdrawal operations
  - Balance tracking

- **Lab Manual #4** - Advanced OOP concepts
- **Lab Manual #5** - System design patterns
- **Lab Manual #6** - Capstone projects

#### Practice Questions (`OOP/Practice Questions/`)

- `Bank_sys.cpp` - Banking system with accounts and transactions
- `Emp_sys.cpp` - Employee management system
- `Uni_sys.cpp` - University management system
- `Lib_sys.cpp` - Library management system
- `Transport_sys.cpp` - Transportation system
- `Constructors.cpp` - Constructor patterns and concepts
- `Inheritance.cpp` - Single inheritance examples
- `multilevel_inheritance.cpp` - Multi-level inheritance hierarchies
- `multiple_inheritance.cpp` - Multiple inheritance scenarios
- `friend_func.cpp` - Friend functions and encapsulation
- `Member_func.cpp` - Member function implementation
- `queue.cpp` - Queue data structure implementation

---

## 🛠️ Compilation & Execution

### Prerequisites
- **Compiler:** GCC (MinGW on Windows)
- **C++ Standard:** C++17 or higher
- **Build Tools:** g++

### Compilation

**Single File:**
```bash
g++ -std=c++17 -Wall -Wextra -g filename.cpp -o filename.exe

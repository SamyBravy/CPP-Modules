# C++ Core Curriculum

[![Language](https://img.shields.io/badge/Language-C++98-00599C.svg)](https://isocpp.org/)
[![Build](https://img.shields.io/badge/Build-Makefile-brightgreen.svg)]()

## Abstract

This repository contains a comprehensive collection of C++ implementations developed strictly adhering to the **C++98 standard**. The project consists of 10 modules (00-09), designed to provide a deep dive into **Object-Oriented Programming (OOP)** mechanics.

The primary goal is to master manual memory management and internal language mechanisms before relying on modern C++ abstractions. Key focus areas include the Orthodox Canonical Form, template metaprogramming, and rebuilding STL containers to understand algorithmic complexity.

## Technical Overview

Each module addresses specific concepts, with increasing complexity:

| Module | Topic | Key Concepts Learned |
|:---:|:---|:---|
| **00** | **Namespaces & Classes** | Basic OOP, streams, initialization lists, `static`, `const`, encapsulation. |
| **01** | **Memory Allocation** | `new`/`delete`, references vs pointers, file streams. |
| **02** | **Ad-hoc Polymorphism** | Introduction to **Orthodox Canonical Form**, operator overloading, fixed-point arithmetic. |
| **03** | **Inheritance** | Single/Multiple inheritance, diamond problem, scoping, shadow members. |
| **04** | **Subtype Polymorphism** | Virtual functions, vtables, pure abstract classes (interfaces), deep copying objects. |
| **05** | **Exceptions** | Try/catch blocks, custom exception classes, nested classes. |
| **06** | **C++ Casts** | `static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`, serialization. |
| **07** | **Templates** | Function templates, class templates, generic programming. |
| **08** | **STL Algorithms** | Iterators, standard containers (`vector`, `list`, `map`), generic algorithms. |
| **09** | **STL & Containers** | Advanced usage of STL (Bitcoin Exchange, RPN Calculator, Merge-Insert Sort). |

## Installation & Usage

The project is designed to run on **Linux/Unix** systems. Each module contains separate exercises with their own `Makefile`.

### Prerequisites
- `g++` or `clang++` compiler.
- `make`.

### Compiling a Module
Navigate to the specific module and exercise directory, then run `make`.

Example for Module 08, Exercise 01:
```bash
cd CPP-Module-08/ex01
make
./span
```

To clean up compiled files:
```bash
make fclean
```

## Implementation Details

### Strict Compliance
All code follows strict compliance rules to ensure robustness:
- **No Memory Leaks:** Heap memory is manually managed and freed.
- **Orthodox Canonical Form:** Starting from Module 02, all classes explicitly define the default constructor, copy constructor, copy assignment operator, and destructor.
- **Error Handling:** Robust protection against invalid inputs and undefined behaviors.

### Highlights
- **Module 09 (Containers):** Implementation of the Ford-Johnson algorithm (Merge-Insert Sort) to efficiently sort large datasets.
- **Module 04 (Polymorphism):** Deep exploration of dynamic dispatch through abstract base classes.
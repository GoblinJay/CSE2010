/*
C++ Basic Input & Output

The iostream library provides us with basic input and output.
The statements used are cin for input and cout for output, usually accompanied by the stream insertion (<<) and extraction (>>) operators.
C++ Variables (int, double, char, string)

int is used for whole numbers, double for floating-point numbers, char for single characters, and string for sequences of characters.
You declare variables with the syntax datatype variableName;, e.g., int age;.
Restrictions include not using reserved keywords, beginning the variable name with a letter or underscore, and ensuring names are unique within the same scope.
Control Flow

if-else, while, for, do-while are conditional and looping constructs to control the flow of execution.
Nested loops are loops inside other loops.
Relational operators include ==, !=, <, >, <=, >=.
Boolean operators include && (AND), || (OR), and ! (NOT).
Boolean Expressions evaluate to true or false.
Functions

A function is defined using the syntax:
returnType functionName(parameterList) {
    // body of the function
}
You call a function using the syntax functionName(argumentList);.
A procedure is a function that does not return a value (often called a void function), while a function returns a value.
Pass by Value makes a copy of the argument's value, whereas Pass by Reference allows the function to modify the argument's actual value. Use references when you need to change the input data or for passing large objects efficiently.
Classes

A class is a blueprint for creating objects.
Objects are instances of classes.
The relationship between classes and objects is that an object is an instantiation of a class.
Private, Public, and Protected access modifiers control access to a class's members.
Constructors and destructors are special member functions for initializing and cleaning up objects, respectively.
Arrays & Vectors

An array is a fixed-size, statically allocated sequence of elements.
A vector is a dynamic-size, dynamically allocated sequence of elements provided by the STL (Standard Template Library).
Differences include sizing (fixed for arrays, dynamic for vectors); vectors have member functions, arrays do not; similarities include element access via index.
Search Algorithms

Linear search checks each element sequentially.
Binary search divides the search interval in half repeatedly.
Binary search is more efficient with a time complexity of O(log n), compared to linear search's O(n).
Pointers

A pointer is a variable that holds the memory address of another variable.
You declare a pointer with an asterisk, e.g., int* ptr;.
Memory is allocated in the heap with new and deallocated with delete.
Dynamic arrays can be declared with pointers like int* myArray = new int[arraySize];.
Inheritance & Polymorphism

Inheritance is a mechanism where a class can derive properties and characteristics from another class.
Polymorphism allows objects of different classes to be treated as objects of a common super class.
A collection of base and derived objects can be stored using pointers or references to the base class type.
Reading/Writing to files with Streams

Console streams are for reading from or writing to the console (cin, cout).
File streams are for reading from or writing to files (ifstream for reading files, ofstream for writing files).
Use >> and << operators with file streams to read and write.
Recursion

Recursion is a method where a function calls itself.
Every recursive function needs a base case to end the recursion and a general case to continue the recursion.
Example recursive functions: Fibonacci numbers, computing GCD, checking palindromes, implementing quicksort, mergesort, and binary search.
Templates

Templates in C++ allow generic programming by parameterizing types in functions and classes.
Function templates parameterize the function type.
Class templates parameterize the class type.
A class template is implemented like this:
template <typename T>
class MyClass {
public:
    T member;
    void myMethod(T param) {
        // implementation
    }
};
*/
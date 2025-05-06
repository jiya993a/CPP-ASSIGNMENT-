// BTCS202M : ASSIGNMENT 1 (THEORY)

// 1.What is the fundamental  difference  between  procedural and object-oriented programming paradigms? Provides a brief examples to illustrate.
// ANS – The differences between procedural and object-oriented programming paradigms are:-
// •	 Procedual Programming:
// •	Focuses on functions and procedures to operate on data.Code is organized as  a sequence of instructions (procedures).
// •	Data and functions are separate.
// Example :

// #include <stdio.h>

// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     int result = add(5, 3);
//     printf("Result: %d\n", result);
//     return 0;
// }

//  Object-Oriented Programming:
// •	Focuses on objects that encapsulate both data and behavior.
// •	Code is organized around classes and objects.
// •	Promotes encapsulation, inheritance, and polymorphism.
// Example :-
//  class Calculator:
//     def add(self, a, b):
//         return a + b

// calc = Calculator()
// result = calc.add(5, 3)
// print("Result:", result)

// 2. Define Object-Oriented Programming (OOP). What are its core characteristics?
// ANS Object-Oriented Programming (OOP) is a programming paradigm based on the concept of "objects", which are instances of classes. Objects contain both data (attributes or properties) and methods (functions or behaviors) that operate on the data. OOP helps structure software in a way that's modular, reusable, and easier to maintain.
// Core Characteristics of Object-Oriented Programming:
// 1.	Encapsulation 
// o	Hides the internal state of objects and only exposes functionality via public methods.
// o	Helps protect data from unintended interference and misuse.
// 2.	Abstraction
// o	Focuses on exposing only essential features while hiding complex implementation details.
// o	Allows developers to interact with objects through a simple interface.
// 3.	Inheritance
// o	Enables a class (child or subclass) to inherit properties and behaviors from another class (parent or superclass).
// o	Promotes code reusability and hierarchical classification.
// 4.	Polymorphism
// o	Allows objects of different classes to be treated as objects of a common superclass.
// o	Enables the same operation to behave differently on different classes (e.g., method overriding.
//       3. Explain the concept of "abstraction" within the context of OOP. Why is it important? Abstraction in Object-Oriented Programming (OOP)
// Abstraction is the concept of hiding complex internal implementation details and showing only the essential features of an object to the outside world.
//  Examples : Abstract classes and interfaces (in languages like Java, C#, etc.)
// Access modifiers (like private, protected, public) that control visibilities.
// Example:
// Consider a Car class:
// abstract class Car {
//     abstract void start();
//     abstract void accelerate();
//     abstract void brake();
// }
// A subclass like ElectricCar or GasolineCar provides specific implementations but the interface remains the same. 
// 4 .What are the benefits of using OOP over procedural programming?
// ANS - *Modularity: Code is organized into discrete objects and classes.
// *Reusability: Classes can be reused in different programs using inheritance or composition.
// *Maintainability: Easier to update and manage due to encapsulated code.
// *Scalability: Better suited for large and complex systems.
// *Abstraction: Helps manage complexity by exposing only essential details.
// *Encapsulation: Protects data by restricting direct access to it.

// 5. Give a real-world example of a problem that is well-suited to be solved using an OOP approach. Explain why.

// Example: Online Shopping System :-
// Objects: Customer, Product, ShoppingCart, Order, Payment.
// Each entity has attributes (e.g., Product: name, price) and behaviors (e.g., addToCart()).
// Inheritance can be used (e.g., Admin and Customer inherit from User)
// Polymorphism allows different payment methods (CreditCard, PayPal) to use a common interface.
// Encapsulation secures customer
// 6.Define the four key principles of OOP: Encapsulation, Inheritance, Polymorphism, and Abstraction.
// Here are the four key principles of Object-Oriented Programming (OOP) defined clearly:
// 1. Encapsulation
// Encapsulation is the process of bundling data (variables) and the methods (functions) that operate on that data into a single unit, typically a class.
// It also involves restricting direct access to some of the object’s components to protect the internal state.

// Example:
// class Person {
//     private String name;  // private = encapsulated
//     public void setName(String newName) {
//         name = newName;
//     }
//     public String getName() {
//         return name;
//     }
// }
// 2. Inheritance
// Inheritance allows a class (child/subclass) to inherit properties and behavior (fields and methods) from another class (parent/superclass).
// It promotes code reuse and supports hierarchical classification.
// Example:
// class Animal {
//     void makeSound() 
//  System.out.println("Animal sound");
//     }
// }
// class Dog extends Animal {
//     void makeSound() {
//         System.out.println("Bark");
//     }
// }
// 3. Polymorphism
// Polymorphism means "many forms". It allows methods to have the same name but behave differently depending on the object calling them.
// There are two types:
// *Compile-time (method overloading
// *Runtime (method overriding)
// Example (overriding):
// Animal a = new Dog();
// a.makeSound();  // Output: Bark

// 4. Abstraction
// Abstraction means showing only essential features and hiding the unnecessary details from the user.
// It helps in reducing complexity and increasing efficiency.
// Example: abstract class Vehicle {
//   abstract void start();
// }
// class Car extends Vehicle {
//     void start() {
//         System.out.println("Car starts with key")
// 7. Explain how encapsulation helps to protect data and create modular code .Give an examples using class and its member.    
// ANS-Encapsulation is an object-oriented programming principle that helps protect data and create modular, maintainable code by bundling data (variables) and methods (functions) that operate on that data into a single unit, usually a class. It also restricts direct access to some of the object's components, which helps prevent accidental interference and misuse.

// Benefits of Encapsulation:
// 1. Data Protection: Sensitive data is hidden from outside access using access modifiers (e.g., private), allowing control over how data is accessed or modified.
// 2. Modular Code: Each class acts as a self-contained unit. This modularity makes code easier to understand, debug, and reuse.
// 3. Maintenance and Flexibility: You can change internal implementation without affecting other parts of the program that use the class.

// Example Using Class and x Member:
// class MyClass:
//     def _init_(self, x):
//         self._x = x  # Private variable (name mangled to _MyClass_x)

//     def get_x(self):
//         return self.__x  # Public getter method

//     def set_x(self, value):
//         if value >= 0:           # Validation logic
//             self.__x = value
//         else:
//             print("Invalid value. x must be non-negative.")

// # Usage
// obj = MyClass(10)
// print(obj.get_x())   # Output: 10

// obj.set_x(20)
// print(obj.get_x())   # Output: 20

// obj.set_x(-5)        # Output: Invalid value. x must be non-negative.

// 8. What is inherentance ? How does its promotes codes reuse and maintainability? Provides a simples examples using class and its members. 
// ANS -Inheritance is an object-oriented programming concept where one class (called a child or subclass) inherits properties and behaviors (fields and methods) from another class (called a parent or superclass). It allows for creating a hierarchy of classes that share common functionality.

// How Inheritance Promotes Code Reuse and Maintainability:
// 1.	Code Reuse: Common code is written once in the parent class and reused in child classes and data redundancy.                                                               2.Maintainability: Changes in the parent class automatically propagate to all child classes, making updates easier and reducing bugs.
// 3. Extensibility: New features can be added to child classes without modifying the existing parent class.
// Simple Example in Python:

// # Parent class
// class Animal:
//     def _init_(self, name):
//         self.name = name
//     def speak(self):
//         return f"{self.name} makes a sound"
// # Child class inheriting from Animal
// class Dog(Animal):
//     def speak(self):
//         return f"{self.name} barks"
// # Usage
// generic_animal = Animal("Generic Animal")
// dog = Dog("Buddy")
// print(generic_animal.speak())  # Output: Generic Animal makes a sound
// print(dog.speak())             # Output: Buddy barks 
 
// 9.Describe polymorphism .How does it contributes to flexibility and extensibility in software design? Give examples of function/ operator overloading and function overriding.
// ANS-Polymorphism is an object-oriented programming (OOP) principle that allows entities like functions or objects to take on many forms. It enables a single interface to be used with different types of data or objects, making software more flexible, extensible, and maintainable.

// 1. Flexibility: You can write code that works on the superclass and automatically handles any subclass object.
// 2. Extensibility: You can introduce new classes with different behaviors without changing existing code.
// 3. Code Simplification: Promotes use of general-purpose interfaces rather than hardcoded types.
// Types of Polymorphism:

// 1. Function Overloading (Compile-Time Polymorphism): Same function name but different signatures (number/type of arguments).
// 2. Function Overriding (Run-Time Polymorphism): A subclass provides a specific implementation of a method defined in the parent class.

// Examples in Python:
// Function Overloading:
// class MathOps:
//     def add(self, a, b=0, c=0):
//         return a + b + c
// m = MathOps()
// print(m.add(5))        # Output: 5
// print(m.add(5, 10))    # Output: 15
// print(m.add(5, 10, 20))# Output: 35

// Function Overriding
// class Animal:
//     def make_sound(self):
//         return "Some sound"
// class Cat(Animal):
//     def make_sound(self):
//         return "Meow"

// class Dog(Animal):
//     def make_sound(self):
//         return "Bark"
// # Using polymorphism
// def animal_sound(animal):
//     print(animal.make_sound())
// a = Cat()
// b = Dog()
// animal_sound(a)  # Output: Meow
// animal_sound(b)  # Output: Bark

// 10. Explain differences between “overloading” and “overriding”.
 
// ANS-Overloading and Overriding are two key concepts in object-oriented programming that relate to polymorphism but work differently. Overloading allows a class to have more than one method with the same name but different parameter lists. This is a form of compile-time polymorphism, meaning the method to be called is determined at compile time. For example, a class can have multiple add methods: add(int a, int b) and add(int a, int b, int c), each performing addition on a different number of parameters.

// Example of Overloading:
// class Calculator {
//     int add(int a, int b) {
//         return a + b;
//     }
//     int add(int a, int b, int c) {
//         return a + b + c;
//     }
// }
// In  Overriding is a form of run-time polymorphism where a subclass provides a specific implementation of a method already defined in its superclass. This allows the subclass to modify or completely change the behavior of the inherited method. Overriding requires the method name, return type, and parameter list to be exactly the same as in the parent class.

// Example of Overriding:
// class Animal {   
//  void sound() {
//         System.out.println("Animal makes a sound");
//     }
// }
// class Dog extends Animal {
//     void sound() {
//         System.out.println("Dog barks");
//     }
// }

// 11. List at least 3 advantage of using OOP in Software development .

// ANS-  	The three key advantages of using Object-Oriented Programming (OOP) in software development:
// 1. Modularity: OOP organizes code into classes and objects, making it easier to divide and manage different parts of a program independently. This improves code readability and reusability.
// 2. Code Reusability: Through inheritance, OOP allows new classes to reuse existing code from parent classes, reducing redundancy and speeding up development.
// 3. Maintainability and Scalability: Encapsulation and abstraction help isolate changes, so developers can update or scale specific parts of a program without affecting the entire system.

// 12. Give examples of applications domain where OOP is Commonly used (eg GUI, development,game programming etc.)
// ANS-Object-Oriented Programming (OOP) is widely used in various application domains due to its modularity and scalability. Here are some common domains:
// 1. GUI Development: Frameworks like Java Swing, JavaFX, and .NET use OOP to model windows, buttons, and events as objects.
// 2. Game Development: Game engines like Unity (C#) and Unreal (C++) use OOP to model characters, environments, and interactions.


// 3.Web Application Development: Backend frameworks like Django (Python), Ruby on Rails, and Spring (Java) are built around OOP concepts to manage data models and services.

// 13.Discuss the impact of OOP on code maintainability and reusability.
// ANS-Object-Oriented Programming (OOP) significantly improves code maintainability and reusability, making software development more efficient and scalable.
// Impact on Code Maintainability:
// 1. Encapsulation: By bundling data and methods within classes and restricting direct access to internal states, OOP makes it easier to update or fix parts of a program without affecting other components.
// 2. Modular Design: Classes can be developed and tested independently. This makes debugging and upgrading specific modules easier.
// 3. Inheritance: When a change is made in a parent class, it automatically reflects in all child classes, reducing the need to duplicate fixes or updates across the codebase.
// Impact on Code Reusability:
// 1. Inheritance: Common behavior can be defined once in a base class and reused across multiple derived classes.
// 2. Polymorphism: Allows methods and interfaces to work with different types of objects, enabling code to be written in a general and reusable way.
// 3. Abstraction: Encourages defining clear and reusable interfaces while hiding internal complexity.
// Example:
// In a banking system, you might define a base class Account with methods like deposit() and withdraw(). Then you can create subclasses like SavingsAccount or CheckingAccount that reuse and extend the baseunctionality. If the transaction logic changes, you only need to update the Account class, not every individual subclass.

// 14.How does OOP contributes to the development  of large and complex software system?
// ANS-Object-Oriented Programming (OOP) plays a crucial role in the development of large and complex software systems by offering structure, modularity, and scalability. Here's how:
// 1. Modular Design
// OOP divides a system into independent classes and objects, each responsible for a specific functionality. This modularity allows teams to develop, test, and maintain different parts of the system in parallel without conflict.
// 2. Code Reusability
// Through inheritance, common logic can be shared across multiple components. Developers can reuse existing code for similar tasks, reducing duplication and speeding up development.
// 3. Scalability
// OOP supports extensible architecture. New features or components can be added by creating new classes or extending existing ones, without rewriting the entire system.
// 4. Maintainability
// Encapsulation ensures that internal implementation details are hidden, exposing only necessary parts through public methods. This makes it easier to update or debug specific parts without affecting others.
// 5. Team Collaboration
// OOP’s clear class-based structure allows large teams to work simultaneously on different parts of a project (e.g., one team handles the UI, another handles business logic), improving coordination and productivity.
// 6. Real-World Modeling
// OOP naturally maps to real-world entities, which makes it easier to understand, design, and document complex systems.
// Example Scenario:
// In a hospital management system, you might have classes like Patient, Doctor, Appointment, and billing etc.

// 16. Describes the basic structure of C++ program.What are the essential component?
// ANS-The basic structure of a C++ program consists of several essential components that work together to create a functional application. Here's a breakdown of the initial and fundamental parts.

// 1. Preprocessor Directives
// These are instructions that begin with # and are processed before compilation. The most common is:
// #include <iostream> // Includes the input/output stream library 
// 2. Namespace Declaration
// C++ uses namespaces to avoid name conflicts. The standard namespace is often declared as:
// using namespace std;
// 3. Main Function
// This is the entry point of any C++ program. Execution starts from here:
// Int main() {
//     // Code goes here
//     return 0;
// }
// 4. Statements and Expressions
// Inside the main() function or other functions, you write statements to perform operations:
// cout << "Hello, World!" << endl;
// 5. Comments
// Comments help describe the code and are ignored by the compiler:
// // This is a single-line comment
//    a multi-line comment *
// Complete Example of a Basic C++ Program:
// #include <iostream>         // Preprocessor directive
// using namespace std;        // Namespace declaration
// int main() {                // Main function
//     cout << "Hello, World!"; // Statement
//     return 0;               // Return type
// }

// 17.Explain the purpose of namespace in C++.How do they help to avoid naming conflicts?
// ANS-In C++, a namespace is used to organize code and prevent naming conflicts, especially in large projects or when using multiple libraries.

// Purpose of Namespace in C++:
// 1. Avoid Naming Conflicts: Namespaces allow multiple identifiers (like variables, functions, or classes) with the same name to coexist, as long as they are in different namespaces.
// 2. Code Organization: They help group logically related code, making it easier to manage and understand.
// 3. Modularity: Namespaces support modular programming by keeping code components separate and distinct.

// namespace LibraryA {
//     void print() {
//         cout << "Library A print function" << endl;
//     }
// }
// namespace LibraryB {
//     void print() {
//         cout << "Library B print function" << endl;
//     }
// }
// Now in main(), you can specify which version to use:

// int main() {
//     LibraryA::print(); // Calls Library A's print
//     LibraryB::print(); // Calls Library B's print
//     return 0;
// }

// Standard Namespace (std)
// C++ Standard Library components (like cout, cin, string) are in the std namespace:
// #include <iostream>
// using namespace std; // Avoids writing std::cout
// int main() {
//     cout << "Hello, World!";
//     return 0;
// }
// std::cout << "Hello, World!";
 
// 18.What are the identifers in C++? What  rules must be followed when creating them?
// ANS- An identifier is the name used to identify variables, functions, arrays, classes, objects, and other user-defined elements. Identifiers are essential in giving meaningful names to components in a program.

// Rules for Creating Identifiers in C++:
// 1. Only letters, digits, and underscores (_) are allowed.
// Valid: total, my_variable1, count_2
// Invalid: my-variable (contains a hyphen), 2ndValue (starts with a digit)
// 2. Must begin with a letter (A–Z or a–z) or an underscore (_).
// Valid: _value, Age
// Invalid: 9name, @value
// 3. Cannot be a C++ keyword or reserved word.
// Invalid: int, return, class, while, etc.
// 4. Case-sensitive.
// Value, value, and VALUE are treated as different identifiers.
// 5. Should be descriptive (good practice).
// Prefer studentScore over s for readability.

// Examples of Valid Identifiers,
// int score;
// float total_marks;
// void displayResult();
// class Student;
// Examples of Invalid Identifiers:
// int 2value;     // Starts with a digit
// float my-mark;  // Contains invalid character '-'
// string class;   // Uses a reserved keyword

// 19.What are the differences between variable and Constants in C++? How are they declared?
// ANS-
// Aspect	Variable	Constant
// Definition	A named storage that holds data that can change	A named value that cannot be changed after initialization
// Mutability	Mutable (value can change)	Immutable (value cannot change)
// Declaration Keyword	No special keyword (just data type)	Uses const keyword
// Example Declaration	int age = 25;	const int MAX_AGE = 100;
// Value Change Allowed?	Yes	No
// Use Case	Storing user inputs, temporary data, etc.	Defining fixed values like π, limits, etc

// In C++, variables and constants are both used to store data, but they differ significantly in behavior and purpose.

// How to Declare Them in C++
// Variable Declaration:
// int age = 25;
// float temperature = 36.5;
// age = 30;
// temperature = 37.0;

// Constant Declaration:
// const int maxScore = 100;
// const float pi = 3.14;
// maxScore = 120; // Error: cannot modify a constant

// 20.Explain how to use control structures (eg-if- else ,for, while)to control the flow of execution in C++programs. Provides a simples code examples.
// ANS-In C++, control structures like if-else, for, and while are used to control the flow of execution in a program based on conditions or repetition.
// 1. if-else Statement :
// Used to execute code based on whether a condition is true or false.
// int number = 10;
// if (number > 0) {
//     cout << "Positive number";
// } else {
//     cout << "Non-positive number";
// }
// 2. for Loop:-
// Used when the number of iterations is known.
// for (int i = 1; i <= 5; i++) {
//     cout << "Count: " << i << endl;
// }
// 3. while Loop:
// Used when the number of iterations is not known beforehand.
// int i = 1;
// while (i <= 5) {
//     cout << "Number: " << i << endl;
//     i++;
// }

// Combined Example:
// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     // if-else
//     if (num % 2 == 0) {
//         cout << "Even number" << endl;
//     } else {
//         cout << "Odd number" << endl;
//     }
//     // for loop
//     cout << "Multiplication Table of " << num << ":" << endl;
//     for (int i = 1; i <= 5; i++) {
//         cout << num << " x " << i << " = " << num * i << endl;
//     }
//     // while loop
//     int count = 5;
//     cout << "Counting down:" << endl;
//     while (count > 0) {
//         cout << count << " ";
//         count--;
//     }
//     return 0;
// }
//     virtual void show() {
//         cout << "Base class RK" << endl;
//     }
//     virtual ~hierarchy () {}
// };
// // Derived class
// class Derived : public hierarchy {
// public:
//     void show() override {
//         cout << "Derived class" << endl;
//     }
//     void derivedFunction() {
//         cout << "Specific function in Derived class" << endl;
//     }
// };
// int main() {
//     class hierarchy * basePtr = new Derived();  // Upcasting (safe)
//     // Downcasting using dynamic_cast
//     Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
//     if (derivedPtr) {
//         cout << "Downcasting successful!" << endl;
//         derivedPtr->show();
//         derivedPtr->derivedFunction();
//     } else {
//         cout << "Downcasting failed." << endl;
//     }
//     return 0;
// }

// Explanation:

// Class hierarchy is the base class (with a virtual function to enable polymorphism).
// dynamic_cast<Derived*>(basePtr) safely tries to cast the base pointer to a Derived*.
 
// ASSIGNMENT  -2
//     1.What is the purpose of the main function in a C++ program?
// The main function is the entry point of every C++ program. When the program is executed, execution begins from the main function. It serves as the starting place where instructions are first carried out. All other functions are called from within main (directly or indirectly), making it essential in defining the overall flow of the program.
// 2. Explain the significance of the return type of the main function
// The return type of the main function is typically int, which means it returns an integer value to the operating system after the program completes execution.
// Significance:
// •	Returning 0 usually means the program ended successfully.
// •	Returning a non-zero value often indicates an error or abnormal termination.
// •	It helps in process control and is used by the operating system or other programs/scripts to check the status of the program's execution.
// 3. What are the two valid signatures of the main function in C++?
// In C++, the two valid signatures (forms) of the main function are:
// cpp
// CopyEdit
// int main()  // No command-line arguments
// and
// cpp
// CopyEdit
// int main(int argc, char* argv[])  // With command-line arguments
// •	argc is the argument count (number of command-line arguments).
// •	argv is an array of character pointers (the actual arguments).

// 4. What is function prototyping and why is it necessary in C++?
// Function prototyping is the declaration of a function before its actual definition, specifying its return type, name, and parameter types.
// Why it's necessary:
// •	It allows the compiler to check function calls for correctness (type and number of arguments).
// •	It enables calling a function before it is defined, which is crucial in multi-file programs or when function definitions appear later in the code.
// Example:
// cpp
// CopyEdit
// int add(int, int);  // Function prototype

// int main() {
//     int result = add(3, 4);  // Safe to use add here
//     return 0;
// }

// int add(int a, int b) {
//     return a + b;
// }

// 5. How do you declare a function prototype for a function that returns an integer and takes two integer parameters?
// You declare it like this:
// cpp
// CopyEdit
// int functionName(int, int);
// Example:
// cpp
//  What is the difference between a declaration and a definition of a function?
// •	Function Declaration (Prototype):
// o	Tells the compiler what the function looks like (its return type, name, and parameters).
// o	Does not include the function body.
// o	Ends with a semicolon.
// o	Example:
// cpp
// CopyEdit
// void greet();  // Declaration
// •	Function Definition:
// o	Provides the actual body of the function (implementation).
// o	Contains the code that gets executed when the function is called.
// o	Example:
// cpp
// CopyEdit
// void greet() {
//     cout << "Hello!";
// }  // Definition

// 8. How do you call a simple function that takes no parameters and returns void?
// You call it using its name followed by empty parentheses:
// cpp
// CopyEdit
// void greet();  // Declaration

// int main() {
//     greet();  // Function call
//     return 0;
// }

// void greet() {
//     cout << "Hello!";
// }

// 9. Explain the concept of "scope" in the context of functions.
// Scope refers to the visibility and lifetime of variables and functions—i.e., where in the program they can be accessed.
// •	Global scope: Variables/functions declared outside of all functions. Accessible from anywhere in the file.
// •	Local scope: Variables declared inside a function. They only exist within that function.
// •	Function scope: Functions themselves have scope; once defined, they are globally accessible (unless declared static or inside a class).
// Example:
// cpp
// CopyEdit
// int x = 10;  // Global variable

// void show() {
//     int y = 5;  // Local variable
//     cout << x + y;
// }

// 10. What is call by reference in C++?
// Call by reference means passing the reference (alias) of a variable to a function, so changes made to the parameter affect the original variable.
// Syntax:
// cpp
// CopyEdit
// void modify(int &num) {
//     num = num + 5;  // Modifies the original variable
// }

// int main() {
//     int x = 10;
//     modify(x);
//     cout << x;  // Outputs 15
// }

// int sum(int, int);

// 11. How does call by reference differ from call by value?
// •	Call by Value:
// A copy of the variable is passed to the function. Changes made inside the function do not affect the original variable.
// •	Call by Reference:
// The actual variable is passed using a reference (&). Changes made inside the function directly affect the original variable.

// 12. Provide an example of a function that uses call by reference to swap two integers.
// cpp
// CopyEdit
// #include <iostream>
// using namespace std;

// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int x = 5, y = 10;
//     swap(x, y);
//     cout << "x = " << x << ", y = " << y;
//     return 0;
// }

// 13. What is an inline function in C++?
// An inline function is a function where the compiler replaces the function call with the actual code of the function at compile time, to eliminate the overhead of a function call.

// 14. How do inline functions improve performance?
// They improve performance by:
// •	Avoiding function call overhead (no jump to a separate location in memory).
// •	Speeding up execution for small, frequently called functions.
// However, they can increase the size of the binary if overused (known as code bloat).

// 15. Explain the syntax for declaring an inline function.
// You use the inline keyword before the function definition:
// cpp
// CopyEdit
// inline int square(int x) {
//     return x * x;
// }
// 16. . What are macros in C++ and how are they different from inline functions?
// Macros are defined using the #define directive and are handled by the preprocessor (before compilation). They perform text substitution.
// Differences:
// Feature	Macros	Inline Functions
// Handled by	Preprocessor	Compiler
// Type checking	No	Yes
// Debugging	Difficult	Easier
// Scope awareness	No (global)	Yes
// Safer to use	❌	✅
// Example of macro:
// cpp
// CopyEdit
// #define SQUARE(x) ((x) * (x))
// ]
// 17. Advantages and Disadvantages of Using Macros over Inline Functions
// Advantages:
// •	Macros can be used for simple constants and small code blocks.
// •	Slightly faster for very small operations, in rare cases.
// Disadvantages:
// •	No type safety or error checking.Conclusion: Inline functions are generally safer and more reliable than macros.
// macros and inline functions.
// cpp
// CopyEdit
// #include <iostream>
// using namespace std;

// #define SQUARE_MACRO(x) ((x) * (x))  // Macro

// inline int square_inline(int x) {    // Inline function
//     return x * x;
// }

// int main() {
//     int a = 5;
//     int b = SQUARE_MACRO(a + 1);     // Expands to ((a + 1) * (a + 1)) = (5 + 1 * 5 + 1) = wrong!
//     int c = square_inline(a + 1);    // Correct: (6 * 6) = 36

//     cout << "Macro result: " << b << endl;
//     cout << "Inline result: " << c << endl;

//     return 0;
// }
// Output:
// yaml
// CopyEdit
// Macro result: 11   (Incorrect due to no parentheses in evaluation)
// Inline result: 36  (Correct)
// Conclusion: Macros perform raw text substitution, which can cause unexpected results. Inline functions are safer due to type checking and proper evaluation.

// 19. What is function overloading in C++?
// Function overloading is when multiple functions have the same name but different parameters (number or type). The compiler chooses the right one based on how it's called.

// 20. How does the compiler differentiate between overloaded functions?
// The compiler uses the function signature: the number and type of parameters. The return type is not considered in overload resolution.

// 21. Provide an example of overloaded functions in C++.
// cpp
// CopyEdit
// #include <iostream>
// using namespace std;

// void print(int i) {
//     cout << "Integer: " << i << endl;
// }

// void print(double d) {
//     cout << "Double: " << d << endl;
// }

// void print(string s) {
//     cout << "String: " << s << endl;
// }

// int main() {
//     print(5);         // Calls print(int)
//     print(3.14);      // Calls print(double)
//     print("Hello");   // Calls print(string)
//     return 0;
// }

// 22. What are default arguments in C++?
// Default arguments are values assigned to function parameters in the declaration. If the caller omits some arguments, the default values are used.

// 23. How do you specify default arguments in a function declaration?
// Default arguments are added in the function declaration, not necessarily the definition.
// cpp
// CopyEdit
// void greet(string name = "Guest");
// Then in the definition:
// cpp
// CopyEdit
// void greet(string name) {
//     cout << "Hello, " << name << "!" << endl;
// }

// 24. What are the rules for using default arguments in functions?
// 1.	Once a default argument is provided, all arguments to the right must also have defaults.
// cpp
// CopyEdit
// void example(int a = 10, int b = 20);  // ✅ Valid
// void wrong(int a = 10, int b);         // ❌ Invalid
// 2.	Default arguments should be specified in either the declaration or the definition, not both.
// 3.	They are evaluated at the point of the call, not at the declaration.
// 25. Provide an example of a function with default arguments.
// ✅ Example: Function with Default Arguments
// cpp
// CopyEdit
// #include <iostream>
// using namespace std;

// // Function declaration with default arguments
// void greet(string name = "Guest", int times = 1);

// int main() {
//     greet();                // Uses both default values
//     greet("Alice");         // Uses default for 'times'
//     greet("Bob", 3);        // No defaults used

//     return 0;
// }

// // Function definition
// void greet(string name, int times) {
//     for (int i = 0; i < times; ++i) {
//         cout << "Hello, " << name << "!" << endl;
//     }
// }

// 🔍 Output:
// CopyEdit
// Hello, Guest!
// Hello, Alice!
// Hello, Bob!
// Hello, Bob!
// Hello, Bob!

//                                                  ASSINMENT 3
// 1. What is an object in C++?
// An object is an instance of a class. It represents a real-world entity and contains both data (attributes) and functions (methods) defined in the class.

// 2. What is a class in C++ and how does it differ from an object?
// A class is a user-defined data type that acts as a blueprint for creating objects. It defines data members and member functions.
// •	Class: Just a definition/template.
// •	Object: A specific instance of a class with actual memory allocation.

// 3. Explain the concept of encapsulation with an example.
// Encapsulation is the process of bundling data and functions that operate on the data into a single unit (class), and restricting access to internal details.
// Example:
// cpp
// CopyEdit
// class BankAccount {
// private:
//     double balance;  // Hidden from outside

// public:
//     void deposit(double amount) {
//         balance += amount;
//     }

//     double getBalance() {
//         return balance;
//     }
// };
// •	Data (balance) is hidden.
// •	Only access through public methods: deposit() and getBalance().

// 4. How do you define a class in C++?
// cpp
// CopyEdit
// class ClassName {
// private:
//     // private data members

// public:
//     // public methods
// };

// 5. Describe the syntax for creating an object of a class.
// cpp
// CopyEdit
// ClassName objectName;
// Example:
// cpp
// CopyEdit
// class Car {
//     // class content
// };

// int main() {
//     Car myCar;  // Object of class Car
// }

// 6. What are private members in a class and how are they accessed?
// •	Private members cannot be accessed directly from outside the class.
// •	Only member functions or friends of the class can access them.
// Example:
// cpp
// CopyEdit
// class Example {
// private:
//     int x;

// public:
//     void setX(int value) {
//         x = value;
//     }
// };

// 7. What are public members in a class and how are they accessed?
// •	Public members can be accessed directly from outside the class using the object.
// Example:
// cpp
// CopyEdit
// class Example {
// public:
//     int x;
// };

// int main() {
//     Example obj;
//     obj.x = 10;  // Valid
// }

// 8. Explain the significance of access specifiers in a class.
// Access specifiers control visibility of class members:
// •	private: Accessible only inside the class.
// •	public: Accessible from anywhere using an object.
// •	protected: Used mainly in inheritance; accessible in the class and derived classes.
// 9. Provide an example of a class with both private and public members.
// cpp
// CopyEdit
// class Student {
// private:
//     int rollNumber;

// public:
//     void setRollNumber(int r) {
//         rollNumber = r;
//     }

//     int getRollNumber() {
//         return rollNumber;
//     }
// };

// 10. How does data hiding work in C++?
// Data hiding is achieved using the private access specifier. It ensures that internal data cannot be accessed or modified directly from outside the class, protecting integrity.

// 11. What is a static data member in C++?
// A static data member is shared across all objects of a class, rather than being separate for each object. It is initialized only once and exists even if no objects are created.
// Example:
// cpp
// CopyEdit
// class Counter {
// public:
//     static int count;

//     Counter() {
//         count++;
//     }
// };

// int Counter::count = 0;  // Static member initializatio
// . How do you declare and initialize a static data member?
// •	Declaration: Inside the class using the static keyword.
// •	Initialization: Outside the class using the class name and scope resolution operator ::.
// Example:
// cpp
// CopyEdit
// class MyClass {
// public:
//     static int count;  // Declaration
// };

// int MyClass::count = 0;  // Initialization

// 13. What is a static function member in C++?
// A static function member is a function that:
// •	Belongs to the class, not to any specific object.
// •	Can access only static data members.
// •	Can be called using the class name.

// 14. How do static function members differ from regular function members?
// Feature	Static Member Function	Regular Member Function
// Called using	Class name or object	Only with an object
// Access to non-static data	❌ Not allowed	✅ Allowed
// Associated with	Class	Specific object

// 15. Provide an example of a class with static data and function members.
// cpp
// CopyEdit
// #include <iostream>
// using namespace std;

// class Counter {
// private:
//     static int count;

// public:
//     Counter() {
//         count++;
//     }

//     static void showCount() {
//         cout << "Count is: " << count << endl;
//     }
// };

// int Counter::count = 0;  // Initialization

// int main() {
//     Counter a, b, c;
//     Counter::showCount();  // Outputs: Count is: 3
//     return 0;
// }

// 16. What is a constructor in C++ and why is it important?
// A constructor is a special function that:
// •	Has the same name as the class.
// •	Automatically runs when an object is created.
// •	Is used to initialize objects.
// Importance: It sets up initial values and ensures the object is in a valid state when it's created.

// 17. Explain the different types of constructors in C++.
// 1.	Default Constructor – No parameters.
// 2.	Parameterized Constructor – Takes arguments.
// 3.	Copy Constructor – Takes a reference to another object of the same class.
// 4.	Destructor – Not a constructor, but works in reverse (cleans up).

// 18. What is a default constructor and when is it used?
// A default constructor:
// •	Has no parameters.
// •	Is automatically provided by the compiler if no other constructors are defined.
// •	Used to create objects without passing arguments.
// Example:
// cpp
// CopyEdit
// class A {
// public:
//     A() {
//         cout << "Default constructor called" << endl;
//     }
// };

// 19. How do parameterized constructors work?
// They accept arguments to initialize objects with specific values.
// Example:
// cpp
// CopyEdit
// class Student {
// private:
//     int id;

// public:
//     Student(int i) {
//         id = i;
//     }

//     void display() {
//         cout << "ID: " << id << endl;
//     }
// };
// Usage:
// cpp
// CopyEdit
// Student s1(101);
// s1.display();  // Output: ID: 101

// 20. What is a copy constructor and what is its purpose?
// A copy constructor creates a new object by copying an existing object.
// Syntax:
// cpp
// CopyEdit
// ClassName(const ClassName &obj);
// Purpose:
// •	Copy object data.
// •	Used when objects are passed by value or returned from a function.
// Example:
// cpp
// CopyEdit
// class Box {
// private:
//     int length;

// public:
//     Box(int l) { length = l; }
//     Box(const Box &b) { length = b.length; }

//     void show() {
//         cout << "Length: " << length << endl;
//     }
// };
// 21. Explain the concept of constructor overloading.
// Constructor overloading means defining multiple constructors in the same class, each with a different parameter list.
// It allows:
// •	Creating objects with different sets of initial data.
// •	Flexibility in object initialization.
// Example:
// cpp
// CopyEdit
// class Point {
// public:
//     Point() { }               // Default constructor
//     Point(int x) { }          // One-parameter constructor
//     Point(int x, int y) { }   // Two-parameter constructor
// };

// 22. How does a constructor initializer list work?
// A constructor initializer list is used to initialize data members before the constructor body runs.
// Syntax:
// cpp
// CopyEdit
// class Demo {
// private:
//     int a, b;

// public:
//     Demo(int x, int y) : a(x), b(y) {  // initializer list
//         // constructor body (optional)
//     }
// };
// Use cases:
// •	Initializing const or reference members.
// •	Calling base class constructors.

// 23. What is a destructor in C++ and what is its purpose?
// A destructor is a special function that:
// •	Has the same name as the class, preceded by a ~ (tilde).
// •	Is automatically called when an object is destroyed.
// •	Frees resources like memory, files, etc.

// 24. How is a destructor declared and defined?
// Syntax:
// cpp
// CopyEdit
// class MyClass {
// public:
//     ~MyClass();  // Declaration
// };

// MyClass::~MyClass() {  // Definition
//     // Cleanup code
// }

// 25. What happens if a destructor is not explicitly defined in a class?
// If you don’t define a destructor:
// •	The compiler provides a default destructor.
// •	It handles basic cleanup (e.g., destroying member objects).
// •	But it won’t free dynamically allocated memory, leading to memory leaks if not managed.

// 26. Explain the concept of automatic and dynamic storage duration in relation to destructors.
// •	Automatic (Stack) Storage:
// Objects declared inside functions are automatically destroyed when they go out of scope. Destructors are called automatically.
// •	Dynamic (Heap) Storage:
// Objects created using new must be destroyed with delete. Otherwise, destructors won’t be called, and memory leaks occur.
// Example:
// cpp
// CopyEdit
// MyClass* obj = new MyClass();  // dynamic
// delete obj;  // destructor is called

// 27. How do destructors differ from constructors?
// Feature	Constructor	Destructor
// Purpose	Initializes object	Cleans up resources
// Name	Same as class name	~ followed by class name
// Parameters	Can have parameters	Cannot have parameters
// Overloading	Can be overloaded	Cannot be overloaded
// Called when	Object is created	Object is destroyed

// 28. What is operator overloading in C++ and why is it useful?
// Operator overloading allows you to redefine how operators (like +, -, ==) behave for user-defined types (objects).
// Why it's useful:
// •	Improves readability and intuitiveness.
// •	Lets objects behave like built-in types.

// 29. Describe the syntax for overloading an operator.
// Inside a class:
// cpp
// CopyEdit
// class Complex {
// public:
//     int real, imag;

//     Complex operator+(const Complex& obj) {
//         Complex result;
//         result.real = real + obj.real;
//         result.imag = imag + obj.imag;
//         return result;
//     }
// };

// 30. Which operators can and cannot be overloaded in C++?
//  Can be overloaded:
// Arithmetic (+, -, *, /), relational (==, !=, <, >), assignment (=, +=), subscript ([]), function call (()), and more.
// 31. Provide an example of overloading the "+" operator for a custom class
// cpp
// CopyEdit
// #include <iostream>
// using namespace std;

// class Complex {
// public:
//     int real, imag;

//     Complex(int r = 0, int i = 0) : real(r), imag(i) {}

//     // Overload + operator
//     Complex operator+(const Complex& other) {
//         return Complex(real + other.real, imag + other.imag);
//     }

//     void display() {
//         cout << real << " + " << imag << "i" << endl;
//     }
// };

// int main() {
//     Complex c1(3, 4), c2(1, 2);
//     Complex c3 = c1 + c2;  // Calls overloaded +
//     c3.display();  // Output: 4 + 6i
//     return 0;
// }
// ________________________________________
// 32. Explain the concept of friend functions in the context of operator overloading
// A friend function can access the private and protected members of a class. When used for operator overloading, it's often used when:
// •	The left operand is not an object of the class.
// •	You want to keep the operator overloading function outside the class, but still access private data.
// ________________________________________
// 33. What is a friend function in C++ and how is it declared?
// A friend function is a non-member function that has access to private/protected members of a class.
// Declaration inside class:
// cpp
// CopyEdit
// class MyClass {
//     friend void show(MyClass obj);  // Friend function
// };
// Definition outside class:
// cpp
// CopyEdit
// void show(MyClass obj) {
//     // Can access private members
// }
// ________________________________________
// 34. How do friend functions differ from member functions?
// Feature	Friend Function	Member Function
// Part of class	No	Yes
// Access to private data	Yes (via friendship)	Yes
// Called with object	Receives object as parameter	Uses this pointer
// Syntax for call	show(obj);	obj.show();
// ________________________________________
// 35. Explain the benefits and potential drawbacks of using friend functions
// Benefits:
// •	Allows external functions to access class internals.
// •	Useful in operator overloading, especially when left operand isn’t a class object.
// •	Helpful when a function needs access to multiple classes.
// Drawbacks:
// •	Breaks encapsulation (exposes internal data).
// •	Can make code harder to maintain.
// •	Should be used sparingly.
// ________________________________________
// 36. What is inheritance in C++ and why is it important?
// Inheritance allows one class (child or derived) to inherit properties and behaviors (members and functions) from another class (parent or base).
// Importance:
// •	Promotes code reuse.
// •	Supports hierarchical classification.
// •	Enables polymorphism (in advanced OOP).
// ________________________________________
// 37. Explain the different types of inheritance in C++
// 1.	Single Inheritance – One base, one derived class.
// 2.	Multiple Inheritance – One class inherits from more than one base class.
// 3.	Multilevel Inheritance – A class inherits from a derived class (chain).
// 4.	Hierarchical Inheritance – Multiple derived classes inherit from one base class.
// 5.	Hybrid Inheritance – Combination of two or more types above.
// ________________________________________
// 38. How do you implement single inheritance in C++?
// Example:
// cpp
// CopyEdit
// class Base {
// public:
//     void showBase() {
//         cout << "Base class function" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void showDerived() {
//         cout << "Derived class function" << endl;
//     }
// };
// ________________________________________
// 39. What is multiple inheritance and how does it differ from single inheritance?
// Multiple inheritance: A class inherits from more than one base class.
// Difference:
// •	Single inheritance: One base class.
// •	Multiple inheritance: Two or more base classes.
// Example:
// cpp
// CopyEdit
// class A {
// public:
//     void showA() { cout << "A" << endl; }
// };

// class B {
// public:
//     void showB() { cout << "B" << endl; }
// };

// class C : public A, public B {
//     // Inherits from both A and B
// };
// ________________________________________
// 40. Describe hierarchical inheritance with an example
// Hierarchical inheritance: One base class with multiple derived classes.
// Example:
// cpp
// CopyEdit
// class Animal {
// public:
//     void eat() {
//         cout << "Eating" << endl;
//     }
// };

// class Dog : public Animal {};
// class Cat : public Animal {};
// Here, both Dog and Cat inherit from Animal.

// 41. What is multilevel inheritance and how is it implemented in C++?
// Multilevel inheritance: A class is derived from another derived class.
// Example:
// cpp
// CopyEdit
// class A {
// public:
//     void showA() { cout << "Class A" << endl; }
// };

// class B : public A {
// public:
//     void showB() { cout << "Class B" << endl; }
// };

// class C : public B {
// public:
//     void showC() { cout << "Class C" << endl; }
// };
// C inherits from B, and B inherits from A. So, C h32. Explain the concept of friend functions in the context of operator overloading
// Friend functions in C++ allow non-member functions to access the private and protected members of a class. When used for operator overloading, they allow an operator to operate on two objects (especially when the left operand is not an object of the class).
// Example of friend function in operator overloading:
// cpp
// CopyEdit
// class Complex {
//     int real, imag;

// public:
//     Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    
//     // Friend function to overload + operator
//     friend Complex operator+(const Complex& c1, const Complex& c2);
// };

// Complex operator+(const Complex& c1, const Complex& c2) {
//     return Complex(c1.real + c2.real, c1.imag + c2.imag);
// }
// ________________________________________
// 33. What is a friend function in C++ and how is it declared?
// A friend function is a function that is not a member of a class but is granted access to its private and protected members. It can be a non-member function or a member of another class.
// Declaration:
// cpp
// CopyEdit
// class MyClass {
//     friend void myFunction();  // Friend function declaration
// };
// ________________________________________
// 34. How do friend functions differ from member functions?
// Feature	Friend Function	Member Function
// Part of the class	No	Yes
// Can access private members	Yes (via friendship)	Yes (directly within the class)
// Can access private data	Yes (if declared as a friend)	Yes (within the class)
// Must be called with object	No (can be called like any other function)	Yes (using the object or this)
// ________________________________________
// 35. Explain the benefits and potential drawbacks of using friend functions
// Benefits:
// •	Friend functions can access private and protected members of a class.
// •	They can be useful for operator overloading and working with multiple classes.
// Drawbacks:
// •	Breaks the principle of encapsulation, as they expose internal data to external functions.
// •	Overusing friends can lead to tight coupling between classes, making maintenance harder.
// ________________________________________
// 36. What is inheritance in C++ and why is it important?
// Inheritance allows a class to inherit attributes and behaviors (methods) from another class. It promotes code reuse, enables hierarchical classification, and helps in creating modular programs.
// ________________________________________
// 37. Explain the different types of inheritance in C++
// 1.	Single Inheritance: One derived class inherits from a single base class.
// 2.	Multiple Inheritance: One derived class inherits from more than one base class.
// 3.	Multilevel Inheritance: A derived class inherits from another derived class.
// 4.	Hierarchical Inheritance: Multiple derived classes inherit from a single base class.
// 5.	Hybrid Inheritance: A combination of two or more types of inheritance.
// ________________________________________
// 38. How do you implement single inheritance in C++?
// cpp
// CopyEdit
// class Base {
// public:
//     void showBase() {
//         cout << "Base class function" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void showDerived() {
//         cout << "Derived class function" << endl;
//     }
// };
// ________________________________________
// 39. What is multiple inheritance and how does it differ from single inheritance?
// Multiple inheritance occurs when a class derives from more than one base class.
// Difference from single inheritance:
// •	Single inheritance involves one base class, whereas multiple inheritance involves multiple base classes.
// Example:
// cpp
// CopyEdit
// class A {
// public:
//     void showA() { cout << "Class A" << endl; }
// };

// class B {
// public:
//     void showB() { cout << "Class B" << endl; }
// };

// class C : public A, public B {  // Multiple inheritance
// public:
//     void showC() { cout << "Class C" << endl; }
// };

// 40. Describe hierarchical inheritance with an example
// Hierarchical inheritance occurs when multiple classes inherit from a single base class.
// Example:
// cpp
// CopyEdit
// class Animal {
// public:
//     void eat() {
//         cout << "Eating" << endl;
//     }
// };

// class Dog : public Animal {};
// class Cat : public Animal {};
// Both Dog and Cat inherit from Animal.

// 41. What is multilevel inheritance and how is it implemented in C++?
// Multilevel inheritance occurs when a class inherits from a derived class, creating a chain.
// Example:
// cpp
// CopyEdit
// class A {
// public:
//     void showA() { cout << "Class A" << endl; }
// };

// class B : public A {
// public:
//     void showB() { cout << "Class B" << endl; }
// };

// class C : public B {
// public:
//     void showC() { cout << "Class C" << endl; }
// };
// C inherits from B, and B inherits from A.

// 42. Explain the concept of hybrid inheritance.
// Hybrid inheritance is a combination of two or more types of inheritance (e.g., single and multiple inheritance).
// Example:
// cpp
// CopyEdit
// class A {
// public:
//     void showA() { cout << "Class A" << endl; }
// };

// class B {
// public:
//     void showB() { cout << "Class B" << endl; }
// };

// class C : public A, public B {  // Hybrid inheritance
// public:
//     void showC() { cout << "Class C" << endl; }
// };

// 43. What are access modifiers in C++ and what are the different types?
// Access modifiers control the visibility and accessibility of members within a class.
// •	public: Accessible from anywhere.
// •	private: Accessible only within the class.
// •	protected: Accessible within the class and derived classes.

// 44. How do public, private, and protected access modifiers affect inheritance?
// •	public inheritance: Public members of the base class become public in the derived class.
// •	protected inheritance: Public and protected members of the base class become protected in the derived class.
// •	private inheritance: Public and protected members of the base class become private in the derived class.

// 45. Explain how access modifiers control member accessibility in derived classes.
// •	public members: Remain public in derived classes if inherited publicly.
// •	protected members: Become protected in derived classes if inherited publicly or privately.
// •	private members: Cannot be accessed directly in derived classes, even if inherited publicly.

// 46. What is function overriding in the context of inheritance?
// Function overriding occurs when a derived class provides its own implementation of a function that is already defined in the base class. The function in the base class must be virtual for dynamic binding to occur.

// 47. How do you override a base class function in a derived class?
// You can override a base class function by defining a function with the same signature in the derived class.
// cpp
// CopyEdit
// class Base {
// public:
//     virtual void show() {
//         cout << "Base class show()" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void show() override {
//         cout << "Derived class show()" << endl;
//     }
// };

// 48. Explain the use of the "virtual" keyword in function overriding.
// The virtual keyword in C++ indicates that the function in the base class can be overridden in the derived class, enabling dynamic polymorphism.

// 49. What is the significance of the "override" specifier in C++11 and later?
// The override specifier ensures that a function in the derived class is overriding a virtual function from the base class. If the base class function is not virtual, or if the function signature doesn't match, the compiler will generate an error.

// 50. What is a virtual base class in C++ and why is it used?
// A virtual base class is used to ensure that only one copy of the base class’s data members is inherited in the case of multiple inheritance.

// 51. How do you declare and implement a virtual base class?
// Declare a base class as virtual when it’s inherited by multiple derived classes.
// cpp
// CopyEdit
// class A {
// public:
//     void showA() { cout << "Class A" << endl; }
// };

// class B : virtual public A {  // Virtual base class
// public:
//     void showB() { cout << "Class B" << endl; }
// };

// class C : virtual public A {  // Virtual base class
// public:
//     void showC() { cout << "Class C" << endl; }
// };

// 52. Explain the role of virtual base classes in resolving ambiguity in multiple inheritance.
// 52. Explain the role of virtual base classes in resolving ambiguity in multiple inheritance.
// In C++, virtual base classes are used to avoid ambiguity in the case of multiple inheritance, particularly when the same base class is inherited more than once through different paths, as in the diamond problem.
// The Diamond Problem:
// In multiple inheritance, if a class is derived from two classes, both of which derive from the same base class, a duplicate copy of the base class can be created in the derived class. This leads to ambiguity and data duplication when accessing members of the base class.
// Role of Virtual Base Class:
// To resolve this, we use virtual inheritance. By declaring the base class as virtual when inherited by derived classes, we ensure that only one instance of the base class is inherited, no matter how many times it appears in the inheritance chain. This eliminates ambiguity and duplication.
// 53. Provide an example of using a virtual base class to avoid the diamond problem in inheritance.
// Here’s an example that demonstrates how virtual inheritance resolves the diamond problem:
// Without Virtual Base Class (The Diamond Problem):
// cpp
// CopyEdit
// #include <iostream>
// using namespace std;

// class A {
// public:
//     int value;
//     A() : value(10) { cout << "A constructor" << endl; }
// };

// class B : public A {
// public:
//     B() { cout << "B constructor" << endl; }
// };

// class C : public A {
// public:
//     C() { cout << "C constructor" << endl; }
// };

// class D : public B, public C {
// public:
//     D() { cout << "D constructor" << endl; }
// };

// int main() {
//     D d;  // Calls constructor chain
//     cout << "Value from A: " << d.value << endl;  // Ambiguous, A is inherited twice
//     return 0;
// }
// Output:
// css
// CopyEdit
// A constructor
// B constructor
// A constructor
// C constructor
// D constructor
// Value from A: 10
// In the example above, the class D inherits A twice — once through B and once through C. This leads to ambiguity when trying to access value from A, as there are two copies of A.

// With Virtual Base Class (Resolving the Diamond Problem):
// cpp
// CopyEdit
// #include <iostream>
// using namespace std;

// class A {
// public:
//     int value;
//     A() : value(10) { cout << "A constructor" << endl; }
// };

// class B : virtual public A {  // Virtual inheritance
// public:
//     B() { cout << "B constructor" << endl; }
// };

// class C : virtual public A {  // Virtual inheritance
// public:
//     C() { cout << "C constructor" << endl; }
// };

// class D : public B, public C {
// public:
//     D() { cout << "D constructor" << endl; }
// };

// int main() {
//     D d;  // Calls constructor chain
//     cout << "Value from A: " << d.value << endl;  // No ambiguity, A is inherited once
//     return 0;
// }
// Output:
// css
// CopyEdit
// A constructor
// B constructor
// C constructor
// D constructor
// Value from A: 10
// In this case, both B and C inherit from A virtually, meaning A is constructed only once in the inheritance hierarchy. The ambiguity when accessing value is resolved because D has only one instance of A, and the constructor chain is clear.

// :


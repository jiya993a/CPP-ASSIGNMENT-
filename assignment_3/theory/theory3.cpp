// // 

// ASSINMENT 3
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




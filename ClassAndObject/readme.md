# C++ Concepts

This document provides a brief explanation of key concepts in C++.

---

## Q1. What is a Class?
**Ans:**  
A class is a collection of data and member functions that manipulate the data. It can also be called a blueprint of an object and is known as a user-defined data type.

---

## Q2. What is an Object?
**Ans:**  
An object is an instance of a class that contains data and functions to represent and perform actions on real-world entities.

---

## Q3. What is an Access Specifier?
**Ans:**  
Access specifiers are labels that specify the type of access given to members of a class. These are used for data hiding and are also called visibility modifiers.

---

## Q4. What is Inheritance?
**Ans:**  
Inheritance is an important feature of OOP that allows one class to inherit the properties of another class.

---

## Q5. What is Encapsulation?
**Ans:**  
Encapsulation is the wrapping of data and functions together as a single unit. By default, data is not accessible to the outside world and can only be accessed through functions that are wrapped in the class.

---

## Q6. What is Data Abstraction?
**Ans:**  
Data abstraction in C++ is the process of hiding implementation details and showing only the essential features of an object to the user. It focuses on **what** an object does rather than **how** it does it.

---

## Q7. What is an Inline Function?
**Ans:**  
An inline function is a function that is expanded in line when it is invoked. Inline expansion makes a program run faster because the overhead of a function call and return is eliminated. It is defined using the keyword `inline`.

---

## Q8. What are the Necessities of Inline Functions?
**a)** It saves some memory space.  
**b)** It saves some time.

---

## Q9. What are the Properties of Inline Functions?
**a)** An inline function sends a request but not a command to the compiler.  
**b)** The compiler may serve or ignore the request.  
**c)** If the function contains many lines or has complicated logic, the compiler may ignore the request.

---

## Q10. Where Do Inline Functions Not Work?
**a)** If a function contains a `switch` or `loop`, it is treated as a normal function.  
**b)** If a function contains a recursive call, it is treated as a normal function.  
**c)** If a function contains a static variable, it is treated as a normal function.  
**d)** If a function contains a `return` statement but does not return any value, it is treated as a normal function.

---

### Author
This document was created to simplify and summarize key C++ concepts for easy reference.

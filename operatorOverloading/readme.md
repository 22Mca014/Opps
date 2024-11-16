

# Operator Overloading in C++

### Q1. What do you mean by operator overloading?  
**Ans:**  
It is one of the important features of the C++ language. It is called **compile-time polymorphism**. Using operator overloading, we can perform multiple functions with user-defined data types. Operator overloading is done by using an operator overloading function.

---

### Q2. What is the use of operator overloading?  
**Ans:**  
Operator overloading in C++ is required because it allows us to perform operations like addition, subtraction, multiplication, and division using arithmetic operators (`+`, `-`, `*`, `/`) with user-defined data types like classes and structures.

---

### Q3. What do you mean by compile time?  
**Ans:**  
Compile time is the phase when the compiler compiles the code and checks for errors. It converts the code into an executable format. This happens before the program is executed.

---

### Q4. What do you mean by runtime?  
**Ans:**  
Runtime is the phase when a program is executed after being compiled. During this time, the program performs tasks like calculations, accessing resources, or interacting with the user. Errors that occur during this phase are called **runtime errors**.

---

### Q5. Types of operator overloading?  
**Ans:**  
The main types of operator overloading in C++ are:

- **Unary Operator Overloading**  
  Operators that work with a single operand.  
  _Example:_ `+`, `-`, `++`, `--`.

- **Binary Operator Overloading**  
  Operators that work with two operands.  
  _Example:_ `+`, `-`, `*`, `/`, `%`.

- **Relational Operator Overloading**  
  Comparison operators.  
  _Example:_ `<`, `>`, `==`, `!=`.

- **Stream Operator Overloading**  
  For input/output operations.  
  _Example:_ `<<`, `>>`.

- **Assignment Operator Overloading**  
  Redefines the assignment operator (`=`).

---

### Q6. Rules of operator overloading?  
**Ans:**  

1. Only existing operators can be overloaded.  
2. Operators can be overloaded for user-defined data types.  
3. The basic meaning of the operator cannot be changed.  
4. At least one operand must be a user-defined data type.

---

### Q7. Examples of operators that cannot be overloaded?  
**Ans:**  

1. Scope resolution operator (`::`)  
2. `sizeof` operator  
3. Conditional operator (`?:`)  
4. Class member access operator (`.`)


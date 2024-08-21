# C++ Fundamentals Notes

## 1. Getting Started
1. **C++ Standard Library**: A collection of pre-written C++ code for solving common problems.
2. **Compiling**: Converting C++ code to machine code before execution.
3. **Console Application**: A program that runs in the console or terminal.
4. **Function**: A block of code that performs a specific task.
5. **Graphical User Interface (GUI)**: A visual interface for user interaction.
6. **Integrated Development Environment (IDE)**: Software used to write, compile, and debug programs.
7. **Machine Code**: Low-level code executed by the computer's CPU.
8. **Statement**: A single instruction in C++.
9. **Syntax**: The rules governing the structure of C++ code.
10. **Terminal**: A command-line interface for interacting with the computer.

### Summary
1. C++ is a popular programming language used in performance-critical applications like video games, servers, and operating systems.
2. Learning C++ involves understanding its syntax and the C++ Standard Library.
3. IDEs like MS Visual Studio, XCode, and CLion are commonly used for C++ development.
4. C++ code must be compiled to machine code before it can run.
5. The `main()` function is the entry point of a C++ program.

## 2. The Basics
1. **Camel Case**: Naming convention where the first letter of each word is capitalized except the first word (e.g., `camelCase`).
2. **Comment**: Text in the code that is ignored by the compiler, used to explain code.
3. **Constant**: A variable whose value cannot change.
4. **Directive**: A preprocessor instruction (e.g., `#include`).
5. **Expression**: A combination of variables, operators, and values that produce a result.
6. **Hungarian Notation**: Naming convention where a variable’s type or purpose is indicated by a prefix.
7. **Mathematical Expression**: An expression that involves arithmetic operations.
8. **Operand**: A value on which an operator acts.
9. **Operator**: A symbol that performs an operation on one or more operands.
10. **Pascal Case**: Naming convention where the first letter of each word is capitalized (e.g., `PascalCase`).
11. **Snake Case**: Naming convention where words are separated by underscores (e.g., `snake_case`).
12. **Standard Input Stream**: The input stream (usually the keyboard).
13. **Standard Output Stream**: The output stream (usually the console).
14. **Stream Extraction Operator (`>>`)**: Reads data from a stream.
15. **Stream Insertion Operator (`<<`)**: Writes data to a stream.
16. **Variable**: A named storage location in memory.

### Summary
1. Variables temporarily store data in memory.
2. Variables must be declared with a type and a meaningful name.
3. Initialize variables before using them to avoid unexpected behavior.
4. Constants have unchanging values.
5. Common naming conventions: PascalCase, camelCase, and snake_case.
6. Expressions produce values; arithmetic expressions use operators and operands.
7. Multiplication and division have higher precedence than addition and subtraction.
8. Use parentheses to change the order of operations.
9. `cout` writes characters to the Standard Output Stream.
10. `cin` reads data from the Standard Input Stream.
11. The C++ Standard Library includes many functions, which require `#include` directives.
12. Comments explain the reasoning and assumptions behind the code.

## 3. Data Types
1. **Array**: A sequence of elements stored in a contiguous block of memory.
2. **Binary System**: A number system using base 2.
3. **Boolean Values**: Represent `true` or `false`.
4. **Casting**: Converting one data type to another.
5. **Characters**: Single letters or symbols, stored as numbers.
6. **Compile-time Error**: An error detected by the compiler.
7. **Data Type**: Defines the type of data a variable can hold.
8. **Decimal System**: A number system using base 10.
9. **Floating-point Number**: A number with a decimal point.
10. **Hexadecimal System**: A number system using base 16.
11. **Index**: Position of an element in an array.
12. **Overflow**: When a value exceeds the storage capacity of its data type.
13. **Run-time Error**: An error that occurs during program execution.
14. **Stream Manipulator**: Functions that format data sent to a stream.
15. **String**: A sequence of characters.
16. **Underflow**: When a value is smaller than the storage capacity of its data type.

### Summary
1. C++ has built-in data types for integers, floating-point numbers, characters, and Boolean values.
2. Floating-point numbers are double by default; add `F` for float.
3. Whole numbers are `int` by default; add `L` for long.
4. The `auto` keyword lets the compiler infer the variable type.
5. Numbers can be represented in decimal, binary, and hexadecimal.
6. Overflow/underflow occurs when a value exceeds the limits of its data type.
7. The `sizeof()` function shows the number of bytes used by a data type.
8. Stream manipulators format data output (e.g., `setw`, `fixed`, `setprecision`).
9. Boolean `false` is 0, and any non-zero number is `true`.
10. Characters are stored as numbers and should be surrounded by single quotes.
11. Strings are sequences of characters surrounded by double quotes.
12. Arrays store sequences of elements, accessed via indices starting from 0.
13. Casting can be implicit (automatic) or explicit (using `static_cast`).
14. C++ casting is safer, catching conversion issues at compile-time, unlike C-style casting.

## 4. Decision Making
1. **Boolean Expression**: An expression that results in a Boolean value (`true` or `false`).
2. **Comparison Operators**: Operators that compare values (`==`, `!=`, `<`, `>`, `<=`, `>=`).
3. **Conditional Operator (`?:`)**: A shorthand for an `if-else` statement.
4. **If Statement**: A conditional statement that executes code based on a Boolean expression.
5. **Logical Operators**: Operators that combine Boolean expressions (`&&`, `||`, `!`).
6. **Nesting If Statements**: Placing an `if` statement inside another `if` statement.
7. **Switch Statement**: A statement that checks a variable against multiple values.

### Summary
1. Comparison operators compare values in a Boolean expression.
2. Logical operators combine Boolean expressions to form complex conditions.
3. `&&` requires both conditions to be true; `||` requires at least one condition to be true.
4. The logical NOT operator (`!`) reverses a Boolean value.
5. `if` statements control the flow of logic in a program.
6. `if` statements can have multiple `else if` clauses and an optional `else` clause.
7. Nested `if` statements allow more complex logic.
8. The conditional operator (`?:`) simplifies `if-else` statements.
9. `Switch` statements compare a variable to multiple values, using `case` and `default` labels.
10. Use `break` to exit a `switch` case; otherwise, control moves to the next case.
11. `Switch` statements can make code easier to read but are less flexible than `if` statements.

## 5. Loops
1. **Break Statement**: Exits a loop prematurely.
2. **Continue Statement**: Skips the current iteration and moves to the next one.
3. **Do-while Statement**: A loop that executes at least once, checking the condition after the loop body.
4. **For Statement**: A loop that repeats a block of code a specific number of times.
5. **Infinite Loop**: A loop that never ends (often caused by a missing exit condition).
6. **Iteration**: A single pass through the loop body.
7. **Loop Variable**: A variable used to control the number of loop iterations.
8. **Nested Loop**: A loop inside another loop.
9. **While Statement**: A loop that repeats as long as a condition is true.

### Summary
1. Loops repeat a set of statements.
2. Types of loops: `for`, range-based `for`, `while`, and `do-while`.
3. `For` loops are ideal when the number of iterations is known.
4. Range-based `for` loops are useful for iterating over collections (arrays, strings).
5. `While` and `do-while` loops are used when the number of iterations is not known.
6. Use `break` to exit a loop early.
7. Use `continue` to skip the rest of the current loop iteration and proceed to the next one.

## 6. Functions
1. **Debugging**: A process of identifying and fixing errors in a program.
2. **Functions**: Blocks of code that perform specific tasks.
3. **Function Arguments**: Values passed to a function.
4. **Function Declaration**: A statement that tells the compiler about a function's existence.
5. **Function Definition**: The actual code of the function.
6. **Function Parameters**: Variables in a function that receive arguments.
7. **Function Return Type**: The type of value a function returns.
8. **Global Variable**: A variable accessible throughout the program.
9. **Local Variable**: A variable accessible only within a specific function.
10. **Overloading**: Defining multiple functions with the same name but different arguments.
11. **Recursion**: A technique where a function calls itself.
12. **Return Statement**: A statement that exits a function and optionally returns a value.
13. **Scope**: The region of the code where a variable is accessible.

### Summary
1. Functions group related tasks into a block of code.
2. Functions can accept arguments and return values.
3. The scope of a variable determines where it can be accessed.
4. Global variables are accessible throughout the program, while local variables are limited to a function.
5. Function declarations inform the compiler about the function’s name, return type, and parameters.
6. Function definitions contain the code executed when the function is called.
7. Overloading allows multiple functions with the same name but different arguments.
8. Recursion enables a function to call itself but requires a base condition to avoid infinite loops.
9. Use the `return` statement to exit a function and return a value.
10. Debugging is an essential process for identifying and fixing errors.

## 7. Advanced Topics
1. **Array**: A collection of elements of the same type.
2. **Class**: A blueprint for creating objects.
3. **Constructor**: A special function called when an object is created.
4. **Destructor**: A special function called when an object is destroyed.
5. **Dynamic Memory Allocation**: Allocating memory at runtime using `new` and `delete`.
6. **Inheritance**: Creating a new class based on an existing class.
7. **Namespace**: A container for identifiers to avoid naming conflicts.
8. **Object**: An instance of a class.
9. **Pointer**: A variable that stores the memory address of another variable.
10. **Reference**: An alias for another variable.
11. **Struct**: A collection of related variables grouped together.
12. **Template**: A feature that allows functions and classes to operate with generic types.

### Summary
1. Arrays store multiple elements of the same type.
2. Pointers hold memory addresses and are used for dynamic memory management.
3. Classes are blueprints for objects, encapsulating data and functions.
4. Constructors initialize objects, while destructors clean up resources.
5. Inheritance allows code reuse by creating new classes from existing ones.
6. References provide an alias for another variable, often used in function arguments.
7. Namespaces prevent naming conflicts, especially in large projects.
8. Structs group related data, often simpler than classes.
9. Templates enable generic programming, allowing functions and classes to work with any data type.

## C++ Introduction

### What is C++?

````
C++ is a cross-platform language that can be used to create high-performance applications.

C++ was developed by Bjarne Stroustrup, as an extension to the C language.

C++ gives programmers a high level of control over system resources and memory.

The language was updated 4 major times in 2011, 2014, 2017, and 2020 to C++11, C++14, C++17, C++20
````

### Why Use C++

````
C++ is one of the world's most popular programming languages.

C++ can be found in today's operating systems, Graphical User Interfaces, and embedded systems.

C++ is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs.

C++ is portable and can be used to develop applications that can be adapted to multiple platforms.

C++ is fun and easy to learn!

As C++ is close to C, C# and Java, it makes it easy for programmers to switch to C++ or vice versa.
````

### Difference between C and C++

````
C++ was developed as an extension of C, and both languages have almost the same syntax.

The main difference between C and C++ is that C++ support classes and objects, while C does not.
````

## C++ Syntax

````c++
#include
<iostream>
using namespace std;

int main() {
cout << "Hello World!";
return 0;
}
````

````
Example explained
Line 1: #include <iostream> is a header file library that lets us work with input and output objects, such as cout (used in line 5). Header files add functionality to C++ programs.

Line 2: using namespace std means that we can use names for objects and variables from the standard library
Line 3: A blank line. C++ ignores white space. But we use it to make the code more readable.

Line 4: Another thing that always appear in a C++ program is int main(). This is called a function. Any code inside its curly brackets {} will be executed.

Line 5: cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example, it will output "Hello World!".

Note: Every C++ statement ends with a semicolon ;.

Note: The body of int main() could also been written as:
int main () { cout << "Hello World! "; return 0; }

Remember: The compiler ignores white spaces. However, multiple lines makes the code more readable.

Line 6: return 0 ends the main function.

Line 7: Do not forget to add the closing curly bracket } to actually end the main function.
````

````
Omitting Namespace
You might see some C++ programs that runs without the standard namespace library. The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for some objects:
````

````c++
#include
<iostream>

int main() {
std::cout << "Hello World!";
return 0;
}
````

## C++ Output (Print Text)

````c++
#include
<iostream>
using namespace std;

int main() {
cout << "Hello World!";
return 0;
}
````

## C++ Comments

### Comments can be used to explain C++ code,

### and to make it more readable.

### It can also be used to prevent execution when testing alternative code.

### Comments can be singled-lined or multi-lined.

````c++
// This is a comment
cout << "Hello World!";

cout << "Hello World!"; // This is a comment
````

## C++ Multi-line Comments

### Multi-line comments start with /* and ends with */.

### Any text between /* and */ will be ignored by the compiler:

````c++
/* The code below will print the words Hello World!
to the screen, and it is amazing */
cout << "Hello World!";
````

## C++ Variables

### Variables are containers for storing data values.

### In C++, there are different types of variables (defined with different keywords), for example:

```c++
int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false
```

## Declaring (Creating) Variables

### To create a variable, specify the type and assign it a value:

```c++
type variableName = value;
```

```c++
int myNum = 15;
cout << myNum;
```

```c++
int myNum;
myNum = 15;
cout << myNu
```

```c++
int myNum = 15;  // myNum is 15
myNum = 10;  // Now myNum is 10
cout << myNum;  // Outputs 10
```

```c++
int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)
```

## Display Variables

### The cout object is used together with the << operator to display variables.

### To combine both text and a variable, separate them with the << operator:

```c++
int myAge = 35;
cout << "I am " << myAge << " years old.";
```

## Add Variables Together

```c++
int myAge, myScore;
cout << "I am " << myAge << " years old.";
```

## C++ User Input

### You have already learned that cout is used to output (print) values. Now we will use cin to get user input.

### cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

### In the following example, the user can input a number, which is stored in the variable x. Then we print the value of x:

```c++
int x;
cout << "Type a number: "; // Type a number and press enter
cin >> x; // Get user input from the keyboard
cout << "Your number is: " << x; // Display the input value
```

_Good To Know_
**cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)**
**cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)**

### Creating a Simple Calculator

_In this example, the user must input two numbers. Then we print the sum by calculating (adding) the two numbers:_

```c++
int x, y;
int sum;
cout << "Type a number: ";
cin >> x;
cout << "Type another number: ";
cin >> y;
sum = x + y;
cout << "Sum is: " << sum;
```

## C++ Operators

### Arithmetic Operators (+ - * / % ++ --)

_+ Addition Adds together two values x + y_

_- Subtraction Subtracts one value from another x - y_

_*    Multiplication Multiplies two values x * y_

_/ Division Divides one value by another x / y_

_% Modulus Returns the division remainder x % y_

_++ Increment Increases the value of a variable by 1 ++x_

_-- Decrement Decreases the value of a variable by 1 --x_

### Assignment Operators (=, +=, -=, *=, /=)

```c++
int x = 10;
```

operator Example Same As = x = 5 x = 5 += x += 3 x = x + 3

### C++ Comparison Operators (==, !=, >, <, >= <=)

```c++
int x = 5;
int y = 3;
cout << (x > y); // returns 1 (true) because 5 is greater than 3
```

### C++ Logical Operators (&&, ||, !)

### As with comparison operators, you can also test for true (1) or false (0) values with logical operators.

### Logical operators are used to determine the logic between variables or values:

## C++ Conditions and If Statements

### The if Statement

```c++
if (condition) {
// block of code to be executed if the condition is true
}
```

### Example

```c++
int x = 20;
int y = 18;
if (x > y) {
cout << "x is greater than y";
}
```

## The else Statement

```c++
if (condition) {
// block of code to be executed if the condition is true
} else {
// block of code to be executed if the condition is false
}
```

#### Example

```c++
int time = 20;
if (time < 18) {
cout << "Good day.";
} else {
cout << "Good evening.";
}
// Outputs "Good evening."
```

## The else if Statement

```c++
if (condition1) {
// block of code to be executed if condition1 is true
} else if (condition2) {
// block of code to be executed if the condition1 is false and condition2 is true
} else {
// block of code to be executed if the condition1 is false and condition2 is false
}
```

#### Example

```c++
int time = 22;
if (time < 10) {
cout << "Good morning.";
} else if (time < 20) {
cout << "Good day.";
} else {
cout << "Good evening.";
}
// Outputs "Good evening."
```

## C++ For Loop
```c++
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
```
Statement 1 is executed (one time) before the execution of the code block.__

Statement 2 defines the condition for executing the code block.__

Statement 3 is executed (every time) after the code block has been executed.__

The example below will print the numbers 0 to 4:__

```c++
for (int i = 0; i < 5; i++) {
  cout << i << "\n";
}
```

## C++ While Loop
```c++
while (condition) {
  // code block to be executed
}
```
#### Example

```c++
int i = 0;
while (i < 5) {
  cout << i << "\n";
  i++;
}
```

## The Do/While Loop

```c++
do {
  // code block to be executed
}
while (condition);
```

#### Example

```c++
int i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 5);
```

## C++ Arrays

_Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:_

```c++
string cars[4];

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

int myNum[3] = {10, 20, 30};
```

## Access the Elements of an Array
_You access an array element by referring to the index number inside square brackets [].
This statement accesses the value of the first element in cars:_

#### Example
```c++
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0];
// Outputs Volvo
```

## Change an Array Element
```c++
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[0] = "Opel";
cout << cars[0];
// Now outputs Opel instead of Volvo
```

## Loop Through an Array

```c++
string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
for (int i = 0; i < 5; i++) {
  cout << cars[i] << "\n";
}
```

```c++
string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
for (int i = 0; i < 5; i++) {
  cout << i << " = " << cars[i] << "\n";
}
```

```c++
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i = 0; i < 5; i++) {
  cout << myNumbers[i] << "\n";
}
```

##  Dynamic Array Size
_In C++, you don't have to specify the size of the array. The compiler is smart enough to determine the size of the array based on the number of inserted values:_

```c++
string cars[] = {"Volvo", "BMW", "Ford"}; // Three array elements
```

```c++
string cars[3] = {"Volvo", "BMW", "Ford"}; // Also three array eleme
```








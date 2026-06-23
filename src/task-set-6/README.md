# Task Set 6: Templates and Exceptions

### Task 1
Create a Rectangle template class that stores data about the length, width, and area of ​​a rectangle.
Create three objects of this class, where:
* length, width, and area are integers;
* length, width, and area are real numbers;
* length is an integer, but width, and area are real numbers.

---

### Task 2
The sum of the lengths of any two sides of any triangle is not less than the length of the third side.
Implement an exception class for this restriction, with the ability to save and output a message about the longest side.
Create a triangle class and check the operation of this exception.

---

### Task 3
Create an employee class that stores the following data: age, experience, and salary.
Implement three exception classes that implement the following restrictions: age must be in the range from 18 to 70, experience cannot be more than age-18, and salary cannot be less than 500.
Using the exception handling construct try-catch (use three catch cases - for each newly created exception class), if incorrect information is entered, the program must return a message about non-compliant data.

---

### Task 4
Change the program written in task 3 so that only one catch case is used, which would output all 3 exception cases.

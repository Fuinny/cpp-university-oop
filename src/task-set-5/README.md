# Task Set 5: Polymorphism

### Task 1
* Linear function:
```math
f(x) = kx+b
```
* Step function:
```math
f(x) = {x}^{n}
```
* Sinusoid function:
```math
f(x) = sin(x)
```

Create an array of functions and, using virtual methods, calculate the value of each function at point x.

---

### Task 2
Create an array that stores data of geometric figures (triangle, circle and rectangle) - length, width, radius, area, etc.
To solve the task, define an abstract class, and create a virtual method to calculate the area of ​​the figures.

---

### Task 3
Write a program that allows the user to create an array of products (maximum 10 elements) by entering the product name, quantity, unit price, whether a discount is applied, and the amount of the discount (if applicable).
It is necessary to calculate the value of each entered item, and the total value of the items.
Display all the information in the "shopping cart" on the screen.
To perform the task, write down the classes: Product and ProductsWithDiscount, linked by a class inheritance relationship.
If a discount is applied to the item, an object of the ProductsWithDiscount class is created, if the discount is not applied, an object of the Product class is created.
The created objects are saved in one array, and should use virtual methods to calculate the price of the item and to display information about the item.

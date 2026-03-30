# Custom Vector (C++)

A simple implementation of a dynamic array (similar to `std::vector`) written in C++ for learning purposes.

## Overview

This project implements a custom vector class that supports dynamic resizing, element access, and basic operations.

## Template Parameters

- `T` – data type stored in the vector

## Notation

- `x` – index
- `y` – value

## Features

### Element Access

- `firstElement();`  
  Returns the first element of the vector

- `firstElement() = y;`  
  Assigns a value to the first element

- `lastElement();`  
  Returns the last element of the vector

- `lastElement() = y;`  
  Assigns a value to the last element

- `element(x);`  
  Returns the element at index `x`

- `element(x) = y;`  
  Assigns a value at index `x`

---

### Modifiers

- `add(y);`  
  Adds a value to the vector

- `addMany(1,2,3,...);`  
  Adds multiple values to the vector

- `removeLast();`  
  Removes the last element (shrinks capacity)

- `resetAll();`  
  Clears the vector and resets it to initial state

---

### Capacity / Info

- `returnSize();`  
  Returns the number of elements

- `lastIndex();`  
  Returns the index of the last element

---

### Output

- `showAll();`  
  Prints all elements in the vector

---

## Example

```cpp
myVector<int> v;

v.add(10);
v.add(20);
v.addMany(30, 40, 50);

v.showAll(); // 10 20 30 40 50

v.removeLast();

v.showAll(); // 10 20 30 40

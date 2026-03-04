/*
Name:Chan Myint Myat Chaw
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Constuctors with Cars
Date: 03/03/2026
*/

#include <iostream>
#include "car.cpp"

int main(){
    
    Car car1;
    Car car2("Tesla", "X", 2022);
    Car car3(car2);
    Car* pCar1 = new Car; 
    Car* pCar2 = new Car ("Tesla", "X", 2022);
    Car car[20]; 
    
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();
    
    pCar1 -> startEngine();
    pCar2 -> startEngine();
    car[0].startEngine();
    return 0;
}

/*
Reflection:
1. What I understood:
I understood that constructors are functions that run automatically 
when an object is created. I learned that Car() is the default constructor, 
Car(string, string, int) is a parameterized constructor that allows us to 
set custom values, and Car(const Car&) is a copy constructor that creates 
a new object from another existing object.

I also understood that when creating an array like Car car[20], the default 
constructor is called 20 times. When using the keyword "new", constructors 
are also called dynamically in heap memory.

2. Difficulties:
I was a little confused about when the copy constructor is automatically 
called and why we use const Car& instead of just Car. I also needed to 
understand the difference between creating objects normally and creating 
them with pointers using "new".

3. Research:
I researched that the copy constructor is automatically called when an object 
is initialized using another object of the same type.

4. AI usage:
I asked for the difference between Car(), Car(with parameters), and 
Car(const Car&). I also asked for clarification about how constructors 
are triggered when using pointers and arrays.
5. What I learned:

I learned that The default constructor runs when no arguments are given.
The parameterized constructor allows us to customize object values.
The copy constructor creates a new object by copying another object.
Arrays of objects call the default constructor for each element.
*/
/*
Name:Chan Myint Myat Chaw
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Destructors

Date: 03/03/2026
*/

#include <iostream>
#include "car.cpp"
int main(){
    Car car1;
    
    Car car2("Tesla", "x", 2022);
    Car* pCar2 = new Car;
    Car car3(car2);
    
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();
    
    return 0;
}


/*
Reflection:
1. What I understood:

I understood that a destructor is a function that runs 
automatically when an object is destroyed. It is used to clean up 
resources before the object is removed from memory.

2. Difficulties:

I was slightly confused about when exactly destructors are called, 
especially with dynamic objects created using "new".

3. Research:

I researched the difference between stack and heap memory. 
I learned that stack objects are destroyed automatically when they 
go out of scope, but heap objects require "delete" to call the destructor.

4. AI usage:

I asked for clarification about when destructors are triggered and 
why dynamic objects need to be deleted manually.

5. What I learned:
I learned that destructors have the same name as the class with a "~" 
symbol, they run automatically for stack objects, and they help prevent 
memory leaks when properly used with dynamic memory.

*/
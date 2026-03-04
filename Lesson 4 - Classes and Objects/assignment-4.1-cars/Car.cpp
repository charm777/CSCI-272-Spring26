/*
Name:Chan Myint Myat Chaw
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Classes Car Example
Date: 03/03/2026
*/

#include <iostream>

using namespace std;

class Car {
    private: 
        string brand {"Toyota"};
        string model = "Corolla";
        int year {2014};
    public: 
        void startEngine() {
            cout << "Starting Engine ..." << endl;
            cout << "This car is " << brand << "." <<endl;
        }
        void accelerate(){
            cout << "Accelerating ..." << endl;
            cout << "It is a " << year << " built " << model << "." << endl;
        }
};

/*
Reflection:
1. What I understood: 
I understood how to add members into class, and how the private and 
public classes work, while calling the function from another file using library.

2. Difficulties:
I did not have much Difficulties here yet.

3. Research:
I did some research on the purpose of using classes.
I learned that it was for code reusibility,organization,
compactness and encapsulation.

4. AI usage:

I asked to clarify the purpose of Public and private.
Private members can only be accessed inside the same class.
Public members can be used as functions to 
access the private members through them.

5. What I learned:

I learned that assignment can be done either way such as {} and =
I learned we can make our own class file and include in the main by 
adding in the the library list using quotations ""

*/
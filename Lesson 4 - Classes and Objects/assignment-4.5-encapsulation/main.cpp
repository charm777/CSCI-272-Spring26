/*
Name:Chan Myint Myat Chaw
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Encapsulation

Date: 03/03/2026
*/

#include <iostream>
#include "bank.cpp"
using namespace std;

int main(){
    BankAccount account;   // Object created

    account.deposit(500);  
    account.withdraw(200);

    cout << "Current balance: " << account.Balance() << endl;

    return 0;
}

/*
Reflection:

1. What I understood:

I understood how to create a simple class with private data and public 
member functions. I learned how to use deposit and withdraw functions 
to modify the balance, and how to return a value using a function.

2. Difficulties:

I initially forgot to initialize the balance, which could cause 
unexpected results. I also needed to understand why private variables 
cannot be accessed directly from main.

3. Research:

I reviewed how encapsulation works in C++ and why private data members 
must be accessed through public functions. I also looked up how header 
files work when separating class definitions from main.

4. AI usage:

I asked for clarification on how to properly call the class functions 
inside main and how constructors help initialize data safely.

5. What I learned:

I learned that private members protect data from direct access, 
public functions act as controlled access points, and objects must 
be created before calling their member functions.
*/
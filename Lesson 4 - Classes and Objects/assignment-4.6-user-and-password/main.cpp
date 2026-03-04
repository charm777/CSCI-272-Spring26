/*
Name:Chan Myint Myat Chaw
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: 
Date: 03/03/2026
*/
#include "user.cpp"
#include <iostream>
using namespace std;

int main() {
    User user1("admin", "1234");

    if (user1.login("admin", "1234"))
        cout << "Login successful" <<endl;
    else
        cout << "Login failed"<<endl;

    user1.updatePassword("newpass");

    if (user1.login("admin", "newpass"))
        cout << "Password updated and login successful"<<endl;

    return 0;
}

/*
Reflection:

1. What I understood:
I learned how to create a class with private data and public functions. 
I understood how to use a constructor to set initial values, how to 
check login with the login function, and how to change the password.

2. Difficulties:
I had to remember to use logical AND (&&) instead of (&) 
in the login function.

3. Research:
I reviewed how encapsulation protects data.

4. AI usage:
I asked for help in writing function to test password updates.

5. What I learned:
I learned how to create objects, call functions, update private data safely, 
and verify changes using the login function.
*/
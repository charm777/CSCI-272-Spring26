#include <iostream>

using namespace std;

class Person {
    public: 
        string name {"Alex"};
        int age {29};
        char gender {'M'};
        
    public:
        void introduce(){
            cout << "Hello, my name is " << name << " I'm " << age <<
            " years old.";
            
            if (gender == 'F') {
                cout << " My gender is Female. " << endl; 
            }
            else if (gender =='M'){
                cout << " My gender is Male." << endl;
            }
            else {cout << "Gender Unknown!" << endl;
        }
        }
};
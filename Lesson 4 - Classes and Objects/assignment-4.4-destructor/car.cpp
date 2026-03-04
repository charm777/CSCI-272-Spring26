#include <iostream>

using namespace std;

class Car {
    private: 
        string brand {"Toyota"};
        string model = "Corolla";
        int year {2014};
    public: 
        Car(){
        }
        Car(std::string b, std::string m, int y){
        brand = b; model = m; year = y;
        }
        Car(const Car & other){
        brand = other.brand; model = other.model; year = other.year;
        }

        ~Car(){
            cout << "Car object was destructed." << endl;
        }
        void startEngine() {
            cout << "Starting Engine ..." << endl;
            cout << "This car is " << brand << "." << "and it is made in "<< 
            year << ". and it's model is " << model << "."<< endl;
        }
        
};
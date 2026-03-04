using namespace std;


class Car {
    private: 
        string brand {"Toyota"};
        string model = "Corolla";
        int year {2014};
    public: 
        Car(){
            cout << "Car() function called." << endl;
        }
        Car (string b, string m, int y){
            brand = b;
            model = m;
            year = y;
        }
        
        Car(const Car & other){
            brand = other.brand;
            model = other.model;
            year = other.year;
        }
        void startEngine() {
            cout << "Starting Engine ..." << endl;
            cout << "This car is " << brand << "." <<endl;
        }
        void accelerate(){
            cout << "Accelerating ..." << endl;
            cout << "It is a " << year << " built " << model << "." << endl;
        }
};

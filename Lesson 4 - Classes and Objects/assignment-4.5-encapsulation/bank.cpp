#include <iostream>
using namespace std;

class BankAccount {
    private:
    double balance;
    public:
    void deposit (double amount){
        balance += amount;
    }
    
    void withdraw(double amount){
        if (amount <= balance){
            balance -= amount;
        }
    }
    double Balance(){
        return balance;
    }
};
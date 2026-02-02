#include <iostream>
using namespace std;

int main()
{
    
    string items[5] = {"Redbull", "SourPatch", "M&Ms","Celsius","PBC"};
    float prices[5];
    
    for (int i = 0; i<5; i++)
    {
        cout << "Enter Redbull price: ";
        cin >> prices[i];
    
        cout << "Enter Sourpatch price: ";
        cin >> prices[i];
        
        cout << "Enter M&Ms price: ";
        cin >> prices[i];
        
        cout << "Enter Celsius Price: ";
        cin >> prices[i];
        
        cout << "Enter PBC's prices: ";
        cin >> prices[i];
        
        cout << prices[i]<< endl;
        break;
    }

    //for (int i=0; i<5; i++){
        
      
    return 0;
}
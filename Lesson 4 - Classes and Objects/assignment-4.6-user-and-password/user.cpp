#include <iostream>
using namespace std;

class User {
    private:
        string username;
        string password;
    public:
        User(const std::string& uname, const std::string& pwd){
        username = uname;
        password = pwd;
        }
    bool login(const std::string& inputUser, const std::string& inputPwd) 
    const {
     return (inputUser == username) & (inputPwd == password);
    }
     
    void updatePassword(const std::string& newPwd) {
        password = newPwd;
    } 
    
};
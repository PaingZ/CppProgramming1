#include<iostream>
using namespace std;

//function declaration
bool password_validator(string password);

int main(){
    string password;
    cout << "Enter your password." ;
    cin >> password;

    bool status = password_validator(password);//true or false

    if(status){
        cout << "Password is valid" << endl;
    }else{
        cout << "Password is invalid" << endl;
    }
}

//function definition
bool password_validator(string password)
{
    if(password.length() >= 8){
        int capCount = 0;
        int smCount = 0;
        int numCount = 0;

        for(int i = 0; i<password.length(); i++){
            //capital letter
            if(password[i] >= 'A' && password[i] <= 'Z'){
                capCount++;
            }
            //small letter
            if(password[i] >= 'a' && password[i] <= 'z'){
                smCount++;
            }
            //number check
            if(password[i] >= '0' && password[i] <= '9'){
                numCount++;
            }
        }

        if(capCount != 0 && smCount != 0 && numCount != 0){
            return true;
        }else{
            return false;
        }

    }else{
        return false;
    }
}
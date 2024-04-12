#include <iostream>
using namespace std;

int main()
{

    string name[50];
    string email[50];
    string password[50];
    string option;

    int userCount = 0;

    do{
        cout << "Enter your option(show, create, exit) :";
        cin >> option;

        if(option == "show"){
            //code
            cout << "show " << endl;
        }else if(option == "create"){
            //code
            cout << "Enter your name :";
            getline(cin >> ws, name[userCount]);
            cout << "Enter your email :";
            cin >> email[userCount];
            cout << "Enter your password :";
            cin >> password[userCount];
            userCount++;
        }else if(option == "exit"){
            cout << "Program exit..." << endl;
        }else{
            cout << "Invalid option!" << endl;
        }

    }while(option != "exit");



    return 0;
}

//Alex alex@gmail.com password
//Bob bob@gmail.com password
#include <iostream>
using namespace std;

//function declaration
void create();
void show();

//global variable declaration
string name[50];
string email[50];
string password[50];
string option;

int userCount = 0;

int main()
{
    do{
        cout << "Enter your option(show, create, exit) :";
        cin >> option;

        if(option == "show"){
            show();
        }else if(option == "create"){
            //code
            create();
        }else if(option == "exit"){
            cout << "Program exit..." << endl;
        }else{
            cout << "Invalid option!" << endl;
        }

    }while(option != "exit");



    return 0;
}

void create()
{
    cout << "Enter your name :";
    getline(cin >> ws, name[userCount]);
    cout << "Enter your email :";
    cin >> email[userCount];
    cout << "Enter your password :";
    cin >> password[userCount];
    userCount++;
}

void show()
{
    for(int i = 0; i<userCount; i++){
        cout << name[i] << " " << email[i] << " " << password[i] << endl;
    }
}
//Alex alex@gmail.com password
//Bob bob@gmail.com password
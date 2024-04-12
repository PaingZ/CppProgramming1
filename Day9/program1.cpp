#include<iostream>
using namespace std;

int option;
int userCount = 0;

string name[50];
int age[50];
string address[50];
int userId[50];

void create();
void read();
void update();
void deleteUser();

int main(){
    do {
        cout << "1. Create User" << endl;
        cout << "2. Read User" << endl;
        cout << "3. Update User" << endl;
        cout << "4. Delete USer" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your option :-> " ;
        cin >> option;
        if(option == 1){
            create();
        }else if (option == 2){
            read();
        }else if (option == 3){
            update();
        }else if (option == 4){
            deleteUser();
        }else {
            cout << "Invalid user Input! Please try again." << endl;
        }
    }while(option != 0);
    return 0;
}

void create(){
    int i = 0;
    userId[userCount] = userCount + 1;
    cout << "Enter your name: ";
    getline(cin >> ws,name[userCount]);
    cout << "Enter your age: ";
    cin >> age[userCount];
    cout << "Enter your address: ";
    getline(cin >> ws,address[userCount]);
    userCount++;
}
void read(){
    for (int i=0; i < userCount; i++) {
        cout << userId[i] << " ";
        cout << name[i] << " ";
        cout << age[i] << " ";
        cout << address[i] << endl;
    }
}

void update(){
    int id;
    bool foundId = false;
    do {
        cout << "Enter ID to update: ";
        cin >> id;
        for (int i = 0; i < userCount; i++) {
            if (id == userId[i]) {
                cout << "Enter new name to update: ";
                getline(cin >> ws, name[i]);
                cout << "Enter new age to update: ";
                cin >> age[i];
                cout << "Enter new address to update: ";
                getline(cin >> ws, address[i]);
                foundId = true;
                break;
            }
        }
        if (!foundId) {
            cout << "Invalid input! Please try again." << endl;
        }
    }while(!foundId);
}
void deleteUser(){
    int id;
    bool foundId = false;
    do{
        cout << " Enter ID to delete: ";
        cin >> id;
        for (int i= 0 ; i< userCount; i++) {
            if (id == userId[i]) {
                name[i] = name[i + 1];
                age[i] = age[i + 1];
                address[i] = address[i + 1];
                userCount--;
                foundId = true;
                break;
            }
        }
        if (!foundId){
            cout << "Invalid user input! Please try again." << endl;
        }
    }while(!foundId);
}
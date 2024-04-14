#include <iostream>
using namespace std;

struct Data{
    int Id;
    string name;
    string password;
    string email;
};
Data UserInfo[50];
void Login();
void Register();
void main_section();
void printAllDataFromStruct();
bool gmail_valid(string email);
bool password_valid(string password);
int userCount = 0;

int main(){

    main_section();

    return 0;
}
void main_section()
{
    int option;
    printAllDataFromStruct();
    cout << "\n1. Login " << endl;
    cout << "2. Register "<< endl;
    cout << "0. Exist" << endl;
    cout << "Enter your option :";
    cin >> option;

    if(option == 1){
        Login();
    }else if(option == 2){
        Register();
    }else if(option == 0){
        cout << "Program exit" << endl;
        exit(0);//stop the whole program
    }else{
        cout << "Invalid user Input! Please try again." << endl;
    }

    main_section();

}
void Login(){
    //email, password
    string lEmail;
    string lPassword;
    cout << "Enter your email to login :";
    cin >> lEmail;
    cout << "Enter your password to login :";
    cin >> lPassword;

    int userIndex = -1;
    for(int i = 0; i<userCount; i++){
        if(lEmail == UserInfo[i].email){
            userIndex = i;
            break;
        }
    }

    if(lPassword == UserInfo[userIndex].password){
        cout << "Login success..." << endl;
        cout << "Welcome " << UserInfo[userIndex].name << endl;
    }else{
        cout << "Cred wrong!" << endl;
    }

}

//normal
//parameter passing
//return function

void Register(){
    if(userCount == 0){
        UserInfo[userCount].Id = 1;
    }else{
        UserInfo[userCount].Id = UserInfo[userCount - 1].Id + 1;
    }
    string rPassword;
    string rEmail;
    string rName;

    cout << "Enter your name to register :";
    getline(cin >> ws, rName);
    //-------------------------------------

    do{
        cout << "Enter your email to register :";
        cin >> rEmail;

        int userIndex = -1;
        for(int i = 0; i<userCount; i++){
            if(rEmail == UserInfo[i].email){
                userIndex = i;
                break;
            }
        }
        if(userIndex != -1){
            cout << "This email has already taken." << endl;
        }else{
            break;
        }

        //gmail_valid
        if(gmail_valid(rEmail)){
            break;
        }else{
            cout << "Invalid Gmail format!" << endl;
        }

    } while (true);
    //-------------------------------------

    cout << "Enter your password to register:";
    cin >> rPassword;
    while(!password_valid(rPassword)){//!false => true , !true => false
        cout << "Password must be 8 characters" << endl;
        cout << "Re-enter your password :";
        cin >> rPassword;
    }

    UserInfo[userCount].name = rName;
    UserInfo[userCount].email = rEmail;
    UserInfo[userCount].password = rPassword;

    cout << "Register success..." << endl;

    userCount++;
}

void printAllDataFromStruct()
{
    if(userCount == 0){
        cout << "No data" << endl;
    }else{
        for(int i = 0; i<userCount; i++){
            cout << UserInfo[i].Id << " " << UserInfo[i].name << " " << UserInfo[i].email << " " << UserInfo[i].password << endl;
        }
    }
}

bool gmail_valid(string email){
    int atCount = 0;
    int dotCount =-0;
    int indexSave =0;

    for (int i= 0; i< email.length(); i++){
        if(email[i] == ' '){
            return false;
        }else if(email[i] == '@' ){
            atCount++;
            indexSave = i;
            if (atCount != 1){
                return false;
            }
        }
    }

    if(atCount == 0){
        return false;
    }
    string gmailFormat = "gmail.com";
    int gmailFormatCount = 0;
    for(int i= indexSave + 1; i<email.length(); i++){
        if(email[i] != gmailFormat[gmailFormatCount]){
            return false;
        }
        gmailFormatCount++;
    }
    for(int i=0; i < indexSave; i++ ){
        if(!((email[i] >= 'a' && email[i] <= 'z') || (email[i] >= 'A' && email[i] <= 'Z') || (email[i] >= '0' && email[i] <= '9') || (email[i] == '.')) ){
            return false;
        }
    }
    return true;
}

bool password_valid(string password){
    int capCount = 0;
    int smallCount = 0;
    int numCount =0;

   if(password.length() >= 8){
       for(int i=0; i< password.length(); i++){
           if(password[i] >='A' && password[i] <='Z'){
               capCount++;
           }
           if(password[i] >= 'a' && password[i] <= 'z'){
               smallCount++;
           }
           if(password[i] >= '0' && password[i] <= '9'){
               numCount++;
           }
       }
       if(capCount !=0 && smallCount !=0 && numCount !=0){
           return true;
       }else{
           return false;
       }
   }else{
       return false;
   }
}
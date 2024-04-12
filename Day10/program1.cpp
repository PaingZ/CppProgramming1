#include "iostream"
using namespace std;

bool isGmailValid(string gmail);

int main()
{

    string gmail;//char array

    cout << "Enter your gmail ::";
    cin >> gmail;

//    cout << gmail;

//    for(int i = 0; i<gmail.length(); i++){
//        cout << gmail[i] << endl;
//    }

//    if(isGmailValid(gmail)){
//        cout << "Gmail is valid";
//    }else{
//        cout << "Invalid gmail format";
//    }

    return 0;
}

bool isGmailValid(string gmail)
{
    //check white space
    for(int i = 0; i<gmail.length(); i++){
        if(gmail[i] == ' '){
            return false;
        }
    }

    //
}
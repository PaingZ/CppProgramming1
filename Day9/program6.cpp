#include "iostream"
using namespace std;

struct Person{
    int id;
    string name;
    string email;
    string address;
};

bool gmail_validator(string gmail);

int main()
{
    Person person;

    cout << "Enter your name :";
    cin >> person.name;
    do{
        cout << "Enter your email :";
        cin >> person.email;
        if(gmail_validator(person.email)){
            break;
        }else{
            cout << "Invalid format!" << endl;
        }
    }while(true);

    cout << "Enter your address :";
    cin >> person.address;



    return 0;
}

bool gmail_validator(string gmail)
{
    if(gmail == "alex@gmail.com"){
        return true;
    }
    return false;
}
//no whitespace
//one @
//text <-@
//Capital letter or small letter
//number
//.
//@gmail.com
#include <iostream>
using namespace std;

//name, email, address
struct Person{
    string name;
    string email;
    string address;
};

int main()
{

    Person person1;
    Person person2;

    cout << "Enter your name :";
    cin >> person1.name;
    cout << "Enter your email :";
    cin >> person1.email;
    cout << "Enter your address :";
    cin >> person1.address;

    cout << "Enter your name :";
    cin >> person2.name;
    cout << "Enter your email :";
    cin >> person2.email;
    cout << "Enter your address :";
    cin >> person2.address;



    return 0;
}
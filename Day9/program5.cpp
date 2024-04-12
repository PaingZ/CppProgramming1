#include <iostream>
using namespace std;

//name, email, address
struct Person{
    int id;
    string name;
    string email;
    string address;
};

int main()
{

    Person people[100];

    //person1
    people[0].id = 1001;
    people[0].name = "Alex";
    people[0].email = "alex@gmail.com";
    people[0].address = "NY";

    //person2
    people[1].id = 1002;
    people[1].name = "Bob";
    people[1].email = "bob@gmail.com";
    people[1].address = "Cali";


    return 0;
}
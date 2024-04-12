#include <iostream>
using namespace std;
int main()
{

    string name;

    cout << "Enter your name :";
//    cin >> name;
    getline(cin >> ws, name);
    cout << "Welcome " << name <<endl;

    return 0;
}
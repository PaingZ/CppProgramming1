#include "iostream"
using namespace std;

int main()
{

    int number = 10;
    int* ptr;
    ptr = &number;

//    cout << ptr << endl;
//    cout << *ptr << endl;

    cout << number << endl;
//    number = 20;
    *ptr = 30;// reference data types
    cout << number << endl;



    return 0;
}
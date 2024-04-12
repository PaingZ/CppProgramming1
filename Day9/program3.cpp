#include "iostream"
using namespace std;

int main()
{

    struct Data{
        int iNum;
        float fNum;
    };

//    int a;
//    cout << "Enter number : ";
//    cin >> a;
//
//    cout << "The number you provided is " << a;

    Data var;
    cout << "Enter integer number :";
    cin >> var.iNum;
    cout << "Enter float number :";
    cin >> var.fNum;

    cout << "iNum is " << var.iNum << ": fNum is " << var.fNum << endl;


    return 0;
}
#include "iostream"
using namespace std;

int main()
{

    int a = 20;
    int* ptr;
    //store address of another variable
    ptr = &a;

    cout << ptr << endl;
    cout << *ptr << endl;


    return 0;
}
#include "iostream"
using namespace std;

int main()
{

    int a = 10;
    int* ptr;
    ptr = &a;//0xffee324
    *ptr = 50;

    cout << a << endl;

    return 0;
}
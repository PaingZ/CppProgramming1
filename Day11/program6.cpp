#include "iostream"
using namespace std;

void swapPBV(int a, int b);
void swapPBR(int* a, int* b);

int sum(int a, int b);

void increment(int* a){
    *a += 1;
}

int main()
{
    int a = 10;
    increment(&a);
    cout << a << endl;
    int b = 20;

    cout << "Before Swapping" << endl;
    cout << "a = " << a << " and " << "b = " << b << endl;

    //pass by value
//    swapPBV(a, b);

    //pass by reference
    swapPBR(&a, &b);

    cout << "After Swapping" << endl;
    cout << "a = " << a << " and " << "b = " << b << endl;


    return 0;
}

void swapPBV(int a, int b)
{
    int temp = b;
    b = a;
    a = temp;

}

void swapPBR(int* a, int* b)
{

    int temp = *b;
    *b = *a;
    *a = temp;

}
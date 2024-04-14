#include "iostream"
using namespace std;
int main()
{

    int a = 10;
    char ch = 'a';
    int* number;
    number = &a;

    cout << number << endl;
    cout << *number << endl;

    return 0;
}
#include "iostream"
using namespace std;

int main()
{

    int num = 0;
    int num2 = 0;

    cout << "Enter number : "; cin >> num;

    while(num != 0){
        num2 = num%10;
        num /= 10;
    }

    cout << num2;

    return 0;
}
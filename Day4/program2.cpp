#include "iostream"
using namespace std;
/*
 * 123/10 => 12
 * 12/10 => 1
 * 1/10 => 0
 */
int main()
{

    int number = 0;
    int count = 0;
    cout << "Enter number : "; cin >> number;

    while(number != 0){
        //<operand><operator>
        count++;
        number /= 10;
    }

    cout << "Digit count : " << count << endl;

    return 0;
}
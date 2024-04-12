#include "iostream"
using namespace std;

//function declaration
int sum(int a, int b);

int main()
{
    int num1 = 50;
    int num2 = 60;
    int result = sum(num1, num2);
    cout << result;

    return 0;
}

//function definition
int sum(int a, int b){
    return a + b;
}
#include "iostream"
using namespace std;

//return functions
//int, float, bool, char, string

struct Data{
    int numberCount;
    int number[50];
};

Data sum();
int test();

int main()
{
//    Data result1 = sum();
//    cout << result1.number << endl;
//    cout << sum().number[0] << endl;
//    cout << sum().number[1] << endl;
//    cout << sum().number[2] << endl;

    for(int i = 0; i<sum().numberCount; i++){
        cout << sum().number[i] << endl;
    }

//    int result2 = test();
//    cout << result2;//20
//    cout << test();

    return 0;
}

Data sum()
{
   Data data;
   data.number[0] = 10;
   data.number[1] = 20;
   data.number[2] = 30;
   data.numberCount = 3;
   return data;
}

int test()
{
    int number;
    number = 20;
    return number;
}
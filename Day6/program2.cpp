#include "iostream"
using namespace std;

int main()
{

    //static type programming language
//    int number = 10,20,30;
    int number = 10;
    //array initalization
    int  number_arr[50] = {10,20,30};

//      cout << number_arr[0] << " ";
//      cout << number_arr[1] << " ";
//      cout << number_arr[2];

    for(int i = 0; i<3; i++){
        cout << number_arr[i] << " ";
    }

    return 0;
}
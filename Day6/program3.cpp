#include "iostream"
using namespace std;

int main()
{

    //array declaration
    int number_arr[50];
    int size = 0;

    cout << "Enter size : "; cin >> size;

    for(int i = 0; i<size; i++){
        cout << "Enter the value of arr index " << i << " :";
        cin >> number_arr[i];
    }

    for(int i = 0; i<size; i++){
        cout << number_arr[i] << " ";
    }

    return 0;
}
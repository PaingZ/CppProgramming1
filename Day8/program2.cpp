//Linear Search Algorithm
#include "iostream"
using namespace std;

int main()
{

    int number_arr[] = {10,20,30,40,50,60,70,80,90};

    int key = 0;
    cout << "Enter key to search :";
    cin >> key;

    bool flag = false;
    for(int i = 0; i<9; i++){
        if(key == number_arr[i]){
            flag = true;
            break;
        }
    }

    if(flag){
        cout << "Key found at array";
    }else{
        cout << "Key not found";
    }

    return 0;
}
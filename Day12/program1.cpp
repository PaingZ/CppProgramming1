#include "iostream"
using namespace std;

int main()
{

    char c;
    cout << "Enter character :";
    cin >> c;

    //a - z
    if(c >= 'a' && c <= 'z'){
        cout << "small letter";
    }else{
        cout << "Invalid";
    }

    return 0;
}
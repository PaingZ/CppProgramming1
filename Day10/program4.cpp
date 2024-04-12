#include "iostream"
#include "fstream"
using namespace std;

int main()
{

    fstream fileReader;
    fileReader.open("data.txt", fstream::in);

    if(!fileReader){
        cout << "File can't read";
    }else{
        string str;
        while(fileReader >> str){
            cout << str;
        }
    }

    return 0;
}
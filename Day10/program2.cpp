#include "iostream"
#include "fstream"
using namespace std;

int main()
{

    //file handling
    //file read, file write
    fstream fileReader;//variable declaration
    //<data type> <variable name or identifier>
    fileReader.open("data.txt", fstream::in);

    if(!fileReader){
        cout << "File can't read" << endl;
    }else{
        // char ch;
        // fileReader >> ch;
        // while(true){
        //     if(fileReader){//end of file
        //         break;
        //     }
        //     cout << ch;
        //     fileReader >> ch;
        // }

        char ch;
        while(fileReader >> ch){
            cout << ch;
        }
    }




    return 0;
}
#include "iostream"
#include "fstream"
using namespace std;

int main()
{

    fstream fileWriter;
    fileWriter.open("test.txt", fstream::out);

    if(!fileWriter){
        cout << "File can't write" << endl;
    } else{
        fileWriter << "This is testing";
    }

    return 0;
}
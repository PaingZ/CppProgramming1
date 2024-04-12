#include "iostream"
using namespace std;

int main()
{

    //int, float, double, char, string, bool
    //array
    //custom datatype structure
    struct Data{
        int iNum;
        float fNum;
    };

    int num = 10;
    cout << "Num: " << num << endl;

    Data var1 = {10, 3.14};
    cout << "var1 : " << var1.iNum << " " << var1.fNum << endl;

    return 0;
}
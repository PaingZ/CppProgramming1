#include "iostream"
using namespace std;

//function declaration
//<return type> <function_name>
//<data type>
void hello();

int main()
{

    hello();
    hello();

    return 0;
}

//function definition
void hello(){
    cout << "Hello C++" << endl;
}
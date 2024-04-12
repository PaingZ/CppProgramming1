#include<iostream>
using namespace std;

class  Shape{//parent
    //encasplation
    //access modifier
    //public, private, protected
    //coupling
private:
    int number1 = 10;

protected:
    int number2 = 20;

public:
    int number3 = 30;
};

class Test:Shape{//child
public:
    void test_method(){

    }
};

int main(){

    //object instantiate
//    int number = 10;
    Shape* var_name = new Shape();

    cout<<var_name->number3;



    return 0;
}
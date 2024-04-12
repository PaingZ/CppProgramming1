#include "iostream"
using namespace std;

int main()
{
    int userId[50] = {1,2,3,4,5};
    int userCount = 5;
    string name[50] = {"Alex", "Bob", "Cara", "David", "Emily"};

    cout << "Before update" << endl;
    for(int i = 0; i<userCount; i++){
        cout << userId[i] << " " << name[i] << endl;
    }

    int id;

    int userIndex = -1;

    do{
        cout << "Enter id to update :";
        cin >> id;//2


        for(int i = 0; i<userCount; i++){
            if(id == userId[i]){
                userIndex = i;
                break;
            }
        }

        if(userIndex == -1){
            cout << "Try again" << endl;
        }else{
            break;
        }
    }while(true);

    cout << "Enter name to update :";
    cin >> name[userIndex];


    cout << "After update" << endl;
    for(int i = 0; i<userCount; i++){
        cout << userId[i] << " " << name[i] << endl;
    }

    return 0;
}
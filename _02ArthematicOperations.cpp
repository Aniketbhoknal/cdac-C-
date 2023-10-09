#include <iostream>
using namespace std;

int main(){
    int no1,no2,choice;
    cout<<"Enter Numbers: ";
    cin>>no1>>no2;
    cout<<"Enter Your Choice: ";
    cout<<"1:Addition\t2:Substraction\t3:Multiplication\t4:Division\n";
    cin>>choice;
    
    switch (choice){
        case 1:
            cout<<"Addition is: "<<(no1+no2);
            break;
        case 2:
            cout<<"Substraction is: "<<(no1-no2);
            break;
        case 3:
            cout<<"Multiplication is: "<<(no1*no2);
            break;
        case 4:
            cout<<"Divion is: "<<(no1/no2);
            break;
        default:
            cout<<"Invalid Input";           
    }
    return 0;
}
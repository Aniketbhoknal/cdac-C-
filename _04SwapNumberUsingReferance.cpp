#include <iostream>
using namespace std;
void swap(int &, int &);
int main(){
    int num1 = 10, num2 = 30;
    cout<<"num1: "<<num1<<"\tnum2: "<<num2<<"\n";
    swap(num1,num2);
    cout<<"num1: "<<num1<<"\tnum2: "<<num2;

    return 0;
}

void swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}
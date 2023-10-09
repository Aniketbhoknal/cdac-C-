#include <iostream>
using namespace std;
void calculate(int &, int &, int &, int &);
int main(){
    int num1,num2,sum,product;
    cout<<"Enter Two Numbers: \t";
    cin>>num1>>num2;

    calculate(num1,num2,sum,product);

    cout<<"Sum Of Numbers is: "<<sum<<"\nProduct Of Numbers is: "<<product;
    return 0;
}
void calculate(int &a, int &b, int &s, int &p){
    s = a + b;
    p = a * b;
}

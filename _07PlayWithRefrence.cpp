#include <iostream>
using namespace std;


int main(){
    int num = 10;
    int &a = num;

    //reference to reference
    int &b = a;
    b = 40;
    cout<<num<<" "<<a<<" "<<b;
    return 0;

// //following two are not valid
//     //pointer to reference
//     int *p;
//     p = b;

//     //reference to pointer
//     int &b = p;
}
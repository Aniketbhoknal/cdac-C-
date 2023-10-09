#include <iostream>
using namespace std;
int reverse(int);
int main(){
    int num ;
    cout<<"Enter The Number: ";
    cin>>num;
    cout<<"The Reversed Number is: "<<reverse(num);
    return 0;
}
int ans = 0;
int reverse(int num){    
    if(num == 0){
        return 0;
    }
    int mod = num % 10;
    ans = (ans * 10) + mod;
    reverse(num/10);
    return ans;
    
}
#include <iostream>
using namespace std;
int isPrime(int);
int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    int ans = isPrime(num);
    if(ans == 1){
        cout<<"The Number "<<num<<" is Prime Number";
    }else{
        cout<<"The Number "<<num<<" is NOT Prime Number";
    }
    return 0;
}

int isPrime(int num){
    int status = 1;
    for(int i = 2; i <= num/2 ; i++){
        if(num % i == 0){
            status = 0;
            break;
        }
    }
    if(status){
        return 1;
    }else{
        return 0;
    }
}
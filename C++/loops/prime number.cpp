#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    bool isPrime=true;
    
    if(n<=1){
        isPrime=false;
        return 0;
    }
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    
    if(isPrime){
        cout<<"Prime number";
    }
    else{
        cout<<"Not prime number";
    }
}

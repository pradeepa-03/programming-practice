#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int original=n;
    
    int sum=0;
    
    while(n>0){
        int digit=n%10;
        
        long long fact=1;
        
        for(int i=1;i<=digit;i++){
            fact=fact*i;
        }
        n=n/10;
        
        sum=sum+fact;
    }
    
    if(sum==original){
        cout<<"Strong number";
    }
    else{
        cout<<"Not strong number";
    }
}

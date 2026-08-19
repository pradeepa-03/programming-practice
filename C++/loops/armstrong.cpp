#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int original=n;
    int count=0;
    
    while(n>0){
        count++;
        n=n/10;
    }
    
    n=original;
    int sum=0;
    
    while(n>0){
        int digit=n%10;
        sum+=pow(digit,count);
        n=n/10;
    }
    
    if(sum==original){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not Armstrong ";
    }
}

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    
    int lcm;
    
    for(int i=1;i<a*b;i++){
        if(i%a==0 && i%b==0){
            lcm=i;
        }
    }
    cout<<lcm;
}

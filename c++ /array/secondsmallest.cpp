#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int smallest=INT_MAX;
    int secondsmallest=INT_MAX;
    
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            secondsmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<secondsmallest&& arr[i]!=smallest){
            secondsmallest=arr[i];
        }
    }
    cout<<secondsmallest;
}

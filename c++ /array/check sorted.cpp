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
    
    bool sorted=true;
    
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            sorted=false;
            break;
        }
    }
    
    if(sorted){
        cout<<"Element is sorted";
    }
    else{
        cout<<"Element is not found";
    }
}

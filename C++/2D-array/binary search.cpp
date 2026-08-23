#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    int arr[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    bool found=false;
    
    int target;
    cin>>target;
    
    int low=0;
    int high=n-1;
    
    while(low<=high){
        int mid=low+(high-low)/2;
        
        int row=mid/m;
        int col=mid%m;
        
        if(arr[row][col]==target){
            found=true;
            break;
        }
        else if(arr[row][col]<target){
            low=mid-1;
        }
        else{
            high=mid+1;
        }
    }
    
    if(found){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}

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
    
    int even=0;
    int odd=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
    }
    
    cout<<"Even count: "<<even<<endl;
    cout<<"Odd count: "<<odd;
}

#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    
    int freq[256]={0};
    
    for(int i=0;i<str.length();i++){
        freq[str[i]]++;
    }
    
    for(int i=0;i<str.length();i++){
        bool alreadyPrinted=false;
        
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
            alreadyPrinted=true;
            break;
          }
        }
        if(!alreadyPrinted){
            cout<<str[i]<<": "<<freq[str[i]]<<endl;
        }
    }
}

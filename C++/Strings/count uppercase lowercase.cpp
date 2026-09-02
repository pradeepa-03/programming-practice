#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    
    int uppercase=0;
    int lowercase=0;
    
    for(int i=0;i<=str.length();i++){
        char ch=str[i];
        
        if(ch>='A' && ch<='Z'){
            uppercase++;
        }
        else if(ch>='a' && ch<='z'){
            lowercase++;
        }
    }
    
    cout<<"Upper Case: "<<uppercase<<endl;
    cout<<"Lower Case: "<<lowercase;
}

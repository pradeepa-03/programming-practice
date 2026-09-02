#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    
    int word=0;
    
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '&&(i==0||str[i-1]==' ')){
            word++;
        }
    }
    cout<<word;
}

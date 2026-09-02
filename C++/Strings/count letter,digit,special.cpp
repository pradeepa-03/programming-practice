#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    
    int letter=0;
    int digit=0;
    int special=0;
    
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        
        if(ch>='a'&& ch<='z'||ch>='A'&&ch<='Z'){
            letter++;
        }
        else if(ch>='0' && ch<='9'){
            digit++;
        }
        else{
            special++;
        }
    }
    cout<<"Letters: "<<letter<<endl;
    cout<<"Digits: "<<digit<<endl;
    cout<<"Special character: "<<special;
}

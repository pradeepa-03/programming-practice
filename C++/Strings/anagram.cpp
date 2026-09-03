#include<iostream>
using namespace std;

int main(){
    string str1;
    getline(cin,str1);
    
    string str2;
    getline(cin,str2);
    
    if(str1.length()!=str2.length()){
        cout<<"Not Anagram";
        return 0;
    }
    
    int freq1[256]={0};
    int freq2[256]={0};
    
    for(int i=0;i<str1.length();i++){
        freq1[str1[i]]++;
    }
    
    for(int i=0;i<str2.length();i++){
        freq2[str2[i]]++;
    }
    
    for(int i=0;i<256;i++){
        if(freq1[i]!=freq2[i]){
            cout<<"Not Anagram"<<endl;
            return 0;
        }
    }
    cout<<"Anagram";
}

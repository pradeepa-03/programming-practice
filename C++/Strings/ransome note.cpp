#include<iostream>
using namespace std;

int main(){
    string ransomNote,magazine;
    cin>>ransomNote;
    cin>>magazine;
    
    int freq[256]={0};
    
    for(int i=0;i<magazine.length();i++){
        freq[magazine[i]]++;
    }
    
    for(int i=0;i<ransomNote.length();i++){
        if(freq[ransomNote[i]]==0){
            cout<<"False";
            return 0;
        }
        freq[ransomNote[i]]--;
    }
    
    cout<<"true";
}

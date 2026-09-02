#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    
    int start=0;
    int end=str.length()-1;
    
    bool isPalindrome=true;
    
    while(start<end){
        if(str[start]!=str[end]){
            isPalindrome=false;
            break;
        }
        
        start++;
        end--;
    }
    
    if(isPalindrome){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
}

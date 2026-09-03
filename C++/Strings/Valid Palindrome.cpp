#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    
    int start=0;
    int end=str.length()-1;
    
    bool isPalindrome=false;
    
    while(start<end){
        
        while(start<end && !isalnum(str[start])){
            start++;
        }
        while(start<end && !isalnum(str[end])){
            end--;
        }
        
        if(tolower(str[start])!=tolower(str[end])){
            isPalindrome=true;
            break;
        }
        start++;
        end--;
    }
    
    if(isPalindrome){
        cout<<"Paindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}

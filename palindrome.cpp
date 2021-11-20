// Palindrome -- day 03 
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    int len, flag = 1;
    cout<<"Enter a string to Check whether it is palindrome or not ?"<<endl;
    cin>>str;
    len = str.size();
    cout<<"The length of the given string"<<" = "<<len<<endl;
    for(int i= 0;i<len;i++){
        if(str[i]!=str[len-i-1]){
            flag = 0;
            break;
        }
       }
        if(flag == 0){
            cout<<"The given string is not a palindrome"<<endl;
        }
        else{
            cout<<"The given string "<<str<<" "<<"is a palindrome"<<endl;
        }
        return 0;
}

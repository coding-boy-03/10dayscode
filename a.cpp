//10 days of code
//Program to find the frequency of given integer
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main (){
string num ;
char tar_dig ;
    cout<<"Enter the integer ?"<<endl;
cin>> num;
    cout<<"Enter the Target digit to be counted ?"<<endl;
cin>> tar_dig;
int n = num.size();
cout<<"The of the given integer is = "<<n<<endl;
int count =0;
    for(int i=0;i<n;i++)
    {
        if( num[i] == tar_dig) 
        {
            count++;
        }
    }
    cout<<"The frequency of digit is "<<endl;
    cout<<count;
    return 0;
}
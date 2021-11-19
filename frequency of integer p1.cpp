//10 days of code
#include<iostream>
using namespace std;
int main (){
int n;
cout<<"Enter the number of digits "<<endl;
cin>>n;
int num[n];
  int  tar_dig ;
    cout<<"Enter the integer ?"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    cout<<"Enter the Target digit to be counted ?"<<endl;
cin>> tar_dig;
int count =0;
    for(int i=0;i<n;i++)
    {
        if (num[i] == tar_dig ) 
        {
            count++;
        }
    }
    cout<<"The frequency of digit is "<<endl;
    cout<<count;
    return 0;
}

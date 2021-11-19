#include<iostream>
using namespace std;
int main(){
    int n,arr[n];
    cout<<"Enter the number of integer in array"<<endl;
    cin>>n;
    cout<<"Enter the elemnts of array"<<endl;
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"The reverse order of the given array is "<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//10  days of code 
//find the Key element and print it's index value
#include<iostream>
using namespace std;
int key_sch(int arr[],int n,int i, int key ){

    if(i == n){
        return -1;
    }
    if(arr[i]==key){
      cout<<"The indicies of Key element is "<<endl;
        return i;
    }
    return key_sch(arr,n,i+1,key);

}
int main(){
    int n;
    int arr[n],key;
    cout<<"Enter the number of elements in an array?"<<endl;
    cin>>n;
    cout<<"Type the array elemnts?"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"The elements that you have enter are"<<endl;
    for(int i=0;i<n;i++){
     
      cout<<arr[i]<<" ";
    }
    cout<<"\nPress the key element to be searched??"<<endl;
    cin>>key;
    cout<<key_sch(arr,n,0,key);
    return 0;
}

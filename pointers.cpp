#include<iostream>
using namespace std;
int main(){
    int arr[2][2]={1,2,3,4};
    int *p;
 // p=&arr;  this is invalid we can't  do this
 // p=arr;  this is also invalid we can't  do this
    p=arr[0];  //this is valid
    cout<<"Gives base address of arr: "<<p<<endl;
    cout<<"Gives base address value of arr: "<<*p<<endl;
    cout<<"Gives base address of arr: "<<&p<<endl;
    cout<<"Gives base address of arr: "<<arr<<endl;
    cout<<"Gives base address of arr: "<<*arr<<endl;
    cout<<"Gives base address of arr: "<<&arr<<endl;
    return 0;
}
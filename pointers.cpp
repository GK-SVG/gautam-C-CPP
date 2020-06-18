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
    cout<<"Gives address of pointer: "<<&p<<endl;
    cout<<"Gives base address of arr: "<<arr<<endl;
    cout<<"Gives base address of arr: "<<*arr<<endl;
    cout<<"Gives base address of arr: "<<&arr<<endl;

    //--------------------------1d dynamic array---------------------------
    int n;
    cin>>n;
    int *num;
    cout<<num<<endl;
    num = new int[n];
    cout<<num<<endl;
    for (int i = 0; i < n; i++){
        cin>>num[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<&num[i]<<'\t';
    }
    cout<<endl;

    //--------------------------2d dynamic array--------------------------
    int count;
    cin>>count;
    int **num1;
    num1=new int*[n];
    cout<<num1<<endl;
    for (int i = 0; i < count; i++)
    {
        /* code */
        num1[i]=new int[n];
        cout<<num1[i]<<"\t";
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < count; j++)
        {
            /* code */
            cin>>num1[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < count; j++)
        {
            /* code */
            cout<<&num1[i][j]<<"\t";
        }
        
    }
    cout<<endl;
    delete[] num;
    delete[] num1;
    return 0;
}
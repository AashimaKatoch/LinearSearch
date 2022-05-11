#include<iostream>
using namespace std;

int linear(int arr[],int n,int key)
{
    for(int i =0;i<=n;i++)
    {
        if(arr[i]==key)
    
            return i+1;
    }

    return -1;
}


int main()
{
    int arr[5]={1,2,3,4,5};
    

    cout<<"Found at position : "<<linear(arr,5,2);
    return 0;
}
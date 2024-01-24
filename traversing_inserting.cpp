#include<iostream>
using namespace std;

void input(int arr[],int n)
{
    cout<<"Input array =";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void display(int arr[],int n)
{
    cout<<"Output =";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}

int insertion(int arr[],int size,int element,int capacity,int index)
{
    if(size>=capacity)
    {
        return -1;
    }

    for(int i = size-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }

    arr[index] =element;

    return 1 ;
}





int main()
{
    int arr[100];
    int size,element,index;

    cout<<"Size=";
    cin>>size;

    cout<<"Element=";
    cin>>element;

    cout<<"Index=";
    cin>>index;

    input(arr,size);
    display(arr,size);

    insertion(arr,size,element,100,index);
    size=size+1;

    display(arr,size);
}

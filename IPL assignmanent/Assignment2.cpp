#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];
    //Take an input of the size from the user of the array and then take the input of the elements in the array.

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Elements-"<<i+1<<"=";
        cin>>arr[i];
    }
    //1.Print the elements of the array you have entered

    for(int i=0;i<n;i++)
    {
        cout<<" Elements are-"<<i+1<<"=";
        cout<<arr[i]<<endl;
    }
    //Print the elements in reverse order

    for (int i=n-1; i>=0; i--)
    {
        cout<<"Elements are reverse order:"<<i+1<<"=";
        cout<<arr[i]<<endl;
    }


}



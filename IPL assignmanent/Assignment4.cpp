#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array size:";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter number-"<<i+1<<":";
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<"Evan "<<i+1<<":"<<arr[i]<<endl;

        }
        else{
            cout<<"odd "<<i+1<<":"<<arr[i]<<endl;
        }
    }
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2)
        {
           even++;
        }

        else{
            odd++;
        }
    }
    cout<<"Total Number of Even Numbers = "<<even<<endl;
    cout<<"Total Number of Odd Numbers = "<<odd<<endl;
}

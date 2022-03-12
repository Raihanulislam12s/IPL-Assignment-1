#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of Matches: ";
    cin>>n;

    int sum=0;
    int matches[n];
    for(int i=0;i<n;i++)
    {
        //The input of runs
        cout<<"Matches Number"<<"("<<i+1<<")"<<"=";
        cin>>matches[i];
        sum=sum+matches[i];
    }
    //Total number:
    cout<<"Total Run:"<<sum<<endl;

    //Average:
    float avg=(float)sum/n;
    cout<<"Average: "<<avg<<endl;

    //Even And Odd
     for(int i=0;i<n;i++){
        if(matches[i]%2==0)
           {
                cout<<"Even:"<<matches[i]<<endl;
            }
        else
            {
                cout<<"Odd:"<<matches[i]<<endl;
            }


    }
    return 0;

}

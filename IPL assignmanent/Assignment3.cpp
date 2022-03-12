#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[9] = { 12,18,19,15,3,17,21,31,23 };

   int min=arr[0];
    for (int i=1; i<9 ; i++)
    {
        if (arr[i]< min)
        {
            min = arr[i];
        }
    }

    cout << "The min element is " << min <<endl;


    return 0;
}

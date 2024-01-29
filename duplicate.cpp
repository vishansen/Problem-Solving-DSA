#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,2,3,4,4,5,5};
    
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[j];
            }
        }
    }

    return 0;
}

1)

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


===========================================
2)

#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,2,3,4,4,5,5};
    
    for(int i=0;i<8;i++)
    {
        if(arr[i]==-1) continue;
        for(int j=i+1;j<8;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=-1;
            }
        }
        cout<<arr[i];
    }
    

    return 0;
}

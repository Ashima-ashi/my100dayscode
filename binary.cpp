#include <iostream>
using namespace std;
int binary(int arr[], int size, int key)
{
    int start=0;
    int end = size-1;
    int mid = (start+end)/2;
    while (start<=end)
    {
        /* code */
        if (arr[mid]== key)
        {
            /* code */
            return mid;
        }
        // move to right part
        else if (key>mid)
        {
            /* code */
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid=(start+end)/2;
        
        
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int even[6]={1,2,3,4,5,6};
    int odd[5]={3,8,11,14,16};
    int index= binary(even,6,12);
    cout<<"index of 5 is :"<<index<<endl;
    return 0;
}

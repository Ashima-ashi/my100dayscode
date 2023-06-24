#include <iostream>
using namespace std;
int max(int arr[3])
{
    int sum = arr[0]+arr[1];
	int sum1= arr[0]+arr[2];
	int sum2= arr[1]+arr[2];
	if(sum>sum1)
	{
	    if(sum>sum2)
	    {
	        cout<<sum;
	    }
	    else{
	        cout<<sum2;
	    }
	}
	else{
	    if(sum1>sum2)
	    {
	        cout<<sum1;
	    }
	    else
	    {
	        cout<<sum2;
	    }
	}
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	int arr[3];
	for(int i=0;i<t;i++)
	{
	    for(int j=0;j<3;j++)
	    {
	      cin>>arr[j];  
	    }
	    max(arr);
	    
	    
	}
	
	return 0;
}

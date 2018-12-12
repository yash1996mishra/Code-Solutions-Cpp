#include <iostream>
#include <string>

using namespace std;

string evenodd(int a[],int right)
{
    // we need to check the last digit only, as for binary last digit 
    //determines odd or even.
    if(a[right-1]==1)
    {
        return "ODD";
    }
    return "EVEN";
}

int main() {
	
	int size,query,i;
	cin >> size >> query;
	
	//declaring array and taking input;
	int arr[size];
	
	for(i=0;i<size;i++)
	{
	    cin >> arr[i];
	}
	
	
	
	for(i=0;i<query;i++)
	{
	    int firstbit,flipbit,leftbit,rightbit;
	    cin >> firstbit;
	    
	    //if bit is 1, then we flip.
	    if(firstbit==1)
	    {
	        cin >> flipbit;
	        
	        if(arr[flipbit-1]==1)
	        {
	            //1 based indexing is used, so they refer a[0] as 1 numbered position.
	            arr[flipbit-1] = 0;
	        }
	        else
	        {
	            arr[flipbit-1] = 1;
	        }
	    }
	    else
	    {
	        cin >> leftbit >> rightbit;
	        //call checker function
	        cout << evenodd(arr,rightbit) << endl;
	    }
	}
	return 0;
}


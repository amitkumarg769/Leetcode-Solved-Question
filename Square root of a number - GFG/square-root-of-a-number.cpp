//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        int s=1;
        int e=x;
         int ans;
        while(s<=e){
            long long int mid= s+(e-s)/2;
            long long int ans=mid*mid;
            if(ans==x)
            return mid;
            else if(ans<x){
                ans=mid;
           s=mid+1;
            
            }
            else
            e=mid-1;
        }
        return s-1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends
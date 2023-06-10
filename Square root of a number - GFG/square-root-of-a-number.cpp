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
         long long int ans;
         int temp;
        while(s<=e){
            long long int mid= s+(e-s)/2;
             ans=mid*mid;
            if(ans==x)
            return mid;
            else if(ans<x){
             temp =mid;  
           s=mid+1;
            
            }
            else
            e=mid-1;
        }
        return temp;
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
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
         bool c= false;
        for(int i=0;i<n;i++){
            if(arr[i]>0) c=true;
        }
        if(c==false){
            int m=INT_MIN;
               for(int i=0;i<n;i++){
                 if(arr[i]>m) m=arr[i];
               }
               return m;
        }
        int sum=0,msum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            msum=max(sum,msum);
            if(sum<0) sum=0;
        }
        return msum;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
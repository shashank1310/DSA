//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

    // Function to find the trapped water between the blocks.
  public:
   long long approach_preprocessing(vector<int> &  arr ){
        int N = arr.size(); 
        int left[N],right[N]; 
        left[0]= arr[0]; 
        right[N-1]=arr[N-1]; 
        for(int i=1; i<N ; i++ ){
            
            left[i]=max(arr[i], left[i-1]);
            right[N-i-1]=max(right[N-i], arr[N-i-1]); 
        
        }
       /* for(int i =0 ; i< N ; i++){
            cout << left[i] << " "; 
        }
        cout << endl ;
        for(int i =0 ; i< N ; i++){
            cout << right[i] << " "; 
        }
        cout << endl ;
        */
        long long trapped_water =0 ; 
        for(int i =0 ; i< N ; i++ ){
            trapped_water+= min(left[i], right[i]) -arr[i];
        }
        return trapped_water;


    }

    long long approach_twoPointer(vector<int> &arr){
        int N = arr.size(); 
        int left=0 , right = N-1 ; 
        int leftmax=0, rightMax=0;
        long long  trapped_water=0 ;
        while(left<right){
            if(leftmax<=rightMax){
                if(leftmax<arr[left]){
                    leftmax=arr[left];
                }
                trapped_water+=leftmax-arr[left]>0?leftmax-arr[left]:0;
                left++;

            }else{
                  if(rightMax<arr[right]){
                    rightMax=arr[right];
                }
                trapped_water+=rightMax-arr[right]>0?rightMax-arr[right]:0;
                right--;

            }

        }
        return trapped_water;
    }
    
    long long trappingWater(vector<int> &arr) {
        
        return approach_preprocessing(arr);
        
        // code here
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    // testcases
    cin >> t;

    while (t--) {
        int n;

        // size of array
        cin >> n;

        vector<int> a(n);

        // adding elements to the array
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution obj;
        // calling trappingWater() function
        cout << obj.trappingWater(a) << endl;
    }

    return 0;
}
// } Driver Code Ends
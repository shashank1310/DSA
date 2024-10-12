// https://www.geeksforgeeks.org/chocolate-distribution-problem/
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
 
    sort(a.begin() , a.end());                  // First Sort
    
    long long ans=0;                           // To Store Ans
    long long i=0 , mini=INT_MAX;    // mini to Store Min Value 
    
    // The Game Begins...
 
    while(m-1<=n-1){
        
            mini = min(mini,a[m-1]-a[i]);
            i++;
            m++;
    }
    
    return mini;
    }   
};
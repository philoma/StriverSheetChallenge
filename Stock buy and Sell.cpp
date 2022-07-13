//naive, TLE

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &a){
    // Write your code here.
    int n=a.size();
    int s=0,maxi=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            s=a[j]-a[i];
            maxi=max(maxi,s);
        }
    }
    return maxi;
}


//optimized
class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n=a.size();
        int mini=INT_MAX,profit=0;
        for(int i=0;i<n;i++){
            mini=min(a[i],mini);
            profit=max(profit,a[i]-mini);
        }
        return profit;
        
    }
};

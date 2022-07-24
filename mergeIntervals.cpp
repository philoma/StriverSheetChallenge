class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>&a) {
        vector<vector<int>>ans;
        if(a.size()==0) return ans;
        
        
        sort(a.begin(), a.end());
        vector<int>temp=a[0]; //1st vector of size 2 ,  put to test
        
        for(auto it:a){
            if(it[0]<=temp[1]){
                temp[1]=max(it[1],temp[1]);
            }else{
                ans.push_back(temp);
                temp=it;
            }
        }
        
        ans.push_back(temp);
        return ans;
  link: https://leetcode.com/problems/merge-intervals/submissions/      
    }
    
};

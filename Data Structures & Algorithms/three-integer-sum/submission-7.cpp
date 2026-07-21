class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res; //empty set called res
        sort(nums.begin(),nums.end()); //sorting array
        for(int i=0;i<nums.size();i++){ //3 for loops where i<j<k
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]+nums[j]+nums[k]==0){ //the condition to check
                        res.insert({nums[i],nums[j],nums[k]});// insert({to initialize a list})
                    }
                }            
            }
        }
        return vector<vector<int>>(res.begin(),res.end());//vector constructor calls this constructor:vector(first_iterator, last_iterator)
    }
};

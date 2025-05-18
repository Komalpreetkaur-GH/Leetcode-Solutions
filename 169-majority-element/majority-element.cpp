class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int> freq;

       for(int val:nums){
            freq[val]++;
            if(freq[val]>nums.size()/2){

                return val;
            }
        }
       
        return -1;
        
    }
};
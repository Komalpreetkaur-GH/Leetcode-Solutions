class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //1. BRUTEFORCE:
        // vector <int>res;
        // int size=nums.size();
        // for(int i=0;i<size;i++){
        //     for(int j=i+1;j<size;j++){
        //         if(nums[i]+nums[j]==target){
        //             res.push_back(i);
        //             res.push_back(j);

        //         }
        //     }

        // }
        // return res;

        //2. FIXING ONE AND TARGET-NO:

    //     int size=nums.size();
    //     int fix;
    //     for(int i=0;i<size;i++){
    //         fix=target-nums[i];
    //         for(int j=i+1;j<size;j++){
    //             if(nums[j]==fix){
    //                 return {i,j};
    //             }
            

            
    //         }
    //     }

    // return {};

    //USING MAP:

    unordered_map<int,int> map;
    int s=nums.size();

    for(int i=0;i<s;i++){
        int c=target-nums[i];
        if(map.find(c)!=map.end()){
            return {map[c],i};
        }
        map[nums[i]]=i;
    }
    return {};
        
    }
};
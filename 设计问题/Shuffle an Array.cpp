class Solution {
private:
    vector<int> num;
public:
    Solution(vector<int> nums) {
        num = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return num;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> nums = num;
        vector<int> shuffleVec;
        vector<int>::iterator pos = nums.begin();
        while(!nums.empty()){
            int t = rand() % nums.size();		//产生一个在nums.size之内的随机数
            shuffleVec.push_back(nums[t]);
            nums.erase(pos + t);
        }
        return shuffleVec;
    }
};

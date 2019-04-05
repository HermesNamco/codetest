class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        uint32_t one = 1;
        for(int i = 0;i < 32;++ i){
            if((n >> i) & one == 1)   	//拿n中的各位与32位的1按位与
                ++ result;
        }
        return result;
    }
};
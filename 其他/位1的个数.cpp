class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        uint32_t one = 1;
        for(int i = 0;i < 32;++ i){
            if((n >> i) & one == 1)   	//��n�еĸ�λ��32λ��1��λ��
                ++ result;
        }
        return result;
    }
};
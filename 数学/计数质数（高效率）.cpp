class Solution {
public:
    int countPrimes(int n) {
        vector<bool> result(n , true);		//高内存消耗，空间换时间
        vector<bool>::iterator pos = result.begin();
        int counter = -2;
        int helpNum = sqrt(n);
        if(n <= 2)
            return 0;
        if(n == 3)
            return 1;
        for(int i = 2;i <= helpNum;++ i)
            for(int j = i;j * i <= n;++ j)
                result[j*i] = false;
        while(pos != result.end()){
            if(* pos == true)
                ++ counter;
            ++ pos;
        }
        return counter;
    }
};
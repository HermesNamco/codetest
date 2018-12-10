class Solution {
public:
    int countPrimes(int n) {
        int testNum = 2;
        int helpNum = 0;        //helpNum是testNum开根号，根据质数性质，只要小于根号下测试数的数不能被测试数整除，则该数为质数
        int counter = 0;
        int flag = 0;
        if(n <= 2)
            return 0;
        while(testNum < n){
            helpNum = sqrt(testNum);
            for(int i = 2;i <= helpNum;++ i){
                if(testNum % i == 0)
                    ++ flag;          
            }
            if(flag == 0)
                ++ counter;
            flag = 0;
            ++ testNum;
        }
        return counter;
    }
};//还是超出时间限制：（
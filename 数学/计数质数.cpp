class Solution {
public:
    int countPrimes(int n) {
        int testNum = 2;
        int helpNum = 0;        //helpNum��testNum�����ţ������������ʣ�ֻҪС�ڸ����²������������ܱ������������������Ϊ����
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
};//���ǳ���ʱ�����ƣ���
class Solution {
public:
    int romanToInt(string s) {
        string::iterator pos = s.begin();
        int result = 0;
        int temp = 0;
        int next = 0;
        while(pos != s.end()){
            temp = judgeNum(*pos);
            ++ pos;
            if(pos != s.end())
                next = judgeNum(*pos);
            else{
                result = result + temp;
                break;
            }
            if(next > temp){
                result = result + next - temp;
                ++ pos;
            }else
                result = result + temp;
        }
        return result;
    }
    int judgeNum(char num){
        int temp = 0;
        if(num == 'I')
            temp = 1;
        if(num == 'V')
            temp = 5;
        if(num == 'X')
            temp = 10;
        if(num == 'L')
            temp = 50;
        if(num == 'C')
            temp = 100;
        if(num == 'D')
            temp = 500;
        if(num == 'M')
            temp = 1000;
        return temp;
    }
};
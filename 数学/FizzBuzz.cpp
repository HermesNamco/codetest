class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        int i = 1;
        int flag1;
        int flag2;
        while(i <= n){
            flag1 = i % 3;
            flag2 = i % 5;
            if(flag1 == 0 && flag2 == 0)
                result.push_back("FizzBuzz");
            else if(flag1 == 0)
                result.push_back("Fizz");
            else if(flag2 == 0)
                result.push_back("Buzz");
            else
                result.push_back(to_string(i));
            ++ i;
        }
        return result;
    }
};
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>result;
    for(int i=1; i<=n; i++){
        result.push_back((i%3==0&&i%5==0)?"FizzBuzz":(i%3==0)?"Fizz":
                         (i%5==0)?"Buzz":to_string(i));
        
    }
    
         return result;
    }
   
};
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>t;
        for(int i=0;i<n;i++){
            if((i+1)%3==0&&(i+1)%5==0){
                t.push_back("FizzBuzz");
            }
            else if((i+1)%3==0){
                t.push_back("Fizz");
            }
            else if((i+1)%5==0){
                t.push_back("Buzz");
            }
            else t.push_back(to_string(i+1));

        }
        return t;
    }
};
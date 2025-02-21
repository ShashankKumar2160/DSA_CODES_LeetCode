class Solution {
    public:
        vector<string> commonChars(vector<string>& words) {
            vector<string>res;
    
            for(char i = 'a'; i<='z'; i++){
    
                int min_count = INT_MAX;
    
                for(string it : words){
                    int count = 0;
                    for(char x : it){
                        if(x == i){
                            count++;
                        }
                    }
                    
                    min_count = min(min_count , count);
                    if(min_count==0)break;
                }
                while(min_count--){
                    res.push_back(string(1,i));
                }
            }
            return res;
        }
    };
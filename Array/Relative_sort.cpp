class Solution {
    public:
        vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
            unordered_map<int,int>mpp;
            
            
            int n1 = arr1.size();
            int n2 = arr2.size();
            vector<int>result;
            for(auto it : arr1){
                mpp[it]++;
            }
            
            for(int i = 0; i<n2; i++){
                int count = mpp[arr2[i]];
                while(count--){
                    result.push_back(arr2[i]); 
                }
                mpp.erase(arr2[i]);
            }
    
            vector<int>remaining;
            for(auto it : mpp){
                while(it.second--){
                    remaining.push_back(it.first);
                }
            }
            
            sort(remaining.begin() , remaining.end());
            result.insert(result.end() , remaining.begin() , remaining.end());
            return result;
        }
    };
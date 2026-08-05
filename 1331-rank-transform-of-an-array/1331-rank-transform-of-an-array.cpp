class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        vector<int>sorted = arr;
        int  n = sorted.size();
        sort(sorted.begin(),sorted.end());
        unordered_map<int , int> rank;
        int currentrank = 1;
        for(int i = 0; i<n;i++){
            if(i>0 && sorted[i]==sorted[i-1]){
                continue;
            }
            rank[sorted[i]]=currentrank;
            currentrank++;

        }
        for(int i = 0;i<arr.size();i++){
            arr[i]=rank[arr[i]];
        }
        return arr;
    }

};
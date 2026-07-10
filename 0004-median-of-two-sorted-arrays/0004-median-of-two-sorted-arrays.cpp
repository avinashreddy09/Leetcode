class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int n = nums1.size();
        int m = nums2.size();
        for(int  i = 0; i<n;i++){
            nums3.push_back(nums1[i]);
        } for(int i = 0; i<m ; i++){

            nums3.push_back(nums2[i]);
            
        } 
        sort(nums3.begin(),nums3.end());
        int a = nums3.size();
        for(int i = 0; i<a ; i++){
        if(a%2 !=0){
            return nums3[a/ 2];
        } else {
            return (nums3[a/2 -1] + nums3[a/2])/2.0 ;
        }

        }
        return 0;
    }
};
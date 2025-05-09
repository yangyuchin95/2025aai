//week12-6.cpp
//Leetcode 1920. Build Array from Permutation
//用for迴圈把陣列ans[i]=nums[nums[i]]
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
       int N = nums.size();//陣列大小
       vector<int> ans(N);//ans的大小是N.小心圓括號是C++的陣列
       for(int i=0; i<N; i++){
            ans[i] = nums[nums[i]];//題目要做
       }
       return ans;
    }
};

#week03-1.cpp 二合一的C++版本
class Solution {
public:
    long long coloredCells(int n) {
        long long ans=n;
        return ans*ans + (ans-1)*(ans-1);
    }
};

//week08-3.cpp
//Lwwtcode 2843. Count Symmetric Integers
class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0; //癹伴玡ans琌0
        for(int i=low; i<=high; i++){
            int a = i/1000; //计
            int b = i/100 % 10; //κ计
            int c = i/10 % 10; //计
            int d = i%10; //计
            if(11<=i && i<=99 && c==d) ans++; //ㄢ计
            if(1000<=i && i<=9999 && a+b==c+d) ans++; //计
        } //癹伴い丁 ans++
        return ans; //癹伴рansㄓノ
    }
};

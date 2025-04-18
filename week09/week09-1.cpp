//week09-1.cpp
//Leetcode 38. Count and Say 數字連續出現，就模依RLE方法編碼成數字+字母的形式
class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1"; //最簡單的case,如果是1就回傳1
        string prev = countAndSay (n-1);//函式呼叫函式，大問題問小問題
        string ans = "";
        char prevC = prev[0]; //前一個字母
        int prevN = 1; //前一個字母累積出現次數
        for(int i=1; i<prev.length(); i++){
            if(prevC == prev[i]) prevN++; //相同就+1
            else {
                ans += string(to_string(prevN))+prevC; //出現次數+哪個字母(送出之前累積的)
                prevC = prev[i]; //新的字母
                prevN = 1; // 從1開始(新字母，有1個)
            }

        }
        ans += string(to_string(prevN)) + prevC; //最後一筆也要送出去
        return ans;
    }
};

//week09-1.cpp
//Leetcode 38. Count and Say �Ʀr�s��X�{�A�N�Ҩ�RLE��k�s�X���Ʀr+�r�����Φ�
class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1"; //��²�檺case,�p�G�O1�N�^��1
        string prev = countAndSay (n-1);//�禡�I�s�禡�A�j���D�ݤp���D
        string ans = "";
        char prevC = prev[0]; //�e�@�Ӧr��
        int prevN = 1; //�e�@�Ӧr���ֿn�X�{����
        for(int i=1; i<prev.length(); i++){
            if(prevC == prev[i]) prevN++; //�ۦP�N+1
            else {
                ans += string(to_string(prevN))+prevC; //�X�{����+���Ӧr��(�e�X���e�ֿn��)
                prevC = prev[i]; //�s���r��
                prevN = 1; // �q1�}�l(�s�r���A��1��)
            }

        }
        ans += string(to_string(prevN)) + prevC; //�̫�@���]�n�e�X�h
        return ans;
    }
};

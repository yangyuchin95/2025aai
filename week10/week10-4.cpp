//week10-4
//Leetcode 1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100] = {};
        int largest = 0;
        for(int i=1; i<=n; i++){ //1...n,人類的迴圈
            int now = i;
            int total = 0;
            while(now>0){ //迴圈裡把total一直加起來
                total += now % 10; //把每位數加到total裡
                now = now/10;
            }
            a[total]++; //迴圈後面要統計total的出現次數
            if(a[total]>largest) largest=a[total];
        }
        int ans = 0;
        for(int i=0; i<100; i++){
            if(a[i]==largest) ans++;
        }
        return ans;
    }
};

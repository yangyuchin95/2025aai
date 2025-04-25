//week10-4
//Leetcode 1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100] = {};
        int largest = 0;
        for(int i=1; i<=n; i++){ //1...n,�H�����j��
            int now = i;
            int total = 0;
            while(now>0){ //�j��̧�total�@���[�_��
                total += now % 10; //��C��ƥ[��total��
                now = now/10;
            }
            a[total]++; //�j��᭱�n�έptotal���X�{����
            if(a[total]>largest) largest=a[total];
        }
        int ans = 0;
        for(int i=0; i<100; i++){
            if(a[i]==largest) ans++;
        }
        return ans;
    }
};

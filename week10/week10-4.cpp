// week10-4 ���Ѫ��D���D(�D�ؤ��n��, ���O�{���u�Ψ�W�ұЪ��j��B�}�C�Bif)
// LeetCode 1399. Count Largest Group  �̤j�����@�s, ���X��? �̤j����, ���X��?
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count = 0; // �Ƥ@�U, �έp�̦h��, �O�X�{�X��
        int a[100] = {}; // �}�C�ŧi, ��u�[�`��total�v���X�{�X��
        for(int i=1; i<=n; i++) { // �H���� for �j��, �q1...n
            int total = 0, now = i; // �[�_�Ӫ����G�s total, �{�b���� now
            while( now > 0 ){ // ��֪k ��while�j��, �p�G now �٦���, �~���
                total += now % 10;  // ��u�֡v�[�_��(�C�@��Ƴ��[�_�ӹ�)
                now = now / 10; // �駹��, �Ʀr�N�ܤp�o~
            }
            a[total]++; // �έp���G�h1��total���[�_�Ӫ��� total ���ӥ�!!
            if(a[total] > max_count) max_count = a[total]; // max_count ��̦h����
        }
        int ans = 0; // �̫�䵪�ק�X�� (�X�{�̦h���ƪ�����, ���X�Ӽ�)
        for(int i=0; i<100; i++) { // �j�騵�}�C a[i] ��n�O�̤j�� max_count ����
            if(a[i]==max_count) ans++; // �N�h�@�ӡu�̤j����
        }
        return ans;
    }
};

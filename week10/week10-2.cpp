/// week10-2.cpp �n�Фj�a�u��֪k�v
#include <stdio.h>
int main()
{
    printf("�п�J1�Ӿ��: ");
    int n;
    scanf("%d", &n); ///ex. ��J 397
    ///printf("�Ӧ�ƬO %d\n", n %10);
    ///printf("�Q��ƬO %d\n", n/10 %10);
    ///printf("�ʦ�ƬO %d\n", n/100 %10);
    while(n>0){ /// �p�G�٦��ѤU n �N�~��
        printf("�Ʀr %d ��֭�X:%d\n", n, n%10); ///���
        n = n / 10; /// �Ʀr�ܤp�F �� 1/10
    }
}

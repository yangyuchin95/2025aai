///week11-2.cpp
#include <stdio.h>
int main()

{
    printf("�п�J1�Ӽ�(ex.183)");
    int n;
    scanf("%d",&n);
    int ans=0; ///�Q���̤j����
    while(n>0){ ///while�j��A�@�����
            if(n%10>ans) ans=n%10;
            printf("���%d\n",n%10);
            n=n/10; ///n�ܤp
    }
    printf("�̤j���֬O%d\n",ans);
}

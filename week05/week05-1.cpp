///week05-1.cpp
///�D�D:�}�C Array�t�Xfor�j��
#include <stdio.h>
int main()

{///�}�C�ŧi4��A�j�A���̭��A��l��4�ӭ�
    int a[4] = {10,20,30,40};
    for(int i=0; i<4; i++){
        printf("%d ", a[i]);
    }///�q����for�j��A�q0�}�l
    printf("\n");///����

    a[0] = 99;///��a[0]�ȴ���99
    for(int i=0; i<4; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

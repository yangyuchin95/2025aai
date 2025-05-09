///week12-2.cpp
///Fibonacci 计琌或?
///2 3 5 7 11 13 17 19 23 29 31借计
///1 3 5 7 9计
///.....案计
///1 1 2 3 5 8 13 21 34叫拜计琌或
///砏玥:玡2兜

#include <stdio.h>
int main()
{///皚娩Τ⊿糶常0
    int a[30] = {0, 1};///柑氮
    printf("1 ");///材1兜
    for(int i=2; i<30; i++){///
            a[i]=a[i-1] + a[i-2];///玡2兜
            printf("%d ",a[i]);
    }

}

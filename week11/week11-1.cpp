///week11-1.cpp
///函式/函數function
#include <stdio.h>
///前面定義函式
///送出來的int整數
///送進去整數a、整數b
int addnum(int a,int b)
 {
     printf("在函數addnum()裡，得到參數a:%d b:%d\n",a,b);
     int ans=a+b;
     printf("算出答案%d要return出去\n",ans);
     return ans;///算出來的結果傳出去
 }
int main()
{///主要函式、主程式
    printf("在main()呼叫使用addnum()\n");
    int ans = addnum(2,3);
    printf("在main()得到答案:%d\n",ans);
}

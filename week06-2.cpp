///week06-2.cpp
///了解for迴圈 vs. while(迴圈) vs. if(判斷)

#include <stdio.h>
int main()

{
    if(2) printf("2有成立嗎?\n");
    if(3) printf("3有成立嗎?\n");
    if(1) printf("1有成立嗎?\n");
    if(0) printf("0有成立嗎?\n"); ///沒有成立
    if(-1) printf("-1有成立嗎?\n");
    while(1) printf("1有成立嗎?\n");
}

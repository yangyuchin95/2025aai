///week14-4.cpp
//part1...part6
#include <stdio.h>
int main()
{
	int a[100];
	int N,t=1;
	while (scanf("%d",&N) == 1){
		int bad = 0; //part3:bad or not bad
		for(int i=0; i<N; i++){ //part1
			scanf("%d",&a[i]); //part2
			if(i>0 & a[i-1] >= a[i]) bad=1; //part5:bigger-bigger
		}
		if(a[0]<1) bad = 1; //part3
		int table[20002] = {}; //part6:table not equal
		for(int i=0; i<N; i++){
			for(int j=i; j<N; j++){
				int now = a[i]+a[j];
				if(table[now]>0) bad = 1; //part6
				table[now]++;
			}
		}

		//part2:Output,part4:if(bad==0) else
		if(bad==0) printf("Case #%d: It is a B2-Sequence.\n\n",t);
		else printf("Case #%d: It is not a B2-Sequence.\n\n",t);
		t++;
	}
}

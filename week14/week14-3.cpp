///week14-3.cpp
//only Part1:Input Part2:Output
#include <stdio.h>
int main()
{
	int a[100];
	int N,t=1;
	while (scanf("%d",&N) == 1){
		for(int i=0; i<N; i++){ //part1
			scanf("%d",&a[i]); //part2
		}

		//part2:Output
		printf("Case #%d: It is a B2-Sequence.\n\n",t);
		t++;
	}
}

#include <stdio.h>
int main(){
	int N;
	int cal = 0;
	scanf("%d" , &N);
	for(int i = 1 ; i <= N ; i++)
		if(i % 3 == 0)
			cal = cal + i;
	printf("%d\n" , cal);
	return 0;
}

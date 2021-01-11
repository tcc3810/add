#include <stdio.h>
int main(){
	int x = 0;
	int sign = 0;
	int a[7] = {0};
	scanf("%d" , &x);
	if(x < 0){
		x = -x - 1;
		sign = 1;
	}

	for(int i = 0 ; i < 7 ; i++){
		int p = 1;
		for(int j = 0 ; j < i ; j++)
			p = 2 * p;
		a[i] = (x / p) % 2;
	}
	
	printf("%d" , sign);
	if(sign == 0)
		for(int i = 0 ; i < 7 ; i++)
			printf("%d" , a[6 - i]);
	else if(sign == 1)
		for(int i = 0 ; i < 7 ; i++)
			printf("%d" , (a[6 - i] + 1) % 2);
	printf("\n");

	return 0;
}

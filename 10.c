#include <stdio.h>
int main(){
	int x , y;
	scanf("%d %d" , &x ,&y);
	while(x - (x / y) * y != 0){
		x = x - (x / y) * y;
		if(x < y){
			int tmp = x;
			x = y;
			y = tmp;
		}
	}

	printf("%d\n" , y);
	return 0;
}

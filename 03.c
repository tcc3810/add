#include <stdio.h>
int main(){
	int x , y;
	scanf("%d %d" , &x , &y);
	int cal = x * x + y * y;
	if(cal < 40000)
		printf("inside\n");
	else
		printf("outside\n");
	return 0;
}

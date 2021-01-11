#include <stdio.h>
int main(){
	int n;
	scanf("%d" , &n);
	if(n - n / 4 * 4 == 0){
		if(n - n / 400 * 400 == 0)
			printf("Bissextile Year\n");
		else if(n - n / 100 * 100 == 0)
			printf("Common Year\n");
		else
			printf("Bissextile Year\n");
	}
	else
		printf("Common Year\n");
	return 0;
}

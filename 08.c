#include <stdio.h>
int main(){
	int x;
	scanf("%d" , &x);
	for(int i = 2 ; i < x ; i++){
		if(x - (x / i) * i == 0){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}

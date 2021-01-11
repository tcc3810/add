#include <stdio.h>
int main(){
	int n;
	scanf("%d\n" , &n);
	char m;
	int x , y , a , b;
	int cal , cal2;
	for(int i = 0 ; i < n ; i++){
		scanf("%c %d %d %d %d\n" , &m , &x , &y , &a , &b);
		
		if(m == '+'){
			cal = x + a;
			cal2 = y + b;
		}
		else if(m == '-'){
			cal = x - a;
			cal2 = y - b;
		}
		else if(m == '*'){
			cal = x * a - y * b;
			cal2 = x * b + y * a;
		}
		printf("%d %d\n" , cal , cal2);
	}
	return 0;
}

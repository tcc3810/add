#include <stdio.h>
int main(){
	int x , y;
	int cal = 0;
	int cal2 = 0;
	scanf("%d %d" , &x , &y);
	cal = 60 * x + y;
	scanf("%d %d" , &x , &y);
	cal2 = 60 * x + y;
	
	int times = cal2 - cal;
	int dollars = 0;
	if(times > 240)
		dollars = (times - 240) / 30 * 60 + 120 / 30 * 40 + 120 / 30 * 30;
	if(times > 120 && times <= 240)
		dollars = (times - 120) / 30 * 40 + 120 / 30 * 30;
	else if(times < 120)
		dollars = (times - 0) / 30 * 30;

	printf("%d\n" , dollars);
	return 0;
}

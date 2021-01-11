#include <stdio.h>
int main(){
	float arr[10];
	for(int i = 0 ; i < 10 ; i++)
		scanf("%f" , &arr[i]);
	float min = arr[0];
	float max = arr[9];
	for(int i = 1 ; i < 10 ; i++){
		if(arr[i] < min)
			min = arr[i];
		if(arr[i] > max)
			max = arr[i];
	}
	printf("maximum:%.2f\n" , max);
	printf("minimum:%.2f\n" , min);
	return 0;
}

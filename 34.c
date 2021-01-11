#include <stdio.h>
int main(){
	int height , gender;
	float cal = 0;
	while(scanf("%d %d" , &height , &gender) != EOF){
		if(gender == 1)
			cal = (height - 80) * 0.7;
		else if(gender == 2)
			cal = (height - 70) * 0.6;
		printf("%.1f\n" , cal);
	}
	return 0;
}

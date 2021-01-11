#include <stdio.h>
int main(){
	int MAP[3][3];
	for(int i = 0 ; i < 3 ; i++)
		for(int j = 0 ; j < 3 ; j++)
			scanf("%d" , &MAP[i][j]);
	
	for(int i = 0 ; i < 3 ; i++){
		int x = 0;
		for(int j = 0 ; j < 3 ; j++)
			x = x + MAP[i][j];
		if(x == 3 || x == 0){
			printf("True\n");
			return 0;
		}
	}

	for(int i = 0 ; i < 3 ; i++){
		int x = 0;
		for(int j = 0 ; j < 3 ; j++)
			x = x + MAP[j][i];
		if(x == 3 || x == 0){
			printf("True\n");
			return 0;
		}
	}
	
	if(MAP[0][0] + MAP[1][1] + MAP[2][2] == 3)
		printf("True\n");
	else if(MAP[0][0] + MAP[1][1] + MAP[2][2] == 0)
		printf("True\n");
	else if(MAP[2][0] + MAP[1][1] + MAP[0][2] == 3)
		printf("True\n");
	else if(MAP[2][0] + MAP[1][1] + MAP[0][2] == 0)
		printf("True\n");
	else
		printf("False\n");
	return 0;
}

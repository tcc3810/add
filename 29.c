#include <stdio.h>
#include <stdlib.h>
int main(){
	char text[10];
	scanf("%s" , text);
	int cal;
	if(text[0] == 'A')
		cal = 1 + 9 * 0;
	else if(text[0] == 'B')
		cal = 1 + 9 * 1;
	else if(text[0] == 'C')
		cal = 1 + 9 * 2;
	else if(text[0] == 'D')
		cal = 1 + 9 * 3;
	else if(text[0] == 'E')
		cal = 1 + 9 * 4;
	else if(text[0] == 'F')
		cal = 1 + 9 * 5;
	else if(text[0] == 'G')
		cal = 1 + 9 * 6;
	else if(text[0] == 'H')
		cal = 1 + 9 * 7;
	else if(text[0] == 'I')//
		cal = 3 + 9 * 4;
	else if(text[0] == 'J')
		cal = 1 + 9 * 8;
	else if(text[0] == 'K')
		cal = 1 + 9 * 9;
	else if(text[0] == 'L')
		cal = 2+  9 * 0;
	else if(text[0] == 'M')
		cal = 2 + 9 * 1;
	else if(text[0] == 'N')
		cal = 2 + 9 * 2;
	else if(text[0] == 'O')//
		cal = 3 + 9 * 5;
	else if(text[0] == 'P')
		cal = 2 + 9 * 3;
	else if(text[0] == 'Q')
		cal = 2 + 9 * 4;
	else if(text[0] == 'R')
		cal =  + 9 * 5;
	else if(text[0] == 'S')
		cal = 2 + 9 * 6;
	else if(text[0] == 'T')
		cal = 2 + 9 * 7;
	else if(text[0] == 'U')
		cal = 2 + 9 * 8;
	else if(text[0] == 'V')
		cal = 2 + 9 * 9;
	else if(text[0] == 'W')//
		cal = 3 + 9 * 2;
	else if(text[0] == 'X')
		cal = 3 + 9 * 0;
	else if(text[0] == 'Y')
		cal = 3 + 9 * 1;
	else if(text[0] == 'Z')
		cal = 3 + 9 * 3;
	
	for(int i = 1 ; i < 9 ; i++){
		//printf("cal:%d,%d\n" , cal , i);
		cal = cal + (9 - i) * (text[i] - '0');
	}
	cal = cal + (text[9] - '0');
	//printf("%d\n" , cal);
	if(cal % 10 == 0)
		printf("CORRECT!!!\n");
	else
		printf("WRONG!!!\n");
	return 0;
}

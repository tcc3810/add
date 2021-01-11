#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
	char text[100];
	int x;
	fgets(text , 100 , stdin);
	scanf("%d" , &x);
	int n = strlen(text);
	if(text[n - 1] == '\n')
		text[n - 1] = '\0';
	
	char *ptr = text;
	while(*ptr != '\0'){
		if(isalpha(*ptr)){
			if(isupper(*ptr)){
				printf("%c" , (*ptr - 'A' + x) % 26 + 'A');
				ptr++;
			}
			else{
				printf("%c" , (*ptr - 'a' + x) % 26 + 'a');
				ptr++;
			}
		}

		else if(isdigit(*ptr)){
			printf("%c" , (*ptr - '0' + x) % 10 + '0');
			ptr++;
		}

		else{
			printf("%c" , *ptr);
			ptr++;
		}
	}
	printf("\n");
	return 0;
}

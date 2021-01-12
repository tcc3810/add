#include <stdio.h>
#include <ctype.h>
int main(){
	char text[100];
	fgets(text , 100 , stdin);
	int MAP[26] = {0};
	int n = 1;
	char *ptr = text;
	while(*ptr != '\0'){
		if(isupper(*ptr))
			MAP[*ptr - 'A']++;
		else if(islower(*ptr))
			MAP[*ptr - 'a']++;
		else if(*ptr == ' ')
			n++;
		ptr++;

	}
	printf("%d\n" , n);
	for(int i = 0 ; i < 26 ; i++){
		if(MAP[i])
			printf("%c : %d\n" , 'a' + i , MAP[i]);
	}
	return 0;
}

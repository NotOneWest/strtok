#include <stdio.h>

void m_strtok(char *str1, char *str2){
	
	int check =0;
	
	for(int i=0; str1[i]!='\0'; i++){
		for (int j=0; str2[j] != '\0'; j++){
			if(str1[i] == str2[j]){
				check = 1;
			}
		}
		if(check == 1){
				printf("\n");
				check = 0;
			}
		else printf("%c",str1[i]);
	}
	
}

int main(){
	char str1[1000], str2[1000];
	
	gets(str1);
	gets(str2);
		
	m_strtok(str1,str2);
	
	return 0;
}



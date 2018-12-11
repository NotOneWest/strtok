#include <stdio.h>
#include <string.h>

void m_strtok(char *str1, char *str2){
	
	int check =0;
	
	for(int i=0; i<strlen(str1)-1;){
		for (int j=0; str2[j] != '\0'; j++){
			if(str1[i+j] == str2[j]){
				check++;
			}
		}
		if(check == strlen(str2)-1) {
			printf("\n");
			i+=strlen(str2)-1;
			check = 0;
		}
		else {
			printf("%c",str1[i]);
			i++;
		}
	}
	
}

int main(){
	char str1[1000], str2[1000];
	
	fgets(str1,sizeof(str1),stdin);
	fgets(str2,sizeof(str2),stdin);
		
	m_strtok(str1,str2);
	
	return 0;
}

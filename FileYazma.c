#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// yazma
int main(){

char *satir = "Merry christmast \n";

FILE* dosya;

dosya = fopen("deneme.txt", "w");

if(dosya == NULL){
	puts("dosya acilamadi");	
}else{
	fprintf(dosya,"%s\n",satir);
	
}

fclose(dosya);

return 0;
}

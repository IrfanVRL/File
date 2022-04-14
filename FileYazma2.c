#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// yazma2

typedef struct 
{
    char *isim;
    char *basrol;
    int yil;

}Film ;


int main(){

char *satir = "Merry christmast";

Film film;
film.isim = "The Sinner";
film.basrol = "Andrew Robertson";
film.yil = 2011;

FILE* dosya;

dosya = fopen("deneme.txt", "w");

if(dosya == NULL){
	puts("dosya acilamadi");	
}else{
	fprintf(dosya,"%s\n",satir);
	fprintf(dosya,"%s\n ",film.isim);
	fprintf(dosya,"%s\n ",film.basrol);

	fprintf(dosya,"%d\n ",film.yil);


	
}

fclose(dosya);

return 0;
}

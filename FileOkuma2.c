#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char const *argv[])
{
    
    FILE *dosya;

    char *satir;

    char *yazi;
    char *isim;
    char *oyuncu;
    int yil;


    dosya = fopen("deneme.txt","r");

    while (!feof(dosya))
    {
        if (fgets(satir,100,dosya))
        {
         sscanf(satir,"%s %s %s %d", yazi,isim,oyuncu,&yil);
         printf("%s %s %s %d" , yazi, isim , oyuncu, yil);   
        }
        
    }
    
fclose(dosya);

    return 0;
}

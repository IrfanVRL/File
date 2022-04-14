#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char const *argv[])
{
    
    FILE *dosya;

    char *satir;

    dosya = fopen("deneme.txt","r");

    while (!feof(dosya))
    {
        if (fgets(satir,100,dosya))
        {
            printf("%s ", satir);
        }
        
    }
    

    fclose(dosya);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 typedef struct{
        char *isim;
        int model;
        

    } Araba;
    
 typedef struct{
        char *isim;
        long nufus;
        float rakim;
        char* meshurSoz;
        

    } Sehir;
int main(int argc, char const *argv[])
{
    Araba araba = {"Volvo", 2002};
    Sehir sehir = {"Nigde",123432,31243,""};
    Sehir sehir2 = {"Giresun",65432,6443,"Hey! Dostum "};

    char *metin ="Merhaba iyi günler arkadaslar";


    FILE *dosya;

    dosya = fopen("deneme.txt", "w");

    if (dosya == NULL)
    {
        puts("dosya acilamadi");
        
    }else{
    
        for (int i = 0; i < 123; i++)
        {
        fprintf(dosya,"%s\n", metin);
            
        }
        
        
    

    }
    
    





   
    return 0;
}

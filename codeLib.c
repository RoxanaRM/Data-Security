#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"
void cripting(int offset, char word[]){
    int i;
    char result[255];
    for(i = 0; i < strlen(word); i++){
        if(word[i]+offset > 'z'){
            result[i] = 'a' + offset - ('z' - word[i]) - 1 ;
        }else{
            result[i] = word[i] + offset;
        }
    }
    printf("%s ", result);
}
void decripting(int offset, char word[]){
    int i;
    char result[255];
    for(i = 0; i < strlen(word); i++){
        if(word[i] - offset < 'a' ){
                result[i] = 'z' - offset + ( word[i] - 'a') + 1 ;
        }else{
            result[i] = word[i] - offset;
        }
    }
    printf("%s ", result);
}
void function1(){
    char option;
    int offset, n;
    char word[255][255];
    printf("Pentru criptare introduceti c .Pentru decriptare introduceti d .");
    scanf("%c", &option);
    printf("Introduceti constanta : ");
    scanf("%d",&offset);
    printf("Introduceti nr de cuvinte :");
    scanf("%d",&n);
    printf("Introduceti mesajul : ");
    int j;
    for(j= 0 ; j < n; j++)
        scanf("%s",word[j]);

    int i;
    if( offset  < 0 ){
        offset = 26 + offset;
    }
    if(option == 'c'){
        for(j= 0 ; j < n; j++)
        cripting (offset, word[j]);
    } else if(option == 'd'){
        for(j= 0 ; j < n; j++)
       decripting (offset, word[j]);
    }
}

void function2(){
    int offset,n;
    char option;
    char word[50];
    char unwanted[10];
    printf("Pentru criptare introduceti c .Pentru decriptare introduceti d .");
    scanf("%c", &option);
    printf("Introduceti constanta : ");
    scanf("%d",&offset);

    int i;
    if( offset  < 0 ){
        offset = 26 + offset;
    }
    FILE* f;
    f = fopen("text.in", "r");
        while (!feof (f)){
            fscanf (f, "%s", word);
        if(option == 'c')
			cripting (offset, word);
        else if (option == 'd')
            decripting (offset, word);
        }

    fclose(f);
    }


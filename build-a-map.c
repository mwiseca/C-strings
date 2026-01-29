// Copyright 2023-2025 Mitchell E Wise
// SPDX-License-Identifier: Apache-20 


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100
#define MAX 99

/*To use CONST int SIZE and const int MAX comment out the #define SIZE 
  and the #define MAX and uncomment the const int variables.*/

//const int SIZE = 100;
//const int MAX = 99;
char repeat[100];

void clear(){
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}

void checkInput() {
    printf("\nInvalid input Try again.\n\n");
    clearerr(stdin);
}

int main() {
    char loop [7] [25] = {"int "," = -1;","for(int "," = 0;","<",";","++) {"};
    char ifStatement [11] [25] = {"    if(strcmp(",", ","[","]",") == 0) {"," = ",";","}","    }","}","        "};
    char keyError [7] [25] = {"if(", " == -1) {", "    printf(\"", "\\n", "\");","    continue;","}"}; 
    const char *end [] = {"printf(\"","%s","%d","%f","\\n","\"",",","[","]",");"};
    char keyArray [SIZE];
    char valueArray [SIZE];
    char select [SIZE];
    char input [SIZE];
    char forLoopInt [SIZE];
    char elements [SIZE];
    char error [SIZE];
    char format [SIZE];

    while(1) {
        printf("//Enter the name of the key array m for main.\n");
        while(fgets(keyArray,SIZE,stdin) == NULL) {
            checkInput();
        }
        keyArray[strcspn(keyArray,"\n")]=0;
        if(strlen(keyArray) >= MAX) {
            clear();
        }
        if(strcmp(keyArray,"m") == 0) {
            break;
        }
        printf("//Enter the value array name x to exit.\n");
        while(fgets(valueArray,SIZE,stdin) == NULL) {
            checkInput();
        }
        valueArray[strcspn(valueArray,"\n")]=0;
        if(strlen(valueArray) >= MAX) {                                    
            clear();
        }
        if(strcmp(valueArray,"m") == 0) {
            break;
        }
        printf("//Enter the name of the user input m for main.\n");
        while(fgets(select,SIZE,stdin) == NULL) {
            checkInput();
        }
        select[strcspn(select,"\n")]=0;
        if(strlen(select) >= MAX) {
            clear();
        }
        if(strcmp(select,"m") == 0) {
            break;
        }
        printf("//Select the name of the variable that stores the key to be selected.\n");
        printf("//Index or number is good. m for main.\n");
        while(fgets(input,SIZE,stdin) == NULL) {
            checkInput();
        }
        input[strcspn(input,"\n")]=0;
        if(strlen(input) >= MAX) {
            clear();
        }
        if(strcmp(input,"m") == 0) {
            break;
        }
        printf("//Select a name for the for loop int i is the usual.\n");
        while(fgets(forLoopInt,SIZE,stdin) == NULL) {
            checkInput();
        }
        forLoopInt[strcspn(forLoopInt,"\n")]=0;
        if(strlen(forLoopInt) >= MAX) {
            clear();
        }
        if(strcmp(input,"m") == 0) {
            break;
        }
        printf("//Enter the number of elements in arrays.\n");
        while(fgets(elements,SIZE,stdin) == NULL) {
            checkInput();
        }
        elements[strcspn(elements,"\n")]=0;
        if(strlen(elements) >= MAX) {
            clear();
        }
        if(strcmp(input,"m") == 0) {
            break;
        }
        printf("//Enter a key error message.\n");
        while(fgets(error,SIZE,stdin) == NULL) {
            checkInput();
        }
        error[strcspn(error,"\n")]=0;
        if(strlen(error) >= MAX) {
            clear();
        }
        if(strcmp(error,"m") == 0) {
            break;
        }
        printf("//Enter a format specifier s for string i for int d for double..\n");
        while(fgets(format,SIZE,stdin) == NULL || (1)) {
            clearerr(stdin);
            if(strlen(format) >= MAX) {
                clear();
            }
            format[strcspn(format,"\n")]=0;
            if(strcmp(format,"s")!=0 && strcmp(format,"i")!=0 && strcmp(format,"d")!=0){
                printf("//\nEnter s i or d only.\n\n");
            }else{
                break;
            }
        }
        if(strcmp(format,"s")==0){
            strcpy(format,end[1]);
        }else if(strcmp(format,"i")==0) {
            strcpy(format,end[2]);
        }else if(strcmp(format,"d")==0) {
            strcpy(format,end[3]);
        }             
        printf("\n%s%s%s\n",loop[0],input,loop[1]); 
        printf("%s%s%s%s%s%s%s%s%s\n",loop[2],forLoopInt,loop[3],forLoopInt,loop[4],elements,loop[5],forLoopInt,loop[6]);
        printf("%s%s%s%s%s%s%s%s\n",ifStatement[0],select,ifStatement[1],keyArray,ifStatement[2],forLoopInt,ifStatement[3],ifStatement[4]);
        printf("%s%s%s%s%s\n",ifStatement[10],input,ifStatement[5],forLoopInt,ifStatement[6]);
        printf("%s\n%s\n",ifStatement[8],ifStatement[9]);
        printf("%s%s%s\n",keyError[0],input,keyError[1]);
        printf("%s%s%s%s%s%s\n",keyError[2],keyError[3],error,keyError[3],keyError[3],keyError[4]);
        printf("%s\n",keyError[5]);
        printf("%s\n",keyError[6]); 
        printf("%s%s%s%s%s%s%s%s%s%s\n\n",end[0],format,end[4],end[5],end[6],valueArray,end[7],input,end[8],end[9]);
    }
    return 0;
}




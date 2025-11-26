// Copyright 2023-2025 Mitchell E Wise
// SPDX-License-Identifier: Apache-20


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 50
#define MAX 49

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
    char  t [26] [25] = {"long int", ";","char *"," = strtol(","&",",10);","    ","printf(\"","\\n", "\");","} else if","(*"," == 0x20) {","printf(\"","\\n","\");","("," == ",") {"," != '\\0') {", "} else {",","," = strtod(",")"," &",");"};

    char type [SIZE];
    char string [SIZE];
    char longInt [SIZE];
    char ptrName [SIZE];
    char rangePrintf [SIZE];
    char spacesPrintf [SIZE]; 
    char numberOnly [SIZE];
    char textAfterNumber [SIZE];
    while(1){
        printf("//Enter type i for int d for double.\n");
        while(fgets(type,SIZE,stdin) == NULL) {
            checkInput(); 
        }
        type[strcspn(type,"\n")]=0;
        if(strlen(type) >= MAX) {
            clear();
        }
        if(strcmp(type,"i") !=0 && strcmp(type, "d")!=0){
            printf("\n//Enter i or d only.\n\n");
            continue;
        }
        printf("//Enter the string name to be converted m for main.\n");
        while(fgets(string,SIZE,stdin) == NULL) {
            checkInput(); 
        }
        string[strcspn(string,"\n")]=0;
        if(strlen(string) >= MAX) {
            clear();
        }
        if(strcmp(string,"m")==0) {
            break;
        }
        printf("//Enter the converted integer or double name.\n");
        while(fgets(longInt,SIZE,stdin) == NULL) {
            checkInput(); 
        }
        longInt[strcspn(longInt,"\n")]=0;
        if(strlen(longInt) >= MAX) {
            clear();
        }
        printf("//Enter the name of the pointer endptr or ptr will do.\n");
        while(fgets(ptrName,SIZE,stdin) == NULL) {
            checkInput(); 
        }
        ptrName[strcspn(ptrName,"\n")]=0;
        if(strlen(ptrName) >= MAX) {
            clear();
        }
        printf("//Enter a error message for out of range.\n");
        while(fgets(rangePrintf,SIZE,stdin) == NULL) {
            checkInput(); 
        }
        rangePrintf[strcspn(rangePrintf,"\n")]=0;
        if(strlen(rangePrintf) >= MAX) {
            clear();
        }
        printf("//Enter a error message for spaces between numbers.\n");
        while(fgets(spacesPrintf,SIZE,stdin) == NULL) {
            checkInput(); 
        }
        spacesPrintf[strcspn(spacesPrintf,"\n")]=0;
        if(strlen(spacesPrintf) >= MAX) {
            clear();
        }
        printf("//Enter a error message for enter a number only.\n");
        while(fgets(numberOnly,SIZE,stdin) == NULL) {
            checkInput(); 
        }
        numberOnly[strcspn(numberOnly,"\n")]=0;
        if(strlen(numberOnly) >= MAX) {
            clear();
        }
        printf("//Enter a error message for text after number.\n");
        while(fgets(textAfterNumber,SIZE,stdin) == NULL) {
            checkInput(); 
        }
        textAfterNumber[strcspn(textAfterNumber,"\n")]=0;
        if(strlen(textAfterNumber) >= MAX) {
            clear();
        }
        printf("\nerrno = 0;\n");
        if(strcmp(type,"i")==0) {
            printf("%s%s%s%s%s%s%s\n",longInt,t[3],string,t[21],t[4],ptrName,t[5]);
        } else if(strcmp(type,"d")==0) {
            printf("%s%s%s%s%s%s%s\n",longInt,t[22],string,t[21], t[24],ptrName,t[25]);
        }
        printf("if(errno == ERANGE) {\n");
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],rangePrintf,t[8],t[8],t[9]);
        printf("%s%s%s%s\n",t[10],t[11],ptrName,t[12]);
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],spacesPrintf,t[8],t[8],t[9]);
        printf("%s%s%s%s%s%s\n",t[10],t[16],ptrName,t[17],string,t[18]);
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],numberOnly,t[8],t[8],t[9]);
        printf("%s%s%s%s\n",t[10],t[11],ptrName,t[19]);
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],textAfterNumber,t[8],t[8],t[9]);
        printf("%s\n\n\n",t[20]);
        printf("#include <errno.h>          Place at top of file.\n\n");
        if(strcmp(type,"i")==0) {
           printf("long int %s;\n",longInt);
           printf("char *%s;\n",ptrName);
        } else if(strcmp(type,"d")==0) {
           printf("double %s;\n",longInt); 
           printf("char *%s;\n\n",ptrName);
       }
       //if(strcmp(repeat,"r")!=0) {
           //break;
       //}
   }
return 0;
}










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
    char  t [27] [27] = {"long int", ";","char *"," = strtol(","&",",10);","    ","printf(\"","\\n", "\");","*"," == 0x20","printf(\"","\\n","\");","("," == ",") {"," != '\\0') {", "} else {",","," = strtod(",")"," &",");"," || "};

    char type [SIZE];
    char string [SIZE];
    char longInt [SIZE];
    char ptrName [SIZE];
    char errorMessage [SIZE];
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
        printf("//Enter a error message.\n");
        while(fgets(errorMessage,SIZE,stdin) == NULL) {
            checkInput(); 
        }
        errorMessage[strcspn(errorMessage,"\n")]=0;
        if(strlen(errorMessage) >= MAX) {
            clear();
        }
               printf("\n#include <errno.h>          Place at top of file.\n\n");
        if(strcmp(type,"i")==0) {
           printf("long int %s;\n",longInt);
           printf("char *%s;\n",ptrName);
        } else if(strcmp(type,"d")==0) {
           printf("double %s;\n",longInt); 
           printf("char *%s;\n\n",ptrName);
        } 
        printf("\nerrno = 0;\n");
        if(strcmp(type,"i")==0) {
            printf("%s%s%s%s%s%s%s\n",longInt,t[3],string,t[20],t[4],ptrName,t[5]);
        } else if(strcmp(type,"d")==0) {
            printf("%s%s%s%s%s%s%s\n",longInt,t[21],string,t[20], t[23],ptrName,t[24]);
        }
        printf("if(errno == ERANGE || ");
        printf("%s%s%s",t[10],ptrName,t[11]); 
        printf("%s%s%s%s",t[25],ptrName,t[16],string); 
        printf("%s%s%s%s\n",t[25],t[10],ptrName,t[18]);
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],errorMessage,t[8],t[8],t[9]);
        printf("%s\n\n",t[19]);
        printf("\nerrno = 0;\n");
        if(strcmp(type,"i")==0) {
            printf("%s%s%s%s%s%s%s\n",longInt,t[3],string,t[20],t[4],ptrName,t[5]);
        } else if(strcmp(type,"d")==0) {
            printf("%s%s%s%s%s%s%s\n",longInt,t[21],string,t[20], t[23],ptrName,t[24]);
        }
        printf("if(errno == ERANGE || ");
        printf("%s%s%s",t[10],ptrName,t[11]); 
        printf("%s%s%s%s",t[25],ptrName,t[16],string); 
        printf("%s%s%s%s\n",t[25],t[10],ptrName,t[18]);
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],errorMessage,t[8],t[8],t[9]);
        printf("%scontinue;\n",t[6]);
        printf("}\n\n");
        //if(strcmp(repeat,"r")!=0) {
            //break;
        //}              
    } 
return 0;
}




















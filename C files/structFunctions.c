// Copyright 2023-2026 Mitchell E Wise
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

void BuildAMenue() {
    char structVar [7] [20] = {"struct "," {","const char* ","int ","double ",";","    "};
    char fptr [4] [20] = {"void(*",")","(void);","};"};
    char structArray [8] [20] = {"struct ","[] = {","{","\"",",","     ","};","},"};
    char arrayKey [10] [150];
    char function [10] [150];

    char name [SIZE];
    char keyType [SIZE];
    char keyName [SIZE];
    char ptrName [SIZE];
    char varName [SIZE];
    int count = 0;
    int counts = 0; 
    printf("//Name the struct m for main.\n");
    while(fgets(name,SIZE,stdin) == NULL) {
        checkInput();
    }
    name[strcspn(name,"\n")] =0;
    if(strlen(name) >= MAX) {
        clear();
    }
    if(strcmp(name,"m")==0) {
        return;
    }
    printf("//Enter the type for keys s for string i for int d for double.\n");
    while(1) {
        if(fgets(keyType,SIZE,stdin) == NULL) {
            checkInput();
            continue;
        }
        keyType[strcspn(keyType,"\n")]=0;
        if(strlen(keyType) >= MAX) {
            clear();
        }
        if(strcmp(keyType,"s")!=0 && strcmp(keyType,"i")!=0 && strcmp(keyType,"d")!=0) {
            printf("\n//Enter s i or d only.\n\n");
        } else {
            break;
        }
    }
    if(strcmp(keyType,"s")==0) {
        strcpy(keyType, structVar[2]);
    } else if(strcmp(keyType,"i")==0) {
        strcpy(keyType, structVar[3]);
    } else if(strcmp(keyType,"d")==0) {
        strcpy(keyType, structVar[4]);
    }
    printf("//Enter a key name.\n");
    while(fgets(keyName,SIZE,stdin) == NULL) {
        checkInput();
    }
    keyName[strcspn(keyName,"\n")] =0;
    if(strlen(keyName) >= MAX) {
        clear();
    }
    if(strcmp(keyName,"x")==0) {
        return;
    }
    printf("//Enter the name of the values function pointer.\n");
    while(fgets(ptrName,SIZE,stdin) == NULL) {
        checkInput();
    }
    ptrName[strcspn(ptrName,"\n")]=0;
    if(strlen(ptrName) >= MAX) {
        clear();
    }
    printf("//Enter the Variable Identifier.\n");
    while(fgets(varName,SIZE,stdin) == NULL) {
        checkInput();
    }
    varName[strcspn(varName,"\n")]=0;
    if(strlen(varName) >= MAX) {
        clear();
    }
    while(count < 10 && counts < 10){ 
        printf("//Enter a array key press # to stop.\n");
        while(fgets(arrayKey[count],150,stdin) == NULL) {
            checkInput();
        }
        arrayKey[count][strcspn(arrayKey[count],"\n")]=0;
        if(strlen(arrayKey[count]) >= 148) {
            clear();
        }
        if(strcmp(arrayKey[count],"#")==0) {
            break;
        }else{
            count++;
        } 
        printf("//Enter a value function.\n");
        while(fgets(function[counts],150,stdin) == NULL) {
            checkInput();
        }
        function[counts][strcspn(function[counts],"\n")]=0;
        if(strlen(function[counts]) >= 148) {
            clear();
        } 
        counts++; 
    }
    printf("\n%s%s%s\n",structVar[0],name, structVar[1]);    
    printf("%s%s%s%s\n",structVar[6],keyType,keyName,structVar[5]);   
    printf("%s%s%s%s%s\n",structVar[6],fptr[0],ptrName,fptr[1],fptr[2]);
    printf("%s%s\n\n",fptr[3],"      //Place this code above the main function\n\n");
    printf("%s%s %s%s\n",structArray[0],name,varName,structArray[1]);
    for (int i = 0; i < count   && i < counts; i++) {
        if(strcmp(keyType,structVar[2])==0) {
            printf("%s%s%s%s%s%s%s%s%s\n",structArray[5],structArray[2],structArray[3],arrayKey[i],structArray[3],structArray[4],structArray[5],function[i],structArray[7]);
        } else {
            printf("%s%s%s%s%s%s%s\n",structArray[5],structArray[2],arrayKey[i],structArray[4],structArray[5],function[i],structArray[7]);
        }     
    }

    printf("%s\n\n",structArray[6]);
 
}

int main(){ 
    BuildAMenue();
    return 0;
}

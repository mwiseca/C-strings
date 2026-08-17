// Copyright 2023-2026 Mitchell E Wise
// SPDX-License-Identifier: Apache-20

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
#define MAX 99
void clear(){
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}

void checkInput() {
    printf("\nInvalid input Try again.\n\n");
    clearerr(stdin); 
}

void changeVar() {
    char t [9]  [25] = {"char ","[","]"," = ",";","strcpy(",",", "\"","\");"};
    char name [SIZE] = {0};
    char value [SIZE] = {0};
    char nv [SIZE] = {0};


    while(1) {
        printf("//Enter a variable name m for main.\n");
        printf("//");
        while(fgets(name,SIZE,stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name,"\n")]=0;
        if(strlen(name) >= MAX) {
            clear();
        }
        if(strcmp(name,"m")==0) {
            break;
        }

        printf("//Enter the value assigned.\n");
        printf("//");
        while(fgets(value,sizeof(value),stdin) == NULL) {
            checkInput();
        }
        value[strcspn(value,"\n")]=0;
        if(strlen(value) >= MAX) {
            clear(); 
        }
        printf("//Enter the new value m for main.\n");
        printf("//");
        while(1) {
            if(fgets(nv,sizeof(nv),stdin) == NULL) {
                checkInput();
                continue;
            }
            nv[strcspn(nv,"\n")]=0;
            if(strlen(nv) >= MAX) {
                clear(); 
            }
             if(strcmp(nv,"m")==0){
                 return; 
             }
             if (strlen(nv) + 2 > strlen(value)) { 
                printf("//Enter a string maximum 2 bytes less than original value.\n");
            } else {
                break;
            } 
        }
        printf("\n%s%s%s%s%s%s%s%s%s      //Place code with vairables\n\n",t[0],name,t[1],t[2],t[3],t[7],value,t[7],t[4] );
        printf("%s%s%s%s%s%s      //Place code were vairable value is to be changed.\n\n",t[5],name,t[6],t[7],nv,t[8]);
        //if(strcmp(repeat,"r")!=0) {
            //break;
        //}
    }
}

int main() {
   changeVar();
return 0; 
}


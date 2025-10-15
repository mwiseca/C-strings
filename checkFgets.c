// Copyright 2023-2025 Mitchell E Wise
// SPDX-License-Identifier: Apache-20

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 200
#define MAX 199

void clear(){
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}

void checkInput(){
    clearerr(stdin);
    printf("\nInvalid input.\n\n");
}

void checkFgets() {
    char f[12][25] = {"while(fgets(", ",", "stdin) == NULL) {", "[strcspn(", "\"\\n", "\")]=0;", "    ","sizeof(","),stdin) == NULL) {","printf(\"","\\n","\");"};
    char v[SIZE];
    char me [10];
    char em [SIZE];
    char function[SIZE];
    int m;

    while (1) {
        printf("//Enter name of variable m for main.\n");
        printf("//");
        while(fgets(v, SIZE, stdin) == NULL) {
            checkInput();    
        }
        v[strcspn(v, "\n")] = 0;
        if(strlen(v) >= 9){
            clear();
        }
        if (strcmp(v, "m") == 0) {
            break;
        }
        printf("//Enter the memory to be allocated to the variable 5 minimum.\n");
        printf("//");
        while(fgets(me, sizeof(me), stdin) == NULL || (1)) {
            clearerr(stdin);    
            if(strlen(me) >= 9){
                clear();
            }            
            m = atoi(me);
            if(m <=4) {
                printf("\n//Enter a number 5 or more.\n\n");
            } else {
                break;
            }
        } 
        me[strcspn(me, "\n")] = 0;
        printf("//Enter a error message. Invalid input is good.\n");
        while(fgets(em,SIZE,stdin) == NULL) {
            checkInput();     
        }
        em[strcspn(em,"\n")]=0;
        if(strlen(em) >= MAX){
            clear();
        }
        printf("//Enter the function name.\n");
        while(fgets(function,SIZE,stdin) == NULL) {
            checkInput();     
        }
        function[strcspn(function,"\n")]=0;
        if(strlen(function) >= MAX){
            clear();
        }
        printf("\n%s%s%s%s%s%s\n",f[0], v, f[1], me, f[1], f[2]);
        printf("%sclearerr(stdin);\n",f[6]);
        printf("%s%s%s%s%s%s%s\n",f[6],f[9],f[10],em,f[10],f[10],f[11]); 
        printf("}\n");
        printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4], f[5]);
        printf("if(strlen(%s) >= %d) {\n",v,m - 1);
        printf("    %s();\n",function);
        printf("}\n\n");
        printf("\n%s%s%s%s%s%s\n",f[0], v, f[1],f[7],v, f[8]);
        printf("%sclearerr(stdin);\n",f[6]);
        printf("%s%s%s%s%s%s%s\n",f[6],f[9],f[10],em,f[10],f[10],f[11]);
        printf("}\n");
        printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4], f[5]);
        printf("if(strlen(%s) >= %d) {\n",v,m - 1);
        printf("    %s();\n",function);
        printf("}\n\n");
        printf("\n%s%s%s%s%s%s\n",f[0], v, f[1], me, f[1], f[2]);
        printf("%sclearerr(stdin);\n",f[6]);
        printf("%s%s%s%s%s%s%s\n",f[6],f[9],f[10],em,f[10],f[10],f[11]); 
        printf("}\n");
        printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4], f[5]);
        printf("\n\n");
        printf("\n%s%s%s%s%s%s\n",f[0], v, f[1],f[7],v, f[8]);
        printf("%sclearerr(stdin);\n",f[6]);
        printf("%s%s%s%s%s%s%s\n",f[6],f[9],f[10],em,f[10],f[10],f[11]);
        printf("}\n");
        printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4], f[5]);
        printf("\n\n");
        memset(me, '\0', sizeof(me));
        //if (strcmp(repeat, "r") != 0) {
        //break;
        //}
    }	    
}

int main(){
    checkFgets();
    return 0;
}




























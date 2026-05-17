// Copyright 2023-2026 Mitchell E Wise
// SPDX-License-Identifier: Apache-20

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
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

void CheckScanfClear() {
    char t[12][20] = {"while(scanf(\"","if(scanf(\"" ,"%","while(1) {", "[^\\n]\"", ",", ")!=1) {","    ","();","clearerr(stdin);","}","continue;" };
    char error[3] [15] = {"printf(\"", "\\n", "\");"};
    char var[SIZE];
    char mem[10];
    long int m;
    char buff [SIZE];
    char err [SIZE];
    char *ptr;
    

    while (1) {
        printf("//Enter the name of variable m for main.\n");
        printf("//");
        while(fgets(var,SIZE, stdin) == NULL) {
            checkInput();
        }
        var[strcspn(var, "\n")] = 0;
        if (strlen(var) >= MAX) {
            clear();
        }
        if (strcmp(var, "m") == 0) {
            break;
        }
        printf("//Enter memory allocated to variable or more.\n");
        printf("//");
        while(1) {
            if(fgets(mem,sizeof(mem), stdin) == NULL){
                checkInput();
                continue;
            }
            mem[strcspn(mem, "\n")] = 0;
            if (strlen(mem) >= 9) {
                clear();
            }
            errno = 0;
            m = strtol(mem,&ptr,10);
            if(errno == ERANGE) {
                printf("\nNumber out of range.\n\n");
            } else if(*ptr == 0x20) {
                printf("\nTry not to enter spaces between numbers.\n\n");
            } else if(ptr == mem) {
                printf("\nEnter a number only.\n\n");
            } else if(*ptr != '\0') {
                printf("\nTry not to enter text or tabs after a number.\n\n");
            } else {
                break;
            }
        }
        printf("//Enter the name of the function to flush input buffer.\n");
        printf("//");
        while(fgets(buff,SIZE,stdin)== NULL) {
            checkInput();
       }
       buff[strcspn(buff,"\n")]=0;
       printf("//Enter a error message. Enter valid text only will do.\n");
       printf("//");
       while(fgets(err,SIZE, stdin) == NULL) {
           checkInput();
       }
       err[strcspn(err, "\n")] = 0;
       printf("\n%s%s%ld%s%s%s%s\n",t[0],t[2],m-1,t[4],t[5],var,t[6]);
       printf("%s%s%s\n",t[7],buff,t[8]);       
       printf("%s%s%s%s%s%s%s\n",t[7], error[0], error[1], err, error[1],error[1], error[2]);
       printf("%s%s\n",t[7],t[9]);
       printf("%s\n\n",t[10]);
       printf("\n%s\n",t[3]);
       printf("%s%s%s%ld%s%s%s%s\n",t[7],t[1],t[2],m-1,t[4],t[5],var,t[6]);
       printf("%s%s%s%s\n",t[7],t[7],buff,t[8]);       
       printf("%s%s%s%s%s%s%s%s\n",t[7],t[7], error[0], error[1], err, error[1],error[1], error[2]);
       printf("%s%s%s\n",t[7],t[7],t[9]);
       printf("%s%s%s\n",t[7],t[7],t[11]);
       printf("%s%s\n\n",t[7],t[10]);
    }
}

int main() { 
    CheckScanfClear();
return 0;
}















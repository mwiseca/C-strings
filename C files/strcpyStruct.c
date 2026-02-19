// Copyright 2023-2026 Mitchell E Wise
// SPDX-License-Identifier: Apache-20

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
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

int main () {
    char t [8]  [25] = {"char ","[","]",";","strcpy(",", ", "\"","\");"};
    char name [SIZE];
    char mem [25];
    char string [SIZE];
    char member [SIZE];
    long int m;
    char *ptr;

    while(1) {
        printf("//Enter a variable name m for main.\n");
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
        printf("//Enter the memory alocated to the variable m for main.\n");
        while(1) {
            while(fgets(mem,sizeof(mem),stdin) == NULL) {
                checkInput();
            }
            mem[strcspn(mem,"\n")]=0;
            if(strlen(mem) >= 9) {
                clear();
            }
            if(strcmp(mem,"m")==0) {
                exit(1);
            }
            errno = 0;
            m = strtol(mem,&ptr,10);
            if(errno == ERANGE) {
                printf("\nNumber out of range.\n\n");
            } else if(*ptr == 0x20) {
                printf("\nTry not to enter spaces between number.\n\n");
            } else if(ptr == mem) {
                printf("\nEnter a number only.\n\n");
            } else if(*ptr != '\0') {
                printf("\nTry not to enter text after a number.\n\n");
            } else {
                break;
            }
        }
        printf("//Enter the dot operator (.) to acces a  member for the struct m for main.\n");
        while(fgets(member,SIZE,stdin) == NULL) {
            checkInput();
        }
        member[strcspn(member,"\n")]=0;
        if(strlen(member) >= MAX) {
            clear();
        }
        if(strcmp(member,"m")==0) {
            break;
        }
        printf("//Enter the string to assign a value.\n");
        while(1) {
            if(fgets(string,sizeof(string),stdin) == NULL) {
                checkInput();
                continue;
            }
            if(strlen(string) >= MAX) {
                clear(); 
            }
            if(strlen(string) > m -1) {
                printf("//Enter a string no more then 2 bytes less than allocated.\n");
            } else {
                break;
            } 
        }
        string[strcspn(string,"\n")]=0;
        printf("\n%s%s%s%ld%s%s\n\n",t[0],name,t[1],m,t[2],t[3]);
        printf("%s%s%s%s%s%s\n\n",t[4],member,t[5],t[6],string,t[7]);
        memset(mem, '\0', sizeof(mem));
    }
    return 0;
}


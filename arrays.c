// Copyright 2023-2026 Mitchell E Wise
// SPDX-License-Identifier: Apache-20

#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
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


void array() {
     char t[5][15] = {"char ", " [", "] ", "] = {", "};"};
    char elements[10][150];
    int count = 0; 
    char name[SIZE];
    char ne[SIZE] ;
    char m[SIZE] ;
        printf("//Enter the name of array m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL){
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear();
        }
        if (strcmp(name, "m") == 0) {
            exit(0);
        }
        printf("//Enter the amount of elements.\n");
        printf("//");
        while(fgets(ne, SIZE, stdin) == NULL) {
            checkInput();
        }
        ne[strcspn(ne, "\n")] = 0;
        if (strlen(ne) >= MAX) {
            clear();
        }
        printf("//Enter memory allocated to elements.\n");
        printf("//");
        while(fgets(m, SIZE, stdin) == NULL) {
            checkInput();
        }
        m[strcspn(m, "\n")] = 0;
        if (strlen(m) >= MAX) {
            clear();
        }
        while (count < 10) {
            printf("//Enter a element press # to stop.\n"); 
            while(fgets(elements[count],150, stdin) == NULL) { 
                checkInput();
            }
            elements[count][strcspn(elements[count], "\n")] = 0;
            if (strlen(elements[count]) > 148) {
                clear();
             }
            if(strcmp(elements[count],"#")==0) {
                break;
            }else{
                count++;
            }
        }
        printf("\n%s%s%s%s%s%s%s%s", t[0], name, t[1], ne, t[2], t[1], m, t[3]);
        for (int i = 0; i < count; i++) {
            printf("%s%s%s","\"",elements[i],"\"");
            if(i < count -1) {
                printf(","); 
            } 
        }
        printf("%s\n\n",t[4]); 
}


int main() {
    array();
    return 0;
}


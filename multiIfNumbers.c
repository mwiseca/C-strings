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
        char t[9][30] = {"if(", "} else if(",  " <= ", " == "," >= "," != ", " && ", " || ",") {"};
    char select[SIZE];  
    char name[SIZE];
    char compare[SIZE];
    char value[SIZE];
    char op[SIZE];
    char sname[SIZE];
    char scompare[SIZE];
    char svalue[SIZE];

    while (1) {
        printf("//Enter i for if, e for else if.\n");
        while (fgets(select, SIZE, stdin) == NULL || (1)) {
            clearerr(stdin); 
            if (strlen(select) >= MAX) {
                clear(); 
            }
            select[strcspn(select, "\n")] = 0;
            if (strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
                printf("\n//Enter i or e only.\n\n");
            } else {
                break;
            }
        }
        if (strcmp(select, "i") == 0) {
            strcpy(select, t[0]);
        } else if (strcmp(select, "e") == 0) {
            strcpy(select, t[1]);
        }
        printf("//Enter a name of first m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter a comparison a for less or equal b for equal c for Grater or equal d for not equal.\n");
        printf("//");
        while (fgets(compare,SIZE, stdin) == NULL || (1)) {
            clearerr(stdin);

            if (strlen(compare) >= MAX) {
                clear();
            }
            compare[strcspn(compare, "\n")] = 0;
            if (strcmp(compare, "a") != 0 && strcmp(compare, "b") != 0 && strcmp(compare, "c") !=0 && strcmp(compare, "d")!=0) {
                printf("\n//Enter a or b only.\n\n");
            } else {
                break;
            }
        }
        if (strcmp(compare, "a") == 0) {
            strcpy(compare, t[2]);
        } else if (strcmp(compare, "b") == 0) {
            strcpy(compare, t[3]);
        } else if (strcmp(compare, "c") == 0) {
            strcpy(compare, t[4]);
        } else if (strcmp(compare, "d") == 0) {
            strcpy(compare, t[5]); 
        }
        printf("//Enter a value.\n");
        printf("//");
        while(fgets(value,SIZE, stdin) == NULL) {
            checkInput();
        }
        value[strcspn(value, "\n")] = 0;
        if (strlen(value) >= MAX) {
            clear();
        } 
        printf("//Enter a operator a for and o for or.\n");
        printf("//");
        while (fgets(op, SIZE, stdin) == NULL || (1)) {
            clearerr(stdin);     
            if (strlen(op) >= MAX) {
                clear();
            }
            op[strcspn(op, "\n")] = 0;
            if (strcmp(op, "a") != 0 && strcmp(op, "o") != 0) {
                printf("\n//Enter a or o only.\n\n");
            } else {
                break;
            }
        }
        if (strcmp(op, "a") == 0) {
            strcpy(op, t[6]);
        } else if (strcmp(op, "o") == 0) {
            strcpy(op, t[7]);
        }

        printf("//Enter the second name,\n");
        printf("//");
        while(fgets(sname, SIZE, stdin) == NULL) {
            checkInput();
        }
        sname[strcspn(sname, "\n")] = 0;
        if (strlen(sname) >= MAX) {
            clear();
        }
        printf("//Enter a second comparison a for less or equal b for equal c for Grater or equal d for not equal.\n");
        printf("//");
        while (fgets(scompare, SIZE, stdin) == NULL || (1)) {
            clearerr(stdin);    
            if (strlen(scompare) >= MAX) {
                clear();
            }
            scompare[strcspn(scompare, "\n")] = 0;
            if (strcmp(scompare, "a") != 0 && strcmp(scompare, "b") != 0 && strcmp(scompare, "c") !=0 && strcmp(scompare, "d")!=0) {
                printf("\n//Enter a or b only.\n\n");
            } else {
                break;
            }
        }
        if (strcmp(scompare, "a") == 0) {
            strcpy(scompare, t[2]);
        } else if (strcmp(scompare, "b") == 0) {
            strcpy(scompare, t[3]);
        } else if (strcmp(scompare, "c") == 0) {
            strcpy(scompare, t[4]);
        } else if (strcmp(scompare, "d") == 0) {
            strcpy(scompare, t[5]); 
        }  
        printf("Enter the second value.\n");
        printf("//");
        while(fgets(svalue,SIZE, stdin) == NULL) {
            checkInput();
        }
        svalue[strcspn(svalue, "\n")] = 0;
        if (strlen(sname) >= MAX) {
            clear();
        } 
        printf("\n%s%s%s%s%s%s%s%s%s\n\n",select,name,compare,value,op,sname,scompare,svalue,t[8]);
        //if (strcmp(repeat, "r") != 0) {
            //break;
        //}
    }
return 0;
}





















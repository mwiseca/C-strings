// Copyright 2023-2025 Mitchell E Wise
// SPDX-License-Identifier: Apache-20


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100
#define MAX 99

void clean(){
    int clear;     
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {     
    } 
}

int main() {
    char f[12][15] = {"fgets(", ",", "stdin);", "[strcspn(", "\"\\n", "\")]=0;", "while(", "      ", "stdin)) {","sizeof(","),stdin);","),stdin)) {"};
    char v[SIZE];
    char *me;
    char function[SIZE];
    int m;

    while (1) {
        me = (char*)malloc(10* sizeof(char));
        if(me == NULL) {
            printf("Error: insufficient memory.\n");
            exit(1);
        }
        printf("//Enter name of variable m for main.\n");
        printf("//");
        while(fgets(v, SIZE, stdin) == NULL) {
            printf("\nInvalid input. Try again.\n\n");
		    clearerr(stdin);
        }
        v[strcspn(v, "\n")] = 0;
        if(strlen(v) >= MAX){
            clean();
        }
        if (strcmp(v, "m") == 0) {
            free(me);
            me = NULL;
            break;
        }
        printf("//Enter the memory to be allocated to the variable 5 minimum.\n");
        printf("//");
        while(fgets(me, sizeof(me), stdin) == NULL || (1)) {
		    clearerr(stdin);
		    
            if(strlen(me) >= 9){
                 clean();
            }            
            m = atoi(me);
            if(m <=4) {
                printf("\n//Enter a number 5 or more.\n\n");
            } else {
                break;
            }
       } 
        me[strcspn(me, "\n")] = 0;
        printf("//Enter the function name.\n");
        while(fgets(function,SIZE,stdin) == NULL) {
            printf("\nInvalid input. Try again.\n\n");
		    clearerr(stdin);
        }
        function[strcspn(function,"\n")]=0;
        if(strlen(v) >= MAX){
            clean();
        }
        printf("\n%s%s%s%s%s%s\n", f[0], v, f[1], me, f[1], f[2]);
        printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4], f[5]);
        printf("if(strlen(%s) >= %d) {\n",v,m - 1);
        printf("    %s();\n",function);
        printf("}\n\n");
        printf("\n%s%s%s%s%s%s%s\n",f[6], f[0], v, f[1], me, f[1], f[8]);
        printf("%s%s%s%s%s%s%s\n",f[7], v, f[3], v, f[1], f[4], f[5]);
        printf("    if(strlen(%s) >= %d) {\n",v,m - 1);
        printf("        %s();\n",function);
        printf("    }\n\n");
        printf("\n%s%s%s%s%s%s\n", f[0], v, f[1],f[9],v,f[10]);
        printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4], f[5]);
        printf("if(strlen(%s) >= %d) {\n",v,m - 1);
        printf("    %s();\n",function);
        printf("}\n\n");
        printf("\n%s%s%s%s%s%s%s\n",f[6], f[0], v, f[1],f[9],v, f[11]);
        printf("%s%s%s%s%s%s%s\n",f[7], v, f[3], v, f[1], f[4], f[5]);
        printf("    if(strlen(%s) >= %d) {\n",v,m - 1);
        printf("        %s();\n",function);
        printf("    }\n\n");
        free(me);
        me = NULL;
        //if (strcmp(repeat, "r") != 0) {
            //break;
        //}
    }
    return 0;
}

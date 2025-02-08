// Copyright 2023-2025 Mitchell E Wise
// SPDX-License-Identifier: Apache-20


#include <stdio.h>
#include <string.h>

/*This is fgets in Cstrings that uses scanf for "int mem;".
  The "if(strlen(var) >= 14){" is so it wont clear input buffer if less than 14 characters
  are entered. That prevents the user having to press enter twice. If more are entered the program
  will not skip scanf and read That is not a number.
  Scanf is in a while loop that repeats if scanf != 1 so if the wrong data type is entered
  it will display That is not a number.
  The 8 byte limit in scanf "%8d" is so it wont display -1 if to many numbers are entered. 
  The "if(strlen(var) >= 14){" can be avoided if "__fpurge(stdin);" or "fflush(stdin);" are used.
  to flush the input buffer instead of the clean(); function. They dont work with all compilers.*/


void clean(){ 
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    } 
}

int main() {
    char f[11][15] = {"fgets(", ",", "stdin);", "[strcspn(", "\"\\n", "\")]=0;", "[strlen(", ")-1] = '\\0';","while(", "      ", "stdin)) {"};
    char var[15];
    int mem;

    while (1) {
        printf("//Enter name of variable m for main.\n");
	printf("//");
	fgets(var, 15, stdin);
	var[strcspn(var, "\n")] = 0;
	if(strlen(var) >= 14){
	    clean();
	} else if (strcmp(var, "m") == 0) {
	    break;
	}
	printf("//Enter the memory to be allocated to the variable.\n");
	printf("//");
	while(scanf("%8d",&mem)!=1){
	    clean();
	    printf("\nThat is not a number.\n\n");
	    printf("//");
	}
	clean(); 
	printf("\n%s%s%s%d%s%s\n", f[0], var, f[1], mem, f[1], f[2]);
	printf("%s%s%s%s%s%s\n\n", var, f[3], var, f[1], f[4], f[5]);
	printf("\n%s%s%s%s%d%s%s\n",f[8], f[0], var, f[1], mem, f[1], f[10]);
	printf("%s%s%s%s%s%s%s\n\n",f[9], var, f[3], var, f[1], f[4], f[5]);
	printf("\n%s%s%s%d%s%s\n", f[0], var, f[1], mem, f[1], f[2]);
	printf("%s%s%s%s\n\n", var, f[6], var, f[7]);
    }
return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 2000

int main(){
    char f[12][15] = {"fgets(", ",", "stdin);", "[strcspn(", "\"\\n", "\")]=0;", "while(", "      ", "stdin)) {","sizeof(","),stdin);","),stdin)) {"};
    char v[MAX];
    char me[MAX];
    char function[MAX];
    int m;

    while (1) {
        printf("//Enter name of variable m for main.\n");
        printf("//");
	    fgets(v, MAX, stdin);
	    v[strcspn(v, "\n")] = 0;
	    if (strcmp(v, "m") == 0) {
	        break;
	    }
	    printf("//Enter the memory to be allocated to the variable 5 minimum.\n");
	    printf("//");
	    while(fgets(me,MAX, stdin)) {
	          me[strcspn(me, "\n")] = 0;
	        m = atoi(me);
	        if(m <=4 || m > 999999999) {
	            printf("\n//Enter a number 5 or more or less than 99999999.\n\n");
            } else {
	            break;
	        }
	    }
	    printf("//Enter the function name.\n");
	    fgets(function,MAX,stdin);
	    function[strcspn(function,"\n")]=0;
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
	   //if (strcmp(repeat, "r") != 0) {
	       //break;
            //} 
    }
return 0;
}






























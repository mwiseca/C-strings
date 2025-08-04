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

void choice() {
    printf("//Enter ch for choices.\n");
    printf("//Enter a for arrays ia for numbers.\n");
    printf("//Enter b for strings with printf.\n");
    printf("//Enter c for strings with no quotation marks.\n");
    printf("//Enter cy for what's needed to copy and paste to finish a simple program.\n");
    printf("//Enter i for if statements e for else if for strings.\n");
    printf("//Enter mi for if statements with 2 conditions for strings.\n");
    printf("//Enter in for if and else if statements for numbers.\n");
    printf("//Enter im for if and else if statements for numbers if malloc is used.\n");
    printf("//Enter f for fgets with removal of the newline character.\n");
    printf("//Enter fs for fgets with sizeof operator.\n");
    printf("//Enter fb for fgets to use with cb to clear input buffer without having ");
    printf("to press enter twice.\n");
    printf("//Enter s for scanf for strings to allow for white spaces.\n");
    printf("//Enter sb for scanf basic no white spaces.\n");
    printf("//Enter si for scanf for integers and doubles.\n");
    printf("//Enter sh for scanf for ints and doubles on the heap.\n");
    printf("//Enter sc for check scanf.\n");
    printf("//Enter cb for a function that clears input buffer for scanf.\n");
    printf("//Enter h to allocate memory on the heap.\n");
    printf("//Enter hi to allocate int double or float memory on the heap.\n");
    printf("//Enter cm to check malloc.\n");
    printf("//Enter fc for void functions.\n");
    printf("//Enter cf to call functions.\n");
    printf("//Enter v for variables without assigning a value.\n");
    printf("//Enter vv for variables with assigning a string value.\n");
    printf("//Enter vi for int and double variables.\n");
    printf("//Enter vn for int and double variables with no value.\n");
    printf("//Enter m for main x to exit.\n");
}

int main() {
    char sw[50];
    char repeat[50];

    printf("\n\n");
    printf("          copyright 2025 Mitchell E Wise\n");
    printf("          SPDX-License-Identifier: Apache-20\n\n\n");

    printf("//Enter r to repeat choices enter to not.\n");
    while(fgets(repeat, sizeof(repeat), stdin) == NULL) {
        printf("\nInvalid input Try again.\n\n");
	clearerr(stdin);
    }
    repeat[strcspn(repeat, "\n")] = 0;
    if (strlen(repeat) >= 49) {
        clean();
    }
    choice();
    while (1) {
        printf("//Enter x to exit main m for main ch for choices.\n");
        printf("//");
        while(fgets(sw, sizeof(sw), stdin) == NULL) {
	    printf("\nInvalid input Try again.\n\n");
	    clearerr(stdin);
	}
        sw[strcspn(sw, "\n")] = 0;
        if (strlen(sw) >= 49) {
            clean();
        }
        if (strcmp(sw, "b") == 0) {
            char string[3][15] = {"printf(\"", "\\n", "\");"};
            char text[SIZE];
            printf("//Enter your string, m for main.\n");
            while (1) {
                printf("//");
                while(fgets(text, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}
		text[strcspn(text, "\n")] = 0;  
                if (strlen(text) >= MAX) {
                    clean();
                }
                if (strcmp(text, "m") == 0) {
                    break;
                }
                printf("\n%s%s%s%s\n\n", string[0], text, string[1], string[2]);
		printf("\n%s%s%s%s%s%s\n\n", string[0], string[1], text, string[1],string[1], string[2]);
                printf("%s%s%s\n\n", string[0], text, string[2]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
        } else if (strcmp(sw, "c") == 0) {
            char t[2][12] = {"printf(", ");"};
            char text[SIZE];

            printf("//Enter text m for main.\n");
            while (1) {
                printf("//");
                while(fgets(text,SIZE, stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}
                text[strcspn(text, "\n")] = 0;
                if (strlen(text) >= MAX) {
                    clean();
                }
                if (strcmp(text, "m") == 0) {
                    break;
                }
                printf("\n%s%s%s\n\n", t[0], text, t[1]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
        } else if (strcmp(sw, "f") == 0) {
            char f[11][15] = {"fgets(", ",", "stdin);", "[strcspn(", "\"\\n", "\")]=0;", "[strlen(", ")-1] = '\\0';","while(", "      ", "stdin)) {"};
            char v[SIZE];
            char me[SIZE];

            while (1) {
                printf("//Enter name of variable m for main.\n");
                printf("//");
                while(fgets(v,SIZE,stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                v[strcspn(v, "\n")] = 0;
                if (strlen(v) >= MAX) {
                    clean();
                }
                if (strcmp(v, "m") == 0) {
                    break;
                }
                printf("//Enter the memory to be allocated to the variable.\n");
                printf("//");
                while(fgets(me,SIZE,stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                me[strcspn(me, "\n")] = 0;
                if (strlen(me) >= MAX) {
                    clean();
                }
                printf("\n%s%s%s%s%s%s\n", f[0], v, f[1], me, f[1], f[2]);
                printf("%s%s%s%s%s%s\n\n", v, f[3], v, f[1], f[4], f[5]);
                printf("\n%s%s%s%s%s%s%s\n",f[8], f[0], v, f[1], me, f[1], f[10]);
                printf("%s%s%s%s%s%s%s\n\n",f[9], v, f[3], v, f[1], f[4], f[5]);
                printf("\n%s%s%s%s%s%s\n", f[0], v, f[1], me, f[1], f[2]);
                printf("%s%s%s%s\n\n", v, f[6], v, f[7]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
	} else if (strcmp(sw, "fs") == 0) {
            char f[12][15] = {"fgets(", ",","sizeof(", "),stdin);", "[strcspn(", "\"\\n", "\")]=0;", "[strlen(", ")-1] = '\\0';","while(", "      ", "),stdin)) {"};
            char name[SIZE];
            
            while (1) {
                printf("//Enter name of variable m for main.\n");
                printf("//");
                while(fgets(name, SIZE, stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                name[strcspn(name, "\n")] = 0;
		if (strlen(name) >= MAX) {
		    clean();
		}
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter the memory to be allocated to the variable.\n");
                printf("\n%s%s%s%s%s%s\n", f[0], name, f[1],  f[2],name, f[3]);
                printf("%s%s%s%s%s%s\n\n", name, f[4], name, f[1], f[5], f[6]);
                printf("\n%s%s%s%s%s%s%s\n",f[9], f[0], name, f[1], f[2] ,name, f[11]);
                printf("%s%s%s%s%s%s%s\n\n",f[10], name, f[4], name, f[1], f[5], f[6]);
                printf("\n%s%s%s%s%s%s\n", f[0], name, f[1],  f[2],name, f[3]); 
                printf("%s%s%s%s\n\n", name, f[7], name, f[8]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
	} else if (strcmp(sw, "fb")==0) {
            char f[12][15] = {"fgets(", ",", "stdin);", "[strcspn(", "\"\\n", "\")]=0;", "while(", "      ", "stdin)) {","sizeof(","),stdin);","),stdin)) {"};
            char v[SIZE];
            char me [10];
            char function[SIZE];
            int m;

            while (1) {
                printf("//Enter name of variable m for main.\n");
                printf("//");
                while(fgets(v, SIZE, stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
                }
                v[strcspn(v, "\n")] = 0;
                if(strlen(v) >= MAX){
                    clean();
                }
                if (strcmp(v, "m") == 0) {
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
                    printf("\nInvalid input Try again.\n\n");
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
                memset(me, '\0', sizeof(me));
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }	    
        } else if (strcmp(sw, "s") == 0) {
            char t[6][15] = {"scanf(\"", "%", "[^\\n]\"", ",", ");", "getchar();"};
	    char var[SIZE];
	    char mem[10];
	    int m;

	    while (1) {
		printf("//Enter the name of variable m for main.\n");
		printf("//");
		while(fgets(var,SIZE, stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
                    clearerr(stdin);
                }	
		var[strcspn(var, "\n")] = 0;
		if (strlen(var) >= MAX) {
		    clean();
		}
		if (strcmp(var, "m") == 0) {
		    break;
		}
		printf("//Enter memory allocated to variable 2 or higher.\n");
		printf("//");
		while(fgets(mem,sizeof(mem), stdin) == NULL || (1)){
                    clearerr(stdin);  
		    if (strlen(mem) >= 9) {
			clean();
		    }
		    m = atoi(mem);
		    if (m < 2){
			printf("\n//Enter a valid number only.\n\n");
			printf("//");
		    }else{
			break;
		    }
		}	
		mem[strcspn(mem, "\n")] = 0;    
		printf("\n%s%s%d%s%s%s%s\n", t[0], t[1], m - 1, t[2], t[3], var, t[4]);
		printf("%s\n\n", t[5]);
		    memset(mem, '\0', sizeof(mem));   
		if (strcmp(repeat, "r") != 0) {
		    break;
		}
	    }
        } else if (strcmp(sw, "sb") == 0) {
            char t[5][15] = {"scanf(\"", "%", "s\"", ", ", ");"};
	    char var[SIZE];
	    char mem[10];
	    int m;

	    while (1) {
		printf("//Enter the name of variable m for main.\n");
		printf("//");
		while(fgets(var,SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
                    clearerr(stdin);
                }	
		var[strcspn(var, "\n")] = 0;
		if (strlen(var) >= MAX) {
		    clean();
		}
		if (strcmp(var, "m") == 0) {
		    break;
		}
		printf("//Enter memory allocated to variable 2 or higher.\n");
		printf("//");
		while(fgets(mem,sizeof(mem), stdin) == NULL || (1)){
		     clearerr(stdin);         
		      
		    if (strlen(mem) >= 9) {
			clean();
		    }
		   m = atoi(mem);
		   if (m < 2){
		       printf("\n//Enter a valid number only.\n\n");
		       printf("//");
		   }else{
		       break; 
		   }
		}
		mem[strcspn(mem, "\n")] = 0;    
		printf("\n%s%s%d%s%s%s%s\n\n", t[0], t[1], m - 1, t[2], t[3], var, t[4]);
		    memset(mem, '\0', sizeof(mem));
		if (strcmp(repeat, "r") != 0) {
		    break;
		}
	    }            
        } else if (strcmp(sw, "cb") == 0) {
            char t[5][12] = {"void ", "(", "){", "}","();"};
            char name[SIZE];
            
            while (1) {
                printf("//Name function m for main.\n");
                printf("//");
                while(fgets(name,SIZE, stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("\n%s%s%s%s\n", t[0], name, t[1], t[2]);
                printf("    int clear;\n");   
                printf("    while ((clear = getc(stdin)) != '\\n' && clear != EOF) {\n");
                printf("%s%s\n","    ",t[3]);	
	        printf("%s\n\n",t[3]);
		printf("%s%s\n\n",name,t[4]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }	
        } else if (strcmp(sw, "i") == 0) {
            char f[4][15] = {"if(strcmp(", ",", "\"", ")==0) {"};
            char name[SIZE];
            char value[SIZE];

            while (1) {
                printf("//Enter name of the if statement m for main.\n");
                printf("//");
                while(fgets(name,SIZE,stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}		
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter the value.\n");
                printf("//");
                while(fgets(value,SIZE,stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                value[strcspn(value, "\n")] = 0;
                if (strlen(value) >= MAX) {
                    clean();
                }
                printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2], value, f[2], f[3]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
        } else if (strcmp(sw, "e") == 0) {
            char f[4][18] = {"} else if(strcmp(", ",", "\"", ")==0) {"};
            char name[SIZE];
            char value[SIZE];

            while (1) {
                printf("//Enter name of the else if statement m for main.\n");
                printf("//");
                while(fgets(name,SIZE, stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter the value.\n");
                printf("//");
                while(fgets(value,SIZE, stdin) ==NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}		
                value[strcspn(value, "\n")] = 0;
                if (strlen(value) >= MAX) {
                    clean();
                }
                printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2], value, f[2], f[3]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
        } else if (strcmp(sw, "mi") == 0) {
            char t[11][30] = {"if(strcmp(", ",", "} else if(strcmp(", "\"", ")==0", ")!=0", ")==0) {", ")!=0) {", " && ", " || ", "strcmp("};
            char select[SIZE];
            char name[SIZE];
            char value[SIZE];
            char op[SIZE];
            char compare[SIZE];
            char sname[SIZE];
            char svalue[SIZE];
            char scompare[SIZE];

            while (1) {
                printf("//Enter i for if, e for else if.\n");
                while (fgets(select,SIZE, stdin) == NULL || (1)) {
		    clearerr(stdin);   
                    if (strlen(select) >= MAX) {
                        clean();
                    }
		    select[strcspn(select, "\n")] = 0;
                    if (strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
                        printf("//Enter i or e only.\n");
                    } else {
                        break;
                    }
                }   
                if (strcmp(select, "i") == 0) {
                    strcpy(select, t[0]);
                } else if (strcmp(select, "e") == 0) {
                    strcpy(select, t[2]);
                }
		printf("//Enter a name of first m for main.\n");
		printf("//");
		while(fgets(name,SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}
		name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
		if (strcmp(name, "m") == 0) {
                    break;
                }
		printf("//Enter a value.\n");
		printf("//");
		while(fgets(value, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}
		value[strcspn(value, "\n")] = 0;
                if (strlen(value) >= MAX) {
                    clean();
                }
		printf("//Enter a comparison a for equal b for not equal.\n");
		printf("//");
                while (fgets(compare,SIZE, stdin) == NULL || (1)) {
		    clearerr(stdin);   
                    if (strlen(compare) >= MAX) {
                        clean();
                    }
		    compare[strcspn(compare, "\n")] = 0;
                    if (strcmp(compare, "a") != 0 && strcmp(compare, "b") != 0) {
                        printf("//Enter a or b only.\n");
                    } else {
                        break;
                    }
                }
                if (strcmp(compare, "a") == 0) {
                    strcpy(compare, t[4]);
                } else if (strcmp(compare, "b") == 0) {
                    strcpy(compare, t[5]);
                }
		printf("//Enter a operator a for and o for or.\n");
		printf("//");
		while (fgets(op,SIZE, stdin) == NULL || (1)) {
		    clearerr(stdin);  
                    if (strlen(op) >= MAX) {
                        clean();
                    }
		    op[strcspn(op, "\n")] = 0;
                    if (strcmp(op, "a") != 0 && strcmp(op, "o") != 0) {
                        printf("//Enter a or o only.\n");
                    } else {
                        break;
                    }
                }
		   
                if (strcmp(op, "a") == 0) {
                    strcpy(op, t[8]);
                } else if (strcmp(op, "o") == 0) {
                    strcpy(op, t[9]);
                }
		printf("//Enter the second name,\n");
		printf("//");
		while(fgets(sname,SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}    
		sname[strcspn(sname, "\n")] = 0;
                if (strlen(sname) >= MAX) {
                    clean();
                }
		printf("Enter the second value.\n");
		printf("//");
		while(fgets(svalue,SIZE,stdin) == NULL) {  
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}		
		svalue[strcspn(svalue, "\n")] = 0;
                if (strlen(svalue) >= MAX) {
                    clean();
                }
		printf("Enter a second comparison a for equal b for not equal\n");
		printf("//");
		while (fgets(scompare,SIZE,stdin) == NULL || (1)) {
		    clearerr(stdin);
                    if (strlen(scompare) >= MAX) {
                        clean();
		    }	
		    scompare[strcspn(scompare, "\n")] = 0;
		    if (strcmp(scompare, "a") != 0 && strcmp(scompare, "b") != 0) {
                        printf("//Enter a or b only.\n");
                    } else {
                        break;
                    }
                }
                if (strcmp(scompare, "a") == 0) {
                    strcpy(scompare, t[6]);
                } else if (strcmp(scompare, "b") == 0) {
                    strcpy(scompare, t[7]);
                }
                printf("\n%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n\n", select, name, t[1], t[3], value, t[3], compare, op, t[10], sname, t[1], t[3], svalue, t[3], scompare);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }	
        } else if (strcmp(sw, "in") == 0) {
            char t[10][20] = {"if(", "} else if(", "strlen", " <= ", " == ", " >= ", " != ", "(", ")", ") {"};
            char select[SIZE];
            char var[SIZE];
            char op[SIZE];
            char num[SIZE];
            while (1) {
                printf("//Enter s for strlen  or i for regular if statement. Enter e for else if.\n");
                printf("//");
                while(fgets(select,SIZE,stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}
                select[strcspn(select, "\n")] = 0;
                if (strlen(select) >= MAX) {
                    clean();
                }
                if (strcmp(select, "s") != 0 && strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
                    printf("//Enter s or i or e only.\n");
                    continue;
                }
                printf("//Enter the name of if or else if statement  enter m for main.\n");
                while(fgets(var,SIZE,stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}
                var[strcspn(var, "\n")] = 0;
                if (strlen(var) >= MAX) {
                    clean();
                }
                if (strcmp(var, "m") == 0) {
                    break;
                }
                printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
                printf("//");
                while (fgets(op,SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
                    
                    if (strlen(op) >= MAX) {
                        clean();
                    }
                    if (strcmp(op, "a") != 0 && strcmp(op, "b") != 0 && strcmp(op, "c") != 0 && strcmp(op, "d") != 0) {
                        printf("//Enter a or b or c or d only.\n");
                    } else {
                        break;
                    }
                }
		op[strcspn(op, "\n")] = 0;    
                if (strcmp(op, "a") == 0) {
                    strcpy(op, t[3]);
                } else if (strcmp(op, "b") == 0) {
                    strcpy(op, t[4]);
                } else if (strcmp(op, "c") == 0) {
                    strcpy(op, t[5]);
                } else if (strcmp(op, "d") == 0) {
                    strcpy(op, t[6]);
                }
                printf("//Enter a number to compare to.\n");
                printf("//");
                while(fgets(num, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}   
                num[strcspn(num, "\n")] = 0;
                if (strlen(num) >= MAX) {
                    clean();
                }
                if (strcmp(select, "s") == 0) {
                    printf("\n%s%s%s%s%s%s%s%s\n\n", t[0], t[2], t[7], var, t[8], op, num, t[9]);
                    if (strcmp(repeat, "r") != 0) {
                        break;
                    }
                } else if (strcmp(select, "i") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[0], var, op, num, t[9]);
                    if (strcmp(repeat, "r") != 0) {
                        break;
                    }
                } else if (strcmp(select, "e") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[1], var, op, num, t[9]);
                    if (strcmp(repeat, "r") != 0) {
                        break;
                    }
                }
            }
        } else if (strcmp(sw, "im") == 0) {
            char t[9][20] = {"if(*", "} else if(*", " <= ", " == ", " >= ", " != ", "(", ")", ") {"};
            char select[SIZE];
            char var[SIZE];
            char op[SIZE];
            char num[SIZE];
            while (1) {
                printf("//Enter i for if statement. Enter e for else if.\n");
                printf("//");
                while(fgets(select,SIZE,stdin) == NULL) {
	            printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}   
                select[strcspn(select, "\n")] = 0;
                if (strlen(select) >= MAX) {
                    clean();
                }
                if (strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
                    printf("//Enter i or e only.\n");
                    continue;
                }
                printf("//Enter the name of if or else if statement  enter m for main.\n");
                while(fgets(var,SIZE,stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}
                var[strcspn(var, "\n")] = 0;
                if (strlen(var) >= MAX) {
                    clean();
                }
                if (strcmp(var, "m") == 0) {
                    break;
                }
                printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
                printf("//");
                while (fgets(op,SIZE,stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
                    if (strlen(op) >= MAX) {
                        clean();
                    }
                    if (strcmp(op, "a") != 0 && strcmp(op, "b") != 0 && strcmp(op, "c") != 0 && strcmp(op, "d") != 0) {
                        printf("//Enter a or b or c or d only.\n");
                    } else {
                        break;
                    }
                }
		op[strcspn(op, "\n")] = 0;    
                if (strcmp(op, "a") == 0) {
                    strcpy(op, t[2]);
                } else if (strcmp(op, "b") == 0) {
                    strcpy(op, t[3]);
                } else if (strcmp(op, "c") == 0) {
                    strcpy(op, t[4]);
                } else if (strcmp(op, "d") == 0) {
                    strcpy(op, t[5]);
                }
                printf("//Enter a number to compare to.\n");
                printf("//");
                while(fgets(num,SIZE,stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin); 
		}
                num[strcspn(num, "\n")] = 0;
                if (strlen(num) >= MAX) {
                    clean();
                }
                if (strcmp(select, "i") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[0], var, op, num, t[8]);
                    if (strcmp(repeat, "r") != 0) {
                        break;
                    }
                } else if (strcmp(select, "e") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[1], var, op, num, t[8]);
                    if (strcmp(repeat, "r") != 0) {
                        break;
                    }
                }
            }
        } else if (strcmp(sw, "v") == 0) {
            char f[3][15] = {"char ", " [", "];"};
            char name[SIZE];
            char mem[SIZE];

            while (1) {
                printf("//Enter name of variable m for main.\n");
                printf("//");
                while(fgets(name,SIZE,stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter the memory to be allocated to the variable.\n");
                printf("//");
                while(fgets(mem,SIZE,stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                mem[strcspn(mem, "\n")] = 0;
                if (strlen(mem) >= MAX) {
                    clean();
                }
                printf("\n%s%s%s%s%s\n\n", f[0], name, f[1], mem, f[2]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
        } else if (strcmp(sw, "vv") == 0) {
            char v[6][15] = {"char ", "[", "]", " = ", "\"", ";"};
            char name[SIZE];
            char mem[SIZE];
            char value[SIZE];
            while (1) {
                printf("//Enter a name of variable m for main.\n");
                printf("//");
                while(fgets(name,SIZE,stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter the amount of memory to allocate or press enter to not allocate m for main.\n");
                printf("//");
                while(fgets(mem,SIZE,stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                mem[strcspn(mem, "\n")] = 0;
                if (strlen(mem) >= MAX) {
                    clean();
                }
                printf("//enter a value\n");
                printf("//");
                while(fgets(value,SIZE,stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                value[strcspn(value, "\n")] = 0;
		if (strlen(value) >= MAX) {
                    clean();
                }
                printf("\n%s%s%s%s%s%s%s%s%s%s\n\n", v[0], name, v[1], mem, v[2], v[3], v[4], value, v[4], v[5]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
        } else if (strcmp(sw, "a") == 0) {
            char t[5][15] = {"char ", " [", "] ", "] = {", "};"};
            char name[SIZE];
            char ne[SIZE];
            char m[SIZE];
            char elements[SIZE];
            while (1) {
                printf("//Enter the name of array m for main.\n");
                printf("//");
                while(fgets(name,SIZE,stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter the amount of elements.\n");
                printf("//");
                while(fgets(ne,SIZE,stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                ne[strcspn(ne, "\n")] = 0;
                if (strlen(ne) >= MAX) {
                    clean();
                }
                printf("//Enter memory allocated to elements.\n");
                printf("//");
                while(fgets(m,SIZE,stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                m[strcspn(m, "\n")] = 0;
                if (strlen(m) >= MAX) {
                    clean();
                }
                printf("//Enter elements with quotations and commas between each.\n");
                printf("//");
                while(fgets(elements,SIZE,stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                elements[strcspn(elements, "\n")] = 0;
                if (strlen(elements) >= MAX) {
                    clean();
                }
                printf("\n%s%s%s%s%s%s%s%s%s%s\n\n", t[0], name, t[1], ne, t[2], t[1], m, t[3], elements, t[4]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
        } else if (strcmp(sw, "ia") == 0) {
            char a[6][20] = {"int ", "double ", "[", "]", " = {", "};"};
            char typ[SIZE];
            char name[SIZE];
            char num[SIZE];
            char elements[SIZE];

            while (1) {
                printf("//Enter a data type i for int d for double.\n");
                printf("//");
                while (fgets(typ, SIZE, stdin)) {
                    typ[strcspn(typ, "\n")] = 0;
                    if (strlen(typ) >= MAX) {
                        clean();
                    }
                    if (strcmp(typ, "i") != 0 && strcmp(typ, "d") != 0) {
                        printf("//Enter i or d.\n");
                    } else {
                        break;
                    }
                }
                if (strcmp(typ, "i") == 0) {
                    strcpy(typ, a[0]);
                } else if (strcmp(typ, "d") == 0) {
                    strcpy(typ, a[1]);
                }
                printf("//Enter the name of the array m for main.\n");
                printf("//");
                fgets(name, SIZE, stdin);
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter number of elements m for main.\n");
                printf("//");
                fgets(num, SIZE, stdin);
                num[strcspn(num, "\n")] = 0;
                if (strlen(num) >= MAX) {
                    clean();
                }
                printf("//Enter elements with a comma between them.\n");
                printf("//");
                fgets(elements, SIZE, stdin);
                elements[strcspn(elements, "\n")] = 0;
                if (strlen(elements) >= MAX) {
                    clean();
                }
                printf("%s%s%s%s%s%s%s%s\n", typ, name, a[2], num, a[3], a[4], elements, a[5]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
        } else if (strcmp(sw, "fc") == 0) {
            char t[4][12] = {"void ", "(", "){", "}"};
            char name[SIZE];
            char per[SIZE];

            while (1) {
                printf("//Name function m for main.\n");
                printf("//");
                while(fgets(name, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter parameters.\n");
                printf("//");
                while(fgets(per, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                per[strcspn(per, "\n")] = 0;
                if (strlen(per) >= MAX) {
                    clean();
                }
                printf("\n%s%s%s%s%s\n\n\n%s\n\n", t[0], name, t[1], per, t[2], t[3]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
        } else if (strcmp(sw, "cf") == 0) {
            char t[2][12] = {"(", ");"};
            char name[SIZE];
            char per[SIZE];
            while (1) {
                printf("//Enter the name of function m for main.\n");
                printf("//");
                while(fgets(name, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter values for parameters.\n");
                printf("//");
                while(fgets(per, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                per[strcspn(per, "\n")] = 0;
                if (strlen(per) >= MAX) {
                    clean();
                }
                printf("\n%s%s%s%s\n\n", name, t[0], per, t[1]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
        } else if (strcmp(sw, "h") == 0) {
            char t[9][18] = {"char", " *", ";", " = (char*)malloc", "(", ");", "* sizeof(char));", "free", " = NULL;"};
            char name[SIZE];
            char mem[SIZE];

            while (1) {
                printf("//Enter the name of the variable m for main.\n");
                printf("//");
                while(fgets(name, SIZE, stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	    
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter memory to allocate.\n");
                printf("//");
                while(fgets(mem, SIZE, stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}		
                mem[strcspn(mem, "\n")] = 0;
                if (strlen(mem) >= MAX) {
                    clean();
                }
                printf("\n");
                printf("\n%s%s%s%s\n\n", t[0], t[1], name, t[2]);
                printf("%s%s%s%s%s\n\n", name, t[3], t[4], mem, t[5]);
                printf("%s%s%s%s%s\n\n", name, t[3], t[4], mem, t[6]);
                printf("%s%s%s%s\n", t[7], t[4], name, t[5]);
                printf("%s%s\n\n", name, t[8]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
        } else if (strcmp(sw, "hi") == 0) {
            char t[15][20] = {"int", " *", ";", " = (int*)malloc", "(",");", "* sizeof(int));", "free", " = NULL;", "double", "float", " = (double*)malloc", " = (float*)malloc", "* sizeof(double));", "* sizeof(float));"};                 
            char name[SIZE];
            char mem[SIZE];

            while (1) {
                printf("//Enter the name of the variable m for main.\n");
                printf("//");
                while(fgets(name, SIZE, stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter memory to allocate.\n");
                printf("//");
                while(fgets(mem, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                mem[strcspn(mem, "\n")] = 0;
                if (strlen(mem) >= MAX) {
                    clean();
                }
                printf("\n");
                printf("%s%s%s%s\n\n", t[0], t[1], name, t[2]);
                printf("%s%s%s%s\n\n", t[9], t[1], name, t[2]);
                printf("%s%s%s%s\n\n", t[10], t[1], name, t[2]);
                printf("%s%s%s%s%s\n\n", name, t[3], t[4], mem, t[6]);
                printf("%s%s%s%s%s\n\n", name, t[11], t[4], mem, t[13]);
                printf("%s%s%s%s%s\n\n", name, t[12], t[4], mem, t[14]);
                printf("%s%s%s%s\n", t[7], t[4], name, t[5]);
                printf("%s%s\n\n", name, t[8]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
        } else if (strcmp(sw, "cm") == 0) {
            char t[6][18] = {"if(", " == NULL){", "    printf(\"", "\\n", "\");", "    exit(1);}"};
            char name[SIZE];
            char em[SIZE];
            while (1) {
                printf("//Enter the name m for main.\n");
                printf("//");
                while(fgets(name, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter an error message.\n");
                printf("//");
                while(fgets(em, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                em[strcspn(em, "\n")] = 0;
                if (strlen(em) >= MAX) {
                    clean();
                }
                printf("\n%s%s%s\n", t[0], name, t[1]);
                printf("%s%s%s%s\n", t[2], em, t[3], t[4]);
                printf("%s\n\n", t[5]);
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
        } else if (strcmp(sw, "vi") == 0) {
            char t[5][15] = {"double ", "int ", " = ", ";", " ;"};
            char ch[SIZE];
            char name[SIZE];
            char value[SIZE];
            while (1) {
                printf("//Choose i for int d for double, m for main.\n");
                printf("//");
                while(fgets(ch, SIZE, stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	 
                ch[strcspn(ch, "\n")] = 0;
                if (strlen(ch) >= MAX) {
                    clean();
                }
                if (strcmp(ch, "m") == 0) {
                    break;
                } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
                    printf("Choose i or d or m only.\n");
                    continue;
                }
                printf("Enter the name.\n");
                printf("//");
                while(fgets(name, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	 
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                printf("Enter a value.\n");
                printf("//");
                while(fgets(value, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	 
                value[strcspn(value, "\n")] = 0;
                if (strlen(value) >= MAX) {
                    clean();
                }
                if (strcmp(ch, "i") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[1], name, t[2], value, t[3]);
                    if (strcmp(repeat, "r") != 0) {
                        break;
                    }
                } else if (strcmp(ch, "d") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[0], name, t[2], value, t[3]);
                    if (strcmp(repeat, "r") != 0) {
                        break;
                    }
                }
            }
        } else if (strcmp(sw, "vn") == 0) {
            char t[3][15] = {"double ", "int ", ";"};
            char ch[SIZE];
            char name[SIZE];
            while (1) {
                printf("//Choose i for int d for double, m for main.\n");
                printf("//");
                while(fgets(ch, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                ch[strcspn(ch, "\n")] = 0;
                if (strlen(ch) >= MAX) {
                    clean();
                }
                if (strcmp(ch, "m") == 0) {
                    break;
                } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
                    printf("Choose i or d or m only.\n");
                    continue;
                }
                printf("Enter the name.\n");
                printf("//");
                while(fgets(name, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(ch, "i") == 0) {
                    printf("\n%s%s%s\n\n", t[1], name, t[2]);
                    if (strcmp(repeat, "r") != 0) {
                        break;
                    }
                } else if (strcmp(ch, "d") == 0) {
                    printf("\n%s%s%s\n\n", t[0], name, t[2]);
                    if (strcmp(repeat, "r") != 0) {
                        break;
                    }
                }
            }
        } else if (strcmp(sw, "si") == 0) {
            char t[6][15] = {"scanf(\"", "\%d\"", "\%lf\"", ",", " &", ");"};
            char ch[SIZE];
            char name[SIZE];
            while (1) {
                printf("//Choose i for int d for double or m for main.\n");
                printf("//");
                while(fgets(ch, SIZE, stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                ch[strcspn(ch, "\n")] = 0;
                if (strlen(ch) >= MAX) {
                    clean();
                }
                if (strcmp(ch, "m") == 0) {
                    break;
                } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
                    printf("Choose i or d or m only.\n");
                    continue;
                }
                printf("//Enter the name of variable.\n");
                printf("//");
                while(fgets(name, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(ch, "i") == 0) {
                    printf("\n%s%s%s%s%s%s\n\n", t[0], t[1], t[3], t[4], name, t[5]);
                    if (strcmp(repeat, "r") != 0) {
                        break;
                    }
                } else if (strcmp(ch, "d") == 0) {
                    printf("\n%s%s%s%s%s%s\n\n", t[0], t[2], t[3], t[4], name, t[5]);
                    if (strcmp(repeat, "r") != 0) {
                        break;
                    }
                }
            }
        } else if (strcmp(sw, "sh") == 0) {
            char t[6][15] = {"scanf(\"", "\%d\"", "\%lf\"", ",", ");", "\%f\""};
            char ch[SIZE];
            char name[SIZE];
            while (1) {
                printf("//Choose i for int f for float or d for double or m for main.\n");
                printf("//");
                while(fgets(ch, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                ch[strcspn(ch, "\n")] = 0;
                if (strlen(ch) >= MAX) {
                    clean();
                }
                if (strcmp(ch, "m") == 0) {
                    break;
                } else if (strcmp(ch, "i") != 0 && strcmp(ch, "f") != 0 && strcmp(ch, "d") != 0) {
                    printf("Choose i, f, d  or m only.\n");
                    continue;
                }
                printf("//Enter the name of variable.\n");
                printf("//");
                while(fgets(name, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	    
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(ch, "i") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[0], t[1], t[3], name, t[4]);
                    if (strcmp(repeat, "r") != 0) {
                        break;
                    }
                } else if (strcmp(ch, "d") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[0], t[2], t[3], name, t[4]);
                    if (strcmp(repeat, "r") != 0) {
                        break;
                    }
                } else if (strcmp(ch, "f") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[0], t[5], t[3], name, t[4]);
                    if (strcmp(repeat, "r") != 0) {
                        break;
                    }
                }
            }
        } else if (strcmp(sw, "sc") == 0) {
            char t[7][15] = {"if(scanf(\"", "\%d\"", "\%lf\"", ",", " &", ")!=1){", "while(scanf(\""};
            char ch[SIZE];
            char name[SIZE];
            while (1) {
                printf("//Choose i for int d for double or m for main.\n");
                printf("//");
                while(fgets(ch, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                ch[strcspn(ch, "\n")] = 0;
                if (strlen(ch) >= MAX) {
                    clean();
                }
                if (strcmp(ch, "m") == 0) {
                    break;
                } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
                    printf("Choose i or d or m only.\n");
                    continue;
                }
                printf("//Enter the name of variable.\n");
                printf("//");
                while(fgets(name, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
		    clearerr(stdin);
		}	
                name[strcspn(name, "\n")] = 0;
                if (strlen(name) >= MAX) {
                    clean();
                }
                if (strcmp(ch, "i") == 0) {
                    printf("\n%s%s%s%s%s%s\n\n", t[0], t[1], t[3], t[4], name, t[5]);
                    printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[0], t[1], t[3], name, t[5]);
                    printf("\n%s%s%s%s%s%s\n\n", t[6], t[1], t[3], t[4], name, t[5]);
                    printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[6], t[1], t[3], name, t[5]);
                    if (strcmp(repeat, "r") != 0) {
                        printf("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n");
                        break;
                    }
                } else if (strcmp(ch, "d") == 0) {
                    printf("\n%s%s%s%s%s%s\n\n", t[0], t[2], t[3], t[4], name, t[5]);
                    printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[0], t[2], t[3], name, t[5]);
                    printf("\n%s%s%s%s%s%s\n\n", t[6], t[2], t[3], t[4], name, t[5]);
                    printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[6], t[2], t[3], name, t[5]);
                }
                printf("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n");
                if (strcmp(repeat, "r") != 0) {
                    break;
                }
            }
        } else if (strcmp(sw, "cy") == 0) {
            printf("\n");
            printf("#include <stdio.h>\n");
            printf("\n");
            printf("#include <stdio_ext.h>\n");
            printf("\n");
            printf("#include <string.h>\n");
            printf("\n");
            printf("#include <stdlib.h>\n");
            printf("\n");
            printf("while(1) {\n");
            printf("\n");
            printf("break;\n");
            printf("\n");
            printf("break;}\n");
            printf("\n");
            printf("continue;\n");
            printf("\n");
            printf("continue;}\n");
            printf("\n");
            printf("int main() {\n");
            printf("\n");
            printf("fflush(stdin);\n");
            printf("\n");
            printf("__fpurge(stdin);\n");
            printf("\n");
            printf("getchar();\n");
            printf("\n");
            printf("} else {\n");
            printf("\n");
            printf("else {\n");
            printf("\n");
            printf("    }\n");
            printf("}\n");
            printf("\n");
            printf("return 0;\n");
            printf("}\n");
            printf("\n");

        } else if (strcmp(sw, "x") == 0) {
            break;
        } else if (strcmp(sw, "ch") == 0) {
            choice();
        } else {
            printf("//Enter a letter in choices.\n\n");
        }
    }
    return 0;
}


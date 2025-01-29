// Copyright 2023-2025 Mitchell E Wise
// SPDX-License-Identifier: Apache-20

#include <stdio.h>
#include <string.h>

void clear(){
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}

void choice() {
    printf("//Enter ch for choices.\n");
    printf("//Enter a for arrays ia for numbers.\n");
    printf("//Enter b for strings  with printf.");
    printf("//Enter c for strings with no quotation marks.\n");
    printf("//Enter cy for what's needed to copy and paste to finish a simple program.\n");
    printf("//Enter i for if statements e for else if for strings.\n");
    printf("//Enter mi for if statements with 2 conditions for strings.\n");
    printf("//Enter in for if and else if statements for numbers.\n");
    printf("//Enter im for if and else if statements for numbers if malloc is used.\n");
    printf("//Enter f for fgets with removal of the newline character.\n");
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
    char sw[10];

    choice();
    while (1) {
        printf("//Enter x to exit main m for main ch for choices.\n");
        printf("//"); 
	while(fgets(sw, 10, stdin)) {
	      sw[strcspn(sw, "\n")] = 0;
	    if (strlen(sw) >= 9) {
		clear(); 
	    printf("\nYou entered to many characters.\n\n");
	    printf("//");
	    } else {
		break;
	    } 
        }	
        if (strcmp(sw, "b") == 0) {
            char string[3][15] = {"printf(\"", "\\n", "\");"};
            char text[150];
            printf("//Enter your string, m for main.\n");
            while (1) {
                printf("//");
                while(fgets(text,150, stdin)){
                      text[strcspn(text, "\n")] = 0;
                    if (strlen(text) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
		}
		if (strcmp(text, "m") == 0) {
                    break;
		}
                    printf("\n%s%s%s%s\n\n", string[0], text, string[1], string[2]);
		    printf("\n%s%s%s%s%s%s\n\n", string[0], string[1], text, string[1],string[1], string[2]);
                    printf("%s%s%s\n\n", string[0], text, string[2]);
	       
            }
        } else if (strcmp(sw, "c") == 0) {
            char t[2][12] = {"printf(", ");"};
            char text[150];

            printf("//Enter text m for main.\n");
            while (1) {
                printf("//");
                while(fgets(text,150, stdin)){
                      text[strcspn(text, "\n")] = 0;
                    if (strlen(text) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
                    } else {
		        break;
		    }     
		} 
	        if (strcmp(text,"m")==0) {
		    break;
		}
                printf("\n%s%s%s\n\n", t[0], text, t[1]);
            }
        } else if (strcmp(sw, "f") == 0) {
            char f[11][15] = {"fgets(", ",", "stdin);", "[strcspn(", "\"\\n", "\")]=0;", "[strlen(", ")-1] = '\\0';","while(", "      ", "stdin)) {"};
            char v[150];
            char me[150];

            while (1) {
                printf("//Enter name of variable m for main.\n");
                printf("//");
                while(fgets(v, 150, stdin)){
                      v[strcspn(v, "\n")] = 0;
                    if (strlen(v) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
		}
		 if (strcmp(v, "m") == 0) {
                     break;  
                }
                printf("//Enter the memory to be allocated to the variable.\n");
                printf("//");
                while(fgets(me, 150, stdin)){
                      me[strcspn(me, "\n")] = 0;
                    if (strlen(me) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    } 
                }
                printf("\n%s%s%s%s%s%s\n", f[0], v, f[1], me, f[1], f[2]);
                printf("%s%s%s%s%s%s\n\n", v, f[3], v, f[1], f[4], f[5]);
                printf("\n%s%s%s%s%s%s%s\n",f[8], f[0], v, f[1], me, f[1], f[10]);
                printf("%s%s%s%s%s%s%s\n\n",f[9], v, f[3], v, f[1], f[4], f[5]);
                printf("\n%s%s%s%s%s%s\n", f[0], v, f[1], me, f[1], f[2]);
                printf("%s%s%s%s\n\n", v, f[6], v, f[7]);
            }
        } else if (strcmp(sw, "s") == 0) {
            char t[6][15] = {"scanf(\"", "%", "[^\\n]\"", ",", ");", "getchar();"};
            char var[150];
            char mem[150];

            while (1) {
                printf("//Enter the name of variable m for main.\n");
                printf("//");
                while(fgets(var, 150, stdin)){
                      var[strcspn(var, "\n")] = 0;
                    if (strlen(var) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//"); 
		    } else {
		        break;
                    }
                }	 
                if (strcmp(var, "m") == 0) {
                    break;
                }
                printf("//Enter memory allocated to variable -1 byte.\n");
                printf("//");
                while(fgets(mem, 150, stdin)){
                      mem[strcspn(mem, "\n")] = 0;
                    if (strlen(mem) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	  
                printf("\n%s%s%s%s%s%s%s\n", t[0], t[1], mem, t[2], t[3], var, t[4]);
                printf("%s\n\n", t[5]);
            }
        } else if (strcmp(sw, "sb") == 0) {
            char t[5][15] = {"scanf(\"", "%", "s\"", ", ", ");"};
            char var[150];
            char mem[150];

            while (1) {
                printf("//Enter the name of variable m for main.\n");
                printf("//");
                while(fgets(var, 150, stdin)){
                      var[strcspn(var, "\n")] = 0;
                    if (strlen(var) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//"); 
		    } else {
		        break;
                    }
                }	 
                if (strcmp(var, "m") == 0) {
                    break;
                }   
                printf("//Enter memory allocated to variable -1 byte.\n");
                printf("//");
                while(fgets(mem, 150, stdin)){
                      mem[strcspn(mem, "\n")] = 0;
                    if (strlen(mem) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    } else {
		        break;
                    }
                }	   
                printf("\n%s%s%s%s%s%s%s\n\n", t[0], t[1], mem, t[2], t[3], var, t[4]);
            }
        } else if (strcmp(sw, "cb") == 0) {
            char t[5][12] = {"void ", "(", "){", "}","();"};
            char name[150];

            while (1) {
                printf("//Name function m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){
                      name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
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
            }
        } else if (strcmp(sw, "i") == 0) {
            char f[4][15] = {"if(strcmp(", ",", "\"", ")==0) {"};
            char name[2000];
            char value[2000];

            while (1) {
                printf("//Enter name of the if statement m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){
                      name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	 
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter the value.\n");
                printf("//");
                while(fgets(value, 150, stdin)){
                      value[strcspn(value, "\n")] = 0;
                    if (strlen(value) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	  
                printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2], value, f[2], f[3]);
            }
        } else if (strcmp(sw, "e") == 0) {
            char f[4][18] = {"} else if(strcmp(", ",", "\"", ")==0) {"};
            char name[150];
            char value[150];

            while (1) {
                printf("//Enter name of the else if statement m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){
                      name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	   	
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter the value.\n");
                printf("//");
                while(fgets(value, 150, stdin)){
                      value[strcspn(value, "\n")] = 0;
                    if (strlen(value) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	 
                printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2], value, f[2], f[3]);
            }
	} else if (strcmp(sw, "mi")==0) {
            char t[11][30] = {"if(strcmp(", ",", "} else if(strcmp(", "\"", ")==0", ")!=0", ")==0) {", ")!=0) {", " && ", " || ", "strcmp("};
            char select[5];
            char name[150];
            char value[150];
            char op[5];
            char compare[5];
            char sname[150];
            char svalue[150];
            char scompare[5];

            while (1) {
                printf("//Enter i for if, e for else if.\n");
                while (fgets(select,5, stdin)) {
                    select[strcspn(select, "\n")] = 0;
		    if (strlen(select) >= 4) {
		        printf("\nYou entered to many characters.\n\n"); 
			printf("//");
			clear(); 
		    } else if (strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
                        printf("\n//Enter i or e only.\n\n");
			printf("//");
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
                while(fgets(name,150, stdin)){
                      name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                } 
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter a value.\n");
                printf("//");
                while(fgets(value,150, stdin)){
                      value[strcspn(value, "\n")] = 0;
                    if (strlen(value) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }  
                printf("//Enter a comparison a for equal b for not equal.\n");
                printf("//");
                while (fgets(compare, 5, stdin)) {
                       compare[strcspn(compare, "\n")] = 0;
		    if (strlen(compare) >= 4) {
		        printf("\nYou entered to many characters.\n\n"); 
			printf("//");
			clear(); 
		    } else if (strcmp(compare, "a") != 0 && strcmp(compare, "b") != 0) {
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
                while (fgets(op, 5, stdin)) {
                      op[strcspn(op, "\n")] = 0;
		    if (strlen(op) >= 4) {
		        printf("\nYou entered to many characters.\n\n"); 
			printf("//");
			clear(); 
		    } else if (strcmp(op, "a") != 0 && strcmp(op, "o") != 0) {
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
                while(fgets(sname, 150, stdin)){
                      sname[strcspn(sname, "\n")] = 0;
                    if (strlen(sname) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	  
                printf("Enter the second value.\n");
                printf("//");
                while(fgets(svalue, 150, stdin)){
                      svalue[strcspn(svalue, "\n")] = 0;
                    if (strlen(svalue) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	                
                printf("Enter a second comparison a for equal b for not equal\n");
                printf("//");
                while (fgets(scompare, 5, stdin)) {
                    scompare[strcspn(scompare, "\n")] = 0;
		    if (strlen(scompare) >= 4) {
		        printf("\nYou entered to many characters.\n\n"); 
			printf("//");
			clear(); 
		    } else if (strcmp(scompare, "a") != 0 && strcmp(scompare, "b") != 0) {
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
            } 
        } else if (strcmp(sw, "in") == 0) {
            char t[10][20] = {"if(", "} else if(", "strlen", " <= ", " == ", " >= ", " != ", "(", ")", ") {"};
            char select[5];
            char var[150];
            char op[5];
            char num[150];
            while (1) {
                printf("//Enter s for strlen  or i for regular if statement. Enter e for else if.\n");
                printf("//");
                while (fgets(select,5, stdin)) {
                    select[strcspn(select, "\n")] = 0;
		    if (strlen(select) >= 4) {
		        printf("\nYou entered to many characters.\n\n"); 
			printf("//");
			clear(); 
		    } else if (strcmp(select, "s") != 0 && strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
                        printf("//Enter s or i or e only.\n");
                    } else {
                        break;
                    }
                }        
                printf("//Enter the name of if or else if statement  enter m for main.\n");
                while(fgets(var, 150, stdin)){
                      var[strcspn(var, "\n")] = 0;
                    if (strlen(var) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//"); 
		    } else {
		        break;
                    }
                }	  
                if (strcmp(var, "m") == 0) {
                    break;
                }
                printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
                printf("//");
                while (fgets(op, 5, stdin)) {
                    op[strcspn(op, "\n")] = 0;
		    if (strlen(op) >= 4) {
		        printf("\nYou entered to many characters.\n\n"); 
			printf("//");
			clear(); 
		    } else if (strcmp(op, "a") != 0 && strcmp(op, "b") != 0 && strcmp(op, "c") != 0 && strcmp(op, "d") != 0) {
                        printf("//Enter a or b or c or d only.\n");
                    } else {
                        break;
                    }
                }
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
                while (fgets(num, 150, stdin)) {
                num[strcspn(num, "\n")] = 0;
                    if (strlen(num) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }   
                if (strcmp(select, "s") == 0) {
                    printf("\n%s%s%s%s%s%s%s%s\n\n", t[0], t[2], t[7], var, t[8], op, num, t[9]);
                } else if (strcmp(select, "i") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[0], var, op, num, t[9]);
                } else if (strcmp(select, "e") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[1], var, op, num, t[9]);
                }
            }
        } else if (strcmp(sw, "im") == 0) {
            char t[9][20] = {"if(*", "} else if(*", " <= ", " == ", " >= ", " != ", "(", ")", ") {"};
            char select[150];
            char var[150];
            char op[5];
            char num[150];
            while (1) {
                printf("//Enter i for if statement. Enter e for else if.\n");
                printf("//");
                while (fgets(select,150, stdin)) {
                    select[strcspn(select, "\n")] = 0;
		    if (strlen(select) >= 149) {
		        printf("\nYou entered to many characters.\n\n"); 
			printf("//");
			clear(); 
		    }else if (strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
                        printf("//Enter i or e only.\n");
                        printf("//");
                    } else {
                        break;
                    }
                }         
                printf("//Enter the name of if or else if statement  enter m for main.\n");
                while(fgets(var, 150, stdin)){
                      var[strcspn(var, "\n")] = 0;
                    if (strlen(var) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//"); 
		    } else {
		        break;
                    }
                }	    
                if (strcmp(var, "m") == 0) {
                    break;
                }
                printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
                printf("//");
                while (fgets(op, 5, stdin)) {
                    op[strcspn(op, "\n")] = 0;
		    if (strlen(op) >= 4) {
		        printf("\nYou entered to many characters.\n\n"); 
			printf("//");
			clear(); 
		    } else if (strcmp(op, "a") != 0 && strcmp(op, "b") != 0 && strcmp(op, "c") != 0 && strcmp(op, "d") != 0) {
                        printf("//Enter a or b or c or d only.\n");
                    } else {
                        break;
                    }
                }
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
                while (fgets(num, 150, stdin)) {
                num[strcspn(num, "\n")] = 0;
                    if (strlen(num) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }   
                if (strcmp(select, "i") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[0], var, op, num, t[8]);
                } else if (strcmp(select, "e") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[1], var, op, num, t[8]);
                }
            }
        } else if (strcmp(sw, "v") == 0) {
            char f[3][15] = {"char ", " [", "];"};
            char name[150];
            char mem[150];

            while (1) {
                printf("//Enter name of variable m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){
                      name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	   
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter the memory to be allocated to the variable.\n");
                printf("//");
                while(fgets(mem, 150, stdin)){
                      mem[strcspn(mem, "\n")] = 0;
                    if (strlen(mem) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	                    
                printf("\n%s%s%s%s%s\n\n", f[0], name, f[1], mem, f[2]);
            }
        } else if (strcmp(sw, "vv") == 0) {
            char v[6][15] = {"char ", "[", "]", " = ", "\"", ";"};
            char name[150];
            char mem[150];
            char value[150];
            while (1) {
                printf("//Enter a name of variable m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){    
                    name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	   	 
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter the amount of memory to allocate or press enter to not allocate m for main.\n");
                printf("//");
                while(fgets(mem,150, stdin)){
                      mem[strcspn(mem, "\n")] = 0;
                    if (strlen(mem) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    } else {
		        break;
                    }
                }	                    
                printf("//enter a value\n");
                printf("//");
                while(fgets(value, 150, stdin)){
                      value[strcspn(value, "\n")] = 0;
                    if (strlen(value) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	       
                printf("\n%s%s%s%s%s%s%s%s%s%s\n\n", v[0], name, v[1], mem, v[2], v[3], v[4], value, v[4], v[5]);
            }
        } else if (strcmp(sw, "a") == 0) {
            char t[5][15] = {"char ", " [", "] ", "] = {", "};"};
            char name[150];
            char ne[150];
            char m[150];
            char elements[150];
            while (1) {
                printf("//Enter the name of array m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){
                      name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	   	 
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter the amount of elements.\n");
                printf("//");
                while(fgets(ne, 150, stdin)){
                      ne[strcspn(ne, "\n")] = 0;
                    if (strlen(ne) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	                 
                printf("//Enter memory allocated to elements.\n");
                printf("//");
                while(fgets(m, 150, stdin)){
                      m[strcspn(m, "\n")] = 0;
                    if (strlen(m) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	                  
                printf("//Enter elements with quotations and commas between each.\n");
                printf("//");
                while(fgets(elements, 150, stdin)){
                      elements[strcspn(elements, "\n")] = 0;
                    if (strlen(elements) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	                  
                printf("\n%s%s%s%s%s%s%s%s%s%s\n\n", t[0], name, t[1], ne, t[2], t[1], m, t[3], elements, t[4]);
            }
        } else if (strcmp(sw, "ia") == 0) {
            char a[6][20] = {"int ", "double ", "[", "]", " = {", "};"};
            char typ[5];
            char name[150];
            char num[150];
            char elements[150];

            while (1) {
                printf("//Enter a data type i for int d for double.\n");
                printf("//");
                while (fgets(typ,5, stdin)) {
                    typ[strcspn(typ, "\n")] = 0;
		    if (strlen(typ) >= 4) {
		        printf("\nYou entered to many characters.\n\n"); 
			printf("//");
			clear(); 
		    }else if (strcmp(typ, "i") != 0 && strcmp(typ, "d") != 0) {
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
                while(fgets(name,150, stdin)) {
                    name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		        printf("\nYou entered to many characters.\n\n");
		         printf("//"); 
		    } else {
		        break;
                    }
      	        }  
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter number of elements m for main.\n");
                printf("//");
                while(fgets(num, 150, stdin)) {
                    num[strcspn(num, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		        printf("\nYou entered to many characters.\n\n");
		         printf("//"); 
		    } else {
		        break;
                    }
      	        }  
                printf("//Enter elements with a comma between them.\n");
                printf("//");
                while(fgets(elements, 150, stdin)) {
                    elements[strcspn(elements, "\n")] = 0;
                    if (strlen(elements) >= 149) {
                        clear(); 
		        printf("\nYou entered to many characters.\n\n");
		         printf("//"); 
		    } else {
		        break;
                    }
      	        } 
                printf("%s%s%s%s%s%s%s%s\n", typ, name, a[2], num, a[3], a[4], elements, a[5]);
            }
        } else if (strcmp(sw, "fc") == 0) {
            char t[4][12] = {"void ", "(", "){", "}"};
            char name[150];
	    char per[150];
            while (1) {
                printf("//Name function m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){    
                    name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	   	     
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter parameters.\n");
                printf("//");
                while(fgets(per,150, stdin)){
                      per[strcspn(per, "\n")] = 0;
                    if (strlen(per) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	                      
                printf("\n%s%s%s%s%s\n\n\n%s\n\n", t[0], name, t[1], per, t[2], t[3]);
            }
        } else if (strcmp(sw, "cf") == 0) {
            char t[2][12] = {"(", ");"};
            char name[150];
            char per[150];
            while (1) {
                printf("//Enter the name of function m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){    
                    name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	   	      
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter values for parameters.\n");
                printf("//");
                while(fgets(per,150, stdin)){
                      per[strcspn(per, "\n")] = 0;
                    if (strlen(per) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	                      
                printf("\n%s%s%s%s\n\n", name, t[0], per, t[1]);
            }
        } else if (strcmp(sw, "h") == 0) {
            char t[9][18] = {"char", " *", ";", " = (char*)malloc", "(", ");", "* sizeof(char));", "free", " = NULL;"};
            char name[150];
            char mem[150];

            while (1) {
                printf("//Enter the name of the variable m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){
                      name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	   	  
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter memory to allocate.\n");
                printf("//");
                while(fgets(mem,150, stdin)){
                      mem[strcspn(mem, "\n")] = 0;
                    if (strlen(mem) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	                     
                printf("\n");
                printf("\n%s%s%s%s\n\n", t[0], t[1], name, t[2]);
                printf("%s%s%s%s%s\n\n", name, t[3], t[4], mem, t[5]);
                printf("%s%s%s%s%s\n\n", name, t[3], t[4], mem, t[6]);
                printf("%s%s%s%s\n", t[7], t[4], name, t[5]);
                printf("%s%s\n\n", name, t[8]);
            }
        } else if (strcmp(sw, "hi") == 0) {
            char t[15][20] = {"int"," *",";"," = (int*)malloc","(",");","* sizeof(int));","free"," = NULL;","double","float"," = (double*)malloc"," = (float*)malloc","* sizeof(double));","* sizeof(float));"};
            char name[150];
            char mem[150];

            while (1) {
                printf("//Enter the name of the variable m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){
                      name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	   	  
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter memory to allocate.\n");
                printf("//");
                while(fgets(mem,150, stdin)){
                      mem[strcspn(mem, "\n")] = 0;
                    if (strlen(mem) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
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
            }
        } else if (strcmp(sw, "cm") == 0) {
            char t[6][18] = {"if(", " == NULL){", "    printf(\"", "\\n", "\");", "    exit(1);}"};
            char name[150];
            char em[150];
            while (1) {
                printf("//Enter the name m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){
                      name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	   	      
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter an error message.\n");
                printf("//");
                while(fgets(em,150, stdin)){
                      em[strcspn(em, "\n")] = 0;
                    if (strlen(em) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	                     
                printf("\n%s%s%s\n", t[0], name, t[1]);
                printf("%s%s%s%s\n", t[2], em, t[3], t[4]);
                printf("%s\n\n", t[5]);
            }
        } else if (strcmp(sw, "vi") == 0) {
            char t[5][15] = {"double ", "int ", " = ", ";", " ;"};
            char ch[150];
            char name[150];
            char value[150]; 
            while (1) {
                printf("//Choose i for int d for double.\n");
                printf("//");
                while(fgets(ch,5, stdin)) {
                ch[strcspn(ch, "\n")] = 0;
		    if (strlen(ch) >= 4) {
		        printf("\nYou entered to many characters.\n\n"); 
			printf("//");
			clear(); 
                    } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
                        printf("Choose i or d or m only.\n");
                    } else {
                        break;
                    }
                } 
                printf("Enter the name m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){
                      name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	  
                if (strcmp(name, "m") == 0) {
                    break;
		}
                printf("Enter a value.\n");
                printf("//");
                while(fgets(value, 150, stdin)){
                      value[strcspn(value, "\n")] = 0;
                    if (strlen(value) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	       
                if (strcmp(ch, "i") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[1], name, t[2], value, t[3]);
                } else if (strcmp(ch, "d") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[0], name, t[2], value, t[3]);
                }
            }
        } else if (strcmp(sw, "vn") == 0) {
            char t[3][15] = {"double ", "int ", ";"};
            char ch[5];
            char name[150];
            while (1) {
                printf("//Choose i for int d for double.\n");
                printf("//");
                while(fgets(ch,5, stdin)) {
                ch[strcspn(ch, "\n")] = 0;
		    if (strlen(ch) >= 4) {
		        printf("\nYou entered to many characters.\n\n"); 
			printf("//");
			clear();  
                } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
                    printf("Choose i or d or only.\n");
                    } else {
                        break;
                    }
                }   
                printf("Enter the name m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){
                      name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) {
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }	  
		if (strcmp(name,"m")==0){
		    break;
		}
                if (strcmp(ch, "i") == 0) {
                    printf("\n%s%s%s\n\n", t[1], name, t[2]);
                } else if (strcmp(ch, "d") == 0) {
                    printf("\n%s%s%s\n\n", t[0], name, t[2]);
                }
            }
        } else if (strcmp(sw, "si") == 0) {
            char t[6][15] = {"scanf(\"", "\%d\"", "\%lf\"", ",", " &", ");"};
            char ch[150];
            char name[150];
            while (1) {
                printf("//Choose i for int d for double.\n");
                printf("//");
                while (fgets(ch,150, stdin)) {
                    ch[strcspn(ch, "\n")] = 0;
		    if (strlen(ch) >= 149) {
		        printf("\nYou entered to many characters.\n\n"); 
			printf("//");
			clear();  
                    } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
                        printf("Choose i or d only.\n");
		        printf("//"); 
                    } else {
                        break;
                    }
                }  
                printf("//Enter the name of variable m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){
                      name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) { 
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }
		if (strcmp(name,"m")==0) {
		    break;
		}
	        if (strcmp(ch, "i") == 0) {
                    printf("\n%s%s%s%s%s%s\n\n", t[0], t[1], t[3], t[4], name, t[5]);
                } else if (strcmp(ch, "d") == 0) {
                    printf("\n%s%s%s%s%s%s\n\n", t[0], t[2], t[3], t[4], name, t[5]);
                }
            }
        } else if (strcmp(sw, "sh") == 0) {
            char t[6][15] = {
                "scanf(\"", "\%d\"", "\%lf\"", ",", ");", "\%f\"",
            };
            char ch[5];
            char name[150];
            while (1) {
                printf("//Choose i for int f for float or d for double.\n");
                printf("//");
                while (fgets(ch,5, stdin)) {
                    ch[strcspn(ch, "\n")] = 0;
		    if (strlen(ch) >= 4) {
		        printf("\nYou entered to many characters.\n\n"); 
			printf("//");
			clear();      
                    } else if (strcmp(ch, "i") != 0 && strcmp(ch, "f") != 0 && strcmp(ch, "d") != 0) {
                        printf("Choose i or d only.\n");
		        printf("//"); 
                    } else {
                        break;
                    }
                }  
                printf("//Enter the name of variable m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){
                      name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) { 
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                }
                if (strcmp(name,"m")==0) {
		    break;
		}
                if (strcmp(ch, "i") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[0], t[1], t[3], name, t[4]);
                } else if (strcmp(ch, "d") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[0], t[2], t[3], name, t[4]);
                } else if (strcmp(ch, "f") == 0) {
                    printf("\n%s%s%s%s%s\n\n", t[0], t[5], t[3], name, t[4]);
                }
            }
        } else if (strcmp(sw, "sc") == 0) {
            char t[7][15] = {"if(scanf(\"", "\%d\"", "\%lf\"", ",", " &", ")!=1){", "while(scanf(\""};
            char ch[5];
            char name[150];
            while (1) {
                printf("//Choose i for int d for double.\n");
                printf("//");
                while (fgets(ch,5, stdin)) {
                    ch[strcspn(ch, "\n")] = 0;
		    if (strlen(ch) >= 4) {
		        printf("\nYou entered to many characters.\n\n"); 
			printf("//");
			clear();        
                    } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
                        printf("Choose i or d only.\n");
		        printf("//"); 
                    } else {
                        break;
                    }
                }    
                printf("//Enter the name of variable m for main.\n");
                printf("//");
                while(fgets(name, 150, stdin)){
                      name[strcspn(name, "\n")] = 0;
                    if (strlen(name) >= 149) { 
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                } 
		if (strcmp(name,"m")==0) {
		    break;
		}
                if (strcmp(ch, "i") == 0) {
                    printf("\n%s%s%s%s%s%s\n\n", t[0], t[1], t[3], t[4], name, t[5]);
                    printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[0], t[1], t[3], name, t[5]);
                    printf("\n%s%s%s%s%s%s\n\n", t[6], t[1], t[3], t[4], name, t[5]);
                    printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[6], t[1], t[3], name, t[5]);
                } else if (strcmp(ch, "d") == 0) {
                    printf("\n%s%s%s%s%s%s\n\n", t[0], t[2], t[3], t[4], name, t[5]);
                    printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[0], t[2], t[3], name, t[5]);
                    printf("\n%s%s%s%s%s%s\n\n", t[6], t[2], t[3], t[4], name, t[5]);
                    printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[6], t[2], t[3], name, t[5]);
                }
                printf("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n");
            }
        } else if (strcmp(sw, "cy") == 0) {
            char cpy[5];
            while (1) {
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
                printf("//Enter m for main.\n");
                while(fgets(cpy, 5, stdin)) {
                cpy[strcspn(cpy, "\n")] = 0;
                    if (strlen(cpy) >= 4) { 
                        clear(); 
		    printf("\nYou entered to many characters.\n\n");
		    printf("//");
		    } else {
		        break;
                    }
                } 
                if (strcmp(cpy, "m") == 0) {
                    break;
                }
            }
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


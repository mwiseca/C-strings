//Copyright 2023-2024 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void choice(){
 printf("//Enter ch for choices.\n");
 printf("//Enter a for strings b for strings for newline character.\n");
 printf("//Enter aa for arrays.\n");
 printf("//Enter c for strings with no quotation marks.\n");
 printf("//Enter cy for what's needed to copy and paste to finish a simple program.\n");
 printf("//Enter i for if statement e for else if.\n");
 printf("//Enter in for if and else if statements for numbers.\n");
 printf("//Enter f for fgets.\n");
 printf("//Enter fs for fgets with strlen to remove newline character.\n");
 printf("//Enter s for scanf for strings to allow for white spaces.\n");
 printf("//Enter sb for scanf basic no white spaces.\n");
 printf("//Enter si for scanf for integers and doubles.\n");
 printf("//Enter sh for scanf for ints and doubles on the heap.\n");
 printf("//Enter h for heap allocation.\n");
 printf("//Enter hi to allocate int double or float memory on the heap.\n");
 printf("//Enter cm to check malloc.\n");
 printf("//Enter fc for void functions.\n");
 printf("//Enter cf to call functions.\n");
 printf("//Enter v for variables without assigning a value.\n");
 printf("//Enter vv for variables with assigning a string value.\n");
 printf("//Enter vi for int and double variables.\n");
 printf("//Enter vn for int and double variables with no value.\n");
 printf("//Enter m for main x to exit.\n");
printf("//For strings enter ap for one bp for two cp for three quotes. Enter x to exit.\n");
printf("//Enter cl for classes. Enter ip for if statements. Enter ep for elif.\n");
printf("//Enter vp for variables and user input option.\n");
printf("//Enter cyp for what's needed to copy and paste to finish a simple Python program.\n");
 }


int main(){        
	char sw [250];         

 
 choice();
 while (1){
 printf("//Enter x to exit main m for main ch for choices.\n");
 printf("//");
 fgets(sw,250,stdin);
 sw[strcspn(sw,"\n")]=0;
 if (strcmp(sw, "a")==0){
 char string  [2] [15] = {"printf(\"", "\");"};
    char *text;
    printf("//Enter your string, m to exit.\n");
    while (1){
    text = (char*)malloc(2000* sizeof(char));
    if(text == NULL){
    printf("Error: Insufficient memory.\n");
    exit(1);}	    
    printf("//");
    fgets(text,2000,stdin);
    text[strcspn(text,"\n")]=0;
    if (strcmp(text,"m")==0){
    free(text);
    text = NULL;
    break;}
    printf("\n%s%s%s\n\n",string[0],text,string[1]);
    free(text);
    text = NULL;
       }
}else if (strcmp(sw,"b")==0){
 char string  [3] [15] = {"printf(\"", "\\n","\");"};
    char *text;
    printf("//Enter your string, m for main.\n");
    while (1){
    text = (char*)malloc(2000* sizeof(char));
    if(text == NULL){
    printf("Error: Insufficient memory.\n");
    exit(1);}
    printf("//");
    fgets(text,2000,stdin);
    text[strcspn(text,"\n")]=0;
    if (strcmp(text,"m")==0){
    free(text);
    text = NULL;
    break;}
    printf("\n%s%s%s%s\n\n",string[0],text,string[1], string[2]);
    free(text);
    text = NULL;
         }
}else if (strcmp(sw,"c")==0){
    char t [2] [12] = {"printf(", ");"};
    char *text;
    
 printf("//Enter text m for main.\n");   
 while(1){
 text = (char*)malloc(2000* sizeof(char));
 if(text == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 printf("//");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if(strcmp(text,"m")==0){
 free(text);
 text = NULL;
 break;}
 printf("\n%s%s%s\n\n",t[0],text,t[1]);
 free(text);
 text = NULL;
 }
}else if (strcmp(sw, "f")==0){
      char f  [6] [15] = {"fgets(", ",", "stdin);", "[strcspn(","\"\\n", "\")]=0;"};
     char *v;
     char *me;

 while (1){
 v = (char*)malloc(2000* sizeof(char));
 if(v == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 me = (char*)malloc(2000* sizeof(char));
 if(me == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 printf("//Enter name of variable m for main.\n");
 printf("//"); 
 fgets(v,2000,stdin);
 v[strcspn(v,"\n")]=0;
 if (strcmp(v,"m")==0){
 free(v);
 v = NULL;
 free(me);
 me = NULL;
 break;}
 printf("//Enter the memory to be allocated to the variable.\n");
 printf("//");
 fgets(me,2000,stdin);
 me[strcspn(me,"\n")]=0;
 printf("\n%s%s%s%s%s%s\n",f[0], v, f[1],me,f[1],f[2]);
 printf("%s%s%s%s%s%s\n\n", v, f[3], v, f[1], f[4] ,f[5]);
 free(v);
 v = NULL;
 free(me);
 me = NULL;
     }
}else if (strcmp(sw,"fs")==0){
     char f  [6] [15] = {"fgets(", ",", "stdin);", "[strlen(",")-1] = '\\0';"};
     char *v;
     char *me;
	
 while (1){
 v = (char*)malloc(2000* sizeof(char));
 if(v == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 me = (char*)malloc(2000* sizeof(char));
 if(me == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 printf("//Enter name of variable m for main.\n");
 printf("//"); 
 fgets(v,2000,stdin);;
 v[strcspn(v,"\n")]=0;
 if (strcmp(v,"m")==0){
 free(v);
 v = NULL;
 free(me);
 me = NULL;
 break;}
 printf("//Enter the memory to be allocated to the variable.\n");
 printf("//");
 fgets(me,2000,stdin);
 me[strcspn(me,"\n")]=0;
 printf("\n%s%s%s%s%s%s\n",f[0], v, f[1],me,f[1],f[2]);
 printf("%s%s%s%s%s\n\n", v, f[3], v, f[4] ,f[5]);
 free(v);
 v = NULL;
 free(me);
 me = NULL;
 }
}else if (strcmp(sw,"s")==0){
         char t [6] [15] = {"scanf(\"","%","[^\\n]\"",",",");","getchar();"};
         char *var;
	 char *mem;

 while(1){
 var = (char*)malloc(2000* sizeof(char));
 if(var== NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 mem = (char*)malloc(2000* sizeof(char));
 if(mem == NULL){
 printf("Error Insufficient memory.\n");
 exit(1);}
 printf("//Enter the name of variable m for main.\n");
 printf("//");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 if(strcmp(var,"m")==0){
 free(var);
 var = NULL;
 free(mem);
 mem = NULL;
 break;}
 printf("//Enter memory allocated to variable -1 byte.\n"); 
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n",t[0],t[1],mem,t[2],t[3],var,t[4]);
 printf("%s\n\n",t[5]);
 free(var);
 var = NULL;
 free(mem);
 mem = NULL;
 }
}else if (strcmp(sw, "sb")==0){
         char t [5] [15] = {"scanf(\"","%","s\"",", ", ");"};
         char *var;
         char *mem;
   
 while(1){
 var = (char*)malloc(2000* sizeof(char));
 if(var == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 mem = (char*)malloc(2000* sizeof(char));
 if(mem == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 printf("//Enter the name of variable m for main.\n");
 printf("//");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 if(strcmp(var,"m")==0){
 free(var);
 var = NULL;
 free(mem);
 mem = NULL;
 break;}
 printf("//Enter memory allocated to variable -1 byte.\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n\n",t[0],t[1],mem,t[2],t[3],var,t[4]);
 free(var);
 var = NULL;
 free(mem);
 mem = NULL;
 }
}else if (strcmp(sw, "i")==0){
 char f  [4] [15] = {"if(strcmp(",   ",",  "\"", ")==0){"};
     char *name;
     char *value;
	
 while (1){
 name = (char*)malloc(2000* sizeof(char));
 if(name == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 value = (char*)malloc(2000* sizeof(char));
 if(value == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 printf("//Enter name of the if statement m for main.\n");
 printf("//"); 
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(value);
 value = NULL;
 break;}
 printf("//Enter the value.\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2],  value, f[2],  f[3] );
 free(name);
 name = NULL;
 free(value);
 value = NULL;
      }
}else if (strcmp(sw, "e")==0){
    char f  [4] [18] = {"}else if(strcmp(",   ",",  "\"", ")==0){"};
     char *name;
     char *value;

 while (1){
 name = (char*)malloc(2000* sizeof(char));
 if(name == NULL){
 printf("Error: Insufficent memory.\n");
 exit(1);}
 value = (char*)malloc(2000* sizeof(char));
 if(value == NULL){
 printf("Error: Insufficent memory.\n");
 exit(1);}
 printf("//Enter name of the else if statement m for main.\n");
 printf("//"); 
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(value);
 value = NULL;
 break;}
 printf("//Enter the value.\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2],  value, f[2],  f[3] );
 free(name);
 name = NULL;
 free(value);
 value = NULL;
     }
}else if (strcmp(sw, "in")==0){
       char t [10] [20] = {"if(", "}else if(","strlen"," <= ", " == "," >= "," != ","(",")","){"};
       char *select;
       char *var;
       char *op;
       char *num;
 while(1){
 select = (char*)malloc(1000* sizeof(char));
 if(select == NULL){
 printf("Error Insufficient memory.\n");
 exit(1);}
 var = (char*)malloc(2000* sizeof(char));
 if(var == NULL){
 printf("Error Insufficient memory.\n");
 exit(1);}
 op = (char*)malloc(1000* sizeof(char));
 if(op == NULL){
 printf("Error Insufficient memory.\n");
 exit(1);}
 num = (char*)malloc(1000* sizeof(char));
 if(num == NULL){
 printf("Error Insufficient memory.\n");
 exit(1);}
 printf("//Enter s for strlen  or i for regular if statement. Enter e for else if.\n");
 printf("//");
 fgets(select,1000,stdin);
 select[strcspn(select,"\n")]=0;
 if(strcmp(select,"s")!=0 && strcmp(select,"i")!=0 && strcmp(select,"e")!=0){ 
 printf("//Enter s or i or e only.\n");
 free(select);
 select = NULL;
 free(var);
 var = NULL;
 free(op);
 op = NULL;
 free(num);
 num = NULL;
 continue;}
 printf("//Enter the name of if or else if statement  enter m for main.\n");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 if(strcmp(var,"m")==0){
 free(select);
 select = NULL;
 free(var);
 var = NULL;
 free(op);
 op = NULL;
 free(num);
 num = NULL;
 break;} 
 printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
 printf("//");
 fgets(op,1000,stdin);
 op[strcspn(op,"\n")]=0;
 if(strcmp(op,"a")!=0 && strcmp(op,"b")!=0 && strcmp(op,"c")!=0 && strcmp(op,"d")!=0){
 printf("//Enter a or b or c or d only.\n");
 printf("//Start over.\n");
 free(select);
 select = NULL;
 free(var);
 var = NULL;
 free(op);
 op = NULL;
 free(num);
 num = NULL;
 continue;}
 if(strcmp(op,"a")==0){
  strcpy(op,t[3]);
}else if(strcmp(op,"b")==0){
  strcpy(op,t[4]);
}else if(strcmp(op,"c")==0){
 strcpy(op,t[5]);
}else if(strcmp(op,"d")==0){
 strcpy(op,t[6]);}
 printf("//Enter a number to compare to.\n");
 printf("//");
 fgets(num,1000,stdin);
 num[strcspn(num,"\n")]=0;
 if(strcmp(select,"s")==0){
 printf("\n%s%s%s%s%s%s%s%s\n\n",t[0],t[2],t[7],var,t[8],op,num,t[9]);
 }else if(strcmp(select,"i")==0){
  printf("\n%s%s%s%s%s\n\n",t[0],var,op,num,t[9]);
 }else if(strcmp(select,"e")==0){
  printf("\n%s%s%s%s%s\n\n",t[1],var,op,num,t[9]);
    }
 free(select);
 select = NULL;
 free(var);
 var = NULL;
 free(op);
 op = NULL;
 free(num);
 num = NULL;
 }
}else if (strcmp(sw, "v")==0){
     char f  [3] [15] = {"char "," [","];"};
     char *name;
     char *mem;
    	
 while (1){
 name = (char*)malloc(2000* sizeof(char));
 if(name == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 mem = (char*)malloc(2000* sizeof(char));
 if(mem == NULL){
 printf("Insufficient memory.\n");
 exit(1);}
 printf("//Enter name of variable m for main.\n");
 printf("//"); 
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
 break;}
 printf("//Enter the memory to be allocated to the variable.\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("\n%s%s%s%s%s\n\n",f[0],name,f[1],mem,f[2]);
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
    }
}else if (strcmp(sw, "vv")==0){
        char v [6] [15] ={"char ","[","]"," = ","\"",";"};
       char *name;
       char *mem;
       char *value;
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 if(name == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 mem = (char*)malloc(2000* sizeof(char));
 if(mem == NULL){
 printf("Error: Insufficient memory.\n");  
 exit(1);}
 value = (char*)malloc(2000* sizeof(char));
 if(value == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 printf("//Enter a name of variable m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
 free(value);
 value = NULL;
 break;}
 printf("//Enter the amount of memory to allocate or press enter to not allocate m for main.\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("//enter a value\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s%s%s%s\n\n",v[0],name,v[1],mem,v[2],v[3],v[4],value,v[4],v[5]);
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
 free(value);
 value = NULL;
 }
}else if (strcmp(sw,"aa")==0){
 char t [5] [15] = {"char "," [","] ", "] = {","};"};
	char *name;
	char *ne;
	char *m;
	char *elements;
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 if(name == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 ne = (char*)malloc(2000* sizeof(char));
 if(ne == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 m = (char*)malloc(2000* sizeof(char));
 if(m == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 elements = (char*)malloc(2000* sizeof(char));
 if(elements == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}	 
 printf("//Enter the name of array m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(ne);
 ne = NULL;
 free(m);
 m = NULL;
 free(elements);
 elements = NULL;
 break;}
 printf("//Enter the amount of elements.\n");
 printf("//");
 fgets(ne,2000,stdin);
 ne[strcspn(ne,"\n")]=0;
 printf("//Enter memory allocated to elements.\n");
 printf("//");
 fgets(m,2000,stdin);
 m[strcspn(m,"\n")]=0;
 printf("//Enter elements with quotations and commas between each.\n");
 printf("//");
 fgets(elements,2000,stdin);
 elements[strcspn(elements,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s%s%s%s\n\n",t[0],name,t[1],ne,t[2],t[1],m,t[3],elements,t[4]);
 free(name);
 name = NULL;
 free(ne);
 ne = NULL;
 free(m);
 m = NULL;
 free(elements);
 elements = NULL;
 }
}else if (strcmp(sw, "fc")==0){
      char t [4] [12] = {"void ","(","){","}"};
      char *name;
      char *per;
 
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 if(name == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 per = (char*)malloc(2000* sizeof(char));
 if(per == NULL){
  printf("Error: Insufficient memory.\n");
  exit(1);}
 printf("//Name function m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(per);
 per = NULL;
 break;}
 printf("//Enter parameters.\n");
 printf("//");
 fgets(per,2000,stdin);
 per[strcspn(per,"\n")]=0;
 printf("\n%s%s%s%s%s\n\n\n%s\n\n",t[0],name,t[1],per,t[2],t[3]); 
 free(name);
 name = NULL;
 free(per);
 per = NULL;
 }
}else if (strcmp(sw, "cf")==0){
      char t [2] [12] = {"(",");"};
      char *name;
      char *per;
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 if(name == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 per = (char*)malloc(2000* sizeof(char));
 if(per == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 printf("//Enter the name of function m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(per);
 per = NULL;
 break;}
 printf("//Enter values for parameters.\n");
 printf("//");
 fgets(per,2000,stdin);
 per[strcspn(per,"\n")]=0;
 printf("\n%s%s%s%s\n\n",name,t[0],per,t[1]);
 free(name);
 name = NULL;
 free(per);
 per = NULL;
 }
}else if (strcmp(sw,"h")==0){
	char t [9] [18] = {"char"," *",";"," = (char*)malloc","(",");","* sizeof(char));","free"," = NULL;"};
        char *name;
	char *mem;
	
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 if(name == NULL){
 printf("Error Insufficient memory.\n");
 exit(1);}
 mem = (char*)malloc(2000* sizeof(char));
 if(mem == NULL){
 printf("Error Insufficient memory.\n");
 exit(1);} 
 printf("//Enter the name of the variable m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
 break;}
 printf("//Enter memory to allocate.\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("\n");
 printf("\n%s%s%s%s\n\n",t[0],t[1],name,t[2]);
 printf("%s%s%s%s%s\n\n",name,t[3],t[4],mem,t[5]);
 printf("%s%s%s%s%s\n\n",name,t[3],t[4],mem,t[6]);
 printf("%s%s%s%s\n\n",t[7],t[4],name,t[5]);
 printf("%s%s\n\n",name,t[8]);
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
 }
}else if (strcmp(sw,"hi")==0){
	char t [15] [20] = {"int"," *",";"," = (int*)malloc","(",");","* sizeof(int));","free"," = NULL;","double","float", " = (double*)malloc"," = (float*)malloc","* sizeof(double));","* sizeof(float));"};
        char *name;
	char *mem;
	
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 if(name == NULL){
 printf("Error Insufficient memory.\n");
 exit(1);}
 mem = (char*)malloc(2000* sizeof(char));
 if(mem == NULL){
 printf("Error Insufficient memory.\n");
 exit(1);} 
 printf("//Enter the name of the variable m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
 break;}
 printf("//Enter memory to allocate.\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("\n");
 printf("%s%s%s%s\n\n",t[0],t[1],name,t[2]);
 printf("%s%s%s%s\n\n",t[9],t[1],name,t[2]);
 printf("%s%s%s%s\n\n",t[10],t[1],name,t[2]);
 printf("%s%s%s%s%s\n\n",name,t[3],t[4],mem,t[6]);
 printf("%s%s%s%s%s\n\n",name,t[11],t[4],mem,t[13]);
 printf("%s%s%s%s%s\n\n",name,t[12],t[4],mem,t[14]);
 printf("%s%s%s%s\n\n",t[7],t[4],name,t[5]);
 printf("%s%s\n\n",name,t[8]);
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
 }
}else if (strcmp(sw,"cm")==0){
 char t [6] [18] = {"if("," == NULL){","printf(\"", "\\n","\");","exit(1);}"};
               char *name;
	       char *em;
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 if(name == NULL){
 printf("Error: Insufficient memory.");
 exit(1);}
 em = (char*)malloc(2000* sizeof(char)); 
 if(em == NULL){
 printf("Error: Insufficient memory.");
 exit(1);}
 printf("//Enter the name m for main.\n");
 printf("//"); 
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(em);
 em = NULL;
 break;}
 printf("//Enter an error message.\n");
 printf("//");
 fgets(em,2000,stdin);
 em[strcspn(em,"\n")]=0;
 printf("\n%s%s%s\n",t[0],name,t[1]);
 printf("%s%s%s%s\n",t[2],em,t[3],t[4]);
 printf("%s\n\n",t[5]);
 free(name);
 name = NULL;
 free(em);
 em = NULL;
 }
}else if (strcmp(sw,"vi")==0){
        char t [5] [15] = {"double ","int "," = ", ";", " ;"};
        char *ch;
        char *name;
        char *value;
 while(1){
 ch = (char*)malloc(2000* sizeof(char));
 if(ch == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 name = (char*)malloc(2000* sizeof(char));
 if(name == NULL){
 printf("Error: Insufficient memory.\n");  
 exit(1);}
 value = (char*)malloc(2000* sizeof(char));
 if(value == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 printf("//Choose i for int d for double, m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 free(value);
 value = NULL;
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i or d or m only.\n");
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 free(value);
 value = NULL;
 continue;}
 printf("Enter the name.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 printf("Enter a value.\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0; 
 if(strcmp(ch,"i")==0){
 printf("\n%s%s%s%s%s\n\n",t[1],name,t[2],value,t[3]); 
}else if(strcmp(ch,"d")==0){
 printf("\n%s%s%s%s%s\n\n",t[0],name,t[2],value,t[3]);
       }
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 free(value);
 value = NULL;
}
}else if (strcmp(sw, "vn")==0){
        char t [3] [15] = {"double ","int ", ";"};
        char *ch;
        char *name;
 while(1){
 ch = (char*)malloc(2000* sizeof(char));
 if(ch == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 name = (char*)malloc(2000* sizeof(char));
 if(name == NULL){
 printf("Insufficient memory.\n");
 exit(1);}
 printf("//Choose i for int d for double, m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i or d or m only.\n");
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 continue;}
 printf("Enter the name.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0; 
 if(strcmp(ch,"i")==0){
 printf("\n%s%s%s\n\n",t[1],name,t[2]); 
}else if(strcmp(ch,"d")==0){
 printf("\n%s%s%s\n\n",t[0],name,t[2]);
      }
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
}
}else if (strcmp(sw, "si")==0){
       char t [6] [15] = {"scanf(\"", "\%d\"",  "\%lf\"", ","," &", ");"};
       char *ch;
       char *name;
 while(1){
 ch = (char*)malloc(2000* sizeof(char));
 if(ch == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 name = (char*)malloc(2000* sizeof(char));
 if(name == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 printf("//Choose i for int d for double or m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i or d or m only.\n");
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 continue;}
 printf("//Enter the name of variable.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(ch,"i")==0){
 printf("\n%s%s%s%s%s%s\n\n",t[0],t[1],t[3],t[4],name,t[5]);
}else if (strcmp(ch,"d")==0){
 printf("\n%s%s%s%s%s%s\n\n",t[0],t[2],t[3],t[4],name,t[5]);
       }
 free(ch);
 ch = NULL;
 free(name);
 name = NULL; 
}
}else if (strcmp(sw,"sh")==0){
      char t [6] [15] = {"scanf(\"", "\%d\"",  "\%lf\"", ",",");","\%f\"",};
       char *ch;
       char *name;
 while(1){
 ch = (char*)malloc(2000* sizeof(char));
 if(ch == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 name = (char*)malloc(2000* sizeof(char));
 if(name == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 printf("//Choose i for int f for float or d for double or m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "f")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i, f, d  or m only.\n");
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 continue;}
 printf("//Enter the name of variable.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(ch,"i")==0){
 printf("\n%s%s%s%s%s\n\n",t[0],t[1],t[3],name,t[4]);
}else if (strcmp(ch,"d")==0){
 printf("\n%s%s%s%s%s\n\n",t[0],t[2],t[3],name,t[4]);
}else if (strcmp(ch,"f")==0){
 printf("\n%s%s%s%s%s\n\n",t[0],t[5],t[3],name,t[4]);
}
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
  }
}else if (strcmp(sw, "cy")==0){
 char cpy [5];
 while (1){
 printf("#include <stdio.h>\n");
 printf("\n");
 printf("#include <stdio_ext.h>\n");
 printf("\n");
 printf("#include <string.h>\n");
 printf("\n");
 printf("#include <stdlib.h>\n");
 printf("\n"); 
 printf("while(1){\n");
 printf("\n");
 printf("break;\n");
 printf("\n");
 printf("break;}\n");
 printf("\n");
 printf("continue;\n");
 printf("\n");
 printf("continue;}\n");
 printf("\n");
 printf("int main(){\n");
 printf("\n");
 printf("fflush(stdin);\n");
 printf("\n");
 printf("__fpurge(stdin);\n");
 printf("\n");
 printf("getchar();\n");
 printf("\n");
 printf("}else{\n");
 printf("\n");
 printf("else{\n");
 printf("\n");
 printf("    }\n");
 printf("}\n");
 printf("\n");
 printf("return 0;\n");
 printf("}\n");
 printf("\n");
 printf("//Enter m for main.\n");
 fgets(cpy,5,stdin);
 cpy[strcspn(cpy,"\n")]=0;
 if (strcmp(cpy,"m")==0){
 break;} 
     } 
}else if (strcmp(sw, "ap")==0){
 char string  [2] [15] = {"print('",  "')"};
 char *text;
 printf("#Enter your string, m for main.\n");
 while (1){
 text = (char*)malloc(2000* sizeof(char));
 if(text == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 printf("#");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 free(text);
 text = NULL;
 break;}
 printf("\n%s%s%s\n\n",string[0],text,string[1]);
 free(text);
 text = NULL;
 }
}else if (strcmp(sw, "bp")==0){
 char string  [2] [15] = {"print(\"", "\")"};
 char *text;
 printf("#Enter your string, m for main.\n");
 while (1){
 text = (char*)malloc(2000* sizeof(char));
 if(text == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 printf("#");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 free(text);
 text = NULL;
 break;}
 printf("\n%s%s%s\n\n",string[0],text,string[1]);
 free(text);
 text = NULL;
 }    
}else if (strcmp(sw, "cp")==0){
  char string  [2] [15] = {"print('''",  "''')"};
 char *text;
 printf("#Enter your string, m for main.\n");
 while (1){
 text = (char*)malloc(2000* sizeof(char));
 if(text == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 printf("#");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 free(text);
 text = NULL;
 break;}
 printf("\n%s%s%s\n\n",string[0],text,string[1]);
 free(text);
 text = NULL;
 }
}else if (strcmp(sw, "cl")==0){
      char f  [9] [24] = {"class ",":", "    def __init__(self," ,"):","self.","="," ","        "};
     char *text;
     char *te;
     char *v; char *v1; char *v2; char *v3; char *v4; char *v5; char *v6; char *v7;
	
 while (1){
 text = (char*)malloc(1000* sizeof(char));
 if(text == NULL){ 
 printf("Error: Insufficient memory.\n");
 exit(1);}
 te = (char*)malloc(1000* sizeof(char));
 if(te == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 v = (char*)malloc(1000* sizeof(char));
 if(v == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 v1 = (char*)malloc(1000* sizeof(char));
 if(v1 == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 v2 = (char*)malloc(1000* sizeof(char));
 if(v2 == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 v3 = (char*)malloc(1000* sizeof(char));
 if(v3 == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 v4 = (char*)malloc(1000* sizeof(char));
 if(v4 == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 v5 = (char*)malloc(1000* sizeof(char));
 if(v5 == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 v6 = (char*)malloc(1000* sizeof(char));
 if(v6 == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 v7 = (char*)malloc(1000* sizeof(char));
 if(v7 == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 printf("#Enter a class m for main. ");
 fgets(text,1000,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 free(text);
 text = NULL;
 free(te);
 te = NULL;
 free(v);
 v = NULL;
 free(v1);
 v1 = NULL;
 free(v2);
 v2 = NULL;
 free(v3);
 v3 = NULL;
 free(v4);
 v4 = NULL;
 free(v5);
 v5 = NULL;
 free(v6);
 v6 = NULL;
 free(v7);
 v7 = NULL;
 break;}
 printf("#List attributes with a comma separating each one.\n");
 printf("#");
 fgets(te,1000,stdin);
 te[strcspn(te,"\n")]=0;
 printf("#Assign values. Press enter after each one.\n");
 printf("#");
 fgets(v,1000,stdin);
 v[strcspn(v,"\n")]=0;
 printf("#");
 fgets(v1,1000,stdin);
 v1[strcspn(v1,"\n")]=0;
 printf("#");
 fgets(v2,1000,stdin);
 v2[strcspn(v2,"\n")]=0;
 printf("#");
 fgets(v3,1000,stdin);
 v3[strcspn(v3,"\n")]=0;
 printf("#");
 fgets(v4,1000,stdin);
 v4[strcspn(v4,"\n")]=0;
 printf("#");
 fgets(v5,1000,stdin);
 v5[strcspn(v5,"\n")]=0;
 printf("#");
 fgets(v6,1000,stdin);
 v6[strcspn(v6,"\n")]=0;
 printf("#");
 fgets(v7,1000,stdin);
 v7[strcspn(v7,"\n")]=0;
 printf("\n%s%s%s\n",f[0],text,f[1]);
 printf("%s%s%s\n",f[2], te, f[3]);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v,f[6],f[5],f[6],v);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v1,f[6],f[5],f[6],v1);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v2,f[6],f[5],f[6],v2);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v3,f[6],f[5],f[6],v3);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v4,f[6],f[5],f[6],v4);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v5,f[6],f[5],f[6],v5);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v6,f[6],f[5],f[6],v6);
 printf("%s%s%s%s%s%s%s\n\n",f[7],f[4],v7,f[6],f[5],f[6],v7);
 free(text);
 text = NULL;
 free(te);
 te = NULL;
 free(v);
 v = NULL;
 free(v1);
 v1 = NULL;
 free(v2);
 v2 = NULL;
 free(v3);
 v3 = NULL;
 free(v4);
 v4 = NULL;
 free(v5);
 v5 = NULL;
 free(v6);
 v6 = NULL;
 free(v7);
 v7 = NULL;
 }
}else if (strcmp(sw, "ip")==0){
char f [5] [12] = {"if ", " == ", ":","    print(\"", "\")"};
 char *text;
 char *te;
 char *ts;
 char *t;
 while (1){
 text = (char*)malloc(2000* sizeof(char));
 if(text == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 te = (char*)malloc(2000* sizeof(char));
 if(te == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 ts = (char*)malloc(2000* sizeof(char));
 if(ts == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 t = (char*)malloc(2000* sizeof(char));
 if(t == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}	 
 printf("#Enter name of if statement, m for main. ");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 free(text);
 text = NULL;
 free(te);
 te = NULL;
 free(ts);
 ts = NULL;
 free(t);
 t = NULL; 
 break;}
 printf("#Enter a value. Add quotes if it's a string. ");
 fgets(te,2000,stdin);
 te[strcspn(te,"\n")]=0;
 printf("#Enter s to make the next line a string with print function. Enter for other. ");
 fgets(ts,2000,stdin);
 ts[strcspn(ts,"\n")]=0;
 printf("#Enter the second line. ");
 fgets(t,2000,stdin);
 t[strcspn(t,"\n")]=0;
 printf("\n%s%s%s%s%s\n",f[0],text,f[1],te,f[2]);
 if (strcmp(ts,"s")==0){
 printf("%s%s%s\n\n",f[3],t,f[4]);
}else{
      printf("    %s\n\n",t);
           }
 free(text);
 text = NULL;
 free(te);
 te = NULL;
 free(ts);
 ts = NULL;
 free(t);
 t = NULL; 
      }
}else if (strcmp(sw, "ep")==0){      
char f [5] [12] = {"elif ", " == ", ":","    print(\"", "\")"};
 char *text;
 char *te;
 char *ts;
 char *t;
 while (1){
 text = (char*)malloc(2000* sizeof(char));
 if(text == NULL){
 printf("Error: insufficient memory.\n");
 exit(1);}
 te = (char*)malloc(2000* sizeof(char));
 if(te == NULL){
 printf("Error: insufficient memory.\n");
 exit(1);}
 ts = (char*)malloc(2000* sizeof(char));
 if(ts == NULL){
 printf("Error: insufficient memory.\n");
 exit(1);}
 t = (char*)malloc(2000* sizeof(char));
 if(t == NULL){
 printf("Error: insufficient memory.\n");
 exit(1);}
 printf("#Enter name of elif statement, m for main. ");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 free(text);
 text = NULL;
 free(te);
 te = NULL;
 free(ts);
 ts = NULL;
 free(t);
 t = NULL; 
 break;}
 printf("#Enter a value. Add quotes if it's a string. ");
 fgets(te,2000,stdin);
 te[strcspn(te,"\n")]=0;
 printf("#Enter s to make the next line a string with print function. Enter for other. ");
 fgets(ts,2000,stdin);
 ts[strcspn(ts,"\n")]=0;
 printf("#Enter the second line. ");
 fgets(t,2000,stdin);
 t[strcspn(t,"\n")]=0;
 printf("\n%s%s%s%s%s\n",f[0],text,f[1],te,f[2]);
 if (strcmp(ts,"s")==0){
 printf("%s%s%s\n\n",f[3],t,f[4]);
}else{
      printf("    %s\n\n",t);
           }
 free(text);
 text = NULL;
 free(te);
 te = NULL;
 free(ts);
 ts = NULL;
 free(t);
 t = NULL; 
      } 
}else if (strcmp(sw, "vp")==0){
    char f [4] [12] = {" = ","\"","input(\""," \")"};
    char *n;
    char *vs;
    char *v;

 while (1){
 n = (char*)malloc(2000* sizeof(char));
 if(n == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 vs = (char*)malloc(2000* sizeof(char));
 if(vs == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 v = (char*)malloc(2000* sizeof(char));
 if(v == NULL){
 printf("Error: Insufficient memory.\n");
 exit(1);}
 printf("#Enter a name for your variable, m for main.\n");
 printf("#");
 fgets(n,2000,stdin);
 n[strcspn(n,"\n")]=0;
 if (strcmp(n, "m")==0){
 free(n);
 n = NULL;
 free(vs);
 vs = NULL;
 free(v);
 v = NULL;
 break;}
 printf("#If the value is a string enter s. Enter  i for user input otherwise enter.\n");
 printf("#");
 fgets(vs,2000,stdin);
 vs[strcspn(vs,"\n")]=0;
 printf("#Enter a value. ");
 fgets(v,2000,stdin);
 v[strcspn(v,"\n")]=0;
 if (strcmp(vs,"s")==0){
 printf("\n%s%s%s%s%s\n\n",n,f[0],f[1],v,f[1]);
}else if (strcmp(vs,"i")==0){
 printf("\n%s%s%s%s%s\n\n",n,f[0],f[2],v,f[3]);  
}else{
     printf("\n%s%s%s\n\n",n,f[0],v);
           }
 free(n);
 n = NULL;
 free(vs);
 vs = NULL;
 free(v);
 v = NULL;
     }
}else if (strcmp(sw, "cyp")==0){
 char cpy [5];
 while (1){
 printf("\nwhile True:\n");
 printf("\nbreak\n");
 printf("\ncontinue\n\n");
 printf("\nelse:\n\n");
 printf("#Enter m for main.\n");
 fgets(cpy,5,stdin);
 cpy[strcspn(cpy,"\n")]=0;
 if (strcmp(cpy,"m")==0){
 break;} 
 }
 }else if (strcmp(sw, "x")==0){
 break;
}else if (strcmp(sw, "ch")==0){
 choice();
}else{
     printf("//Enter a letter in main.\n");
         }
      }
return 0;
}






















































































































 

















	
 


	










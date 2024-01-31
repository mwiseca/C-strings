//Copyright 2023 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
#include <stdlib.h>


void choice(){
 printf("//Enter c for choices.\n");
 printf("//Enter a for strings b for strings for newline character.\n");
 printf("//Enter cy for whats needed to copy and paste to finish a simple program.\n");
 printf("//Enter i for if statement e for else if.\n");
 printf("//Enter f for fgets.\n");
 printf("//Enter v for variables without assigning a value.\n");
 printf("//Enter m for main x to exit.\n");
 }


int main(){        
	char sw [250];         

 
 choice();
 while (1){
 printf("//Enter x to exit main m for main.\n");
 printf("//");
 fgets(sw,250,stdin);
 sw[strcspn(sw,"\n")]=0;
 __fpurge(stdin);
 if (strcmp(sw, "a")==0){
 char string  [2] [15] = {"printf(\"", "\");"};
    char *text;
    printf("//Enter your string, m to exit.\n");
    while (1){
    text = (char*)malloc(150);
    printf("//");
    fgets(text,100,stdin);
    text[strcspn(text,"\n")]=0;
    __fpurge(stdin);
    if (strcmp(text,"m")==0){
    break;}
    printf("%s%s%s\n",string[0],text,string[1]);
    free(text);
       }
}else if (strcmp(sw,"b")==0){
 char string  [3] [15] = {"printf(\"", "\\n","\");"};
    char *text;
    printf("//Enter your string, m to exit.\n");
    while (1){
    text = (char*)malloc(150),
    printf("//");
    fgets(text,150,stdin);
    text[strcspn(text,"\n")]=0;
    __fpurge(stdin);
    if (strcmp(text,"m")==0){
    break;}
    printf("%s%s%s%s\n",string[0],text,string[1], string[2]);
    free(text);
         }
 
}else if (strcmp(sw, "f")==0){
      char f  [6] [15] = {"fgets(", ",", "stdin);", "[strcspn(","\"\\n", "\")]=0;"};
     char *v;
     char *me;

 while (1){
 v = (char*)malloc(150);
 me = (char*)malloc(150);
 printf("//Enter name of variable m to exit.\n");
 printf("//"); 
 fgets(v,150,stdin);
 v[strcspn(v,"\n")]=0;
 __fpurge(stdin);
 if (strcmp(v,"m")==0){
 break;}
 printf("//Enter the memory you allocated to the variable.\n");
 printf("//");
 fgets(me,150,stdin);
 me[strcspn(me,"\n")]=0;
 __fpurge(stdin);
 printf("%s%s%s%s%s%s\n",f[0], v, f[1],me,f[1],f[2]);
 printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4] ,f[5]);
 free(v);
 free(me);
     }
}else if (strcmp(sw, "i")==0){
 char f  [4] [15] = {"if (strcmp(",   ",",  "\"", ")==0){"};
     char *name;
     char *value;
	
 while (1){
 name = (char*)malloc(100);
 value = (char*)malloc(100);
 printf("//Enter name of the if statement m to exit.\n");
 printf("//"); 
 fgets(name,100,stdin);
 name[strcspn(name,"\n")]=0;
 __fpurge(stdin);
 if (strcmp(name,"m")==0){
 break;}
 printf("//Enter the value.\n");
 printf("//");
 fgets(value,50,stdin);
 value[strcspn(value,"\n")]=0;
 __fpurge(stdin);
 printf("%s%s%s%s%s%s%s\n", f[0], name, f[1], f[2],  value, f[2],  f[3] );
 free(name);
 free(value);
      }
}else if (strcmp(sw, "e")==0){
    char f  [4] [18] = {"}else if (strcmp(",   ",",  "\"", ")==0){"};
     char *name;
     char *value;

 while (1){
 name = (char*)malloc(100);
 value = (char*)malloc(100);
 printf("//Enter name of the else if statement x to exit.\n");
 printf("//"); 
 fgets(name,100,stdin);
 name[strcspn(name,"\n")]=0;
 __fpurge(stdin);
 if (strcmp(name,"m")==0){
 break;}
 printf("//Enter the value.\n");
 printf("//");
 fgets(value,50,stdin);
 value[strcspn(value,"\n")]=0;
 __fpurge(stdin);
 printf("%s%s%s%s%s%s%s\n", f[0], name, f[1], f[2],  value, f[2],  f[3] );
 free(name);
 free(value);
     }
}else if (strcmp(sw, "v")==0){
     char f  [3] [15] = {"char "," [","];"};
     char *name;
     char *mem;
    	
 while (1){
 name = (char*)malloc(100);
 mem = (char*)malloc(100);
 printf("//Enter name of variable m for main.\n");
 printf("//"); 
 fgets(name,100,stdin);
 name[strcspn(name,"\n")]=0;
 __fpurge(stdin);
 if (strcmp(name,"m")==0){
 break;}
 printf("//Enter the memory you allocated to the variable.\n");
 printf("//");
 fgets(mem,100,stdin);
 mem[strcspn(mem,"\n")]=0;
 __fpurge(stdin);
 printf("%s%s%s%s%s\n",f[0],name,f[1],mem,f[2]);
 free(name);
 free(mem);
    }
}else if (strcmp(sw, "cy")==0){
 char cpy [5];

 while (1){
 printf("#include <stdio.h>\n");
 printf("\n");
 printf("#include <string.h>\n");
 printf("\n"); 
 printf("while (1){\n");
 printf("\n");
 printf("break;\n");
 printf("\n");
 printf("int main(){\n");
 printf("\n");
 printf("}else{\n");
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
 __fpurge(stdin);
 if (strcmp(cpy,"m")==0){
 break;} 
     } 
}else if (strcmp(sw, "x")==0){
 break;
}else if (strcmp(sw, "c")==0){
 choice();
}else{
     printf("//Enter a letter in main.\n");
         } 
      }  
return 0;
}

	
 


	











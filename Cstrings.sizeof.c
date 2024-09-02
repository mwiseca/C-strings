//Copyright 2023 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void choice(){
 printf("//Enter ch for choices.\n");
 printf("//Enter a for strings b for strings for new line character.\n");
 printf("//Enter aa for arrays.\n");
 printf("//Enter c for strings with no quotation marks.\n");
 printf("//Enter cy for what's needed to copy and paste to finish a simple program.\n");
 printf("//Enter i for if statement e for else if.\n");
 printf("//Enter f for fgets.\n");
 printf("//Enter fs for fgets with strlen to remove new line character.\n");
 printf("//Enter s for scanf for strings to allow for white spaces.\n");
 printf("//Enter sb for scanf basic no white spaces.\n");
 printf("//Enter h to allocate memory on the heap hs for sizeof.\n");
 printf("//Enter fc for void functions.\n");
 printf("//Enter cf to call functions.\n");
 printf("//Enter v for variables without assigning a value.\n");
 printf("//Enter vv for variables with assigning a string value.\n");
 printf("//Enter m for main x to exit.\n");
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
    printf("//");
    fgets(text,2000,stdin);
    text[strcspn(text,"\n")]=0;
    if (strcmp(text,"m")==0){
    free(text);
    text = NULL;
    break;}
    printf("%s%s%s\n",string[0],text,string[1]);
    free(text);
    text = NULL;
       }
}else if (strcmp(sw,"b")==0){
 char string  [3] [15] = {"printf(\"", "\\n","\");"};
    char *text;
    printf("//Enter your string, m for main.\n");
    while (1){
    text = (char*)malloc(2000* sizeof(char));
    printf("//");
    fgets(text,2000,stdin);
    text[strcspn(text,"\n")]=0;
    if (strcmp(text,"m")==0){
    free(text);
    text = NULL;
    break;}
    printf("%s%s%s%s\n",string[0],text,string[1], string[2]);
    free(text);
    text = NULL;
         }
}else if (strcmp(sw,"c")==0){
    char t [2] [12] = {"printf(", ");"};
    char *text;
    
 printf("//Enter text m for main.\n");   
 while(1){
 text = (char*)malloc(2000* sizeof(char));
 printf("//");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if(strcmp(text,"m")==0){
 free(text);
 text = NULL;
 break;}
 printf("%s%s%s\n",t[0],text,t[1]);
 free(text);
 text = NULL;
 }
}else if (strcmp(sw, "f")==0){
      char f  [6] [15] = {"fgets(", ",", "stdin);", "[strcspn(","\"\\n", "\")]=0;"};
     char *v;
     char *me;

 while (1){
 v = (char*)malloc(2000* sizeof(char));
 me = (char*)malloc(2000* sizeof(char));
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
 printf("//Enter the memory you allocated to the variable.\n");
 printf("//");
 fgets(me,2000,stdin);
 me[strcspn(me,"\n")]=0;
 printf("%s%s%s%s%s%s\n",f[0], v, f[1],me,f[1],f[2]);
 printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4] ,f[5]);
 free(v);
 v = NULL;
 free(me);
 me = NULL;
     }
}else if (strcmp(sw,"fs")==0){
     char f  [5] [15] = {"fgets(", ",", "stdin);", "[strlen(",")-1] = '\\0';"};
     char *v;
     char *me;
	
 while (1){
 v = (char*)malloc(2000* sizeof(char));
 me = (char*)malloc(2000* sizeof(char));
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
 printf("//Enter the memory you allocated to the variable.\n");
 printf("//");
 fgets(me,2000,stdin);
 me[strcspn(me,"\n")]=0;
 printf("%s%s%s%s%s%s\n",f[0], v, f[1],me,f[1],f[2]);
 printf("%s%s%s%s\n", v, f[3], v, f[4]);
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
 mem = (char*)malloc(2000* sizeof(char));
 printf("//Enter the name of the variable m for main.\n");
 printf("//");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 if(strcmp(var,"m")==0){
 free(var);
 var = NULL;
 free(mem);
 mem = NULL;
 break;}
 printf("//Enter memory allocated to variable -1 byte\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("%s%s%s%s%s%s%s\n",t[0],t[1],mem,t[2],t[3],var,t[4]);
 printf("%s\n",t[5]);
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
 mem = (char*)malloc(2000* sizeof(char));
 printf("//Enter the name of the variable m for main.\n");
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
 printf("%s%s%s%s%s%s%s\n",t[0],t[1],mem,t[2],t[3],var,t[4]);
 free(var);
 var = NULL;
free(mem);
mem = NULL;
 }
}else if (strcmp(sw, "i")==0){
 char f  [4] [15] = {"if (strcmp(",   ",",  "\"", ")==0){"};
     char *name;
     char *value;
	
 while (1){
 name = (char*)malloc(2000* sizeof(char));
 value = (char*)malloc(2000* sizeof(char));
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
 printf("%s%s%s%s%s%s%s\n", f[0], name, f[1], f[2],  value, f[2],  f[3] );
 free(name);
 name = NULL;
 free(value);
 value = NULL;
      }
}else if (strcmp(sw, "e")==0){
    char f  [4] [18] = {"}else if (strcmp(",   ",",  "\"", ")==0){"};
     char *name;
     char *value;

 while (1){
 name = (char*)malloc(2000* sizeof(char));
 value = (char*)malloc(2000* sizeof(char));
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
 printf("%s%s%s%s%s%s%s\n", f[0], name, f[1], f[2],  value, f[2],  f[3] );
 free(name);
 name = NULL;
 free(value);
 value = NULL;
     }
}else if (strcmp(sw, "v")==0){
     char f  [3] [15] = {"char "," [","];"};
     char *name;
     char *mem;
    	
 while (1){
 name = (char*)malloc(2000* sizeof(char));
 mem = (char*)malloc(2000* sizeof(char));
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
 printf("//Enter the memory you allocated to the variable.\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("%s%s%s%s%s\n",f[0],name,f[1],mem,f[2]);
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
 mem = (char*)malloc(2000* sizeof(char));
 value = (char*)malloc(2000* sizeof(char));
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
 printf("%s%s%s%s%s%s%s%s%s%s\n",v[0],name,v[1],mem,v[2],v[3],v[4],value,v[4],v[5]);
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
 ne = (char*)malloc(2000* sizeof(char));
 m = (char*)malloc(2000* sizeof(char));
 elements = (char*)malloc(2000* sizeof(char));
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
 printf("%s%s%s%s%s%s%s%s%s%s\n",t[0],name,t[1],ne,t[2],t[1],m,t[3],elements,t[4]);
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
 per = (char*)malloc(2000* sizeof(char));
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
 printf("//Enter parameters if any.\n");
 printf("//");
 fgets(per,2000,stdin);
 per[strcspn(per,"\n")]=0;
 printf("%s%s%s%s%s\n\n\n%s\n",t[0],name,t[1],per,t[2],t[3]);
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
 per = (char*)malloc(2000* sizeof(char));
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
 printf("//Enter values for parameters if any.\n");
 printf("//");
 fgets(per,2000,stdin);
 per[strcspn(per,"\n")]=0;
 printf("%s%s%s%s\n",name,t[0],per,t[1]);
 free(name);
 name = NULL;
 free(per);
 per = NULL;
 }
}else if (strcmp(sw,"h")==0){
	char t [8] [18] = {"char"," *",";"," = (char*)malloc","(",");","free"," = NULL;"};
        char *name;
	char *mem;
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 mem = (char*)malloc(2000* sizeof(char)); 
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
 printf("%s%s%s%s\n\n",t[0],t[1],name,t[2]);
 printf("%s%s%s%s%s\n\n",name,t[3],t[4],mem,t[5]);
 printf("%s%s%s%s\n\n",t[6],t[4],name,t[5]);
 printf("%s%s\n\n",name,t[7]);
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
 }
}else if (strcmp(sw,"hs")==0){
	char t [9] [18] = {"char"," *",";"," = (char*)malloc","(","* sizeof(char));","free",");"," = NULL;"};
        char *name;
	char *mem;
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 mem = (char*)malloc(2000* sizeof(char));
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
 printf("%s%s%s%s\n\n",t[0],t[1],name,t[2]);
 printf("%s%s%s%s%s\n\n",name,t[3],t[4],mem,t[5]);
 printf("%s%s%s%s\n\n",t[6],t[4],name,t[7]);
 printf("%s%s\n\n",name,t[8]);
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
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
 printf("while (1){\n");
 printf("\n");
 printf("break;\n");
 printf("\n");
 printf("int main(){\n");
 printf("\n");
 printf("fflush(stdin);\n");
 printf("\n");
 printf("__fpurge(stdin);\n");
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
























































































 

















	
 


	










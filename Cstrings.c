//Copyright 2023 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <stdio.h>
#include <string.h>


void choice(){
 printf("//Enter ch for choices.\n");
 printf("//Enter a for strings b for strings for new line character.\n");
 printf("//Enter aa for arrays.\n");
 printf("//Enter c for strings with no quotation marks.\n");
 printf("//Enter cy for whats needed to copy and paste to finish a simple program.\n");
 printf("//Enter i for if statement e for else if.\n");
 printf("//Enter f for fgets.\n");
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
 printf("//Enter x to exit main m for main.\n");
 printf("//");
 fgets(sw,250,stdin);
 sw[strcspn(sw,"\n")]=0;
 if (strcmp(sw, "a")==0){
 char string  [2] [15] = {"printf(\"", "\");"};
    char text [2000];
    printf("//Enter your string, m to exit.\n");
    while (1){
    printf("//");
    fgets(text,2000,stdin);
    text[strcspn(text,"\n")]=0;
    if (strcmp(text,"m")==0){
    break;}
    printf("%s%s%s\n",string[0],text,string[1]);
       }
}else if (strcmp(sw,"b")==0){
 char string  [3] [15] = {"printf(\"", "\\n","\");"};
    char text [2000];
    printf("//Enter your string, m to exit.\n");
    while (1){
    printf("//");
    fgets(text,2000,stdin);
    text[strcspn(text,"\n")]=0;
    if (strcmp(text,"m")==0){
    break;}
    printf("%s%s%s%s\n",string[0],text,string[1], string[2]);
         }
}else if (strcmp(sw,"c")==0){
    char t [2] [12] = {"printf(", ");"};
    char text [2000];
    
 printf("//Enter text m for main\n");   
 while(1){
 printf("//");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if(strcmp(text,"m")==0){
 break;}
 printf("%s%s%s\n",t[0],text,t[1]);
 }
}else if (strcmp(sw, "f")==0){
      char f  [6] [15] = {"fgets(", ",", "stdin);", "[strcspn(","\"\\n", "\")]=0;"};
     char v [2000];
     int me;

 while (1){
 printf("//Enter name of variable m to exit.\n");
 printf("//"); 
 scanf("%1999s",v);
 if (strcmp(v,"m")==0){
 break;}
 printf("//Enter the memory you alocated to the variable.\n");
 printf("//");
 scanf("%10d",&me);
 printf("%s%s%s%d%s%s\n",f[0], v, f[1],me,f[1],f[2]);
 printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4] ,f[5]);
     }
}else if (strcmp(sw, "i")==0){
 char f  [4] [15] = {"if (strcmp(",   ",",  "\"", ")==0){"};
     char name [2000];
     char value [2000];
	
 while (1){
 printf("//Enter name of the if statement m for main.\n");
 printf("//"); 
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(name,"m")==0){
 break;}
 printf("//Enter the value.\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("%s%s%s%s%s%s%s\n", f[0], name, f[1], f[2],  value, f[2],  f[3] );
      }
}else if (strcmp(sw, "e")==0){
    char f  [4] [18] = {"}else if (strcmp(",   ",",  "\"", ")==0){"};
     char name [2000];
     char value [2000];

 while (1){
 printf("//Enter name of the else if statement m for main.\n");
 printf("//"); 
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(name,"m")==0){
 break;}
 printf("//Enter the value.\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("%s%s%s%s%s%s%s\n", f[0], name, f[1], f[2],  value, f[2],  f[3] );
     }
}else if (strcmp(sw, "v")==0){
     char f  [3] [15] = {"char "," [","];"};
     char name [2000];
     int mem;
    	
 while (1){
 printf("//Enter name of variable m for main.\n");
 printf("//"); 
 scanf("%1999s",name);
 if (strcmp(name,"m")==0){
 break;}
 printf("//Enter the memory you alocated to the variable.\n");
 printf("//");
 scanf("%10d",&mem);
 printf("%s%s%s%d%s\n",f[0],name,f[1],mem,f[2]);
    }
}else if (strcmp(sw, "vv")==0){
        char v [6] [15] ={"char ","[","]"," = ","\"",";"};
       char name [2000];
       char mem [2000];
       char value [2000];
 while(1){
 printf("Enter a name of varable m for main.\n");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 break;}
 printf("Enter the amount of memory you want to alocate.\n");
 printf("Add one for the null character.\n");
 printf("Or press enter to not alocate.\n");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("enter a value\n");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("%s%s%s%s%s%s%s%s%s%s\n",v[0],name,v[1],mem,v[2],v[3],v[4],value,v[4],v[5]);
 }
}else if (strcmp(sw,"aa")==0){
 char t [5] [15] = {"char "," [","] ", "] = {","};"};
	char name [2000];
	char ne [2000];
	char m [2000];
	char elements [2000];
 while(1){
 printf("//Enter the name of array m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
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
 }
}else if (strcmp(sw, "fc")==0){
      char t [4] [12] = {"void ","(","){","}"};
      char name [2000];
      char per [2000];
 
 while(1){
 printf("//Name function m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 break;}
 printf("Enter perameters.\n");
 printf("//");
 fgets(per,2000,stdin);
 per[strcspn(per,"\n")]=0;
 printf("%s%s%s%s%s\n\n\n%s\n",t[0],name,t[1],per,t[2],t[3]); 
 }
}else if (strcmp(sw, "cf")==0){
      char t [2] [12] = {"(",");"};
      char name [2000];
      char per [2000];
 while(1){
 printf("//Enter the name of function m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 break;}
 printf("Enter values for perameters.\n");
 fgets(per,2000,stdin);
 per[strcspn(per,"\n")]=0;
 printf("%s%s%s%s\n",name,t[0],per,t[1]);
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





































 

















	
 


	










//Copyright 2023-2024 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <stdio.h>
#include <string.h>


void choice(){
 printf("//Enter ch for choices.\n");
 printf("//Enter a for strings b for strings for newline character.\n");
 printf("//Enter aa for arrays.\n");
 printf("//Enter c for strings with no quotation marks.\n");
 printf("//Enter cy for what's needed to copy and paste to finish a simple program.\n");
 printf("//Enter i for if statement e for else if.\n");
 printf("//Enter in for if and else if statements for numbers.\n");
 printf("//Enter im for if and else if statements for numbers if malloc is used.\n");
 printf("//Enter f for fgets.\n");
 printf("//Enter fs for fgets with strlen to remove newline character.\n");
 printf("//Enter s for scanf for strings to allow for white spaces.\n");
 printf("//Enter sb for scanf basic no white spaces.\n");
 printf("//Enter si for scanf for integers and doubles.\n");
 printf("//Enter sh for scanf with ints and doubles on the heap.\n");
 printf("//Enter sc to check scanf.\n");
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
printf("//For strings enter ap for one bp for two cp for three quotes. Enter x to exit.\n");
printf("//Enter cl for classes. Enter ip for if statements. Enter ep for elif.\n");
printf("//Enter vp for variables and user input option.\n");
printf("//Enter ch for choices.\n");
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
    char text [2000];
    printf("//Enter your string, m to exit.\n");
    while (1){
    printf("//");
    fgets(text,2000,stdin);
    text[strcspn(text,"\n")]=0;
    if (strcmp(text,"m")==0){
    break;}
    printf("\n%s%s%s\n\n",string[0],text,string[1]);
       }
}else if (strcmp(sw,"b")==0){
 char string  [3] [15] = {"printf(\"", "\\n","\");"};
    char text [2000];
    printf("//Enter your string, m for main.\n");
    while (1){
    printf("//");
    fgets(text,2000,stdin);
    text[strcspn(text,"\n")]=0;
    if (strcmp(text,"m")==0){
    break;}
    printf("\n%s%s%s%s\n\n",string[0],text,string[1], string[2]);
         }
}else if (strcmp(sw,"c")==0){
    char t [2] [12] = {"printf(", ");"};
    char text [2000];
    
 printf("//Enter text m for main.\n");   
 while(1){
 printf("//");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if(strcmp(text,"m")==0){
 break;}
 printf("\n%s%s%s\n\n",t[0],text,t[1]);
 }
}else if (strcmp(sw, "f")==0){
      char f  [6] [15] = {"fgets(", ",", "stdin);", "[strcspn(","\"\\n", "\")]=0;"};
     char v [2000];
     char me [2000];

 while (1){
 printf("//Enter name of variable m for main.\n");
 printf("//"); 
 fgets(v,2000,stdin);
 v[strcspn(v,"\n")]=0;
 if (strcmp(v,"m")==0){
 break;}
 printf("//Enter the memory to be allocated to the variable.\n");
 printf("//");
 fgets(me,2000,stdin);
 me[strcspn(me,"\n")]=0;
 printf("\n%s%s%s%s%s%s\n",f[0], v, f[1],me,f[1],f[2]);
 printf("%s%s%s%s%s%s\n\n", v, f[3], v, f[1], f[4] ,f[5]);
     }
}else if (strcmp(sw,"fs")==0){
     char f  [6] [15] = {"fgets(", ",", "stdin);", "[strlen(",")-1] = '\\0';"};
     char v [2000];
     char me [2000];
	
 while (1){
 printf("//Enter name of variable m for main.\n");
 printf("//"); 
 fgets(v,2000,stdin);;
 v[strcspn(v,"\n")]=0;
 if (strcmp(v,"m")==0){
 break;}
 printf("//Enter the memory to be allocated to the variable.\n");
 printf("//");
 fgets(me,2000,stdin);
 me[strcspn(me,"\n")]=0;
 printf("\n%s%s%s%s%s%s\n",f[0], v, f[1],me,f[1],f[2]);
 printf("%s%s%s%s%s\n\n", v, f[3], v, f[4] ,f[5]);
 }
}else if (strcmp(sw,"s")==0){
         char t [6] [15] = {"scanf(\"","%","[^\\n]\"",",",");","getchar();"};
         char var [2000];
	 char mem [2000];

 while(1){
 printf("//Enter the name of variable m for main.\n");
 printf("//");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 if(strcmp(var,"m")==0){
 break;}
 printf("//Enter memory allocated to variable -1 byte.\n"); 
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n",t[0],t[1],mem,t[2],t[3],var,t[4]);
 printf("%s\n\n",t[5]);
 }
}else if (strcmp(sw, "sb")==0){
         char t [5] [15] = {"scanf(\"","%","s\"",", ", ");"};
         char var [2000];
         char mem [2000];
   
 while(1){
 printf("//Enter the name of variable m for main.\n");
 printf("//");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 if(strcmp(var,"m")==0){
 break;}
 printf("//Enter memory allocated to variable -1 byte.\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n\n",t[0],t[1],mem,t[2],t[3],var,t[4]);
 }
}else if (strcmp(sw, "i")==0){
 char f  [4] [15] = {"if(strcmp(",   ",",  "\"", ")==0){"};
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
 printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2],  value, f[2],  f[3] );
      }
}else if (strcmp(sw, "e")==0){
    char f  [4] [18] = {"}else if(strcmp(",   ",",  "\"", ")==0){"};
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
 printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2],  value, f[2],  f[3] );
     }
}else if (strcmp(sw, "in")==0){
       char t [10] [20] = {"if(", "}else if(","strlen"," <= ", " == "," >= "," != ","(",")","){"};
       char select [1000];
       char var [2000];
       char op [1000];
       char num [1000];
 while(1){
 printf("//Enter s for strlen  or i for regular if statement. Enter e for else if.\n");
 printf("//");
 fgets(select,1000,stdin);
 select[strcspn(select,"\n")]=0;
 if(strcmp(select,"s")!=0 && strcmp(select,"i")!=0 && strcmp(select,"e")!=0){ 
 printf("//Enter s or i or e only.\n");
 continue;}
 printf("//Enter the name of if or else if statement  enter m for main.\n");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 if(strcmp(var,"m")==0){
 break;} 
 printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
 printf("//");
 fgets(op,1000,stdin);
 op[strcspn(op,"\n")]=0;
 if(strcmp(op,"a")!=0 && strcmp(op,"b")!=0 && strcmp(op,"c")!=0 && strcmp(op,"d")!=0){
 printf("//Enter a or b or c or d only.\n");
 printf("//Start over.\n");
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
 }
}else if (strcmp(sw, "im")==0){
      char t [9] [20] = {"if(*", "}else if(*"," <= ", " == "," >= "," != ","(",")","){"};
       char select [1000];
       char var [2000];
       char op [1000];
       char num [1000];
 while(1){
 printf("//Enter i for if statement. Enter e for else if.\n");
 printf("//");
 fgets(select,1000,stdin);
 select[strcspn(select,"\n")]=0;
 if(strcmp(select,"i")!=0 && strcmp(select,"e")!=0){  
 printf("//Enter i or e only.\n");
 continue;}
 printf("//Enter the name of if or else if statement  enter m for main.\n");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 if(strcmp(var,"m")==0){
 break;} 
 printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
 printf("//");
 fgets(op,1000,stdin);
 op[strcspn(op,"\n")]=0;
 if(strcmp(op,"a")!=0 && strcmp(op,"b")!=0 && strcmp(op,"c")!=0 && strcmp(op,"d")!=0){
 printf("//Enter a or b or c or d only.\n");
 printf("//Start over.\n");
 continue;}
 if(strcmp(op,"a")==0){
  strcpy(op,t[2]);
}else if(strcmp(op,"b")==0){
  strcpy(op,t[3]);
}else if(strcmp(op,"c")==0){
 strcpy(op,t[4]);
}else if(strcmp(op,"d")==0){
 strcpy(op,t[5]);}
 printf("//Enter a number to compare to.\n");
 printf("//");
 fgets(num,1000,stdin);
 num[strcspn(num,"\n")]=0;
  if(strcmp(select,"i")==0){
  printf("\n%s%s%s%s%s\n\n",t[0],var,op,num,t[8]);
 }else if(strcmp(select,"e")==0){
  printf("\n%s%s%s%s%s\n\n",t[1],var,op,num,t[8]);
    }
 }
}else if (strcmp(sw, "v")==0){
     char f  [3] [15] = {"char "," [","];"};
     char name [2000];
     char mem [2000];
    	
 while (1){
 printf("//Enter name of variable m for main.\n");
 printf("//"); 
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(name,"m")==0){
 break;}
 printf("//Enter the memory to be allocated to the variable.\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("\n%s%s%s%s%s\n\n",f[0],name,f[1],mem,f[2]);
    }
}else if (strcmp(sw, "vv")==0){
        char v [6] [15] ={"char ","[","]"," = ","\"",";"};
       char name [2000];
       char mem [2000];
       char value [2000];
 while(1){
 printf("//Enter a name of variable m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
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
 printf("\n%s%s%s%s%s%s%s%s%s%s\n\n",t[0],name,t[1],ne,t[2],t[1],m,t[3],elements,t[4]);
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
 printf("//Enter parameters.\n");
 printf("//");
 fgets(per,2000,stdin);
 per[strcspn(per,"\n")]=0;
 printf("\n%s%s%s%s%s\n\n\n%s\n\n",t[0],name,t[1],per,t[2],t[3]); 
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
 printf("//Enter values for parameters.\n");
 printf("//");
 fgets(per,2000,stdin);
 per[strcspn(per,"\n")]=0;
 printf("\n%s%s%s%s\n\n",name,t[0],per,t[1]);
 }
}else if (strcmp(sw,"h")==0){
	char t [9] [18] = {"char"," *",";"," = (char*)malloc","(",");","* sizeof(char));","free"," = NULL;"};
        char name [2000];
	char mem [2000];
	
 while(1){
 printf("//Enter the name of the variable m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
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
 }
}else if (strcmp(sw,"hi")==0){
	char t [15] [20] = {"int"," *",";"," = (int*)malloc","(",");","* sizeof(int));","free"," = NULL;","double","float", " = (double*)malloc"," = (float*)malloc","* sizeof(double));","* sizeof(float));"};
        char name [2000];
	char mem [2000];
	
 while(1){
 printf("//Enter the name of the variable m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
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
 }
}else if (strcmp(sw,"cm")==0){
 char t [6] [18] = {"if("," == NULL){","printf(\"", "\\n","\");","exit(1);}"};
               char name [2000];
	       char em [2000];
 while(1){
 printf("//Enter the name m for main.\n");
 printf("//"); 
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 break;}
 printf("//Enter an error message.\n");
 printf("//");
 fgets(em,2000,stdin);
 em[strcspn(em,"\n")]=0;
 printf("\n%s%s%s\n",t[0],name,t[1]);
 printf("%s%s%s%s\n",t[2],em,t[3],t[4]);
 printf("%s\n\n",t[5]);
 }
}else if (strcmp(sw,"vi")==0){
        char t [5] [15] = {"double ","int "," = ", ";", " ;"};
        char ch [2000];
        char name [2000];
        char value [2000];
 while(1){
 printf("//Choose i for int d for double, m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i or d or m only.\n");
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
}
}else if (strcmp(sw, "vn")==0){
        char t [3] [15] = {"double ","int ", ";"};
        char ch [2000];
        char name [2000];
 while(1){
 printf("//Choose i for int d for double, m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i or d or m only.\n");
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
}
}else if (strcmp(sw, "si")==0){
       char t [6] [15] = {"scanf(\"", "\%d\"",  "\%lf\"", ","," &", ");"};
       char ch [2000];
       char name [2000];
 while(1){
 printf("//Choose i for int d for double or m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i or d or m only.\n");
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
}
}else if (strcmp(sw,"sh")==0){
      char t [6] [15] = {"scanf(\"", "\%d\"",  "\%lf\"", ",",");","\%f\"",};
       char ch [2000];
       char name [2000];
 while(1){
 printf("//Choose i for int f for float or d for double or m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "f")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i, f, d  or m only.\n");
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
}
}else if (strcmp(sw, "sc")==0){
       char t [7] [15] = {"if(scanf(\"", "\%d\"",  "\%lf\"", ","," &", ")!=1){","while(scanf(\""};
       char ch [2000];
       char name [2000];
 while(1){
 printf("//Choose i for int d for double or m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i or d or m only.\n");
 continue;}
 printf("//Enter the name of variable.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(ch,"i")==0){
 printf("\n%s%s%s%s%s%s\n\n",t[0],t[1],t[3],t[4],name,t[5]);
 printf("\n%s%s%s%s%s%s\n\n",t[6],t[1],t[3],t[4],name,t[5]);
}else if (strcmp(ch,"d")==0){
 printf("\n%s%s%s%s%s%s\n\n",t[0],t[2],t[3],t[4],name,t[5]);
 printf("\n%s%s%s%s%s%s\n\n",t[6],t[2],t[3],t[4],name,t[5]);}
 printf("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n");
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
 char text [2000];
 printf("#Enter your string, m for main.\n");
 while (1){
 printf("#");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 break;}
 printf("\n%s%s%s\n\n",string[0],text,string[1]);
 }
}else if (strcmp(sw, "bp")==0){
 char string  [2] [15] = {"print(\"", "\")"};
 char text [2000];
 printf("#Enter your string, m for main.\n");
 while (1){
 printf("#");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 break;}
 printf("\n%s%s%s\n\n",string[0],text,string[1]);
 }    
}else if (strcmp(sw, "cp")==0){
  char string  [2] [15] = {"print('''",  "''')"};
 char text [2000];
 printf("#Enter your string, m for main.\n");
 while (1){
 printf("#");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 break;}
 printf("\n%s%s%s\n\n",string[0],text,string[1]);
 }
}else if (strcmp(sw, "x")==0){
 break;
}else if (strcmp(sw, "cl")==0){
     char f  [9] [24] = {"class ",":", "    def __init__(self," ,"):","self.","="," ","        "};
     char text  [2000];
     char te [2000];
     char v [2000]; char v1 [2000]; char v2 [2000]; char v3 [2000]; char v4[2000]; char v5[2000]; char v6 [2000]; char v7 [2000];
	
 while (1){
 printf("#Enter a class, m for main. ");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 break;}
 printf("#List attributes with a comma separating each one.\n");
 printf("#");
 fgets(te,2000,stdin);
 te[strcspn(te,"\n")]=0;
 printf("#Assign values. Press enter after each one.\n");
 printf("#");
 fgets(v,2000,stdin);
 v[strcspn(v,"\n")]=0;
 printf("#");
 fgets(v1,2000,stdin);
 v1[strcspn(v1,"\n")]=0;
 printf("#");
 fgets(v2,2000,stdin);
 v2[strcspn(v2,"\n")]=0;
 printf("#");
 fgets(v3,2000,stdin);
 v3[strcspn(v3,"\n")]=0;
 printf("#");
 fgets(v4,2000,stdin);
 v4[strcspn(v4,"\n")]=0;
 printf("#");
 fgets(v5,2000,stdin);
 v5[strcspn(v5,"\n")]=0;
 printf("#");
 fgets(v6,2000,stdin);
 v6[strcspn(v6,"\n")]=0;
 printf("#");
 fgets(v7,2000,stdin);
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
 }
}else if (strcmp(sw, "ip")==0){
char f [5] [12] = {"if ", " == ", ":","    print(\"", "\")"};
 char text [2000];
 char te [2000];
 char ts [2000];
 char t [2000];
 while (1){
 printf("#Enter name of if statement, m for main. ");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
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
      }
}else if (strcmp(sw, "ep")==0){      
char f [5] [12] = {"elif ", " == ", ":","    print(\"", "\")"};
 char text [2000];
 char te [2000];
 char ts [2000];
 char t [2000];
 while (1){
 printf("#Enter name of elif statement, m for main. ");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
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
      } 
}else if (strcmp(sw, "vp")==0){
    char f [4] [12] = {" = ","\"","input(\""," \")"};
    char n [2000];
    char vs [2000];
    char v [2000];

 while (1){
 printf("#Enter a name for your variable, m for main.\n");
 printf("#");
 fgets(n,2000,stdin);
 n[strcspn(n,"\n")]=0;
 if (strcmp(n, "m")==0){
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






















































































































 

















	
 


	










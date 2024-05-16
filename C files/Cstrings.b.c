//Copyright 2023-2024 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <stdio.h>
#include <string.h>


            void choice();
            void strings();
            void stringsnl();
            void estrings();
            void fget();
            void fgetstrlen();
            void scanff();
            void scanfBasic();
            void ifStatement();
            void elseIf();
            void ifNum();
            void ifHeap();
            void variable();
            void varValue();
            void array();
            void func();
            void callFunc();
            void heap();
            void checkMalloc();
            void varInt();
            void varNoValue();
            void scanfNum();
            void scanfHeap();
            void checkScanf();
            void copy();
         
    

int main(){        
	char sw [250];         

 
 choice();
 while (1){
 printf("//Enter x to exit main m for main ch for choices.\n");
 printf("//");
 fgets(sw,250,stdin);
 sw[strcspn(sw,"\n")]=0;
 if (strcmp(sw, "a")==0){
     strings();
}else if (strcmp(sw,"b")==0){
     stringsnl();
}else if (strcmp(sw,"c")==0){
     estrings(); 
}else if (strcmp(sw, "f")==0){
     fget(); 
}else if (strcmp(sw,"fs")==0){
     fgetstrlen();
}else if (strcmp(sw,"s")==0){
     scanff(); 
}else if (strcmp(sw, "sb")==0){
     scanfBasic();
}else if (strcmp(sw, "i")==0){
     ifStatement(); 
}else if (strcmp(sw, "e")==0){
     elseIf(); 
}else if (strcmp(sw, "in")==0){
     ifNum();
}else if (strcmp(sw,"im")==0){
     ifHeap();
}else if (strcmp(sw, "v")==0){
     variable();
}else if (strcmp(sw, "vv")==0){
     varValue();
}else if (strcmp(sw,"aa")==0){
     array();
}else if (strcmp(sw, "fc")==0){
     func(); 
}else if (strcmp(sw, "cf")==0){
     callFunc();
}else if (strcmp(sw,"h")==0){
     heap();
}else if (strcmp(sw,"cm")==0){
     checkMalloc();
}else if (strcmp(sw,"vi")==0){
     varInt();
}else if (strcmp(sw, "vn")==0){
     varNoValue();
}else if (strcmp(sw, "si")==0){
     scanfNum();
}else if (strcmp(sw,"sh")==0){
     scanfHeap();
}else if (strcmp(sw, "sc")==0){
     checkScanf();
}else if (strcmp(sw, "cy")==0){
     copy();
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


void choice(){
 printf("//Enter ch for choices.\n");
 printf("//Enter a for strings b for strings for newline character.\n");
 printf("//Enter aa for arrays.\n");
 printf("//Enter c for strings with no quotation marks.\n");
 printf("//Enter cy for what's needed to copy and paste to finish a simple program.\n");
 printf("//Enter i for if statements e for else if for strings.\n");
 printf("//Enter in for if and else if statements for numbers.\n");
 printf("//Enter im for if and else if statements for numbers if malloc is used.\n");
 printf("//Enter f for fgets.\n");
 printf("//Enter fs for fgets with strlen to remove newline character.\n");
 printf("//Enter s for scanf for strings to allow for white spaces.\n");
 printf("//Enter sb for scanf basic no white spaces.\n");
 printf("//Enter si for scanf for integers and doubles.\n");
 printf("//Enter sh for scanf for ints and doubles on the heap.\n");
 printf("//Enter sc for check scanf.\n");
 printf("//Enter h to allocate memory on the heap.\n");
 printf("//Enter cm to check malloc.\n");
 printf("//Enter fc for void functions.\n");
 printf("//Enter cf to call functions.\n");
 printf("//Enter v for variables without assigning a value.\n");
 printf("//Enter vv for variables with assigning a string value.\n");
 printf("//Enter vi for int and double variables.\n");
 printf("//Enter vn for int and double variables with no value.\n");
 printf("//Enter m for main x to exit.\n");
 }


void strings(){
 char string  [2] [15] = {"printf(\"", "\");"};
    char text [2000];
    printf("//Enter your string, m to exit.\n");
    while (1){
    printf("//");
    fgets(text,2000,stdin);
    text[strcspn(text,"\n")]=0;
    if (strcmp(text,"m")==0){
    break;}
    printf("\n%s%s%s\n\n",string[0],text,string[1]);}       
}


void stringsnl(){
 char string  [3] [15] = {"printf(\"", "\\n","\");"};
    char text [2000];
    printf("//Enter your string, m for main.\n");
    while (1){
    printf("//");
    fgets(text,2000,stdin);
    text[strcspn(text,"\n")]=0;
    if (strcmp(text,"m")==0){
    break;}
    printf("\n%s%s%s%s\n\n",string[0],text,string[1], string[2]);}
}

         
void estrings(){
    char t [2] [12] = {"printf(", ");"};
    char text [2000];
    
 printf("//Enter text m for main.\n");   
 while(1){
 printf("//");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if(strcmp(text,"m")==0){
 break;}
 printf("\n%s%s%s\n\n",t[0],text,t[1]);}
}


void fget(){
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
 printf("%s%s%s%s%s%s\n\n", v, f[3], v, f[1], f[4] ,f[5]);}
}


void fgetstrlen(){
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
 printf("%s%s%s%s%s\n\n", v, f[3], v, f[4] ,f[5]);}
}


void scanff(){
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
 printf("%s\n\n",t[5]);}
}


void scanfBasic(){
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
 printf("\n%s%s%s%s%s%s%s\n\n",t[0],t[1],mem,t[2],t[3],var,t[4]);}
}


void ifStatement(){
char f  [4] [15] = {"if(strcmp(",   ",",  "\"", ")==0){"};
     char name [2000];
     char value [2000];
     char swit [2000];	
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
 printf("//Enter e to switch to else if b for strings m for main. Enter to repeat.\n");
 fgets(swit,2000,stdin);
 swit[strcspn(swit,"\n")]=0; 
 if(strcmp(swit,"e")==0){
	 elseIf();
         break;}
 else if(strcmp(swit,"b")==0){
        stringsnl();
	break;}
 else if(strcmp(swit,"m")==0){
       break;}
      }
} 


void elseIf(){
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
 printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2],  value, f[2],  f[3] );}
}


void ifNum(){
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
 while(fgets(op,1000,stdin)){
       op[strcspn(op,"\n")]=0;
 if(strcmp(op,"a")!=0 && strcmp(op,"b")!=0 && strcmp(op,"c")!=0 && strcmp(op,"d")!=0){
 printf("//Enter a or b or c or d only.\n");}
 else{
      break;}
 }
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
  printf("\n%s%s%s%s%s\n\n",t[1],var,op,num,t[9]);}
    }
}
 

void ifHeap(){
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
 while(fgets(op,1000,stdin)){
       op[strcspn(op,"\n")]=0;
 if(strcmp(op,"a")!=0 && strcmp(op,"b")!=0 && strcmp(op,"c")!=0 && strcmp(op,"d")!=0){
 printf("//Enter a or b or c or d only.\n");}
 else{
      break;}
 }
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
  printf("\n%s%s%s%s%s\n\n",t[1],var,op,num,t[8]);}
    }
}


void variable(){
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
 printf("\n%s%s%s%s%s\n\n",f[0],name,f[1],mem,f[2]);}
}


void varValue(){
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
 printf("\n%s%s%s%s%s%s%s%s%s%s\n\n",v[0],name,v[1],mem,v[2],v[3],v[4],value,v[4],v[5]);}
 }


void array(){
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
 printf("\n%s%s%s%s%s%s%s%s%s%s\n\n",t[0],name,t[1],ne,t[2],t[1],m,t[3],elements,t[4]);}
 }


void func(){
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
 printf("\n%s%s%s%s%s\n\n\n%s\n\n",t[0],name,t[1],per,t[2],t[3]);} 
}


void callFunc(){
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
 printf("\n%s%s%s%s\n\n",name,t[0],per,t[1]);}
}
 

void heap(){
	char t [9] [18] = {"char"," *",";"," = (char*)malloc","(",");","* sizeof(char));","free"," = NULL;"};
        char ch [6] [18] = {"if("," == NULL){","    printf(\"", "\\n","\");","    exit(1);}"};
	char i [15] [20] = {"int"," *",";"," = (int*)malloc","(",");","* sizeof(int));","free"," = NULL;","double","float", " = (double*)malloc"," = (float*)malloc","* sizeof(double));","* sizeof(float));"};

        char name [2000];
	char mem [2000];
	char check [2000];
        char na [2000];
	char em [2000];	
	char swit [2000];
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
 printf("//Enter c to check malloc with error message.\n");
 printf("//"); 
 printf("\n");
 printf("\n%s%s%s%s\n\n",t[0],t[1],name,t[2]);
 printf("%s%s%s%s\n\n",i[0],i[1],name,i[2]);
 printf("%s%s%s%s\n\n",i[9],i[1],name,i[2]);
 printf("%s%s%s%s\n\n",i[10],i[1],name,i[2]);
 printf("%s%s%s%s%s\n\n",name,t[3],t[4],mem,t[6]);
 printf("%s%s%s%s%s\n\n",name,i[3],i[4],mem,i[6]);
 printf("%s%s%s%s%s\n\n",name,i[11],i[4],mem,i[13]);
 printf("%s%s%s%s%s\n\n",name,i[12],i[4],mem,i[14]);
 printf("%s%s%s%s\n",i[7],i[4],name,i[5]);
 printf("%s%s\n\n",name,i[8]);
 printf("\n");
 printf("//Enter c to check malloc m for main. Enter to repeat.\n");
 fgets(swit,2000,stdin);
 swit[strcspn(swit,"\n")]=0; 
 if(strcmp(swit,"c")==0){
         checkMalloc();	
         break;}
 else if(strcmp(swit,"m")==0){
	break;}
        }
}


void checkMalloc(){
 char t [6] [18] = {"if("," == NULL){","    printf(\"", "\\n","\");","    exit(1);}"};
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
 printf("%s\n\n",t[5]);}
 }


void varInt(){
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
 printf("\n%s%s%s%s%s\n\n",t[0],name,t[2],value,t[3]);}
       }
}


void varNoValue(){
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
 printf("\n%s%s%s\n\n",t[0],name,t[2]);}
      }
}


void scanfNum(){
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
 printf("\n%s%s%s%s%s%s\n\n",t[0],t[2],t[3],t[4],name,t[5]);}
       }
}


void scanfHeap(){
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
 printf("\n%s%s%s%s%s\n\n",t[0],t[5],t[3],name,t[4]);} 
    }
}


void checkScanf(){
       char t [7] [15] = {"if(scanf(\"", "\%d\"",  "\%lf\"", ","," &", ")!=1){","while(scanf(\""};
       char ch [2000];
       char name [2000];
       char swit [2000];
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
 printf("\n%s%s%s%s%s    //Use with malloc.\n\n",t[0],t[1],t[3],name,t[5]); 
 printf("\n%s%s%s%s%s%s\n\n",t[6],t[1],t[3],t[4],name,t[5]);
 printf("\n%s%s%s%s%s    //Use with malloc.\n\n",t[6],t[1],t[3],name,t[5]);
}else if (strcmp(ch,"d")==0){
 printf("\n%s%s%s%s%s%s\n\n",t[0],t[2],t[3],t[4],name,t[5]);
 printf("\n%s%s%s%s%s    //Use with malloc.\n\n",t[0],t[2],t[3],name,t[5]);
 printf("\n%s%s%s%s%s%s\n\n",t[6],t[2],t[3],t[4],name,t[5]);
 printf("\n%s%s%s%s%s    //Use with malloc.\n\n",t[6],t[2],t[3],name,t[5]);} 
 printf("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n");
 printf("//Enter b to switch strings m for main. Enter to repeat.\n");
 fgets(swit,2000,stdin);
 swit[strcspn(swit,"\n")]=0; 
 if(strcmp(swit,"b")==0){
	 stringsnl();
         break;}
 else if(strcmp(swit,"m")==0){
	break;}
	}
}


void copy(){
 char cpy [5];
 while (1){
 printf("\n");
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
}


















































































 

















	
 


	










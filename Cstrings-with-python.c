//Copyright 2023 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <stdio.h>
#include <string.h>


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
 printf("//Enter si for scanf for intagers and floats.\n");
 printf("//Enter h to allocate memory from the heap.\n");
 printf("//Enter fc for void functions.\n");
 printf("//Enter cf to call functions.\n");
 printf("//Enter v for variables without assigning a value.\n");
 printf("//Enter vv for variables with assigning a string value.\n");
 printf("//Enter vi for int and double variables.\n");
 printf("//Enter vn for int and double variables with no value.\n");
 printf("//For Python strings enter ap for one bp for two cp for three quotes. Enter x to exit.\n");
 printf("//Enter cl for classes. Enter ip for if statements. Enter ep for elif.\n");
 printf("//Enter Python vp for variables and user input option.\n");
 printf("//Enter m to go to main menu to select another choice.\n");  
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
    printf("//Enter your string, m for main.\n");
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
    
 printf("//Enter text m for main.\n");   
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
 printf("%s%s%s%s%s%s\n",f[0], v, f[1],me,f[1],f[2]);
 printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4] ,f[5]);
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
 printf("%s%s%s%s%s%s\n",f[0], v, f[1],me,f[1],f[2]);
 printf("%s%s%s%s%s\n", v, f[3], v, f[4] ,f[5]);
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
 printf("%s%s%s%s%s%s%s\n",t[0],t[1],mem,t[2],t[3],var,t[4]);
 printf("%s\n",t[5]);
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
 printf("%s%s%s%s%s%s%s\n",t[0],t[1],mem,t[2],t[3],var,t[4]);
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
 printf("%s%s%s%s%s\n",f[0],name,f[1],mem,f[2]);
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
 printf("//Enter parameters.\n");
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
 printf("//Enter values for parameters.\n");
 printf("//");
 fgets(per,2000,stdin);
 per[strcspn(per,"\n")]=0;
 printf("%s%s%s%s\n",name,t[0],per,t[1]);
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
 printf("%s%s%s%s\n\n",t[0],t[1],name,t[2]);
 printf("%s%s%s%s%s\n\n",name,t[3],t[4],mem,t[5]);
 printf("%s%s%s%s%s\n\n",name,t[3],t[4],mem,t[6]);
 printf("%s%s%s%s\n\n",t[7],t[4],name,t[5]);
 printf("%s%s\n\n",name,t[8]);
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
 printf("%s%s%s\n",string[0],text,string[1]);
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
 printf("%s%s%s\n",string[0],text,string[1]);
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
 printf("%s%s%s\n",string[0],text,string[1]);
 }
}else if (strcmp(sw, "x")==0){
 break;
}else if (strcmp(sw, "cl")==0){
     char f  [9] [24] = {"class ",":", "    def __init__(self," ,"):","self.","="," ","        "};
     char text  [2000];
     char te [2000];
     char v [2000]; char v1 [2000]; char v2 [2000]; char v3 [2000]; char v4[2000]; char v5[2000]; char v6 [2000]; char v7 [2000];
	
 while (1){
 printf("#Enter a class m for main. ");
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
 printf("%s%s%s\n",f[0],text,f[1]);
 printf("%s%s%s\n",f[2], te, f[3]);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v,f[6],f[5],f[6],v);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v1,f[6],f[5],f[6],v1);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v2,f[6],f[5],f[6],v2);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v3,f[6],f[5],f[6],v3);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v4,f[6],f[5],f[6],v4);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v5,f[6],f[5],f[6],v5);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v6,f[6],f[5],f[6],v6);
 printf("%s%s%s%s%s%s%s\n",f[7],f[4],v7,f[6],f[5],f[6],v7);
 }
}else if (strcmp(sw, "ip")==0){
char f [5] [12] = {"if ", " == ", ":","    print(\"", "\")"};
 char text [2000];
 char te [2000];
 char ts [2000];
 char t [2000];
 while (1){
 printf("#Enter name of if statement m for main. ");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 break;}
 printf("#Enter a value. Add quotes if its a string. ");
 fgets(te,2000,stdin);
 te[strcspn(te,"\n")]=0;
 printf("#Enter s to make the next line a string with print function. Enter for other. ");
 fgets(ts,2000,stdin);
 ts[strcspn(ts,"\n")]=0;
 printf("#Enter the second line. ");
 fgets(t,2000,stdin);
 t[strcspn(t,"\n")]=0;
 printf("%s%s%s%s%s\n",f[0],text,f[1],te,f[2]);
 if (strcmp(ts,"s")==0){
 printf("%s%s%s\n",f[3],t,f[4]);
}else{
      printf("    %s\n",t);
           }
      }
}else if (strcmp(sw, "ep")==0){      
char f [5] [12] = {"elif ", " == ", ":","    print(\"", "\")"};
 char text [2000];
 char te [2000];
 char ts [2000];
 char t [2000];
 while (1){
 printf("#Enter name of elif statement m for main. ");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if (strcmp(text,"m")==0){
 break;}
 printf("#Enter a value. Add quotes if its a string. ");
 fgets(te,2000,stdin);
 te[strcspn(te,"\n")]=0;
 printf("#Enter s to make the next line a string with print function. Enter for other. ");
 fgets(ts,2000,stdin);
 ts[strcspn(ts,"\n")]=0;
 printf("#Enter the second line. ");
 fgets(t,2000,stdin);
 t[strcspn(t,"\n")]=0;
 printf("%s%s%s%s%s\n",f[0],text,f[1],te,f[2]);
 if (strcmp(ts,"s")==0){
 printf("%s%s%s\n",f[3],t,f[4]);
}else{
      printf("    %s\n",t);
           }
      } 
}else if (strcmp(sw, "vp")==0){
    char f [4] [12] = {" = ","\"","input(\""," \")"};
    char n [2000];
    char vs [2000];
    char v [2000];

 while (1){
 printf("#Enter a name for your variable.\n");
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
 printf("%s%s%s%s%s\n",n,f[0],f[1],v,f[1]);
}else if (strcmp(vs,"i")==0){
 printf("%s%s%s%s%s\n",n,f[0],f[2],v,f[3]);                                                   
}else{
     printf("%s%s%s\n",n,f[0],v);
           }
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
 printf("%s%s%s%s%s\n",t[1],name,t[2],value,t[3]); 
}else if(strcmp(ch,"d")==0){
 printf("%s%s%s%s%s\n",t[0],name,t[2],value,t[3]);
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
 printf("%s%s%s\n",t[1],name,t[2]); 
}else if(strcmp(ch,"d")==0){
 printf("%s%s%s\n",t[0],name,t[2]);
      }
}
}else if (strcmp(sw, "si")==0){
       char t [6] [15] = {"scanf(\"", "\%d\"",  "\%lf\"", ","," &", ");"};
       char ch [2000];
       char name [2000];
 while(1){
 printf("//Choose i for int f for float or double m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "f")!=0){
 printf("Choose i or d or m only.\n");
 continue;}
 printf("//Enter the name of variable.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(ch,"i")==0){
 printf("%s%s%s%s%s%s\n",t[0],t[1],t[3],t[4],name,t[5]);
}else if (strcmp(ch,"f")==0){
 printf("%s%s%s%s%s%s\n",t[0],t[2],t[3],t[4],name,t[5]);
       }
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
     








































































































































































 

















	
 


	










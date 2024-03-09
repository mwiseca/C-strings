//Copyright 2023-2024 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <iostream>
#include <string>


void choice(){
 using namespace std;
 cout << "//Enter ch for choices.\n";
 cout << "//Enter a for strings b for strings for newline character.\n";
 cout << "//Enter aa for arrays.\n";
 cout << "//Enter c for strings with no quotation marks.\n";
 cout << "//Enter cy for what's needed to copy and paste to finish a simple program.\n";
 cout << "//Enter i for if statements e for else if for strings.\n";
 cout << "//Enter in for if and else if statements for numbers.\n";
 cout << "//Enter im for if and else if statements for numbers if malloc is used.\n";
 cout << "//Enter f for fgets.\n";
 cout << "//Enter fs for fgets with strlen to remove newline character.\n";
 cout << "//Enter s for scanf for strings to allow for white spaces.\n";
 cout << "//Enter sb for scanf basic no white spaces.\n";
 cout << "//Enter si for scanf for integers and doubles.\n";
 cout << "//Enter sh for scanf for ints and doubles on the heap.\n";
 cout << "//Enter sc for check scanf.\n";
 cout << "//Enter h to allocate memory on the heap.\n";
 cout << "//Enter hi to allocate int double or float memory on the heap.\n";
 cout << "//Enter cm to check malloc.\n";
 cout << "//Enter fc for void functions.\n";
 cout << "//Enter cf to call functions.\n";
 cout << "//Enter v for variables without assigning a value.\n";
 cout << "//Enter vv for variables with assigning a string value.\n";
 cout << "//Enter vi for int and double variables.\n";
 cout << "//Enter vn for int and double variables with no value.\n";
 cout << "//Enter m for main x to exit.\n";
 }


int main(){        
	std::string sw;         

 
 choice();
 while (true){
 std::cout << "//Enter x to exit main m for main ch for choices.\n";
 printf("//");
 getline(std::cin,sw);
 if(sw == "a"){
    std::string  string  [2] = {"printf(\"", "\");"};
    std::string text;
    std::cout <<"//Enter your string, m to exit.\n";
    while (true){
    std::cout << "//";
    getline(std::cin,text);
    if(text == "m"){
    break;}
    std::cout << "\n" << string[0] << text << string[1] << "\n\n";
       }
}else if(sw == "b"){
 std::string string  [3] = {"printf(\"", "\\n","\");"};
    std::string text;
    std::cout << "//Enter your string, m for main.\n";
    while (true){
    std::cout << "//";
    getline(std::cin,text);
    if(text == "m"){
    break;}
    std::cout << "\n" << string[0] <<text << string[1] << string[2] << "\n\n";
         }
}else if(sw == "c"){
    std::string t [2] = {"printf(", ");"};
    std::string text;
    
 std::cout << "//Enter text m for main.\n";   
 while(true){
 std::cout << "//";
 getline(std::cin,text);
 if(text == "m"){
 break;}
 std::cout << "\n" << t[0] << text << t[1] << "\n\n";
 }
}else if(sw == "f"){
      std::string f  [6] = {"fgets(", ",", "stdin);", "[strcspn(","\"\\n", "\")]=0;"};
      std::string v;
      std::string me;

 while (true){
 std::cout << "//Enter name of variable m for main.\n";
 std::cout << "//"; 
 getline(std::cin,v);
 if(v == "m"){
 break;}
 std::cout << "//Enter the memory to be allocated to the variable.\n";
 std::cout << "//";
 getline(std::cin,me);
 std::cout << "\n" << f[0] << v << f[1] << me << f[1] << f[2] << "\n";
 std::cout << v << f[3] << v << f[1] << f[4] << f[5] << "\n\n";
     }
}else if(sw == "fs"){
     std::string f  [6] = {"fgets(", ",", "stdin);", "[strlen(",")-1] = '\\0';"};
     std::string v;
     std::string  me;
	
 while (true){
 std::cout << "//Enter name of variable m for main.\n";
 std::cout << "//"; 
 getline(std::cin,v);
 if(v == "m"){
 break;}
 std::cout << "//Enter the memory to be allocated to the variable.\n";
 std::cout << "//";
 getline(std::cin,me);
 std::cout << "\n" << f[0] <<  v << f[1] << me << f[1] << f[2] << "\n";
 std::cout << v << f[3] << v << f[4] << f[5] << "\n\n";
 }
}else if(sw == "s"){
	 std::string t [6]  = {"scanf(\"","%","[^\\n]\"",",",");","getchar();"};
	 std::string var;
	 std::string mem;

 while(true){
 std::cout << "//Enter the name of variable m for main.\n";
 std::cout << "//";
 getline(std::cin,var);
 if(var == "m"){
 break;}
 std::cout << "//Enter memory allocated to variable -1 byte.\n"; 
 std::cout << "//";
 getline(std::cin,mem);
 std::cout << "\n" << t[0] << t[1] << mem << t[2] << t[3] << var << t[4] << "\n";
 std::cout << t[5] << "\n\n";
 }
}else if(sw == "sb"){
	 std::string t [5] = {"scanf(\"","%","s\"",", ", ");"};
	 std::string var;
	 std::string mem;
   
 while(true){
 std::cout << "//Enter the name of variable m for main.\n";
 std::cout << "//";
 getline(std::cin,var);
 if(var == "m"){
 break;}
 std::cout << "//Enter memory allocated to variable -1 byte.\n";
 std::cout << "//";
 getline(std::cin,mem);
 std::cout << "\n" << t[0] << t[1] << mem << t[2] << t[3] << var << t[4] << "\n\n";
 }
}else if(sw == "i"){
 std::string f  [4] = {"if (strcmp(",   ",",  "\"", ")==0){"};
     std::string name;
     std::string value;
	
 while (true){
 std::cout << "//Enter name of the if statement m for main.\n";
 std::cout << "//"; 
 getline(std::cin,name);
 if(name == "m"){
 break;}
 std::cout << "//Enter the value.\n";
 std::cout << "//";
 getline(std::cin,value);
 std::cout << "\n" << f[0] << name << f[1] << f[2] <<  value << f[2] << f[3] << "\n\n";
      }
}else if(sw == "e"){
     std::string f  [4] = {"}else if (strcmp(",   ",",  "\"", ")==0){"};
     std::string name;
     std::string value;

 while(true){
 std::cout << "//Enter name of the else if statement m for main.\n";
 std::cout << "//"; 
 getline(std::cin,name);
 if(name == "m"){
 break;}
 std::cout << "//Enter the value.\n";
 std::cout << "//";
 getline(std::cin,value);
 std::cout << "\n" << f[0] <<  name << f[1] << f[2] << value << f[2] << f[3] << "\n\n";
     }
}else if(sw == "in"){
	std::string t [10]  = {"if(", "}else if(","strlen"," <= ", " == "," >= "," != ","(",")","){"};
	std::string select;
        std::string var;
	std::string op;
        std::string num ;
 while(true){
 std::cout << "//Enter s for strlen  or i for regular if statement. Enter e for else if.\n";
 std::cout << "//";
 getline(std::cin,select);
 if(select != "s" && select != "i" && select != "e"){ 
 std::cout << "//Enter s or i or e only.\n";
 continue;}
 std::cout << "//Enter the name of if or else if statement  enter m for main.\n";
 getline(std::cin,var);
 if(var == "m"){
 break;} 
 std::cout << "//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n";
 std::cout << "//";
 getline(std::cin,op);
 if(op != "a"  && op != "b" && op != "c" && op != "d"){
 std::cout << "//Enter a or b or c or d only.\n";
 std::cout << "//Start over.\n";
 continue;}
 if(op == "a"){
   op = t[3];
}else if(op == "b"){
   op = t[4];
}else if(op == "c"){
   op = t[5]; 
}else if(op == "d"){
    op = t[6];} 
 std::cout << "//Enter a number to compare to.\n";
 std::cout << "//";
 getline(std::cin,num);
 if(select == "s"){
  std::cout << "\n" << t[0] << t[2] << t[7] << var << t[8] << op << num << t[9] << "\n\n";
 }else if(select == "i"){
  std::cout << "\n" << t[0] << var << op << num << t[9] << "\n\n";
 }else if(select == "e"){
  std::cout << "\n" << t[1] << var << op << num << t[9] << "\n\n";
    }
 }
}else if(sw == "im"){
      std::string t [9] = {"if(*", "}else if(*"," <= ", " == "," >= "," != ","(",")","){"};
       std::string select;
       std::string var;
       std::string op;
       std::string num;
 while(true){
 std::cout << "//Enter i for if statement. Enter e for else if.\n";
 std::cout << "//";
 getline(std::cin,select);
 if(select != "i" && select != "e"){  
 std::cout << "//Enter i or e only.\n";
 continue;}
 std::cout << "//Enter the name of if or else if statement  enter m for main.\n";
 getline(std::cin,var);
 if(var == "m"){
 break;} 
 std::cout << "//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n";
 std::cout << "//";
 getline(std::cin,op);
 if(op != "a" && op != "b" && op!= "c" && op != "d"){
 std::cout << "//Enter a or b or c or d only.\n";
 std::cout << "//Start over.\n";
 continue;}
 if(op == "a"){
   op = t[2];
}else if(op == "b"){
   op = t[3];
}else if(op == "c"){
   op = t[4];
}else if(op == "d"){
   op = t[5];}
   std::cout << "//Enter a number to compare to.\n";
   std::cout << "//";
 getline(std::cin,num);
  if(select == "i"){
  std::cout << "\n" << t[0] << var << op << num << t[8] << "\n\n";
 }else if(select == "e"){
  std::cout << "\n" << t[1] << var << op << num << t[8] << "\n\n";
    }
 }
}else if(sw == "v"){
     std::string f  [3] = {"char "," [","];"};
     std::string name;
     std::string mem;
    	
 while (true){
 std::cout << "//Enter name of variable m for main.\n";
 std::cout << "//"; 
 getline(std::cin,name);
 if(name == "m"){
 break;}
 std::cout << "//Enter the memory to be allocated to the variable.\n";
 std::cout << "//";
 getline(std::cin,mem);
 std::cout << "\n" << f[0] << name << f[1] << mem << f[2] << "\n\n";
    }
}else if(sw == "vv"){
       std::string v [6] ={"char ","[","]"," = ","\"",";"};
       std::string name;
       std::string mem;
       std::string value;
 while(true){
 std::cout << "//Enter a name of variable m for main.\n";
 std::cout  << "//";
 getline(std::cin,name);
 if(name == "m"){
 break;}
 std::cout << "//Enter the amount of memory to allocate or press enter to not allocate m for main.\n";
 std::cout << "//";
 getline(std::cin,mem);
 std::cout << "//enter a value\n";
 std::cout << "//";
 getline(std::cin,value);
 std::cout << "\n" << v[0] << name << v[1] << mem << v[2] << v[3] << v[4] << value << v[4] << v[5] << "\n\n";
 }
}else if(sw == "aa"){
	std::string t [5] = {"char "," [","] ", "] = {","};"};
        std::string name;
	std::string ne;
	std::string m;
	std::string elements;
 while(true){
 std::cout << "//Enter the name of array m for main.\n";
 std::cout << "//";
 getline(std::cin,name);
 if(name == "m"){
 break;}
 std::cout << "//Enter the amount of elements.\n";
 std::cout << "//";
 getline(std::cin,ne);
 std::cout << "//Enter memory allocated to elements.\n";
 std::cout << "//";
 getline(std::cin,m);
 std::cout << "//Enter elements with quotations and commas between each.\n";
 std::cout << "//";
 getline(std::cin,elements);
 std::cout << "\n" << t[0] << name << t[1] << ne << t[2] << t[1] << m << t[3] << elements << t[4] << "\n\n";
 }
}else if(sw == "fc"){
      std::string t [4] = {"void ","(","){","}"};
      std::string name;
      std::string per;
 
 while(true){
 std::cout << "//Name function m for main.\n";
 std::cout << "//";
 getline(std::cin,name); 
 if(name == "m"){
 break;}
 std::cout << "//Enter parameters.\n";
 std::cout << "//";
 getline(std::cin,per);
 std::cout << "\n" << t[0] << name << t[1] << per << t[2] << "\n\n\n" << t[3] << "\n\n"; 
 }
}else if(sw == "cf"){
      std::string t [2] = {"(",");"};
      std::string name;
      std::string per;
 while(true){
 std::cout << "//Enter the name of function m for main.\n";
 std::cout << "//";
 getline(std::cin,name);
 if(name == "m"){
 break;}
 std::cout << "//Enter values for parameters.\n";
 std::cout << "//";
 getline(std::cin,per);
 std::cout << "\n" << name << t[0] << per << t[1] << "\n\n";
 }
}else if(sw == "h"){
	std::string t [9] = {"char"," *",";"," = (char*)malloc","(",");","* sizeof(char));","free"," = NULL;"};
	std::string name;
	std::string mem;
	
 while(true){
 std::cout << "//Enter the name of the variable m for main.\n";
 std::cout << "//";
 getline(std::cin,name);
 if(name == "m"){
 break;}
 std::cout << "//Enter memory to allocate.\n";
 std::cout << "//";
 getline(std::cin,mem);
 std::cout << "\n";
 std::cout << "\n" << t[0] << t[1] << name << t[2] << "\n\n";
 std::cout << name << t[3] << t[4] << mem << t[5]<< "\n\n";
 std::cout << name << t[3] << t[4] << mem << t[6] << "\n\n";
 std::cout << t[7] << t[4] << name <<t[5] << "\n\n";
 std::cout << name << t[8] << "\n\n";
 }
}else if(sw == "hi"){
	std::string t [15] = {"int"," *",";"," = (int*)malloc","(",");","* sizeof(int));","free"," = NULL;","double","float", " = (double*)malloc"," = (float*)malloc","* sizeof(double));","* sizeof(float));"};
	std::string name;
	std::string mem;
	
 while(true){
 std::cout << "//Enter the name of the variable m for main.\n";
 std::cout << "//";
 getline(std::cin,name);
 if(name == "m"){
 break;}
 std::cout << "//Enter memory to allocate.\n";
 std::cout << "//";
 getline(std::cin,mem);
 std::cout << "\n";
 std::cout << t[0] << t[1] << name << t[2] << "\n\n";
 std::cout << t[9] << t[1] << name << t[2] << "\n\n";
 std::cout << t[10] << t[1] << name << t[2] << "\n\n";
 std::cout << name << t[3] << t[4] << mem << t[6] << "\n\n";
 std::cout << name << t[11] << t[4] << mem<< t[13] << "\n\n";
 std::cout << name << t[12] << t[4] << mem << t[14] << "\n\n";
 std::cout << t[7] << t[4] << name << t[5] << "\n\n";
 std::cout << name << t[8] << "\n\n";
 }
}else if(sw == "cm"){
 std::string t [6] = {"if("," == NULL){","printf(\"", "\\n","\");","exit(1);}"};
               std::string name;
	       std::string em;
 while(true){
 std::cout << "//Enter the name m for main.\n";
 std::cout << "//"; 
 getline(std::cin,name);
 if(name == "m"){
 break;}
 std::cout << "//Enter an error message.\n";
 std::cout << "//";
 getline(std::cin,em);
 std::cout << "\n" << t[0] << name << t[1] << "\n";
 std::cout << t[2] << em << t[3] << t[4] << "\n";
 std::cout << t[5] << "\n\n";
 }
}else if(sw == "vi"){
	std::string t [5] = {"double ","int "," = ", ";", " ;"};
	std::string ch;
	std::string name;
	std::string value;
 while(true){
 std::cout << "//Choose i for int d for double, m for main.\n";
 std::cout << "//";
 getline(std::cin,ch);
 if(ch == "m"){
 break;}
 else if(ch != "i" && ch != "d"){
 std::cout << "Choose i or d or m only.\n";
 continue;}
 std::cout << "Enter the name.\n";
 std::cout << "//";
 getline(std::cin,name);
 std::cout << "Enter a value.\n";
 std::cout << "//";
 getline(std::cin,value); 
 if(ch == "i"){
 std::cout << "\n" << t[1] << name << t[2] << value << t[3] << "\n\n"; 
}else if(ch == "d"){
std::cout << "\n" << t[0] << name << t[2] << value << t[3] <<  "\n\n";
       }
}
}else if(sw == "vn"){
	std::string t [3] = {"double ","int ", ";"};
	std::string ch;
	std::string name;
 while(true){
 std::cout << "//Choose i for int d for double, m for main.\n";
 std::cout << "//";
 getline(std::cin,ch);
 if(ch == "m"){
 break;}
 else if(ch != "i" && ch != "d"){
 std::cout << "Choose i or d or m only.\n";
 continue;}
 std::cout << "Enter the name.\n";
 std::cout << "//";
 getline(std::cin,name); 
 if(ch == "i"){
 std::cout << "\n" << t[1] << name << t[2] << "\n\n"; 
}else if(ch == "d"){
std::cout << "\n"<< t[0] << name << t[2] << "\n\n";
      }
}
}else if(sw == "si"){
	std::string t [6] = {"scanf(\"", "\%d\"",  "\%lf\"", ","," &", ");"};
	std::string ch;
	std::string name;
 while(true){
 std::cout << "//Choose i for int d for double or m for main.\n";
 std::cout << "//";
 getline(std::cin,ch);
 if(ch == "m"){
 break;}
 else if(ch != "i" && ch != "d"){
 std::cout << "Choose i or d or m only.\n";
 continue;}
 std::cout << "//Enter the name of variable.\n";
 std::cout << "//";
 getline(std::cin,name);
 if(ch == "i"){
 std::cout << "\n" << t[0] << t[1] << t[3] << t[4] << name << t[5] << "\n\n";
}else if(ch == "d"){
 std::cout << "\n" << t[0] << t[2] << t[3] << t[4] << name << t[5] << "\n\n";
       }
}
}else if(sw == "sh"){
	std::string t [6] = {"scanf(\"", "\%d\"",  "\%lf\"", ",",");","\%f\"",};
	std::string ch;
	std::string name;
 while(true){
 std::cout << "//Choose i for int f for float or d for double or m for main.\n";
 std::cout << "//";
 getline(std::cin,ch);
 if(ch == "m"){
 break;}
 else if(ch != "i" && ch != "f" && ch != "d"){
 std::cout << "Choose i, f, d  or m only.\n";
 continue;}
 std::cout << "//Enter the name of variable.\n";
 std::cout << "//";
 getline(std::cin,name);
 if(ch == "i"){
 std::cout << "\n" << t[0] << t[1] << t[3] << name << t[4] << "\n\n";
}else if(ch == "d"){
std::cout << "\n" << t[0] << t[2] << t[3] << name << t[4] << "\n\n";
}else if(ch == "f"){
 std::cout << "\n" << t[0] << t[5] << t[3] << name << t[4] << "\n\n";
       }
}
}else if(sw == "sc"){
       std::string t [7] = {"if(scanf(\"", "\%d\"",  "\%lf\"", ","," &", ")!=1){","while(scanf(\""};
       std::string ch;
       std::string name;
 while(true){
 std::cout << "//Choose i for int d for double or m for main.\n";
 std::cout << "//";
 getline(std::cin,ch);
 if(ch == "m"){
 break;}
 else if(ch != "i" && ch != "d"){
 std::cout << "Choose i or d or m only.\n";
 continue;}
 std::cout << "//Enter the name of variable.\n";
 std::cout << "//";
 getline(std::cin,name);
 if(ch == "i"){
 std::cout << "\n" << t[0] << t[1] << t[3] << t[4] << name << t[5] << "\n\n";
 std::cout << "\n" << t[0] << t[1] << t[3] << name << t[5] << "     //Use with malloc.\n\n"; 
 std::cout << "\n" << t[6] << t[1] << t[3] << t[4] << name << t[5] << "\n\n";
 std::cout << "\n" << t[6] << t[1] << t[3] << name << t[5] << "     //Use with malloc.\n\n";                   
}else if(ch == "d"){
 std::cout << "\n" << t[0] << t[2] << t[3] << t[4] << name << t[5] << "\n\n";
 std::cout << "\n" << t[0] << t[2] << t[3] << name << t[5] << "     //Use with malloc.\n\n";
 std::cout << "\n" << t[6] << t[2] << t[3] << t[4] << name << t[5] << "\n\n";
 std::cout << "\n" << t[6] << t[2] << t[3] << name << t[5] << "     //Use with malloc.\n\n";} 
 std::cout << "\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n";
}
}else if(sw == "cy"){
 std::string cpy;
 while (true){
 std::cout << "\n";
 std::cout << "#include <stdio.h>\n";
 std::cout << "\n";
 std::cout << "#include <stdio_ext.h>\n";
 std::cout << "\n";
 std::cout << "#include <string.h>\n";
 std::cout << "\n";
 std::cout << "#include <stdlib.h>\n";
 std::cout << "\n"; 
 std::cout << "while(1){\n";
 std::cout << "\n";
 std::cout << "break;\n";
 std::cout << "\n";
 std::cout << "break;}\n";
 std::cout << "\n";
 std::cout << "continue;\n";
 std::cout << "\n";
 std::cout << "continue;}\n";
 std::cout << "\n";
 std::cout << "int main(){\n";
 std::cout << "\n";
 std::cout << "fflush(stdin);\n";
 std::cout << "\n";
 std::cout << "__fpurge(stdin);\n";
 std::cout << "\n";
 std::cout << "getchar();\n";
 std::cout << "\n";
 std::cout << "}else{\n";
 std::cout << "\n";
 std::cout << "else{\n";
 std::cout << "\n";
 std::cout << "    }\n";
 std::cout << "}\n";
 std::cout << "\n";
 std::cout << "return 0;\n";
 std::cout << "}\n";
 std::cout << "\n";
 std::cout << "//Enter m for main.\n";
 getline(std::cin,cpy);
 if(cpy == "m"){
 break;} 
     } 
}else if(sw == "x"){
 break;
}else if(sw == "ch"){
 choice();
}else{
	std::cout << "//Enter a letter in main.\n";
         } 
      }  
return 0;
}



















































































 

















	
 


	










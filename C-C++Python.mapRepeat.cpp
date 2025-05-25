//Copyright 2023-2024 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <iostream>
#include <string>
#include <map>
#include <functional>
                                     
	                         std::string repeat;
                                     
void choice(){
 using namespace std;
 cout << "//Enter ch for choices.\n";
 cout << "//Enter a for strings.\n";
 cout << "//Enter aa for arrays.\n";
 cout << "//Enter c for strings with no quotation marks.\n";
 cout << "//Enter cy for what's needed to copy and paste to finish a simple program.\n";
 cout << "//Enter i for if statements e for else if for strings.\n";
 cout << "//Enter in for if and else if statements for numbers C-C++.\n";
 cout << "//Enter im for if and else if statements for numbers if malloc is used.\n";
 cout << "//Enter f for fgets.\n";
 cout << "//Enter fs for fgets with strlen to remove newline character.\n";
 cout << "//Enter s for scanf for strings to allow for white spaces.\n";
 cout << "//Enter sb for scanf basic no white spaces.\n";
 cout << "//Enter si for scanf for integers and doubles.\n";
 cout << "//Enter sh for scanf for ints and doubles on the heap.\n";
 cout << "//Enter sc for check scanf.\n";
 cout << "//Enter h to allocate memory on the heap.\n";
 cout << "//Enter cm to check malloc.\n";
 cout << "//Enter fc for void functions C-C++.\n";
 cout << "//Enter cf to call functions C-C++.\n";
 cout << "//Enter v for variables without assigning a value.\n";
 cout << "//Enter vv for variables with assigning a string value.\n";
 cout << "//Enter vi for int and double variables C-C++.\n";
 cout << "//Enter vn for int and double variables with no value C-C++.\n";
 cout << "//Enter m for main x to exit.\n";
 cout << "//Enter sp for C++ strings.\n";
 cout << "//Enter cp for C++ empty strings.\n";
 cout << "//Enter aap for C++ string arrays.\n";
 cout << "//Enter ip for C++ string if statements.\n";
 cout << "//Enter ep for C++ string else if statements.\n";
 cout << "//Enter up for C++ user input.\n";
 cout << "//Enter mp to start a C++ map.\n";
 cout << "//Enter ma for map acces C++.\n";
 cout << "//Enter vp for string variables no value C++.\n";
 cout << "//Enter vvp for string variables with a value c++.\n";
 cout << "//Enter cyp for what's needed to copy and paste to finish a simple C++ program.\n";
 cout << "#For Python strings enter ay for one by for two ccy for three quotes. Enter x to exit.\n"; 
 cout << "#Enter iy for if statements. Enter ey for elif.\n";
 cout << "#Enter cl for  python classes.\n";
 cout << "#Enter vy for  Python variables and user input option.\n";
 }


void string(){
 std::string string  [3] = {"printf(\"", "\\n","\");"};
    std::string text;
    std::cout << "//Enter your string, m for main.\n";
    while (true){
    std::cout << "//";
    getline(std::cin,text);
    if(text == "m"){
    break;}
    std::cout << "\n" << string[0] << text << string[2] << "\n\n";
    std::cout << "\n" << string[0] << text << string[1] << string[2] << "\n\n";
    if(repeat != "r"){
        break;}
         }
}


void stringEmpty(){
    std::string t [2] = {"printf(", ");"};
    std::string text; 
 std::cout << "//Enter text m for main.\n";   
 while(true){
 std::cout << "//";
 getline(std::cin,text);
 if(text == "m"){
 break;}
 std::cout << "\n" << t[0] << text << t[1] << "\n\n";
 if(repeat != "r"){
     break;}
     }
}


void fgetss(){
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
 if(repeat != "r"){
     break;}
     }
}


void fgetsStrlen(){
     std::string f  [5] = {"fgets(", ",", "stdin);", "[strlen(",")-1] = '\\0';"};
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
 std::cout << v << f[3] << v << f[4] << "\n\n";
 if(repeat != "r"){
     break;}
   }
}


void scanff(){
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
 if(repeat != "r"){
     break;}
  }
}


void scanfBasic(){
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
 if(repeat != "r"){
     break;}
   }
}


void ifStatement(){
 std::string f  [4] = {"if(strcmp(",   ",",  "\"", ")==0){"};
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
 if(repeat != "r"){
     break;}
      }
}


void elseIf(){
     std::string f  [4] = {"}else if(strcmp(",   ",",  "\"", ")==0){"};
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
 if(repeat != "r"){
     break;}
     }
}


void ifNumber(){
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
 while(getline(std::cin,op)){
 if(op != "a"  && op != "b" && op != "c" && op != "d"){
 std::cout << "//Enter a or b or c or d only.\n";}
 else{
     break;}
 }
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
 if(repeat != "r"){
     break;}
 }else if(select == "i"){
  std::cout << "\n" << t[0] << var << op << num << t[9] << "\n\n";
 if(repeat != "r"){
     break;}
 }else if(select == "e"){
  std::cout << "\n" << t[1] << var << op << num << t[9] << "\n\n";
 if(repeat != "r"){
     break;} 
      }
   }
}


void ifHeap(){
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
 while(getline(std::cin,op)){
 if(op != "a" && op != "b" && op!= "c" && op != "d"){
 std::cout << "//Enter a or b or c or d only.\n";}
 else{
      break;}
 }
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
 if(repeat != "r"){
     break;} 
 }else if(select == "e"){
  std::cout << "\n" << t[1] << var << op << num << t[8] << "\n\n";
 if(repeat != "r"){
     break;}
       }
   }
}


void variable(){
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
 if(repeat != "r"){
     break;} 
    }
}


void variableValue(){
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
 if(repeat != "r"){
     break;}
     }
}


void array(){
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
 if(repeat != "r"){
     break;}
      }
}


void funct(){
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
 if(repeat != "r"){
     break;}
      }
}


void callFunct(){
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
 if(repeat != "r"){
     break;}
     }
}


void heap(){
	std::string t [9] = {"char"," *",";"," = (char*)malloc","(",");","* sizeof(char));","free"," = NULL;"};
	std::string ch [6] = {"if("," == NULL){","    printf(\"", "\\n","\");","    exit(1);}"};
	std::string i [15] = {"int"," *",";"," = (int*)malloc","(",");","* sizeof(int));","free"," = NULL;","double","float", " = (double*)malloc"," = (float*)malloc","* sizeof(double));","* sizeof(float));"};

	std::string name;
	std::string mem;
	std::string check;
	std::string na;
	std::string em;	
	std::string swit;
 while(true){
 std::cout << "//Enter the name of the variable m for main.\n"; 
 std::cout << "//";
 std::getline(std::cin,name);
 if(name == "m"){
 break;}
 std::cout << "//Enter memory to allocate.\n";
 std::cout << "//";
 std::getline(std::cin, mem);
 std::cout << "\n";
 std::cout << "\n" << t[0] << t[1] << name << t[2] << "\n\n";
 std::cout << i[0] << i[1] << name << i[2] << "\n\n";
 std::cout << i[9] << i[1] << name << i[2] << "\n\n";
 std::cout << i[10] << i[1] << name << i[2] << "\n\n";
 std::cout << name << t[3] << t[4] << mem << t[6] << "\n\n";
 std::cout << name << i[3] << i[4] << mem << i[6] << "\n\n";
 std::cout << name << i[11] << i[4] << mem << i[13] << "\n\n";
 std::cout << name << i[12] << i[4] << mem << i[14] << "\n\n";
 std::cout << i[7] << i[4] << name << i[5] << "\n";
 std::cout << name << i[8] << "\n\n";
 if(repeat != "r"){
     break;} 
        }
}	


void checkMalloc(){
 std::string t [6] = {"if("," == NULL){","    printf(\"", "\\n","\");","    exit(1);}"};
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
 if(repeat != "r"){
     break;} 
    }
}


void variableNum(){
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
 if(repeat != "r"){
     break;} 
}else if(ch == "d"){
 std::cout << "\n" << t[0] << name << t[2] << value << t[3] <<  "\n\n";
 if(repeat != "r"){
     break;}
         }
    }
}


void varNoValue(){
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
 if(repeat != "r"){
     break;}
}else if(ch == "d"){
std::cout << "\n"<< t[0] << name << t[2] << "\n\n";
 if(repeat != "r"){
     break;}
        }
   }
}


void scanfNum(){
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
 if(repeat != "r"){
     break;}
}else if(ch == "d"){
 std::cout << "\n" << t[0] << t[2] << t[3] << t[4] << name << t[5] << "\n\n";
 if(repeat != "r"){
     break;} 
         }
    }
}


void scanfHeap(){
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
 if(repeat != "r"){
     break;}
}else if(ch == "d"){
 std::cout << "\n" << t[0] << t[2] << t[3] << name << t[4] << "\n\n";
 if(repeat != "r"){
     break;}
}else if(ch == "f"){
 std::cout << "\n" << t[0] << t[5] << t[3] << name << t[4] << "\n\n";
 if(repeat != "r"){
     break;}
         }
    }
}


void checkScanf(){
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
 if(repeat != "r"){
     break;}
}else if(ch == "d"){
 std::cout << "\n" << t[0] << t[2] << t[3] << t[4] << name << t[5] << "\n\n";
 std::cout << "\n" << t[0] << t[2] << t[3] << name << t[5] << "     //Use with malloc.\n\n";
 std::cout << "\n" << t[6] << t[2] << t[3] << t[4] << name << t[5] << "\n\n";
 std::cout << "\n" << t[6] << t[2] << t[3] << name << t[5] << "     //Use with malloc.\n\n";} 
 std::cout << "\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n";
 if(repeat != "r"){
     break;}
       }
}


void copy(){
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
}  


void cppStrings(){
        std::string string  [4] = {"std::cout << \"", "\\n","\";","\" << std::endl;"};
        std::string text;
 std::cout << "//Enter your string, m for main.\n";
 while (true){
 std::cout << "//";
 getline(std::cin,text);
 if(text == "m"){
 break;}
 std::cout << "\n" << string[0] << text << string[1] << string[2] << "\n\n";
 std::cout << "\n" << string[0] << text << string[2] << "\n\n";
 std::cout << "\n" << string[0] << text << string[3] << "\n\n";
 if(repeat != "r"){
     break;}  
        }
}


void estringp(){
    std::string t [5] = {"std::cout << ",  "\\n", "\""," << std::endl;", ";"};
    std::string text;
    
 std::cout << "//Enter text m for main.\n";   
 while(true){
 std::cout << "//";
 getline(std::cin,text);
 if(text == "m"){
 break;}
 std::cout << "\n" << t[0] << text << t[3] << "\n\n";
 if(repeat != "r"){
     break;} 
     }
 }


void arraysp(){
	std::string t [5] = {"std::string "," [", "] = {","};"};
        std::string name;
	std::string ne;
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
 std::cout << "//Enter elements with quotations and commas between each.\n";
 std::cout << "//";
 getline(std::cin,elements);
 std::cout << "\n" << t[0] << name << t[1] << ne << t[2] << elements << t[3] << "\n\n";
 if(repeat != "r"){
     break;} 
     }
 }


void ifStatementp(){
         std::string f  [4] = {"if(", " == ",  "\"", "){"};
   	 std::string name;
         std::string value;
 
 while(true){
 std::cout << "//Enter name of the if statement m for main.\n";
 std::cout << "//";
 getline(std::cin,name);
 if(name == "m"){
 break;}
 std::cout << "//Enter the value.\n";
 std::cout << "//";
 getline(std::cin,value);
 std::cout << "\n" << f[0] << name << f[1] << f[2] <<  value << f[2] << f[3] << "\n\n";
 if(repeat != "r"){
     break;} 
        }
}


void elseIfp(){
         std::string f  [4] = {"}else if(", " == ",  "\"", "){"};
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
 std::cout << "\n" << f[0] << name << f[1] << f[2] <<  value << f[2] << f[3] << "\n\n";
 if(repeat != "r"){
     break;} 
      }
 }


void userInput(){
          std::string f  [7] = {"std::","getline(","std::cin", ",", ");","std::cin >> ",";"};

        std::string v;
  
   while (true){
   std::cout << "//Enter name of variable m for main.\n";
   std::cout << "//";
   getline(std::cin,v);
   if(v == "m"){
   break;}
   std::cout << "\n" << f[1] << f[2] << f[3] << v << f[4] << "\n\n";
   std::cout << "\n" << f[0] << f[1] << f[2] << f[3] << v << f[4] << "\n\n";
   std::cout << "\n" << f[5] << v << f[6] << "\n\n";
   std::cout << "\nstd::cin.clear();";
   std::cout << "\nstd::cin.ignore(2000, '\\n');     //Clears input buffer.\n\n";
   if(repeat != "r"){
       break;} 
       }
}


void map(){
 std::string t [8] = {"std::map","<","std::string","int","double","> ",",", " = {"};
 std::string b [7] = {"    {", "}," , "}", "};", "\"", ","," "};
                 std::string key_type;
		 std::string value_type;
		 std::string name;
		 std::string key;
		 std::string key_t;
		 std::string value;
		 std::string value_t;
		 
 while(true){
 std::cout << "//Enter the name of the map m for main.\n";
 std::cout << "//";
 getline(std::cin,name);
 if(name == "m"){
 break;}
 std::cout << "//Enter a key type, s for string, i for int d for double.\n";
 std::cout << "//";
 getline(std::cin,key_type);
 if(key_type != "s" && key_type != "i" && key_type != "d"){
 std::cout << "Enter s i or d only.\n";
 continue;}
 if(key_type == "s"){
 key_type = t[2];
}else if(key_type == "i"){
 key_type = t[3];
}else if(key_type == "d"){
 key_type = t[4];}
 std::cout << "//Enter a value type, s for string, i for int d for double.\n";
 std::cout << "//";
 while(getline(std::cin, value_type)){
 if(value_type != "s" && value_type != "i" && value_type != "d"){
 std::cout << "//Enter s i or d only.\n";}
 else{
     break;}
 }
 if(value_type == "s"){
 value_type = t[2];
}else if(value_type == "i"){
 value_type = t[3];
}else if(value_type == "d"){
 value_type = t[4];}
 std::cout << "//Enter a key.\n";
 std::cout << "//";
 getline(std::cin,key);
 std::cout << "//Enter s if key is a string.\n";
 std::cout << "//";
 getline(std::cin,key_t); 
 std::cout << "//Enter a value.\n";
 std::cout << "//";
 getline(std::cin,value);
 std::cout << "//Enter s if the value is a string.\n";
 std::cout << "//";
 getline(std::cin,value_t);
 std::cout <<  "\n" << t[0] << t[1] << key_type << t[6] << value_type << t[5] << name <<  t[7] << "\n";  
 if(key_t == "s"){
 std::cout << b[0] << b[4] << key << b[4] << b[5] <<  b[6];
}else if(key_t != "s"){
 std::cout << b[0] << key << b[5] << b[6];}
 if(value_t == "s"){
 std::cout << b[4] << value <<  b[4] << b[1] << "\n";
}else if(value_t != "s"){
 std::cout << value << b[1] << "\n";}
 std::cout << b[3] << "\n\n";
 if(repeat != "r"){
     break;} 
     }
}


void mapAccess(){
  std::string t [9] = {"std::cout << ",  "\\n", "\""," << std::endl;", ";", ".at(", ")","[","]"};
  std::string string  [4] = {" std::cout << \"", "\\n","\";}","\" << std::endl;}"};
             std::string var;
	     std::string name;
             std::string text;
	     std::string em;
 while(true){
 std::cout << "//Enter the name of the map m for main.\n";
 std::cout << "//";
 getline(std::cin,name);
 if(name == "m"){
 break;}
 std::cout << "//Enter the name of the variable.\n";
 std::cout << "//";
 getline(std::cin,var);
 std::cout << "To enter a key error message for exception press e.\n";
 std::cout << "//Press enter to not enter a error message.\n";
 std::cout << "//";
 getline(std::cin,em);
 if(em != "e"){ 
 std::cout << "\n" << t[0] << name << t[5] << var << t[6] << t[3] << "\n\n";
 std::cout << "\n" << t[0] << name << t[7] << var << t[8] << t[3] << "\n\n";
 std::cout << "\n" << name << t[5] << var << t[6] << "     // Use with try catch.\n\n";
 std::cout << "\n" << name << t[7] << var << t[8] << "\n\n";
 std::cout << "\n }" << "\n\n";
 std::cout << "\n" << "try{" << "\n\n";
 std::cout << "\n" << "}catch(std::out_of_range){" << "    //For map key error.\n\n";
 if(repeat != "r"){
     break;}  
 }else if(em == "e"){
 std::cout << "//Enter error message.\n";
 std::cout << "//";
 getline(std::cin,text);
 std::cout << "\n" << t[0] << name << t[5] << var << t[6] << t[3] << "\n\n";
 std::cout << "\n }" << "\n\n";
 std::cout << "\n" << "try{" << "\n\n";
 std::cout << "}catch(std::out_of_range){" << "\n";  
 std::cout << string[0] <<  text << string[1] << string[2] << "\n\n";
 std::cout << "}catch(std::out_of_range){" << "\n";  
 std::cout << string[0] <<  text << string[3] << "\n\n";
 if(repeat != "r"){
     break;}  
        }
     }
} 


void variablep(){
     std::string f  [2] = {"std::string ",";"};
     std::string name;
     std::string mem;
    	
 while (true){
 std::cout << "//Enter name of variable m for main.\n";
 std::cout << "//"; 
 getline(std::cin,name);
 if(name == "m"){
 break;}
 std::cout << "\n" << f[0] << name << f[1]  << "\n\n";
 if(repeat != "r"){
     break;} 
     }
}


void variableValuep(){
       std::string v [4] ={"std::string "," = ","\"",";"};
       std::string name;
       std::string value;
 while(true){
 std::cout << "//Enter a name of variable m for main.\n";
 std::cout  << "//";
 getline(std::cin,name);
 if(name == "m"){
 break;}
 std::cout << "//enter a value\n";
 std::cout << "//";
 getline(std::cin,value);
 std::cout << "\n" << v[0] << name << v[1] <<  v[2] << value << v[2] << v[3] << "\n\n";
 if(repeat != "r"){
     break;}  
      }
 }


void copyy(){
 std::cout << "\n";
 std::cout << "#include <iostream>\n";
 std::cout << "\n";
 std::cout << "#include <string>\n";
 std::cout << "\n";
 std::cout << "#include <map>\n";
 std::cout << "\n";
 std::cout << "int main(){\n";
 std::cout << "\n";
 std::cout << "while(true){\n"; 
 std::cout << "\n";
 std::cout << "else{\n";
 std::cout << "\n";
 std::cout << "}else{\n";
 std::cout << "\n";
 std::cout << "break;\n";
 std::cout << "\n";
 std::cout << "break;}\n";
 std::cout << "\n";
 std::cout << "continue;\n";
 std::cout << "\n";
 std::cout << "continue;}\n";
 std::cout << "\n";
 std::cout << "try{\n";
 std::cout<< "\n";
 std::cout << "}catch(std::out_of_range){\n";
 std::cout << "\n";
 std::cout << "        }\n";
 std::cout << "}\n";
 std::cout << "return 0;\n";
 std::cout << "}\n"; 
 std::cout << "\n"; 
}


void pyStringOne(){
 std::string t [2] = {"print('",  "')"};
 std::string text;
 std::cout << "#Enter your string, m for main.\n";
 while (true){
 std::cout << "#";
 std::getline(std::cin,text);
 if(text == "m"){
 break;}
 std::cout << "\n" << t[0] << text << t[1] << "\n\n";
 if(repeat != "r"){
     break;}   
 }
}


void pyStringtwo(){
std::string t [2] = {"print(\"", "\")"};
 std::string text;
 std::cout << "#Enter your string, m for main.\n";
 while (true){
 std::cout << "#";
 std::getline(std::cin,text);
 if(text == "m"){
 break;}
 std::cout << "\n" <<  t[0] << text << t[1] << "\n\n";
 if(repeat != "r"){
     break;}   
    }
 }    


void tripleString(){
 std::string t [2] = {"print('''",  "''')"};
 std::string text;
 std::cout << "#Enter your string, m for main.\n";
 while (true){
 std::cout << "#";
 std::getline(std::cin,text);  
 if(text == "m"){
 break;}
 std::cout << "\n" << t[0] << text << t[1] << "\n\n";
 if(repeat != "r"){
     break;}    
     }
}


void classes(){
     std::string f  [9] = {"class ",":", "    def __init__(self," ,"):","self.","="," ","        "};
     std::string text;
     std::string te;
     std::string v; std::string v1; std::string v2; std::string v3; std::string v4; std::string v5; std::string v6; std::string v7;

 while(true){
 std::cout << "#Enter a class, m for main. ";
 std::getline(std::cin,text);
 if(text == "m"){
 break;}
 std::cout << "#List attributes with a comma separating each one.\n";
 std::cout << "#";
 std::getline(std::cin,te);
 std::cout << "#Assign values. Press enter after each one.\n";
 std::cout << "#";
 std::getline(std::cin,v);
 std::cout << "#";
 std::getline(std::cin,v1);
 std::cout << "#";
 std::getline(std::cin,v2);
 std::cout << "#";
 std::getline(std::cin,v3);
 std::cout << "#";
 std::getline(std::cin,v4);
 std::cout << "#";
 std::getline(std::cin,v5);
 std::cout << "#";
 std::getline(std::cin,v6);
 std::cout << "#";
 std::getline(std::cin,v7);
 std::cout << "\n" << f[0] << text << f[1] << "\n";
 std::cout << f[2] <<  te <<  f[3] << "\n";
 std::cout << f[7] << f[4] << v << f[6] << f[5] << f[6] << v << "\n";
 std::cout << f[7] << f[4] << v1 << f[6] << f[5] << f[6] << v1 << "\n";
 std::cout << f[7] << f[4] << v2 << f[6] << f[5] << f[6] << v2 << "\n";
 std::cout << f[7] << f[4] << v3 << f[6] << f[5] << f[6] << v3 << "\n";
 std::cout << f[7] << f[4] << v4 << f[6] << f[5] << f[6] << v4 << "\n";
 std::cout << f[7] << f[4] << v5 << f[6] << f[5] << f[6] << v5 << "\n";
 std::cout << f[7] << f[4] << v6 << f[6] << f[5] << f[6] << v6 << "\n";
 std::cout << f[7] << f[4] << v7 << f[6] << f[5] << f[6] << v7 << "\n\n";
 if(repeat != "r"){
     break;}    
     }
}


void ifPy(){
 std::string f [5]  = {"if ", " == ", ":","    print(\"", "\")"};
 std::string text;
 std::string te;
 std::string ts;
 std::string t;
 while (true){
 std::cout << "#Enter name of if statement, m for main. ";
 std::getline(std::cin,text);
 if(text == "m"){
 break;}
 std::cout << "#Enter a value. Add quotes if it's a string. ";
 std::getline(std::cin,te);
 std::cout << "#Enter s to make the next line a string with print function. Enter for other. ";
 std::getline(std::cin,ts);
 std::cout << "#Enter the second line. ";
 std::getline(std::cin,t);
 std::cout << "\n" << f[0] << text << f[1] << te << f[2] << "\n";
 if(ts == "s"){
std::cout << f[3] << t << f[4] << "\n\n";
 if(repeat != "r"){
     break;}    
}else{
     std::cout << "    " << t <<  "\n\n"; 
 if(repeat != "r"){
     break;}    
           }
         }            
}


void elifPy(){
std::string f [5] = {"elif ", " == ", ":","    print(\"", "\")"};
 std::string text;
 std::string te;
 std::string ts;
 std::string t;
 while (true){
 std::cout << "#Enter name of elif statement, m for main. ";
 std::getline(std::cin,text);
 if(text == "m"){
 break;}
 std::cout << "#Enter a value. Add quotes if it's a string. ";
 std::getline(std::cin,te);
 std::cout << "#Enter s to make the next line a string with print function. Enter for other. ";
 std::getline(std::cin,ts);
 std::cout << "#Enter the second line. ";
 std::getline(std::cin,t);
 std::cout << "\n" << f[0] << text << f[1] << te << f[2] << "\n";
 if(ts == "s"){
 std::cout << f[3] << t << f[4] << "\n\n";
 if(repeat != "r"){
     break;}     
}else{
     std::cout << "    " << t <<  "\n\n";
     if(repeat != "r"){
         break;}    

           }
      } 
}


void varPy(){ 
    std::string f [4] = {" = ","\"","input(\""," \")"};
    std::string n;
    std::string vs;
    std::string v;

 while (true){
 std::cout << "#Enter a name for your variable, m for main.\n";
 std::cout << "#";
 std::getline(std::cin,n);
 if(n == "m"){
 break;}
 std::cout << "#If the value is a string enter s. Enter  i for user input otherwise enter.\n";
 std::cout << "#";
 std::getline(std::cin,vs);
 std::cout << "#Enter a value. ";
 std::getline(std::cin,v);
 if(vs == "s"){
 std::cout << "\n" << n << f[0] << f[1] << v << f[1] << "\n\n";
 if(repeat != "r"){
     break;}     
}else if(vs == "i"){
 std::cout << "\n" << n << f[0] << f[2] << v << f[3] << "\n\n"; 
 if(repeat != "r"){
     break;}    
}else{
     std::cout << "\n" << n << f[0] << v << "\n\n";
     if(repeat != "r"){
         break;}    
     
           }
     }  
}


void copPy(){
 std::cout << "\nwhile True:\n";
 std::cout << "\nbreak\n";
 std::cout << "\ncontinue\n\n";
 std::cout << "\nelse:\n\n";
 std::cout << "#Enter m for main.\n";
 }  


int main(){               
std::map<std::string, std::function<void()> > f = { 
	 {"ch",          choice},
	 {"cy",            copy},
	 {"a",           string},
	 {"c",      stringEmpty},
	 {"f",           fgetss},
	 {"fs",     fgetsStrlen},
	 {"s",           scanff},
 	 {"sb",      scanfBasic},
	 {"i",      ifStatement},
	 {"e",           elseIf},
	 {"in",        ifNumber},
         {"im",          ifHeap},
	 {"v",         variable}, 
	 {"vv",   variableValue},
	 {"aa",           array}, 
         {"fc",           funct},
	 {"cf",       callFunct},
         {"h",             heap},
	 {"cm",     checkMalloc},
	 {"vi",     variableNum}, 
	 {"vn",      varNoValue},
         {"si",        scanfNum},
         {"sh",       scanfHeap},
         {"sc",      checkScanf},   
         {"sp",      cppStrings}, 	 
	 {"cp",        estringp}, 
	 {"aap",        arraysp}, 
	 {"ip",    ifStatementp},
	 {"ep",         elseIfp},
	 {"up",       userInput},
	 {"mp",             map},
	 {"ma",       mapAccess},
	 {"vp",       variablep},
	 {"vvp", variableValuep},
	 {"cyp",          copyy},
	 {"ay",     pyStringOne},
	 {"by",     pyStringtwo},
	 {"ccy",    tripleString},
	 {"cl",         classes}, 
	 {"iy",            ifPy},
	 {"ey",          elifPy},
	 {"vy",           varPy}, 
	 {"cpy",          copPy}
};

           std::string sw;

std::cout <<  "\n\n"; 
 std::cout << "          copyright 2024 Mitchell E Wise\n"; 
 std::cout << "          SPDX-License-Identifier: Apache-20\n\n\n"; 
  

 std::cout << "//Enter r to repeat choices enter to not.\n";
 std::getline(std::cin,repeat);

 choice();
 while(true){
 std::cout << "//Enter a selection from choices x to exit ch for choices.\n";
 std::cout << "//";
 std::getline(std::cin,sw);
 if(sw == "x"){
 break;}
 auto c = f.find(sw);
 if(c != f.end()){
 (*c).second();}
 else{
     std::cout << "//Enter a letter in choices.\n\n";}
 }
return 0;
}


          

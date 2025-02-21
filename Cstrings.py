#Copyright 2023-2025 Mitchell E Wise
#SPDX-License-Identifier: Apache-2.0 



def choice():
    print("//Enter hd for strings hd to hide user input with getpass.")
    print("//Enter a for arrays ia for numbers.")
    print("//Enter b for strings.")
    print("//Enter c for strings with no quotation marks.")
    print("//Enter cy for what's needed to copy and paste to finish a simple program.")
    print("//Enter f for fgets and removal of new line character.")
    print("//Enter fc for void functions.");
    print("//Enter s for scanf for strings.")
    print("//Enter sb for scanf basic no white spaces.")
    print("//Enter si for scanf for integers and doubles.")
    print("//Enter sh for scanf for ints and doubles on the heap.")
    print("//Enter sc for check scanf.")
    print("//Enter cb for a function that clears input buffer for scanf.");
    print("//Enter h to allocate memory on the heap.")
    print("//Enter hi to allocate int float or double memory on the heap.")
    print("//Enter cm to check malloc.")
    print("//Enter cf to call functions.")
    print("//Enter i for if statement for strings.")
    print("//Enter e for else if statement for strings.")
    print("//Enter mi for if statements with 2 conditions for strings.")
    print("//Enter in for if and  else if statements for numbers.")
    print("//Enter im for if and else if statements for numbers if malloc is used.")
    print("//Enter v for variables without assigning a value.")
    print("//Enter vv for variables with assigning a string value.")
    print("//Enter vi for int and double variables.")
    print("//Enter vn for int and double variables with no value.") 
    print("//Make sure #include <string.h> is used for fgets and if statements for strings.")
    print("//__fpurg(stdin); must have #include <stdio_ext.h> to work.")
    print("//Enter x to exit, m for main ch for choices.")
    return ""


def string():
    t = ['printf("','\\n','");',]
    print("//Enter text m for main.")
    while True:
        text = input("//")
        if text == "m":
            return ""
        print("\n" + t[0] + text + t[1] + t[2] + "\n")
        print("\n" + t[0] + t[1] + text + t[1] + t[1] + t[2] + "\n")
        print("\n" + t[0] + text + t[2] + "\n")


def hide_text():
    t = ['printf("','");']
    import getpass
    print("//Enter text m for main.")
    while True:
        text = getpass.getpass("")
        print(t[0] + text + t[1])
        if text == "m":
            return ""


def empty_string():
    t = ["printf(",");"]
    print("//Enter text m for main.")
    while True:
        text = input("//")
        if text == "m":
            return ""
        print("\n" + t[0] + text + t[1] + "\n")


def fgets():
    t = ["fgets(",",","stdin);","[strcspn(",'"\\n"',")]=0;","[strlen(", ")-1] = '\\0';","while(","      ","stdin)) {"]
    while True:
        print("//Enter name of variable m for main.")
        v= input("//")
        if v == "m":
            return ""
        print("//Enter the memory to be allocated to the variable m for main.")
        ma = input("//")
        if ma == "m":
            return ""
        print("\n" + t[0] + v + t[1] + ma + t[1] + t[2])
        print(v + t[3] +  v  + t[1] +  t[4] + t[5] + "\n")
        print("\n" +t[8] + t[0] + v + t[1] + ma + t[1] + t[10])
        print(t[9] + v + t[3] +  v  + t[1] +  t[4] + t[5] + "\n") 
        print("\n" + t[0] + v + t[1] + ma + t[1] + t[2])
        print(v + t[6] +v + t[7] + "\n")
    
    
def scanf():
    t = ['scanf("%','[^\\n]",',");","getchar();"]

    while True:
        print("//Enter the name of variable m for main.")
        var = input("//")
        if var == "m":
            return ""
        print("//Enter memory allocated to variable -1 byte.")
        mem = input("//")
        print("\n" + t[0] + mem + t[1]  + var  + t[2])
        print(t[3] + "\n")


def scanf_basic():
    while True:
        t = ['scanf("%','s", ',");"]
        print("//Enter the name of variable m for main.")
        var = input("//")
        if var == "m":
            return ""
        print("//Enter memory allocated to variable -1 byte.")
        mem = input("//")
        print("\n" + t[0] + mem + t[1]  + var  + t[2] + "\n")


def if_statement():
    t = ["if(strcmp(",",",'"',")==0){"]
    while True:
        print("//Enter the name of the if statement m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter a value.")
        value = input("//")
        if value == "m":
            return ""
        print("\n" + t[0] + name + t[1] + t[2] + value + t[2] + t[3] + "\n")


def else_if_statement():
    while True:
        t = ["}else if(strcmp(",",",'"',")==0){"] 
        print("//Enter The name of else if statement m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter a value.")
        value = input("//")
        if value == "m":
            return ""
        print("\n" + t[0] + name + t[1] + t[2] + value + t[2] + t[3] + "\n")


def multi_if():
    t = ["if(strcmp(", ",", "} else if(strcmp(", '"', ")==0", ")!=0", ")==0) {", ")!=0) {", " && ", " || ", "strcmp("]
    while True:
        print("//Enter i for if, e for elseif.")
        while True: 
            select = input("//")
            if select != "i" and select != "e":
                print("//Enter i or e only.")
            else:
                break
        if select == "i":
            select = t[0]
        elif select == "e":
            select = t[2]
        print("//Enter a name of first m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter a value.")
        value = input("//")
        print("Enter a comparison a for equal b for not equal.")
        while True:
            compare = input("//")
            if compare != "a" and compare != "b":
                print("//Enter a or b only.")
            else:
                break
        if compare == "a":
            compare = t[4]
        elif compare == "b":
            compare = t[5]
        print("//Enter a operator a for and o for or.")
        while True:
            op = input("//")
            if op != "a" and op != "o":
                print("//Enter a or o only.")
            else:
                break
        if op == "a":
            op = t[8]
        elif op == "o":
            op = t[9]
        print("Enter the second name.")
        sname = input("//")
        print("//Enter the second value.")
        svalue = input("//")
        print("//Enter a second comparison a for equal b for not equal")
        while True:
            scompare = input("//")
            if scompare != "a" and scompare != "b":
                print("//Enter a or b only.")
            else:
                break
        if scompare == "a":
            scompare = t[6]
        elif scompare == "b":
            scompare = t[7]
        print("\n\n" + select + name + t[1] + t[3] + value + t[3] + compare + op + t[10] + sname + t[1] + t[3] + svalue + t[3] +  scompare + "\n\n")


def if_number():
    t = ["if(", "}else if(","strlen"," <= ", " == "," >= "," != ","(",")","){"]
    while True:
        print("//Enter s for strlen  or i for regular if statement. Enter e for else if.")
        select = input("//")
        if select != "s" and select != "i" and select != "e": 
            print("//Enter s or i or e only.")
            continue
        print("//Enter the name of if or else if statement. Enter m for main.")
        var = input("//")
        if var == "m":
            return ""
        print("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal")
        while True:
            op = input("//")
        
            if op != "a" and op != "b" and op != "c" and op != "d":
                print("//Enter a or b or c or d only.") 
            else:
                break
        if op == "a":
            op = t[3]
        elif op == "b":
            op = t[4]
        elif op == "c":
            op = t[5]
        elif op == "d":
            op = t[6]
        print("//Enter a number to compare to.")
        num = input("//")
        if select == "s":
            print("\n" + t[0] + t[2] + t[7] + var + t[8] + op + num +  t[9] + "\n")
        elif select == "i":
            print("\n" +  t[0] + var + op + num + t[9] +"\n")
        elif select == "e":
            print("\n" + t[1] + var + op + num + t[9] + "\n")


def if_malloc():
    t = ["if(*", "}else if(*"," <= ", " == "," >= "," != ","(",")","){"]
    while True:
        print("//Enter i for if statement. Enter e for else if.")
        select = input("//")
        if select != "i" and select != "e": 
            print("//Enter i or e only.")
            continue
        print("//Enter the name of if or else if statement. Enter m for main.")
        var = input("//")
        if var == "m":
            return ""
        print("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal")
        while True:
            op = input("//")
    
            if op != "a" and op != "b" and op != "c" and op != "d":
                print("//Enter a or b or c or d only.") 
            else:
                break
        if op == "a":
            op = t[2]
        elif op == "b":
            op = t[3]
        elif op == "c":
            op = t[4]
        elif op == "d":
            op = t[5]
        print("//Enter a number to compare to.")
        num = input("//")
        if select == "i":
            print("\n" +  t[0] + var + op + num + t[8] +"\n")
        elif select == "e":
            print("\n" + t[1] + var + op + num + t[8] + "\n")


def variable():
    t = ["char "," [","];"]
    while True:
        print("//Enter the name of the variable m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter the amount of memory to allocate m for main.")
        mem = input("//")
        if mem == "m":
            return ""
        print("\n" + t[0] + name + t[1] + mem + t[2] + "\n")


def variable_value():
    while True:
        t = ["char ","[","]"," = ",'"',";"]
        print("//Enter the name of the variable m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter the amount of memory to allocate or press enter to not allocate m for main.")
        mem = input("//")
        if mem == "m":
            return ""
        print("//Enter a value.")
        value = input("//")
        print("\n" + t[0] + name + t[1] + mem + t[2] + t[3] + t[4] + value + t[4] + t[5]  + "\n")


def array():
    while True:
        t = ["char "," [","]"," [","] = {","};"]
        print("//Enter a name m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter the amount of elements.")
        elements = input("//")
        print("//Enter memory allocated to the largest element.")
        m = input("//")
        print("//Enter elements with quotations and commas between each.")
        el = input("//")
        print("\n" + t[0] + name + t[1] + elements + t[2] + t[3] + m + t[4] + el + t[5] + "\n")
        

def num_array():
    a = ["int ","double ", "[","]"," = {","};"]
    while True:
        print("//Enter a data type i for int d for double.")
        while True:
            typ = input("//")
            if typ != "i" and typ != "d":
                print("//Enter i or d only.")
            else:
                break
        if typ == "i":
            typ = a[0]
        elif typ == "d":
            typ = a[1]
        print("//Enter the name of the array m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter the number of elements.")
        num = input("//")
        print("//Enter the elements with a comma between them.")
        elements = input("//")
        print(typ + name + a[2] + num + a[3] + a[4] + elements + a[5]) 
       
    
def function():
    t = ["void ","(","){","}"]
    while True:
        print("//Name the function m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter parameters if none just press enter.")
        per = input("//")
        print("\n" + t[0] + name + t[1] + per  + t[2])  
        print(2 *"\n")
        print(t[3] + "\n")
        

def call_function():
    while True:
        t = ["(",");"]
        print("//Enter the function name m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter values for parameters if any.")
        per = input("//")
        print("\n" + name + t[0] + per + t[1] + "\n")


def heap():
    t = ["char"," *",";"," = (char*)malloc","(",");","* sizeof(char));","free(",");"," = NULL;"]
    while True:
        print("//Enter the name of the variable m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter memory to allocate.")
        mem = input("//")
        print("\n" + t[0] + t[1] + name + t[2] + "\n")
        print(name + t[3] + t[4] + mem + t[5] + "\n")
        print(name + t[3] + t[4] + mem + t[6] + "\n")
        print(t[7] + name + t[8])
        print(name + t[9] + "\n")
        

def heap_numbers():
    t = ["int"," *",";"," = (int*)malloc","(",");","* sizeof(int));","free"," = NULL;","double","float", " = (double*)malloc"," = (float*)malloc","* sizeof(double));","* sizeof(float));"]

    while True:
        print("//Enter the name of the variable m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter memory to allocate.")
        mem = input("//")
        print("\n")
        print(t[0] + t[1] + name + t[2] + "\n")
        print(t[9] + t[1] + name + t[2] + "\n")
        print(t[10] + t[1] + name + t[2] + "\n")
        print(name + t[3] + t[4] + mem + t[6] + "\n")
        print(name + t[11] + t[4] + mem + t[13] + "\n")
        print(name + t[12] + t[4] + mem + t[14] + "\n")
        print(t[7] + t[4] + name + t[5])
        print(name + t[8] + "\n")


def check_malloc():
    t = ["if("," == NULL){",'    printf("',"\\n",'");',"    exit(1);}"]
    while True:
        print("//Enter the name m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter an error message.")
        em = input("//")
        print("\n"+t[0]+name+t[1])
        print(t[2]+em+t[3]+t[4])
        print(t[5]+"\n")


def scan_number():
    t = ['scanf("%d",','scanf("%lf",'," &",");"]
    while True:
        print("//Choose i for int or d for double or m for main.")
        ch = input("//")
        if ch == "m":
            return ""
        elif ch != "i" and ch != "d":
            continue
        print("//Enter the name of variable.")
        name = input("//")
        if ch == "i":
            print("\n" + t[0] + t[2] + name  + t[3] + "\n")
        elif ch == "d":
            print("\n" + t[1] + t[2] + name + t[3] + "\n")
        


def scan_heap():
    t = ['scanf("%d",','scanf("%lf",',");",'scanf("%f",']
    while True:
        print("//Choose i for int f for float or d for double or m for main.")
        ch = input("//")
        if ch == "m":
            return ""
        elif ch != "i" and ch != "f" and ch != "d":
            continue
        print("//Enter the name of variable.")
        name = input("//")
        if ch == "i":
            print("\n" + t[0]   + name  + t[2] + "\n")
        elif ch == "d":
            print("\n" + t[1]  + name + t[2] + "\n")
        elif ch == "f":
            print("\n" + t[3] + name + t[2] + "\n")
        

def check_scanf():
    t = ['if(scanf("%d",','if(scanf("%lf",'," &",")!=1){",'while(scanf("%d",','while(scanf("%lf",']
    while True:
        print("//Choose i for int or d for double or m for main.")
        ch = input("//")
        if ch == "m":
            return ""
        elif ch != "i" and ch != "d":
            continue
        print("//Enter the name of variable.")
        name = input("//")
        if ch == "i":
            print("\n" + t[0] + t[2] + name  + t[3] + "\n")
            print(f"\n{t[0]}{name}{t[3]}      //Use with malloc.\n")
            print("\n" + t[4] + t[2] + name  + t[3] + "\n")
            print(f"\n{t[4]}{name}{t[3]}     //Use with malloc.\n")
        elif ch == "d":
            print("\n" + t[1] + t[2] + name + t[3] + "\n")
            print(f"\n{t[1]}{name}{t[3]}    //Use with malloc.\n")
            print("\n" + t[5] + t[2] + name + t[3] + "\n")
            print(f"\n{t[5]}{name}{t[3]}    //Use with malloc.\n") 
        print("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n")


def clear_buffer():
    t = ["void ","(","){","}","();"]
    while True:
        print("//Name the function m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("\n" + t[0] + name + t[1] + t[2])
        print("    int clear;");
        print("    while ((clear = getc(stdin)) != '\\n' && clear != EOF) {")
        print("    " + t[3])
        print(t[3] + "\n")
        print(name + t[4] + "\n")


def variable_number():
    t = ["double ","int "," = ", ";", " ;"]
    while True:
        print("//Choose i for int d for double, m for main.")
        ch = input("//")
        if ch == "m":
            return ""
        elif ch != "i" and ch != "d":
            continue
        print("//Enter the name.")
        name = input("//")
        print("//Enter a value.")
        value = input("//")
        if ch == "i":
            print("\n" + t[1] + name + t[2] + value + t[3] + "\n")
        elif ch == "d":
            print("\n" + t[0] +name + t[2] + value + t[3] + "\n")


def variable_no_value():
    t = ["double ","int ", ";"]
    while True:
        print("//Choose i for int d for double, m for main.")
        ch = input("//")
        if ch == "m":
            return ""
        elif ch != "i" and ch != "d":
            continue
        print("//Enter the name.")
        name = input("//")
        if ch == "i":
            print("\n" + t[1]+name+t[2] + "\n")
        elif ch == "d":
            print("\n" + t[0]+name+t[2] + "\n")


def copy():
    while True:
        print("\n#include <stdio.h>")
        print("\n")
        print("#include <stdio_ext.h>")
        print("\n")
        print("#include <string.h>")
        print("\n")
        print("#include <stdlib.h>")
        print("\n")
        print("while(1){")
        print("\n")
        print("break;")
        print("\n")
        print("break;}")
        print("\n")
        print("continue;")
        print("\n")
        print("continue;}")
        print("\n")
        print("int main(){")
        print("\n")
        print("__fpurge(stdin);")
        print("\n")
        print("fflush(stdin);")
        print("\n")
        print("getchar();")
        print("\n")
        print("}else{")
        print("\n")
        print("else{")
        print("\n")
        print("     }")
        print("}")
        print("\n")
        print("return 0;")
        print("}")
        print("\n")
        print("//Enter m for main.")
        cpy = input("//")
        if cpy == "m":
            return ""


switch = {
         "ch": choice,
         "b": string,
         "hd": hide_text,
         "c": empty_string,
         "f": fgets,
         "s": scanf,
         "sb": scanf_basic,
         "cb": clear_buffer,
         "i": if_statement,
         "e": else_if_statement,
         "mi": multi_if,
         "in": if_number,
         "im": if_malloc,
         "v": variable,
         "vv": variable_value,
         "a": array,
         "ia": num_array,
         "fc": function,
         "cf": call_function,
         "h": heap,
         "hi": heap_numbers,
         "cm": check_malloc,
         "si": scan_number,
         "sh": scan_heap,
         "sc": check_scanf,
         "vi": variable_number, 
         "vn": variable_no_value,
         "cy": copy,
}
    
choice()    
while True:
    try:
        print("//Enter x for exit m for main ch for choices.")
        call = input("//")
        if call == "x":
            break
        (switch[call]())
    except KeyError:
        print("Enter a letter in choices.\n")
      
    
    
    
    
    
    
    
    
    
    
    
     

        
        
        
        
        
        
        
        
        
        
        






            
            


    
    
  

    
            
            
            
                


        
        
        
    
        
        
    
        
        
        
        
        
    
    
    
                                

   
    
           
       
   
  
        
    
    
    

    


 

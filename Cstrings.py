#Copyright 2023-2024 Mitchell E Wise
#SPDX-License-Identifier: Apache-2.0 


eng = {
    "a": 'printf("',
    "b": '");',
    "c": "fgets(",
    "d": ",",
    "e": "stdin);",
    "f": "[strcspn(",
    "g": ")]=0;",
    "h": "if (strcmp(",
    "i": "}else if (strcmp(",
    "j": '"',
    "k": ")==0){",
    "l": '\\n',
    "m": '"\\n"',
    "o": "char ",
    "p": " [",
    "q": "[",
    "r": "];",
    "s": "]",
    "t": " = ",
    "u": ";",
    "v": "printf(",
    "w": ");",
    "x": "char ",
    "y": " [",
    "z": "]",
    "aa": "] = {",
    "bb": "};", 
    "cc": "void ",
    "dd": "(",
    "ee": "){",
    "ff": "}",    
    "gg": ");",
    "hh": "[strlen(",
    "ii": ")-1] = '\\0';",
    "jj": 'scanf("%',
    "kk": '[^\\n]",',
    "ll": ");",
    "mm": "getchar();",
    "nn": "char",
    "oo": " = (char*)malloc",
    "pp": " *",
    "qq": "free(",
    "uu": "* sizeof(char));",
    "vv": " = NULL;",
    "ww": 's", '
}
def choice():
    print("//Enter a for strings hd to hide user input with getpass.")
    print("//Enter aa for arrays.")
    print("//Enter b for strings with newline character.")
    print("//Enter c for strings with no quotation marks.")
    print("//Enter cy for what's needed to copy and paste to finish a simple program.")
    print("//Enter f for fgets and removal of new line character.")
    print("//Enter fs for fgets with strlen function to remove newline character.")
    print("//Enter fc for void functions.");
    print("//Enter s for scanf for strings.")
    print("//Enter sb for scanf basic no white spaces.")
    print("//Enter si for scanf for integers and doubles.")
    print("//Enter sh for scanf with ints and doubles on the heap.")
    print("//Enter sc to check scanf.")
    print("//Enter h to allocate memory on the heap.")
    print("//Enter hi to allocate int float or double memory on the heap.")
    print("//Enter cm to check malloc.")
    print("//Enter cf to call functions.")
    print("//Enter i for if statement for strings.")
    print("//Enter e for else if statement.")
    print("//Enter in for if and  else if statements for numbers.")
    print("//Enter im for if and else if statements for numbers if malloc is used.")
    print("//Enter v for variables without assigning a value.")
    print("//Enter vv for variables with assigning a string value.")
    print("//Enter vi for int and double variables.")
    print("//Enter vn for int and double variables with no value.") 
    print("//Make sure #include <string.h> is used for fgets and if statements for strings.")
    print("//__fpurg(stdin); must have #include <stdio_ext.h> to work.")
    print("//Enter x to exit, m for main ch for choices.")
     
     
choice()
while True:
    print("//Enter x for exit m for main ch for choices.")
    switch = input("//")
    if switch == "a":
        print("//Enter text m for main.")
        while True:
            text = input("//")
            if text == "m":
                break
            print("\n" + eng["a"] + text  + eng["b"] + "\n")
    elif switch == "b":
        print("//Enter text m for main.")
        while True:
            text = input("//")
            if text == "m":
                break
            print("\n" + eng["a"] + text + eng["l"] + eng["b"] + "\n")
    elif switch == "hd":
        import getpass
        print("//Enter text m for main.")
        while True:
            text = getpass.getpass("")
            print(eng["a"] + text + eng["b"])
            if text == "m":
                break
    elif switch == "c":
        print("//Enter text m for main.")
        while True:
            text = input("//")
            if text == "m":
                break
            print("\n" + eng["v"] + text + eng["w"] + "\n")
    elif switch == "f":
        while True:
            print("//Enter name of variable m for main.")
            v= input("//")
            if v == "m":
                break
            print("//Enter the memory to be allocated to the variable.")
            ma = input("//")
            if ma == "m":
                break
            print("\n" + eng["c"] + v + eng["d"] + ma + eng["d"] + eng["e"])
            print(v + eng["f"] +  v  + eng ["d"] +  eng["m"] + eng["g"] + "\n")
    elif switch == "fs":
        while True:
            print("//Enter name of variable m for main.")
            v= input("//")
            if v == "m":
                break
            print("//Enter the memory to be allocated to the variable.")
            ma = input("//")
            if ma == "m":
                break
            print("\n" + eng["c"] + v + eng["d"] + ma + eng["d"] + eng["e"])
            print(v + eng["hh"] +  v  + eng ["ii"]  + "\n")
    elif switch == "s":
        while True:
            print("//Enter the name of variable m for main.")
            var = input("//")
            if var == "m":
                break
            print("//Enter memory allocated to variable -1 byte.")
            mem = input("//")
            print("\n" + eng["jj"] + mem + eng["kk"]  + var  + eng["ll"])
            print(eng["mm"] + "\n")
    elif switch == "sb":
        while True:
            print("//Enter the name of variable m for main.")
            var = input("//")
            if var == "m":
                break
            print("//Enter memory allocated to variable -1 byte.")
            mem = input("//")
            print("\n" + eng["jj"] + mem + eng["ww"]  + var  + eng["ll"] + "\n")
    elif switch == "i":
        while True:
            print("//Enter the name of the if statement m for main.")
            name = input("//")
            if name == "m":
                break
            print("//Enter a value.")
            value = input("//")
            if value == "m":
                break
            print("\n" + eng["h"] + name + eng["d"] + eng["j"] + value + eng["j"] + eng["k"] + "\n")
    elif switch == "e":
        while True:
            print("//Enter The name of else if statement m for main.")
            name = input("//")
            if name == "m":
                break
            print("//Enter a value.")
            value = input("//")
            if value == "m":
                break
            print("\n" + eng["i"] + name + eng["d"] + eng["j"] + value + eng["j"] + eng["k"] + "\n")
    elif switch == "in":
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
                 break 
             print("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal");
             op = input("//");
            
             if op != "a" and op != "b" and op != "c" and op != "d":
                 print("//Enter a or b or c or d only.") 
                 print("//Start over.")
                 continue
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
    elif switch == "im":
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
                break 
            print("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal");
            op = input("//");
        
            if op != "a" and op != "b" and op != "c" and op != "d":
                print("//Enter a or b or c or d only.") 
                print("//Start over.")
                continue
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
    elif switch == "v":
        while True:
            print("//Enter the name of the variable m for main.")
            name = input("//")
            if name == "m":
                break
            print("//Enter the amount of memory to allocate m for main.")
            mem = input("//")
            if mem == "m":
                break
            print("\n" + eng["o"] + name + eng["p"] + mem + eng["r"] + "\n")
    elif switch == "vv":
        while True:
            print("//Enter the name of the variable m for main.")
            name = input("//")
            if name == "m":
                break
            print("//Enter the amount of memory to allocate or press enter to not allocate m for main.")
            mem = input("//")
            if mem == "m":
                break
            print("//Enter a value.")
            value = input("//")
            print("\n" + eng["o"] + name + eng["q"] + mem + eng["s"] + eng["t"] + eng["j"] + value + eng["j"] + eng["u"]  + "\n")
    elif switch == "aa":
        while True:
            print("//Enter a name m for main.")
            name = input("//")
            if name == "m":
                break
            print("//Enter the amount of elements.")
            elements = input("//")
            print("//Enter memory allocated to the largest element.")
            m = input("//")
            print("//Enter elements with quotations and commas between each.")
            el = input("//")
            print("\n" + eng["x"] + name + eng["y"] + elements + eng["z"] + eng["y"] + m + eng["aa"] + el + eng["bb"] + "\n")
    elif switch == "fc":
        while True:
            print("//Name the function m for main.")
            name = input("//")
            if name == "m":
                break
            print("//Enter parameters if none just press enter.")
            per = input("//")
            print("\n" + eng["cc"] + name + eng["dd"] + per  + eng["ee"])  
            print(2 *"\n")
            print(eng["ff"] + "\n")   
    elif switch == "cf":
        while True:
            print("//Enter the function name m for main.")
            name = input("//")
            if name == "m":
                break
            print("//Enter values for parameters if any.")
            per = input("//")
            print("\n" + name + eng["dd"] + per + eng["gg"] + "\n")
    elif switch == "h":
        while True:
            print("//Enter the name of the variable m for main.")
            name = input("//")
            if name == "m":
                break
            print("//Enter memory to allocate.")
            mem = input("//")
            print("\n" + eng["nn"] + eng["pp"] + name + eng["u"] + "\n")
            print(name + eng["oo"] +eng["dd"] + mem + eng["w"] + "\n")
            print(name + eng["oo"] +eng["dd"] + mem + eng["uu"] + "\n")
            print(eng["qq"] + name + eng["w"] + "\n")
            print(name + eng["vv"] + "\n")
    elif switch == "hi":
        t = ["int"," *",";"," = (int*)malloc","(",");","* sizeof(int));","free"," = NULL;","double","float", " = (double*)malloc"," = (float*)malloc","* sizeof(double));","* sizeof(float));"]

        while True:
            print("//Enter the name of the variable m for main.")
            name = input("//")
            if name == "m":
                break
            print("//Enter memory to allocate.")
            mem = input("//")
            print("\n")
            print(t[0] + t[1] + name + t[2] + "\n")
            print(t[9] + t[1] + name + t[2] + "\n")
            print(t[10] + t[1] + name + t[2] + "\n")
            print(name + t[3] + t[4] + mem + t[6] + "\n")
            print(name + t[11] + t[4] + mem + t[13] + "\n")
            print(name + t[12] + t[4] + mem + t[14] + "\n")
            print(t[7] + t[4] + name + t[5] + "\n")
            print(name + t[8] + "\n")
    elif switch == "cm":
        t = ["if("," == NULL){",'printf("',"\\n",'");',"exit(1);}"]
        while True:
            print("//Enter the name m for main.")
            name = input("//")
            if name == "m":
                break
            print("//Enter an error message.")
            em = input("//")
            print("\n"+t[0]+name+t[1])
            print(t[2]+em+t[3]+t[4])
            print(t[5]+"\n")
    elif switch == "si":
        t = ['scanf("%d",','scanf("%lf",'," &",");"]
        while True:
            print("//Choose i for int or d for double or m for main.")
            ch = input("//")
            if ch == "m":
                break
            elif ch != "i" and ch != "d":
                continue
            print("//Enter the name of variable.")
            name = input("//")
            if ch == "i":
                print("\n" + t[0] + t[2] + name  + t[3] + "\n")
            elif ch == "d":
                print("\n" + t[1] + t[2] + name + t[3] + "\n")
    elif switch == "sh":
        t = ['scanf("%d",','scanf("%lf",',");",'scanf("%f",']
        while True:
            print("//Choose i for int f for float or d for double or m for main.")
            ch = input("//")
            if ch == "m":
                break
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
    elif switch == "sc":
        t = ['if(scanf("%d",','if(scanf("%lf",'," &",")!=1){",'while(scanf("%d",','while(scanf("%lf",']
        while True:
            print("//Choose i for int or d for double or m for main.")
            ch = input("//")
            if ch == "m":
                break
            elif ch != "i" and ch != "d":
                continue
            print("//Enter the name of variable.")
            name = input("//")
            if ch == "i":
                print("\n" + t[0] + t[2] + name  + t[3] + "\n")
                print("\n" + t[4] + t[2] + name  + t[3] + "\n")
            elif ch == "d":
                print("\n" + t[1] + t[2] + name + t[3] + "\n")
                print("\n" + t[5] + t[2] + name + t[3] + "\n")
            print("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n")
    elif switch == "vi":
        t = ["double ","int "," = ", ";", " ;"]
        while True:
            print("//Choose i for int d for double, m for main.")
            ch = input("//")
            if ch == "m":
                break
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
    elif switch == "vn":
        t = ["double ","int ", ";"]
        while True:
             print("//Choose i for int d for double, m for main.")
             ch = input("//")
             if ch == "m":
                 break
             elif ch != "i" and ch != "d":
                 continue
             print("//Enter the name.")
             name = input("//")
             if ch == "i":
                 print("\n" + t[1]+name+t[2] + "\n")
             elif ch == "d":
                 print("\n" + t[0]+name+t[2] + "\n")
    elif switch == "cy":
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
                break
    elif switch == "ch":
        choice()
    elif switch == "x":
        break
















    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     

        
        
        
        
        
        
        
        
        
        
        






            
            


    
    
  

    
            
            
            
                


        
        
        
    
        
        
    
        
        
        
        
        
    
    
    
                                

   
    
           
       
   
  
        
    
    
    

    


 

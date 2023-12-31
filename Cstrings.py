#Copyright 2023 Mitchell E Wise
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
    print("//Enter b for strings with new line character.")
    print("//Enter c for strings with no quotation marks.")
    print("//Enter cy for what's needed to copy and paste to finish a simple program.")
    print("//Enter f for fgets and removal of new line character.")
    print("//Enter fs for fgets with strlen function to remove new line character.")
    print("//Enter fc for void functions.");
    print("//Enter s for scanf for strings.")
    print("//Enter sb for scanf basic no white spaces.")
    print("//Enter si for scanf for integers and floats.")
    print("//Enter h to allocate memory from the heap.")
    print("//Enter cf to call functions.")
    print("//Enter i for if statement for strings.")
    print("//Enter e for else if statement.")
    print("//Enter v for variables without assigning a value.")
    print("//Enter vv for variables with assigning a string value.")
    print("//Enter vi for int and double variables.")
    print("//Enter vn for int and double variables with no value.") 
    print("//Make sure #include <string.h> is used for fgets and if statements.")
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
            print(eng["a"] + text  + eng["b"])
    elif switch == "b":
        print("//Enter text m for main.")
        while True:
            text = input("//")
            if text == "m":
                break
            print(eng["a"] + text + eng["l"] + eng["b"])
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
            print(eng["v"] + text + eng["w"])
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
            print(eng["c"] + v + eng["d"] + ma + eng["d"] + eng["e"])
            print(v + eng["f"] +  v  + eng ["d"] +  eng["m"] + eng["g"])
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
            print(eng["c"] + v + eng["d"] + ma + eng["d"] + eng["e"])
            print(v + eng["hh"] +  v  + eng ["ii"] )
    elif switch == "s":
        while True:
            print("//Enter the name of variable m for main.")
            var = input("//")
            if var == "m":
                break
            print("//Enter memory allocated to variable -1 byte.")
            mem = input("//") 
            print(eng["jj"] + mem + eng["kk"]  + var  + eng["ll"])
            print(eng["mm"])
    elif switch == "sb":
        while True:
            print("//Enter the name of variable m for main.")
            var = input("//")
            if var == "m":
                break
            print("//Enter memory allocated to variable -1 byte.")
            mem = input("//") 
            print(eng["jj"] + mem + eng["ww"]  + var  + eng["ll"])
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
            print(eng["h"] + name + eng["d"] + eng["j"] + value + eng["j"] + eng["k"])
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
            print(eng["i"] + name + eng["d"] + eng["j"] + value + eng["j"] + eng["k"])
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
            print(eng["o"] + name + eng["p"] + mem + eng["r"])
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
            print(eng["o"] + name + eng["q"] + mem + eng["s"] + eng["t"] + eng["j"] + value + eng["j"] + eng["u"])
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
            print(eng["x"] + name + eng["y"] + elements + eng["z"] + eng["y"] + m + eng["aa"] + el + eng["bb"])
    elif switch == "fc":
        while True:
            print("//Name the function m for main.")
            name = input("//")
            if name == "m":
                break
            print("//Enter parameters if none just press enter.")
            per = input("//")
            print(eng["cc"] + name + eng["dd"] + per  + eng["ee"])  
            print(2 *"\n")
            print(eng["ff"])   
    elif switch == "cf":
        while True:
            print("//Enter the function name m for main.")
            name = input("//")
            if name == "m":
                break
            print("//Enter values for parameters if any.")
            per = input("//")
            print(name + eng["dd"] + per + eng["gg"])
    elif switch == "h":
        while True:
            print("//Enter the name of the variable m for main.")
            name = input("//")
            if name == "m":
                break
            print("//Enter memory to allocate.")
            mem = input("//")
            print("\n")
            print(eng["nn"] + eng["pp"] + name + eng["u"] + "\n")
            print(name + eng["oo"] +eng["dd"] + mem + eng["w"] + "\n")
            print(name + eng["oo"] +eng["dd"] + mem + eng["uu"] + "\n")
            print(eng["qq"] + name + eng["w"] + "\n")
            print(name + eng["vv"] + "\n")
    elif switch == "si":
        t = ['scanf("%d",','scanf("%lf",'," &",");"]
        while True:
            print("//Choose i for int f for float or double or m for main.")
            ch = input("//")
            if ch == "m":
                break
            elif ch != "i" and ch != "f":
                continue
            print("//Enter the name of variable.")
            name = input("//")
            if ch == "i":
                print(t[0] + t[2] + name  + t[3])
            elif ch == "f":
                print(t[1] + t[2] + name + t[3])
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
                print(t[1] + name + t[2] + value + t[3])
            elif ch == "d":
                print(t[0] +name + t[2] + value + t[3])
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
                 print(t[1]+name+t[2])
             elif ch == "d":
                 print(t[0]+name+t[2])
    elif switch == "cy":
        while True:
            print("#include <stdio.h>")
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
            print("int main(){")
            print("\n")
            print("__fpurge(stdin);")
            print("\n")
            print("fflush(stdin);")
            print("\n")
            print("}else{")
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
    else:
        print("Enter a option from choices.")















    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     

        
        
        
        
        
        
        
        
        
        
        






            
            


    
    
  

    
            
            
            
                


        
        
        
    
        
        
    
        
        
        
        
        
    
    
    
                                

   
    
           
       
   
  
        
    
    
    

    


 

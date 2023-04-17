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
    "m": '"\\n"'
}
def ch():
    print("//Enter a for strings h to hide user input with getpass.")
    print("//Enter b for strings with new line character.")
    print("//Enter f for fgets and removal of new line character.")
    print("//Enter i for if statment for strings.")
    print("//Enter e for  if else statment.")
    print("//Make sure #include <string.h> is used for fgets and if statments.")
    print("//Enter x to exit, m for main 0 for choices.")
     
     
ch()
while True:
    print("//Enter x for exit m for main.")
    switch = input("//")
    if switch == "a":
        print("//Enter text.")
        while True:
            text = input("//")
            if text == "m":
                break
            print(eng["a"] + text  + eng["b"])
    elif switch == "b":
        print("//Enter text.")
        while True:
            text = input("//")
            if text == "m":
                break
            print(eng["a"] + text + eng["l"] + eng["b"])
    elif switch == "h":
        import getpass
        print("//Enter text.")
        while True:
            text = getpass.getpass("")
            print(eng["a"] + text + eng["b"])
            if text == "m":
                break
    elif switch == "f":
        while True:
            print("//Enter name of variable.")
            v= input("//")
            if v == "m":
                break
            print("//Enter the memory you alocated to the variable.")
            ma = input("//")
            if ma == "m":
                break
            print(eng["c"] + v + eng["d"] + ma + eng["d"] + eng["e"])
            print(v + eng["f"] +  v  + eng ["d"] +  eng["m"] + eng["g"])
    elif switch == "i":
        while True:
            print("//Enter the name of the if statment.")
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
            print("//Enter The name of else if statment.")
            name = input("//")
            if name == "m":
                break
            print("//Enter a value.")
            value = input("//")
            if value == "m":
                break
            print(eng["i"] + name + eng["d"] + eng["j"] + value + eng["j"] + eng["k"])
    elif switch == "0":
        ch()
    elif switch == "x":
        break
        
            
            
            
                


        
        
        
    
        
        
    
        
        
        
        
        
    
    
    
                                

   
    
           
       
   
  
        
    
    
    

    



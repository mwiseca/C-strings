#Copyright 2023 Mitchell E Wise
#SPDX-License-Identifier: Apache-2.0 


eng = {
    "a": 'printf("',
    "b": '");',
    "c": "fgets(",
    "d": ",",
    "e": "stdin);",
    "f": "[strcspn(",
    "g": ")]=0;"
}
def ch():
    print("//Enter a for strings h to hide user input with getpass.")
    print("//Enter f for fgets and removal of new line character.")
    print("//Enter x to exit, m for main 0for choices.")
     
     
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
            print(eng["a"] + text + eng["b"])
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
            print("Enter name of varable.")
            v= input("//")
            if v == "m":
                break
            print("//Enter the memory you alocated to the variable.")
            ma = input("//")
            if ma == "m":
                break
            print("//Enter the new line character with quotes.")
            nw = input("//")
            if nw == "m":
                break
            print(eng["c"] + v + eng["d"] + ma + eng["d"] + eng["e"])
            print(v + eng["f"] +  v  + eng ["d"] +  nw + eng["g"])
    elif switch == "0":
        ch()
    elif switch == "x":
        break
    
        
        
        
        
        
    
    
    
                                

   
    
           
       
   
  
        
    
    
    

    



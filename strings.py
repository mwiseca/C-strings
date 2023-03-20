#Copyright 2023 Mitchell E Wise
#SPDX-License-Identifier: Apache-2.0 


eng = {
    "a": 'printf("',
    "b": '");'
}
def ch():
    print("//Enter a for strings h to hide user input with getpass.")
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
    elif switch == "0":
        ch()
    elif switch == "x":
        break
    
                                

   
    
           
       
   
  
        
    
    
    

    



# Copyright 2023-2025 Mitchell E Wise
# SPDX-License-Identifier: Apache-20

f = ["while(fgets(", ",", "stdin) == NULL) {", "[strcspn(", "\"\\n", "\")]=0;", "    ","sizeof(","),stdin) == NULL) {","printf(\"","\\n","\");"]
while True:
    try:
        print("//Enter name of variable m for main.")
        v = input("//")
        if v == "m":
            break
        print("//Enter the memory to be allocated to the variable 5 minimum.")
        while True:
            try:
                me = int(input("//"))
                if me < 5:
                    print("\n//Enter 5 or more.\n")
                else:
                    break
            except ValueError:
                print("\n//Enter a number only.\n")
        print("//Enter a error message. Invalid input is good.")
        em = input("//")
        print("//Enter the function name.")
        function = input("//")
        print(f"\n{f[0]}{v}{f[1]}{me}{f[1]}{f[2]}")
        print(f[6] + "clearerr(stdin);")
        print(f[6] + f[9] + f[10] + em + f[10] + f[10] + f[11])
        print("}")
        print(v + f[3] + v + f[1] +  f[4] + f[5])
        #print(f"if(strlen({v} >= {m-1}) {")
        print(f"if(strlen({v}) >= {me-1}) {{")
        print("    " + function + "();")
        print("}\n")
        print("\n" + f[0] + v + f[1] + f[7] + v + f[8])
        print(f[6] + "clearerr(stdin);")
        print(f[6] + f[9] + f[10] + em + f[10] + f[10] + f[11])
        print("}")
        print(v + f[3] + v + f[1] + f[4] + f[5]) 
        print(f"if(strlen({v}) >= {me-1}) {{")    
        print(f[6] + function + "();");
        print("}\n");
        print(f"\n{f[0]}{v}{f[1]}{me}{f[1]}{f[2]}")
        print(f[6] + "clearerr(stdin);")
        print(f[6] + f[9] + f[10] + em + f[10] + f[10] + f[11])
        print("}")
        print( v +f[3] + v + f[1] + f[4] + f[5])
        print("\n")
        print("\n" + f[0] + v + f[1] + f[7] + v + f[8])
        print(f[6] + "clearerr(stdin);")
        print(f[6] + f[9] + f[10] + em + f[10] + f[10] + f[11])
        print("}")
        print(v + f[3] + v + f[1] + f[4] + f[5]);
        print("\n") 
        #if repeat == "r":
            #break
    except EOFError:
        print("\nInvalid input.\n")



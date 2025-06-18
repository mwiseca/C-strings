


def fgets_Buffer():
    f = ["fgets(", ",", "stdin);", "[strcspn(", "\"\\n", "\")]=0;", "while(", "      ", "stdin)) {","sizeof(","),stdin);","),stdin)) {"]
    while True:
        print("//Enter the name of the variable m for main.")
        v = input("//")
        if v == "m":
            break
        print("//Enter the memory to be allocated to the variable 5 minimum.\n")
        while True:
            try:
                me = int(input("//"))
                if me <= 4:
                    print("//\nEnter a number 5 or more.\n")
                else:
                    break
            except ValueError:
                print("\n//Enter a number only.\n")
        print("//Enter the function name.")
        function = input("//")
        print("\n")
        print(f"{f[0]}{v}{f[1]}{me}{f[1]}{f[2]}")
        print(v + f[3] + v + f[1] + f[4] + f[5])
        print(f"if(strlen({v}) >= {me-1}){{")
        print("    " + function + "();")
        print("}\n");
        print(f"{f[6]} {f[0]}{v}{f[1]}{me}{f[1]} {f[8]}")
        print(f[7] + v + f[3] + v + f[1] + f[4] + f[5])
        print(f"    if(strlen({v}) >= {me-1}){{")
        print("        " + function + "();")
        print("    }\n")
        print(f"{f[0]}{v}{f[1]}{f[9]}{v}{f[10]}")
        print(v + f[3] + v + f[1] + f[4] + f[5])
        print(f"if(strlen({v}) >= {me-1}){{")
        print("    " + function + "();")
        print("}\n");
        print(f"{f[6]}{f[0]}{v}{f[1]}{f[9]}{v}{f[11]}")
        print(f[7] + v + f[3] + v + f[1] + f[4] + f[5])
        print(f"    if(strlen({v}) >= {me-1}){{")
        print("        " + function + "();")
        print("    }\n")
        #if repeat != "r":
            #return ""

fgets_Buffer()

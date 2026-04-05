// Copyright 2023-2026 Mitchell E Wise
// SPDX-License-Identifier: Apache-20

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 1000
#define MAX 999

char repeat [50];

void clean(){
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}

void checkInput() {
    printf("\nInvalid input Try again.\n\n");
    clearerr(stdin);
}

void choice() {
    printf("//Enter ch for choices.\n");
    printf("//Enter b for strings with printf.\n");
    printf("//Enter a for arrays.\n");
    printf("//Enter ia for arrays with numbers.\n");
    printf("//Enter ma to build a simple map that maps 2 arrays.\n");
    printf("//Enter mn to build a simple map were the key array is numbers.\n");
    printf("//Enter c for strings with no quotation marks.\n");
    printf("//Enter bl for string literals.\n");
    printf("//Enter cy for what's needed to copy and paste to finish a simple program.\n");
    printf("//Enter i for if statements e for else if for strings.\n");
    printf("//Enter mi for if statements with 2 conditions.\n");
    printf("//Enter min for multi if statements for numbers with 2 conditions.\n");
    printf("//Enter in for if and else if statements for numbers\n");
    printf("//Enter im for if and else if statements for numbers if malloc is used.\n");
    printf("//Enter f for fgets.\n");
    printf("//Enter fs for fgets with sizeof operater.\n");
    printf("//Enter fcb to check fgets.\n");
    printf("//Enter fi to convert a string to a int or double to use with fgets.\n");
    printf("//Enter fib to convert a string to a int or double with only one error message.\n");
    printf("//Enter s for scanf for strings to allow for white spaces.\n");
    printf("//Enter sb for scanf basic no white spaces.\n");
    printf("//Enter si for scanf for integers and doubles.\n");
    printf("//Enter sh for scanf for ints and doubles on the heap.\n");
    printf("//Enter sc for check scanf.\n");
    printf("//Enter csl to check scanf and limmit size.\n");
    printf("//Enter cb to clear input buffer in C.\n");
    printf("//Enter bh to convert letters to binary and hexadecimal numbers.\n");
    printf("//Enter h to allocate memory on the heap.\n");
    printf("//Enter hi to allocate numbers on the heap.\n");
    printf("//Enter cm to check malloc.\n");
    printf("//Enter fc for void functions.\n");
    printf("//Enter cf to call functions.\n");
    printf("//Enter v for variables without assigning a value.\n");
    printf("//Enter vv for variables with assigning a string value.\n");
    printf("//Enter vi for int and double variables.\n");
    printf("//Enter vn for int and double variables with no value.\n");
    printf("//Enter m for main x to exit.\n"); 
}

void string() {
    const char* string[] = {"printf(\"", "\\n", "\");"};
    char *text;
    text = (char*)malloc(SIZE* sizeof(char));
    if (text == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    printf("//Enter your string, m for main.\n");
    while (1) {
        printf("//");
        while(fgets(text, SIZE, stdin) == NULL) {
            checkInput();
        }
        text[strcspn(text, "\n")] = 0;
        if(strlen(text) >= MAX) {
            clean();
        }
        if (strcmp(text, "m") == 0) { 
            break;
        }
        printf("\n%s%s%s%s\n\n", string[0], text, string[1], string[2]);
        printf("\n%s%s%s%s%s%s\n\n", string[0], string[1], text, string[1], string[1], string[2]);
        printf("%s%s%s\n\n", string[0], text, string[2]);
        if(strcmp(repeat, "r")!=0) {
            break;
        }
    }
    free(text);
    text = NULL;
}

void stringEmpty() {
    const char* t[] = {"printf(", ");"};
    char *text;
    text = (char*)malloc(SIZE* sizeof(char));
    if (text == NULL) {
        printf("Error: Insufficiant memory.\n");
        exit(1);
    }
    printf("//Enter text m for main.\n");
    while (1) {
        printf("//");
        while(fgets(text, SIZE, stdin) == NULL) {
            checkInput();
        }
        text[strcspn(text, "\n")] = 0;
        if(strlen(text) >= MAX) {
            clean();
        }
        if (strcmp(text, "m") == 0) {
            break;
        }
        printf("\n%s%s%s\n\n", t[0], text, t[1]);
        if(strcmp(repeat, "r")!=0) {
            break; 
        }
    }
    free(text);
    text == NULL;
}

void stringLiteral() {
    const char *data [] = { "\"", ","};
    char *string;
    char *cont;
    char *nextString;
    string = (char*)malloc(SIZE* sizeof(char));
    cont = (char*)malloc(SIZE* sizeof(char));
    nextString = (char*)malloc(SIZE* sizeof(char));
    if(string == NULL || cont == NULL || nextString == NULL) {
        printf("Error: Insuffieient memory.\n");
        exit(1); 
    } 
    while(1) {
        printf("//Enter a string m for main.\n");
        while(fgets(string,SIZE,stdin) == NULL) {
            checkInput();
        }
        string[strcspn(string,"\n")]=0;
        if(strlen(string) >= MAX) {
            clear();
        }
        if(strcmp(string,"m")==0) {
            break;
        }
        printf("//To add another string with a comma between enter c. ");
        printf("Or press enter.\n");
        while(fgets(cont,SIZE,stdin) == NULL) {
            checkInput();
        }
        cont[strcspn(cont,"\n")]=0;
        if(strlen(cont) >= MAX) {
            clear();
        }
        if(strcmp(cont,"c")!=0) {
            printf("\n%s%s%s\n",data[0],string,data[0]);
            printf("%s%s%s%s\n\n",data[0],string,data[0],data[1]);
        } else if (strcmp(cont,"c")==0) {
            printf("//Enter the next string.\n");
            while(fgets(nextString,SIZE,stdin) == NULL) {
                checkInput();
            }
            nextString[strcspn(nextString,"\n")]=0;
            if(strlen(nextString) >= MAX) {
                clear();
            }
            printf("\n%s%s%s%s%s%s%s\n",data[0],string,data[0],data[1],data[0],nextString,data[0]);
            printf("%s%s%s%s%s%s%s%s\n\n",data[0],string,data[0],data[1],data[0],nextString,data[0],data[1]); 
        } 
    }
    free(string);
    string = NULL;
    free(cont);
    cont = NULL;
    free(nextString);
    nextString = NULL;
}

void fgetss() {
    const char* f[] = {"fgets(", ",", "stdin);", "[strcspn(", "\"\\n", "\")]=0;", "[strlen(", ")-1] = '\\0';"};
    const char* w[] = {"while(fgets(", ",", "stdin)){", "[strcspn(", "\"\\n", "\")]=0;", "[strlen(", ")-1] = '\\0';", "      "};
    char *v;
    char *me;

    v = (char*)malloc(SIZE* sizeof(char));
    me = (char*)malloc(SIZE* sizeof(char));
    if (v == NULL || me == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter name of variable m for main.\n");
        printf("//");
        while(fgets(v, SIZE, stdin) == NULL) {
            checkInput(); 
        }
        v[strcspn(v, "\n")] = 0;
        if(strlen(v) >= MAX) {
            clean();
        }
        if (strcmp(v, "m") == 0) {
            break;
        }
        printf("//Enter the memory to be allocated to the variable.\n");
        printf("//");
        while(fgets(me, SIZE, stdin) == NULL) {
            checkInput(); 
        }
        me[strcspn(me, "\n")] = 0;
        if(strlen(me) >= MAX) {
            clean();
        }
        printf("\n%s%s%s%s%s%s\n", f[0], v, f[1], me, f[1], f[2]);
        printf("%s%s%s%s%s%s\n\n", v, f[3], v, f[1], f[4], f[5]);
        printf("%s%s%s%s%s%s\n", w[0], v, w[1], me, w[1], w[2]);
        printf("%s%s%s%s%s%s%s\n\n", w[8], v, w[3], v, w[1], w[4], w[5]);
        printf("\n%s%s%s%s%s%s\n", f[0], v, f[1], me, f[1], f[2]);
        printf("%s%s%s%s\n\n", v, f[6], v, f[7]);
        if(strcmp(repeat, "r")!=0) {
            break; 
        }
    }
    free(v);
    v = NULL;
    free(me);
    me = NULL;
}

void fgetsSizeof() {
    const char *f[] = {"fgets(", ",","sizeof(", "),stdin);", "[strcspn(", "\"\\n", "\")]=0;", "[strlen(", ")-1] = '\\0';","while(", "      ", "),stdin)) {"};
    char *name;

    name = (char*)malloc(SIZE* sizeof(char));
    if(name == NULL){
        printf("Error: Insuficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter name of variable m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("\n%s%s%s%s%s%s\n", f[0], name, f[1],  f[2],name, f[3]);
        printf("%s%s%s%s%s%s\n\n", name, f[4], name, f[1], f[5], f[6]);
        printf("\n%s%s%s%s%s%s%s\n",f[9], f[0], name, f[1], f[2] ,name, f[11]);
        printf("%s%s%s%s%s%s%s\n\n",f[10], name, f[4], name, f[1], f[5], f[6]);
        printf("\n%s%s%s%s%s%s\n", f[0], name, f[1],  f[2],name, f[3]);
        printf("%s%s%s%s\n\n", name, f[7], name, f[8]);
        if(strcmp(repeat, "r")!=0) {
            break; 
        }
    }
    free(name);
    name = NULL;
}

void checkFgets() {
    const char *f[12] = {"while(fgets(", ",", "stdin) == NULL) {", "[strcspn(", "\"\\n", "\")]=0;", "    ","sizeof(","),stdin) == NULL) {","printf(\"","\\n","\");"};
    char *v;
    char me [10] = "\0";
    char *em;
    char *function;
    int m;

    v = (char *)malloc(SIZE * sizeof(char));
    em = (char *)malloc(SIZE * sizeof(char));
    function = (char *)malloc(SIZE * sizeof(char));
    if (v == NULL || em == NULL || function == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter name of variable m for main.\n");
        printf("//");
        while(fgets(v, SIZE, stdin) == NULL) {
            checkInput();   
        } 
        v[strcspn(v, "\n")] = 0;
        if(strlen(v) >= MAX){
            clean();
        }
        if (strcmp(v, "m") == 0) {
            break;
        }
        printf("//Enter the memory to be allocated to the variable 5 minimum.\n");
        printf("//");
        while(fgets(me, sizeof(me), stdin) == NULL || (1)){
            clearerr(stdin);  
            if(strlen(me) >= 9){
                clean();
            }            
            m = atoi(me);
            if(m <=4) {
                printf("\n//Enter a number 5 or more.\n\n");
            } else {
                break;
            }
        } 
        me[strcspn(me, "\n")] = 0;
        printf("//Enter a error message. Invalid input is good.\n");
        while(fgets(em,SIZE,stdin) == NULL) {
            checkInput();     
        }
        em[strcspn(em,"\n")]=0;
        if(strlen(em) >= MAX){
            clean();
        }
        printf("//Enter the function to clear input buffer name.\n");
        while(fgets(function,SIZE,stdin) == NULL) {
            checkInput();     
        }
        function[strcspn(function,"\n")]=0;
        if(strlen(function) >= MAX){
            clean();
        }
        printf("\n%s%s%s%s%s%s\n",f[0], v, f[1], me, f[1], f[2]);
        printf("%sclearerr(stdin);\n",f[6]);
        printf("%s%s%s%s%s%s%s\n",f[6],f[9],f[10],em,f[10],f[10],f[11]); 
        printf("}\n");
        printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4], f[5]);
        printf("if(strlen(%s) >= %d) {\n",v,m - 1);
        printf("    %s();\n",function);
        printf("}\n\n");
        printf("\n%s%s%s%s%s%s\n",f[0], v, f[1],f[7],v, f[8]);
        printf("%sclearerr(stdin);\n",f[6]);
        printf("%s%s%s%s%s%s%s\n",f[6],f[9],f[10],em,f[10],f[10],f[11]);
        printf("}\n");
        printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4], f[5]);
        printf("if(strlen(%s) >= %d) {\n",v,m - 1);
        printf("    %s();\n",function);
        printf("}\n\n");
        printf("\n%s%s%s%s%s%s\n",f[0], v, f[1], me, f[1], f[2]);
        printf("%sclearerr(stdin);\n",f[6]);
        printf("%s%s%s%s%s%s%s\n",f[6],f[9],f[10],em,f[10],f[10],f[11]); 
        printf("}\n");
        printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4], f[5]);
        printf("\n\n");
        printf("\n%s%s%s%s%s%s\n",f[0], v, f[1],f[7],v, f[8]);
        printf("%sclearerr(stdin);\n",f[6]);
        printf("%s%s%s%s%s%s%s\n",f[6],f[9],f[10],em,f[10],f[10],f[11]);
        printf("}\n");
        printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4], f[5]);
        printf("\n\n");
        memset(me, '\0', sizeof(me));
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
    free(v);
    v = NULL;
    free(em);
    em = NULL;
    free(function);
    function = NULL; 
}

void stringToInt() { 
    char  t [26] [25] = {"long int", ";","char *"," = strtol(","&",",10);","    ","printf(\"","\\n", "\");","} else if","(*"," == 0x20) {","printf(\"","\\n","\");","("," == ",") {"," != '\\0') {", "} else {",","," = strtod(",")"," &",");"}; 
    char *type;
    char *string;
    char *longInt;
    char *ptrName;
    char *rangePrintf;
    char *spacesPrintf;
    char *numberOnly;
    char *textAfterNumber;

    type = (char*)malloc(SIZE* sizeof(char));
    string = (char*)malloc(SIZE* sizeof(char));
    longInt = (char*)malloc(SIZE* sizeof(char));
    ptrName = (char*)malloc(SIZE* sizeof(char));
    rangePrintf = (char*)malloc(SIZE* sizeof(char));
    spacesPrintf = (char*)malloc(SIZE* sizeof(char));
    numberOnly = (char*)malloc(SIZE* sizeof(char));
    textAfterNumber = (char*)malloc(SIZE* sizeof(char));
    if(type == NULL || string == NULL || longInt == NULL || ptrName == NULL || rangePrintf == NULL || spacesPrintf == NULL || spacesPrintf == NULL || numberOnly == NULL || textAfterNumber == NULL) {
        printf("Insufficent memory.\n");
        exit(1);
    }
    while(1){
        printf("//Enter type i for int d for double.\n");
        while(fgets(type,SIZE,stdin) == NULL) {
            checkInput();
        }
        type[strcspn(type,"\n")]=0;
        if(strlen(type) >= MAX) {
            clean();
        }
        if(strcmp(type,"i") !=0 && strcmp(type, "d")!=0){
            printf("\n//Enter i or d only.\n\n");
            continue;
        }
        printf("//Enter the string name to be converted m for main.\n");
        while(fgets(string,SIZE,stdin) == NULL) {
            checkInput();
        }
        string[strcspn(string,"\n")]=0;
        if(strlen(string) >= MAX) {
            clean();
        }
        if(strcmp(string,"m")==0) {
            break;
        }
        printf("//Enter the converted integer or double name.\n");
        while(fgets(longInt,SIZE,stdin) == NULL) {
            checkInput();
        }
        longInt[strcspn(longInt,"\n")]=0;
        if(strlen(longInt) >= MAX) {
            clean();
        }
        printf("//Enter the name of the pointer endptr or ptr will do.\n");
        while(fgets(ptrName,SIZE,stdin) == NULL) {
            checkInput();
        }
        ptrName[strcspn(ptrName,"\n")]=0;
        if(strlen(ptrName) >= MAX) {
            clean();
        }
        printf("//Enter a error message for out of range.\n");
        while(fgets(rangePrintf,SIZE,stdin) == NULL) {
            checkInput();
        }
        rangePrintf[strcspn(rangePrintf,"\n")]=0;
        if(strlen(rangePrintf) >= MAX) {
            clean();
        }
        printf("//Enter a error message for spaces between numbers.\n");
        while(fgets(spacesPrintf,SIZE,stdin) == NULL) {
            checkInput();
        }
        spacesPrintf[strcspn(spacesPrintf,"\n")]=0;
        if(strlen(spacesPrintf) >= MAX) {
            clean();
        }
        printf("//Enter a error message for enter a number only.\n");
        while(fgets(numberOnly,SIZE,stdin) == NULL) {
            checkInput();
        }
        numberOnly[strcspn(numberOnly,"\n")]=0;
        if(strlen(numberOnly) >= MAX) {
            clean();
        }
        printf("//Enter a error message for text after number.\n");
        while(fgets(textAfterNumber,SIZE,stdin) == NULL) {
            checkInput();
        }
        textAfterNumber[strcspn(textAfterNumber,"\n")]=0;
        if(strlen(textAfterNumber) >= MAX) {
            clean();
        }
        printf("\n#include <errno.h>          Place at top of file.\n\n");
        if(strcmp(type,"i")==0) {
            printf("long int %s;\n",longInt);
            printf("char *%s;\n",ptrName);
        } else if(strcmp(type,"d")==0) {
            printf("double %s;\n",longInt);
            printf("char *%s;\n\n",ptrName);
        }
        printf("\nerrno = 0;\n");
        if(strcmp(type,"i")==0) {
            printf("%s%s%s%s%s%s%s\n",longInt,t[3],string,t[21],t[4],ptrName,t[5]);
        } else if(strcmp(type,"d")==0) {
            printf("%s%s%s%s%s%s%s\n",longInt,t[22],string,t[21], t[24],ptrName,t[25]);
        }
        printf("if(errno == ERANGE) {\n");
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],rangePrintf,t[8],t[8],t[9]);
        printf("%s%s%s%s\n",t[10],t[11],ptrName,t[12]);
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],spacesPrintf,t[8],t[8],t[9]);
        printf("%s%s%s%s%s%s\n",t[10],t[16],ptrName,t[17],string,t[18]);
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],numberOnly,t[8],t[8],t[9]);
        printf("%s%s%s%s\n",t[10],t[11],ptrName,t[19]);
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],textAfterNumber,t[8],t[8],t[9]);
        printf("%s\n\n",t[20]);
        printf("\nerrno = 0;\n");
        if(strcmp(type,"i")==0) {
            printf("%s%s%s%s%s%s%s\n",longInt,t[3],string,t[21],t[4],ptrName,t[5]);
        } else if(strcmp(type,"d")==0) {
            printf("%s%s%s%s%s%s%s\n",longInt,t[22],string,t[21], t[24],ptrName,t[25]);
        }
        printf("if(errno == ERANGE) {\n");
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],rangePrintf,t[8],t[8],t[9]);
        printf("%scontinue;\n",t[6]);
        printf("%s%s%s%s\n",t[10],t[11],ptrName,t[12]);
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],spacesPrintf,t[8],t[8],t[9]);
        printf("%scontinue;\n",t[6]);
        printf("%s%s%s%s%s%s\n",t[10],t[16],ptrName,t[17],string,t[18]);
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],numberOnly,t[8],t[8],t[9]);
        printf("%scontinue;\n",t[6]);
        printf("%s%s%s%s\n",t[10],t[11],ptrName,t[19]);
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],textAfterNumber,t[8],t[8],t[9]);
        printf("%scontinue;\n",t[6]);
        printf("}\n\n");
        if(strcmp(repeat,"r")!=0) {
            break;
        }
    }
    free(type);
    type = NULL;
    free(string);
    string = NULL;
    free(longInt);
    longInt = NULL;
    free(ptrName);
    ptrName = NULL;
    free(rangePrintf);
    rangePrintf = NULL;
    free(spacesPrintf);
    spacesPrintf = NULL;
    free(numberOnly);
    numberOnly = NULL;
    free(textAfterNumber);
    textAfterNumber = NULL;
}


void stringToIntBasic() {
    const char *t [] = {"long int", ";","char *"," = strtol(","&",",10);","    ","printf(\"","\\n", "\");","*"," == 0x20","printf(\"","\\n","\");","("," == ",") {"," != '\\0') {", "} else {",","," = strtod(",")"," &",");"," || "};
    char *type;
    char *string;
    char *longInt;
    char *ptrName;
    char *errorMessage;

    type = (char*)malloc(SIZE* sizeof(char));
    string = (char*)malloc(SIZE* sizeof(char));
    longInt = (char*)malloc(SIZE* sizeof(char));
    ptrName = (char*)malloc(SIZE* sizeof(char));
    errorMessage = (char*)malloc(SIZE* sizeof(char));
    if(type == NULL || string == NULL || longInt == NULL || ptrName == NULL || errorMessage == NULL) {
        printf("Insufficent memory.\n");
        exit(1);
    }
    while(1){
        printf("//Enter type i for int d for double.\n");
        while(fgets(type,SIZE,stdin) == NULL) {
            checkInput(); 
        }
        type[strcspn(type,"\n")]=0;
        if(strlen(type) >= MAX) {
            clean();
        }
        if(strcmp(type,"i") !=0 && strcmp(type, "d")!=0){
            printf("\n//Enter i or d only.\n\n");
            continue;
        }
        printf("//Enter the string name to be converted m for main.\n");
        while(fgets(string,SIZE,stdin) == NULL) {
            checkInput(); 
        }
        string[strcspn(string,"\n")]=0;
        if(strlen(string) >= MAX) {
            clean();
        }
        if(strcmp(string,"m")==0) {
            break;
        }
        printf("//Enter the converted integer or double name.\n");
        while(fgets(longInt,SIZE,stdin) == NULL) {
            checkInput(); 
        }
        longInt[strcspn(longInt,"\n")]=0;
        if(strlen(longInt) >= MAX) {
            clean();
        }
        printf("//Enter the name of the pointer endptr or ptr will do.\n");
        while(fgets(ptrName,SIZE,stdin) == NULL) {
            checkInput(); 
        }
        ptrName[strcspn(ptrName,"\n")]=0;
        if(strlen(ptrName) >= MAX) {
            clean();
        }
        printf("//Enter a error message.\n");
        while(fgets(errorMessage,SIZE,stdin) == NULL) {
            checkInput(); 
        }
        errorMessage[strcspn(errorMessage,"\n")]=0;
        if(strlen(errorMessage) >= MAX) {
            clean();
        }
        printf("\n#include <errno.h>          Place at top of file.\n\n");
        if(strcmp(type,"i")==0) {
            printf("long int %s;\n",longInt);
            printf("char *%s;\n",ptrName);
        } else if(strcmp(type,"d")==0) {
            printf("double %s;\n",longInt); 
            printf("char *%s;\n\n",ptrName);
        } 
        printf("\nerrno = 0;\n");
        if(strcmp(type,"i")==0) {
            printf("%s%s%s%s%s%s%s\n",longInt,t[3],string,t[20],t[4],ptrName,t[5]);
        } else if(strcmp(type,"d")==0) {
            printf("%s%s%s%s%s%s%s\n",longInt,t[21],string,t[20], t[23],ptrName,t[24]);
        }
        printf("if(errno == ERANGE || ");
        printf("%s%s%s",t[10],ptrName,t[11]); 
        printf("%s%s%s%s",t[25],ptrName,t[16],string); 
        printf("%s%s%s%s\n",t[25],t[10],ptrName,t[18]);
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],errorMessage,t[8],t[8],t[9]);
        printf("%s\n\n",t[19]);
        printf("\nerrno = 0;\n");
        if(strcmp(type,"i")==0) {
            printf("%s%s%s%s%s%s%s\n",longInt,t[3],string,t[20],t[4],ptrName,t[5]);
        } else if(strcmp(type,"d")==0) {
            printf("%s%s%s%s%s%s%s\n",longInt,t[21],string,t[20], t[23],ptrName,t[24]);
        }
        printf("if(errno == ERANGE || ");
        printf("%s%s%s",t[10],ptrName,t[11]); 
        printf("%s%s%s%s",t[25],ptrName,t[16],string); 
        printf("%s%s%s%s\n",t[25],t[10],ptrName,t[18]);
        printf("%s%s%s%s%s%s%s\n",t[6],t[7],t[8],errorMessage,t[8],t[8],t[9]);
        printf("%scontinue;\n",t[6]);
        printf("}\n\n");
        if(strcmp(repeat,"r")!=0) {
            break;
        }              
    } 
    free(type);
    type = NULL;
    free(string);
    string = NULL;
    free(longInt);
    longInt = NULL;
    free(ptrName);
    ptrName = NULL;
    free(errorMessage);
    errorMessage = NULL;
}

void scanff() {
    const char* t[] = {"scanf(\"", "%", "[^\\n]\"", ",", ");", "getchar();"};
    char *var;
    char mem [10] = "\0";
    int m;

    var = (char*)malloc(SIZE* sizeof(char));
    if (var == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter the name of variable m for main.\n");
        printf("//");
        while(fgets(var, SIZE, stdin) == NULL) {
            checkInput(); 
        }
        var[strcspn(var, "\n")] = 0;
        if(strlen(var) >= MAX) {
            clean();
        }
        if (strcmp(var, "m") == 0) {
            break;
        }
        printf("//Enter memory allocated to variable.\n");
        while(fgets(mem,sizeof(mem), stdin) == NULL || (1)) {    
            clearerr(stdin);
            if (strlen(mem) >= 9) {
                clean();
            }
            m = atoi(mem);
            if (m < 2){
                printf("\n//Enter a valid number only.\n\n");
                printf("//");
            }else{
                break;
            }
        }	
        mem[strcspn(mem, "\n")] = 0; 
        printf("\n%s%s%d%s%s%s%s\n", t[0], t[1], m -1, t[2], t[3], var, t[4]);
        printf("%s\n\n", t[5]);
        memset(mem, '\0', sizeof(mem));
        if(strcmp(repeat, "r")!=0) {
            break;     
        }
    }
    free(var);
    var = NULL;
}

void scanfBasic() {
    const char* t[] = {"scanf(\"", "%", "s\"", ", ", ");"};
    char *var;
    char mem [10] = "\0";
    int m;

    var = (char*)malloc(SIZE* sizeof(char));
    if (var == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter the name of variable m for main.\n");
        printf("//");
        while(fgets(var, SIZE, stdin) == NULL) {
            checkInput();
        }
        var[strcspn(var, "\n")] = 0;
        if(strlen(var) >= MAX) {
            clean();
        }
        if (strcmp(var, "m") == 0) {
            break;
        }
        printf("//Enter memory allocated to variable 2 or more.\n");
        printf("//");
        while(fgets(mem,sizeof(mem), stdin) == NULL || (1)){
            clearerr(stdin);
            if (strlen(mem) >= 9) {
                clean();
            }
            m = atoi(mem);
            if (m < 2){
                printf("\n//Enter a valid number only.\n\n");
                printf("//");
            }else{
                break; 
            }
        }
        mem[strcspn(mem, "\n")] = 0;
        printf("\n%s%s%d%s%s%s%s\n\n", t[0], t[1], m-1, t[2], t[3], var, t[4]);
        memset(mem, '\0', sizeof(mem));
        if(strcmp(repeat, "r")!=0) {
            break;    
        }
    }
    free(var);
    var = NULL;
}

void clearBuffC() {
    const char* t[] = {"void ", "(", "){", "}","();"};	
    char *name;

    name = (char*)malloc(SIZE* sizeof(char));
    if(name == NULL){
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Name function m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("\n%s%s%s%s\n", t[0], name, t[1], t[2]);
        printf("    int clear;\n");   
        printf("    while ((clear = getc(stdin)) != '\\n' && clear != EOF) {\n");
        printf("%s%s\n","    ",t[3]);	
        printf("%s\n\n",t[3]);
        printf("%s%s\n\n",name,t[4]);
        if(strcmp(repeat, "r")!=0) {
            break;    
        }
    }
    free(name);
    name = NULL;
}

void keys() {
    printf("      A\n");
    printf("      B\n");
    printf("      C\n");
    printf("      D\n");
    printf("      E\n");
    printf("      F\n");
    printf("      G\n");
    printf("      H\n");
    printf("      I\n");
    printf("      J\n");
    printf("      k\n");
    printf("      L\n");
    printf("      M\n");
    printf("      N\n");
    printf("      O\n");
    printf("      P\n");
    printf("      Q\n");
    printf("      R\n");
    printf("      S\n");
    printf("      T\n");
    printf("      U\n");
    printf("      V\n");
    printf("      W\n");
    printf("      X\n");
    printf("      Y\n");
    printf("      Z\n");
    printf("      a\n");
    printf("      b\n");
    printf("      c\n");
    printf("      d\n");
    printf("      e\n");
    printf("      f\n");
    printf("      g\n");
    printf("      h\n");
    printf("      i\n");
    printf("      j\n");
    printf("      k\n");
    printf("      l\n");
    printf("      m\n");
    printf("      n\n");
    printf("      o\n");
    printf("      p\n");
    printf("      q\n");
    printf("      r\n");
    printf("      s\n");
    printf("      t\n");
    printf("      u\n");
    printf("      v\n");
    printf("      w\n");
    printf("      x\n");
    printf("      y\n");
    printf("      z\n");
    printf("      .\n");
    printf("      \\n  \n");
    printf("      sp space\n");
    printf("      ,\n");
    printf("      ;\n");
    printf("      :\n");
    printf("      !\n");
}

void binHex() {
    char key [59] [10];
    sprintf(key[0],    "A");
    sprintf(key[1],    "B");
    sprintf(key[2],    "C");
    sprintf(key[3],    "D");
    sprintf(key[4],    "E");
    sprintf(key[5],    "F");
    sprintf(key[6],    "G");
    sprintf(key[7],    "H");
    sprintf(key[8],    "I");
    sprintf(key[9],    "J");
    sprintf(key[10],   "K");
    sprintf(key[11],   "L");
    sprintf(key[12],   "M");
    sprintf(key[13],   "N");
    sprintf(key[14],   "O");
    sprintf(key[15],   "P");
    sprintf(key[16],   "Q");
    sprintf(key[17],   "R");
    sprintf(key[18],   "S");
    sprintf(key[19],   "T");
    sprintf(key[20],   "U");
    sprintf(key[21],   "V");
    sprintf(key[22],   "W");
    sprintf(key[23],   "X");
    sprintf(key[24],   "Y");
    sprintf(key[25],   "Z");
    sprintf(key[26],   "a");
    sprintf(key[27],   "b");
    sprintf(key[28],   "c");
    sprintf(key[29],   "d");
    sprintf(key[30],   "e");
    sprintf(key[31],   "f");
    sprintf(key[32],   "g");
    sprintf(key[33],   "h");
    sprintf(key[34],   "i");
    sprintf(key[35],   "j");
    sprintf(key[36],   "k");
    sprintf(key[37],   "l");
    sprintf(key[38],   "m");
    sprintf(key[39],   "n");
    sprintf(key[40],   "o");
    sprintf(key[41],   "p");
    sprintf(key[42],   "q");
    sprintf(key[43],   "r");
    sprintf(key[44],   "s");
    sprintf(key[45],   "t");
    sprintf(key[46],   "u");
    sprintf(key[47],   "v");
    sprintf(key[48],   "w");
    sprintf(key[49],   "x");
    sprintf(key[50],   "y");
    sprintf(key[51],   "z");
    sprintf(key[52],   ".");
    sprintf(key[53], "\\n");
    sprintf(key[54],  "sp");
    sprintf(key[55],   ",");
    sprintf(key[56],   ";");
    sprintf(key[57],   ":");
    sprintf(key[58],   "!");


    char value [59] [50];
    sprintf(value[0],  "\n01000001\n\n0b01000001\n\n41\n\n0x41\n");
    sprintf(value[1],  "\n01000010\n\n0b01000010\n\n42\n\n0x42\n");
    sprintf(value[2],  "\n01000011\n\n0b01000011\n\n43\n\n0x43\n");
    sprintf(value[3],  "\n01000100\n\n0b01000100\n\n44\n\n0x44\n"); 
    sprintf(value[4],  "\n01000101\n\n0b01000101\n\n45\n\n0x45\n");
    sprintf(value[5],  "\n01000110\n\n0b01000110\n\n46\n\n0x46\n");
    sprintf(value[6],  "\n01000111\n\n0b01000111\n\n47\n\n0x47\n");
    sprintf(value[7],  "\n01001000\n\n0b01001000\n\n48\n\n0x48\n");
    sprintf(value[8],  "\n01001001\n\n0b01001001\n\n49\n\n0x49\n");
    sprintf(value[9],  "\n01001010\n\n0b01001010\n\n4A\n\n0x4A\n");
    sprintf(value[10], "\n01001011\n\n0b01001011\n\n4B\n\n0x4B\n");
    sprintf(value[11], "\n01001100\n\n0b01001100\n\n4C\n\n0x4C\n");
    sprintf(value[12], "\n01001101\n\n0b01001101\n\n4D\n\n0x4D\n");
    sprintf(value[13], "\n01001110\n\n0b01001110\n\n4E\n\n0x4E\n");
    sprintf(value[14], "\n01001111\n\n0b01001111\n\n4F\n\n0x4F\n");
    sprintf(value[15], "\n01010000\n\n0b01010000\n\n50\n\n0x50\n");
    sprintf(value[16], "\n01010001\n\n0b01010001\n\n51\n\n0x51\n");
    sprintf(value[17], "\n01010010\n\n0b01010010\n\n52\n\n0x52\n");
    sprintf(value[18], "\n01010011\n\n0b01010011\n\n53\n\n0x53\n");
    sprintf(value[19], "\n01010100\n\n0b01010100\n\n54\n\n0x54\n");
    sprintf(value[20], "\n01010101\n\n0b01010101\n\n55\n\n0x55\n");
    sprintf(value[21], "\n01010110\n\n0b01010110\n\n56\n\n0x56\n");
    sprintf(value[22], "\n01010111\n\n0b01010111\n\n57\n\n0x57\n");
    sprintf(value[23], "\n01011000\n\n0b01011000\n\n58\n\n0x58\n");
    sprintf(value[24], "\n01011001\n\n0b01011001\n\n59\n\n0x59\n");
    sprintf(value[25], "\n01011010\n\n0b01011010\n\n5A\n\n0x5A\n");
    sprintf(value[26], "\n01100001\n\n0b01100001\n\n61\n\n0x61\n");
    sprintf(value[27], "\n01100010\n\n0b01100010\n\n62\n\n0x62\n");
    sprintf(value[28], "\n01100011\n\n0b01100011\n\n63\n\n0x63\n");
    sprintf(value[29], "\n01100100\n\n0b01100100\n\n64\n\n0x64\n");
    sprintf(value[30], "\n01100101\n\n0b01100101\n\n65\n\n0x65\n");
    sprintf(value[31], "\n01100110\n\n0b01100110\n\n66\n\n0x66\n");
    sprintf(value[32], "\n01100111\n\n0b01100111\n\n67\n\n0x67\n");
    sprintf(value[33], "\n01101000\n\n0b01101000\n\n68\n\n0x68\n");
    sprintf(value[34], "\n01101001\n\n0b01101001\n\n69\n\n0x69\n");
    sprintf(value[35], "\n01101010\n\n0b01101010\n\n6A\n\n0x6A\n");
    sprintf(value[36], "\n01101011\n\n0b01101011\n\n6B\n\n0x6B\n");
    sprintf(value[37], "\n01101100\n\n0b01101100\n\n6C\n\n0x6C\n");
    sprintf(value[38], "\n01101101\n\n0b01101101\n\n6D\n\n0x6D\n");
    sprintf(value[39], "\n01101110\n\n0b01101110\n\n6E\n\n0x6E\n");
    sprintf(value[40], "\n01101111\n\n0b01101111\n\n6F\n\n0x6F\n");
    sprintf(value[41], "\n01110000\n\n0b01110000\n\n70\n\n0x70\n");
    sprintf(value[42], "\n01110001\n\n0b01110001\n\n71\n\n0x71\n");
    sprintf(value[43], "\n01110010\n\n0b01110010\n\n72\n\n0x72\n");
    sprintf(value[44], "\n01110011\n\n0b01110011\n\n73\n\n0x73\n");
    sprintf(value[45], "\n01110100\n\n0b01110100\n\n74\n\n0x74\n");
    sprintf(value[46], "\n01110101\n\n0b01110101\n\n75\n\n0x75\n");
    sprintf(value[47], "\n01110110\n\n0b01110110\n\n76\n\n0x76\n");
    sprintf(value[48], "\n01110111\n\n0b01110111\n\n77\n\n0x77\n");
    sprintf(value[49], "\n01111000\n\n0b01111000\n\n78\n\n0x78\n");
    sprintf(value[50], "\n01111001\n\n0b01111001\n\n79\n\n0x79\n");
    sprintf(value[51], "\n01111010\n\n0b01111010\n\n7A\n\n0x7A\n");
    sprintf(value[52], "\n00101110\n\n0b00101110\n\n2E\n\n0x2E\n");
    sprintf(value[53], "\n00001010\n\n0b00001010\n\n0A\n\n0x0A\n");
    sprintf(value[54], "\n00100000\n\n0b00100000\n\n20\n\n0x20\n");
    sprintf(value[55], "\n00101100\n\n0b00101100\n\n2C\n\n0x2C\n");
    sprintf(value[56], "\n00111011\n\n0b00111011\n\n3B\n\n0x3B\n");
    sprintf(value[57], "\n00111010\n\n0b00111010\n\n3A\n\n0x3A\n");
    sprintf(value[58], "\n00100001\n\n0b00100001\n\n21\n\n0x21\n");


    char *select;
    select = (char*)malloc(SIZE* sizeof(char));
    if(select == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while(1) {
        int number = -1;
        int i = 0;
        printf("//Enter a letter to get a binary and hexadecimal number.\n");
        printf("//Enter ii for index mn for main.\n");
        while(fgets(select,SIZE,stdin) == NULL){
            clearerr(stdin);
            printf("\nInvalid input.\n\n");
        }
        select[strcspn(select,"\n")]=0;
        if(strlen(select) >= MAX) {
            clean();
        }
        if(strcmp(select,"ii")==0) {
            keys();
            continue;
        } else if(strcmp(select,"mn")==0) {
            break;
        }
        while( i < 59){ 
            if(strcmp(select,key[i])==0){
                number = i;
            }
            i++;
        }
        if( number == -1){
            printf("\n//Enter a name in index.\n\n");
            continue;
        }
        printf("%s\n",value[number]);
    }
    free(select);
    select = NULL;
}

void ifStatement() {
    const char* f[] = {"if(strcmp(", ",", "\"", ")==0) {"};
    char *name;
    char *value;

    name = (char *)malloc(SIZE * sizeof(char));
    value = (char *)malloc(SIZE * sizeof(char));
    if (name == NULL || value == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter name of the if statement m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter the value.\n");
        printf("//");
        while(fgets(value, SIZE, stdin) == NULL) {
            checkInput();
        }
        value[strcspn(value, "\n")] = 0;
        if(strlen(value) >= MAX) {
            clean();
        }
        printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2], value, f[2], f[3]);
        if(strcmp(repeat, "r")!=0) {
            break;     
        }
    }
    free(name);
    name = NULL;
    free(value);
    value = NULL;
}

void elseIf() {
    const char* f[] = {"} else if(strcmp(", ",", "\"", ")==0) {"};
    char *name;
    char *value;

    name = (char *)malloc(SIZE * sizeof(char));
    value = (char *)malloc(SIZE * sizeof(char));
    if (name == NULL || value == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter name of the else if statement m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter the value.\n");
        printf("//");
        while(fgets(value, SIZE, stdin) == NULL) {
            checkInput();
        }
        value[strcspn(value, "\n")] = 0;
        if(strlen(value) >= MAX) {
            clean();
        }
        printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2], value, f[2], f[3]);
        if(strcmp(repeat, "r")!=0) {
            break;     
        }
    }
    free(name);
    name = NULL;
    free(value);
    value = NULL;
}

void multiIf() {
    char t[11][30] = {"if(strcmp(", ",", "} else if(strcmp(", "\"", ")==0", ")!=0", ")==0) {", ")!=0) {", " && ", " || ", "strcmp("};
    char *select;
    char *name;
    char *value;
    char *op;
    char *compare;
    char *sname;
    char *svalue;
    char *scompare;

    select = (char*)malloc(SIZE* sizeof(char));
    name = (char*)malloc(SIZE* sizeof(char));
    value = (char*)malloc(SIZE* sizeof(char));
    op = (char*)malloc(SIZE* sizeof(char));
    compare = (char*)malloc(SIZE* sizeof(char));
    sname = (char*)malloc(SIZE* sizeof(char));
    svalue = (char*)malloc(SIZE* sizeof(char));
    scompare = (char*)malloc(SIZE* sizeof(char));
    if ( select == NULL || name == NULL || value == NULL || op == NULL || compare == NULL || sname == NULL || svalue == NULL || scompare == NULL) {
        printf("Error: Insuffecent memory.\n");
        exit(1);
    }	    
    while (1) {
        printf("//Enter i for if, e for else if.\n");
        while(1) {
            if(fgets(select, SIZE, stdin) == NULL) {
                clearerr(stdin);
                checkInput();
                continue;
            }
            if(strlen(select) >= MAX) {
                clean();
            }
            select[strcspn(select, "\n")] = 0;
            if (strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
                printf("\n//Enter i or e only.\n");
            } else {
                break;
            }
        }
        if (strcmp(select, "i") == 0) {
            strcpy(select, t[0]);
        } else if (strcmp(select, "e") == 0) {
            strcpy(select, t[2]);
        }
        printf("//Enter a name of first m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter a value.\n");
        printf("//");
        while(fgets(value, SIZE, stdin) == NULL) {
            checkInput();
        }
        value[strcspn(value, "\n")] = 0;
        if(strlen(value) >= MAX) {
            clean();
        }
        printf("//Enter a comparison a for equal b for not equal.\n");
        printf("//");
        while(1) {
            if(fgets(compare, SIZE, stdin) == NULL) {
                clearerr(stdin);
                printf("\n//Enter a comparison only.\n");
                continue;
            }
            if(strlen(compare) >= MAX) {
                clean();
            }
            compare[strcspn(compare, "\n")] = 0;
            if (strcmp(compare, "a") != 0 && strcmp(compare, "b") != 0) {
                printf("\n//Enter a or b only.\n\n");
            } else {
                break;
            }
        }
        if (strcmp(compare, "a") == 0) {
            strcpy(compare, t[4]);
        } else if (strcmp(compare, "b") == 0) {
            strcpy(compare, t[5]);
        }
        printf("//Enter a operator a for and o for or.\n");
        printf("//");
        while(1) {
            if(fgets(op, SIZE, stdin) == NULL) {
                clearerr(stdin);
                printf("\n//Enter a operator only.\n");
                continue;
            }
            if(strlen(op) >= MAX) {
                clean();
            }
            op[strcspn(op, "\n")] = 0;
            if (strcmp(op, "a") != 0 && strcmp(op, "o") != 0) {
                printf("\n//Enter a or o only.\n\n");
            } else {
                break;
            }
        }
        if (strcmp(op, "a") == 0) {
            strcpy(op, t[8]);
        } else if (strcmp(op, "o") == 0) {
            strcpy(op, t[9]);
        }
        printf("//Enter the second name,\n");
        printf("//");
        while(fgets(sname, SIZE, stdin) == NULL) {
            checkInput();
        }
        sname[strcspn(sname, "\n")] = 0;
        if(strlen(sname) >= MAX) {
            clean();
        }
        printf("Enter the second value.\n");
        printf("//");
        while(fgets(svalue, SIZE, stdin) == NULL) {
            checkInput();
        }
        svalue[strcspn(svalue, "\n")] = 0;
        if(strlen(svalue) >= MAX) {
            clean();
        }
        printf("Enter a second comparison a for equal b for not equal\n");
        printf("//");
        while(1) {
            if(fgets(scompare, SIZE, stdin) == NULL) {
                clearerr(stdin);
                printf("\n//Enter a second comparison only.\n");
                continue;
            }
            if(strlen(scompare) >= MAX) {
                clean();
            }
            scompare[strcspn(scompare, "\n")] = 0;
            if (strcmp(scompare, "a") != 0 && strcmp(scompare, "b") != 0) {
                printf("\n//Enter a or b only.\n\n");
            } else {
                break;
            }
        }
        if (strcmp(scompare, "a") == 0) {
            strcpy(scompare, t[6]);
        } else if (strcmp(scompare, "b") == 0) {
            strcpy(scompare, t[7]);
        }
        printf("\n%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n\n", select, name, t[1], t[3], value, t[3], compare, op, t[10], sname, t[1], t[3], svalue, t[3], scompare);
        if(strcmp(repeat, "r")!=0) {
            break;     
        }	
    }
    free(select);
    select = NULL;
    free(name);
    name = NULL;
    free(value);
    value = NULL;
    free(op);
    op = NULL;
    free(compare);
    compare = NULL;
    free(sname);
    sname = NULL;
    free(svalue);
    svalue = NULL;
    free(scompare);
    scompare = NULL;
}

void multiIfNumber() {
    char t[9] [20] = {"if(", "} else if(",  " <= ", " == "," >= "," != ", " && ", " || ",") {"};
    char *select; 
    char *name;
    char *compare;
    char *value;
    char *op;
    char *sname;
    char *scompare;
    char *svalue;

    select = (char*)malloc(SIZE* sizeof(char));
    name = (char*)malloc(SIZE* sizeof(char));
    compare = (char*)malloc(SIZE* sizeof(char));
    value = (char*)malloc(SIZE* sizeof(char));
    op = (char*)malloc(SIZE* sizeof(char));
    sname = (char*)malloc(SIZE* sizeof(char));
    scompare = (char*)malloc(SIZE* sizeof(char));
    svalue = (char*)malloc(SIZE* sizeof(char));
    if (select == NULL || name == NULL || compare == NULL || value == NULL || op == NULL || sname == NULL || scompare == NULL || svalue == NULL) {
        printf("\nInsuffient memory.\n\n");
        exit(1);
    } 
    while (1) {
        printf("//Enter i for if, e for else if.\n");
        while(1) {
            if (fgets(select, SIZE, stdin) == NULL) {
                clearerr(stdin); 
                printf("\nInvalid input.\n\n");
                continue;
            }
            if (strlen(select) >= MAX) {
                clean(); 
            }
            select[strcspn(select, "\n")] = 0;
            if (strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
                printf("\n//Enter i or e only.\n\n");
            } else {
                break;
            }
        }
        if (strcmp(select, "i") == 0) {
            strcpy(select, t[0]);
        } else if (strcmp(select, "e") == 0) {
            strcpy(select, t[1]);
        }
        printf("//Enter a name of first m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter a comparison a for less or equal b for equal c for Greater or equal d for not equal.\n");
        printf("//");
        while(1) {
            if (fgets(compare,SIZE, stdin) == NULL) {
                clearerr(stdin);
                printf("\nInvalid input.\n\n");
                continue;
            }
            if (strlen(compare) >= MAX) {
                clean();
            }
            compare[strcspn(compare, "\n")] = 0;
            if (strcmp(compare, "a") != 0 && strcmp(compare, "b") != 0 && strcmp(compare, "c") !=0 && strcmp(compare, "d")!=0) {
                printf("\n//Enter a or b c or d only.\n\n");
            } else {
                break;
            }
        }
        if (strcmp(compare, "a") == 0) {
            strcpy(compare, t[2]);
        } else if (strcmp(compare, "b") == 0) {
            strcpy(compare, t[3]);
        } else if (strcmp(compare, "c") == 0) {
            strcpy(compare, t[4]);
        } else if (strcmp(compare, "d") == 0) {
            strcpy(compare, t[5]); 
        }
        printf("//Enter a value number.\n");
        printf("//");
        while(fgets(value,SIZE, stdin) == NULL) {
            checkInput();
        }
        value[strcspn(value, "\n")] = 0;
        if (strlen(value) >= MAX) {
            clean();
        } 
        printf("//Enter a operator a for and o for or.\n");
        printf("//");
        while(1) {
            if (fgets(op, SIZE, stdin) == NULL) {
                clearerr(stdin);
                printf("\nInvalid input.\n\n");
                continue;
            }
            if (strlen(op) >= MAX) {
                clean();
            }
            op[strcspn(op, "\n")] = 0;
            if (strcmp(op, "a") != 0 && strcmp(op, "o") != 0) {
                printf("\n//Enter a or o only.\n\n");
            } else {
                break;
            }
        }
        if (strcmp(op, "a") == 0) {
            strcpy(op, t[6]);
        } else if (strcmp(op, "o") == 0) {
            strcpy(op, t[7]);
        }

        printf("//Enter the second name,\n");
        printf("//");
        while(fgets(sname, SIZE, stdin) == NULL) {
            checkInput();
        }
        sname[strcspn(sname, "\n")] = 0;
        if (strlen(sname) >= MAX) {
            clean();
        }
        printf("//Enter a second comparison a for less or equal b for equal c for Greater or equal d for not equal.\n");
        printf("//");
        while(1) {
            if (fgets(scompare, SIZE, stdin) == NULL) {
                clearerr(stdin);
                printf("\nInvalid input.\n\n");
                continue;
            }
            if (strlen(scompare) >= MAX) {
                clean();
            }
            scompare[strcspn(scompare, "\n")] = 0;
            if (strcmp(scompare, "a") != 0 && strcmp(scompare, "b") != 0 && strcmp(scompare, "c") !=0 && strcmp(scompare, "d")!=0) {
                printf("\n//Enter a or b c or d only.\n\n");
            } else {
                break;
            }
        }
        if (strcmp(scompare, "a") == 0) {
            strcpy(scompare, t[2]);
        } else if (strcmp(scompare, "b") == 0) {
            strcpy(scompare, t[3]);
        } else if (strcmp(scompare, "c") == 0) {
            strcpy(scompare, t[4]);
        } else if (strcmp(scompare, "d") == 0) {
            strcpy(scompare, t[5]); 
        }  
        printf("Enter the second value number.\n");
        printf("//");
        while(fgets(svalue,SIZE, stdin) == NULL) {
            checkInput();
        }
        svalue[strcspn(svalue, "\n")] = 0;
        if (strlen(sname) >= MAX) {
            clean();
        } 
        printf("\n%s%s%s%s%s%s%s%s%s\n\n",select,name,compare,value,op,sname,scompare,svalue,t[8]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
    free(select);
    select = NULL;
    free(name);
    name = NULL;
    free(compare);
    compare = NULL;
    free(value);
    value = NULL;
    free(op);
    op = NULL;
    free(sname);
    sname = NULL;
    free(scompare);
    scompare = NULL;
    free(svalue);
    svalue = NULL;
}

void ifNumber() {
    char t[10][20] = {"if(", "} else if(", "strlen", " <= ", " == ", " >= ", " != ", "(", ")", ") {"};
    char *select;
    char *var;
    char *op;
    char *num;

    select = (char *)malloc(SIZE * sizeof(char));
    var = (char *)malloc(SIZE * sizeof(char));
    op = (char *)malloc(SIZE * sizeof(char));
    num = (char *)malloc(SIZE * sizeof(char));
    if (select == NULL || var == NULL || op == NULL || num == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter s for strlen  or i for regular if statement. Enter e for else if.\n");
        printf("//");
        while(fgets(select, SIZE, stdin) == NULL) {
            checkInput();
        }
        select[strcspn(select, "\n")] = 0;
        if(strlen(select) >= MAX) {
            clean();
        }
        if (strcmp(select, "s") != 0 && strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
            printf("\n//Enter s or i or e only.\n\n");
            continue;
        }
        printf("//Enter the name of if or else if statement  enter m for main.\n");
        while(fgets(var, SIZE, stdin) == NULL) {
            checkInput();
        }
        var[strcspn(var, "\n")] = 0;
        if(strlen(var) >= MAX) {
            clean();
        }
        if (strcmp(var, "m") == 0) {
            break;
        }
        printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
        printf("//");
        while(1) {
            if(fgets(op, SIZE, stdin) == NULL) {
                clearerr(stdin);
                printf("\n//Enter a operator only.\n\n");
                continue;
            }
            if(strlen(op) >= MAX) {
                clean();
            }
            op[strcspn(op, "\n")] = 0;
            if (strcmp(op, "a") != 0 && strcmp(op, "b") != 0 && strcmp(op, "c") != 0 && strcmp(op, "d") != 0) {
                printf("\n//Enter a or b or c or d only.\n\n");
            } else {
                break;
            }
        }
        if (strcmp(op, "a") == 0) {
            strcpy(op, t[3]);
        } else if (strcmp(op, "b") == 0) {
            strcpy(op, t[4]);
        } else if (strcmp(op, "c") == 0) {
            strcpy(op, t[5]);
        } else if (strcmp(op, "d") == 0) {
            strcpy(op, t[6]);
        }
        printf("//Enter a number to compare to.\n");
        printf("//");
        while(fgets(num, SIZE, stdin) == NULL) {
            checkInput();
        }
        if(strlen(num) >= MAX) {
            clean();
        }
        num[strcspn(num, "\n")] = 0;
        if (strcmp(select, "s") == 0) {
            printf("\n%s%s%s%s%s%s%s%s\n\n", t[0], t[2], t[7], var, t[8], op, num, t[9]);
            if(strcmp(repeat, "r")!=0) {
                break;
            }
        } else if (strcmp(select, "i") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], var, op, num, t[9]);
            if(strcmp(repeat, "r")!=0) {
                break; 
            }
        } else if (strcmp(select, "e") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[1], var, op, num, t[9]);
            if(strcmp(repeat, "r")!=0) {
                break;     
            }
        }
    }
    free(select);
    select = NULL;
    free(var);
    var = NULL;
    free(op);
    op = NULL;
    free(num);
    num = NULL;
}

void ifHeap() {
    char t[9][20] = {"if(*", "} else if(*", " <= ", " == ", " >= ", " != ", "(", ")", ") {"};
    char *select;
    char *var;
    char *op;
    char *num;

    select = (char *)malloc(SIZE * sizeof(char));
    var = (char *)malloc(SIZE * sizeof(char));
    op = (char *)malloc(SIZE * sizeof(char));
    num = (char *)malloc(SIZE * sizeof(char));
    if (select == NULL || var == NULL || op == NULL || num == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter i for if statement. Enter e for else if.\n");
        printf("//");
        while(fgets(select, SIZE, stdin) == NULL) {
            checkInput();
        }
        if(strlen(select) >= MAX) {
            clean();
        }
        select[strcspn(select, "\n")] = 0;
        if (strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
            printf("\n//Enter i or e only.\n\n");
            continue;
        }
        printf("//Enter the name of if or else if statement  enter m for main.\n");
        while(fgets(var, SIZE, stdin) == NULL) {
            checkInput();
        }
        var[strcspn(var, "\n")] = 0;
        if(strlen(var) >= MAX) {
            clean();
        }
        if (strcmp(var, "m") == 0) {
            break;
        }
        printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
        printf("//");
        while(1) {
            if(fgets(op, SIZE, stdin) == NULL) {
                clearerr(stdin);
                printf("\n//Enter a operator only.\n\n");
                continue;
            }
            if(strlen(op) >= MAX) { 
                clean();
            } 
            op[strcspn(op, "\n")] = 0;
            if (strcmp(op, "a") != 0 && strcmp(op, "b") != 0 && strcmp(op, "c") != 0 && strcmp(op, "d") != 0) {
                printf("\n//Enter a or b or c or d only.\n\n");
            } else {
                break;
            }
        }
        if (strcmp(op, "a") == 0) {
            strcpy(op, t[2]);
        } else if (strcmp(op, "b") == 0) {
            strcpy(op, t[3]);
        } else if (strcmp(op, "c") == 0) {
            strcpy(op, t[4]);
        } else if (strcmp(op, "d") == 0) {
            strcpy(op, t[5]);
        }
        printf("//Enter a number to compare to.\n");
        printf("//");
        while(fgets(num, SIZE, stdin) == NULL) {
            checkInput();
        }
        num[strcspn(num, "\n")] = 0;
        if(strlen(num) >= MAX) {
            clean();
        }
        if (strcmp(select, "i") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], var, op, num, t[8]);
            if(strcmp(repeat, "r")!=0) {
                break;     
            }
        } else if (strcmp(select, "e") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[1], var, op, num, t[8]);
            if(strcmp(repeat, "r")!=0) {
                break;
            }
        }
    }
    free(select);
    select = NULL;
    free(var);
    var = NULL;
    free(op);
    op = NULL;
    free(num);
    num = NULL;
}

void variable() {
    const char* f[] = {"char ", " [", "];"};
    char *name;
    char *mem;

    name = (char *)malloc(SIZE * sizeof(char));
    mem = (char *)malloc(SIZE * sizeof(char));
    if (name == NULL || mem == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter name of variable m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput(); 
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean(); 
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter the memory to be allocated to the variable.\n");
        printf("//");
        while(fgets(mem, SIZE, stdin) == NULL) {
            checkInput(); 
        }
        mem[strcspn(mem, "\n")] = 0;
        if(strlen(mem) >= MAX) {
            clean();
        }
        printf("\n%s%s%s%s%s\n\n", f[0], name, f[1], mem, f[2]);
        if(strcmp(repeat, "r")!=0) {
            break;   
        }
    }
    free(name);
    name = NULL;
    free(mem);
    mem = NULL;
}

void variableValue() {
    const char* v[] = {"char ", "[", "]", " = ", "\"", ";"};
    char *name;
    char *mem;
    char *value;

    name = (char *)malloc(SIZE * sizeof(char));
    mem = (char *)malloc(SIZE * sizeof(char));
    value = (char *)malloc(SIZE * sizeof(char));
    if (name == NULL || mem == NULL || value == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter a name of variable m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter the amount of memory to allocate or press enter to not allocate m for main.\n");
        printf("//");
        while(fgets(mem, SIZE, stdin) == NULL) {
            checkInput();
        }
        mem[strcspn(mem, "\n")] = 0;
        if(strlen(mem) >= MAX) {
            clean();
        }
        printf("//enter a value\n");
        printf("//");
        while(fgets(value, SIZE, stdin) == NULL) {
            checkInput();
        }
        value[strcspn(value, "\n")] = 0;
        if(strlen(value) >= MAX) {
            clean();
        }
        printf("\n%s%s%s%s%s%s%s%s%s%s\n\n", v[0], name, v[1], mem, v[2], v[3], v[4], value, v[4], v[5]);
        if(strcmp(repeat, "r")!=0) {
            break;   
        }
    }
    free(name);
    name = NULL;
    free(mem);
    mem = NULL;
    free(value);
    value = NULL;
}

void array() {
    const char* t[] = {"char ", " [", "] ", "] = {", "};"};
    char *name;
    char *ne;
    char *m;
    char *elements;

    name = (char *)malloc(SIZE * sizeof(char));
    ne = (char *)malloc(SIZE * sizeof(char));
    m = (char *)malloc(SIZE * sizeof(char));
    elements = (char *)malloc(SIZE * sizeof(char));
    if (name == NULL || ne == NULL || m == NULL || elements == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter the name of array m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter the amount of elements.\n");
        printf("//");
        while(fgets(ne, SIZE, stdin) == NULL) {
            checkInput();
        }
        ne[strcspn(ne, "\n")] = 0;
        if(strlen(ne) >= MAX) {
            clean();
        }
        printf("//Enter memory allocated to elements.\n");
        printf("//");
        while(fgets(m, SIZE, stdin) == NULL) {
            checkInput();
        }
        m[strcspn(m, "\n")] = 0;
        if(strlen(m) >= MAX) {
            clean();
        }
        printf("//Enter elements with quotations and commas between each.\n");
        printf("//");
        while(fgets(elements, SIZE, stdin) == NULL) {
            checkInput();
        }
        elements[strcspn(elements, "\n")] = 0;
        if(strlen(elements) >= MAX) {
            clean();
        }
        printf("\n%s%s%s%s%s%s%s%s%s%s\n\n", t[0], name, t[1], ne, t[2], t[1], m, t[3], elements, t[4]);
        if(strcmp(repeat, "r")!=0) {
            break;  
        }
    }
    free(name);
    name = NULL;
    free(ne);
    ne = NULL;
    free(m);
    m = NULL;
    free(elements);
    elements = NULL;
}

void numArray() {
    char a[6] [20] = {"int ", "double ", "[", "]", " = {", "};"};
    char *typ;
    char *name;
    char *num;
    char *elements;

    typ = (char*)malloc(SIZE* sizeof(char));
    name = (char*)malloc(SIZE* sizeof(char));
    num = (char*)malloc(SIZE* sizeof(char));
    elements = (char*)malloc(SIZE* sizeof(char));
    if (typ == NULL || name == NULL || num == NULL || elements == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter a data type i for int d for double.\n");
        printf("//");
        while(fgets(typ, SIZE, stdin) == NULL) {
            checkInput();         
        }
        typ[strcspn(typ, "\n")] = 0;
        if(strlen(typ) >= MAX) {
            clean();
        }
        if (strcmp(typ, "i") != 0 && strcmp(typ, "d") != 0) {
            printf("\n//Enter i or d.\n\n");
            continue;
        }
        if (strcmp(typ, "i") == 0) {
            strcpy(typ, a[0]);
        } else if (strcmp(typ, "d") == 0) {
            strcpy(typ, a[1]);
        }
        printf("//Enter the name of the array m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter number of elements m for main.\n");
        printf("//");
        while(fgets(num, SIZE, stdin) == NULL) {
            checkInput();
        }
        num[strcspn(num, "\n")] = 0;
        if(strlen(num) >= MAX) {
            clean();
        }
        printf("//Enter elements with a comma between them.\n");
        printf("//");
        while(fgets(elements, SIZE, stdin) == NULL) {
            checkInput();
        }
        elements[strcspn(elements, "\n")] = 0;
        if(strlen(elements) >= MAX) {
            clean();
        }
        printf("%s%s%s%s%s%s%s%s\n", typ, name, a[2], num, a[3], a[4], elements, a[5]);
        if(strcmp(repeat, "r")!=0) {
            break;  
        }
    }
    free(typ);
    typ = NULL;
    free(name);
    name = NULL;
    free(num);
    num = NULL;
    free(elements);
    elements = NULL;
}

void mapArrays() {
    char loop [7] [25] = {"int "," = -1;","for(int "," = 0;","<",";","++) {"};
    char ifStatement [11] [25] = {"    if(strcmp(",", ","[","]",") == 0) {"," = ",";","}","    }","}","        "};
    char keyError [7] [25] = {"if(", " == -1) {", "    printf(\"", "\\n", "\");","    continue;","}"}; 
    char end [10] [25] = {"printf(\"","%s","%d","%f","\\n","\"",",","[","]",");"};
    char *keyArray;
    char *valueArray;
    char *select;
    char *input;
    char *forLoopInt;
    char *elements;
    char *error;
    char *format;

    keyArray = (char*)malloc(SIZE* sizeof(char));
    valueArray = (char*)malloc(SIZE* sizeof(char));
    select = (char*)malloc(SIZE* sizeof(char));
    input = (char*)malloc(SIZE* sizeof(char));
    forLoopInt = (char*)malloc(SIZE* sizeof(char));
    elements = (char*)malloc(SIZE* sizeof(char));
    error = (char*)malloc(SIZE* sizeof(char));
    format = (char*)malloc(SIZE* sizeof(char));
    if(keyArray == NULL || valueArray == NULL || select == NULL || input == NULL || forLoopInt == NULL || elements == NULL || error == NULL || format == NULL) {
        printf("\nInsufficent memory.\n\n");
        exit(1);
    }
    while(1) {
        printf("//Enter the name of the key array m for main.\n");
        while(fgets(keyArray,SIZE,stdin) == NULL) {
            checkInput();
        }
        keyArray[strcspn(keyArray,"\n")]=0;
        if(strlen(keyArray) >= MAX) {
            clean();
        }
        if(strcmp(keyArray,"m") == 0) {
            break;
        }
        printf("//Enter the value array name.\n");
        while(fgets(valueArray,SIZE,stdin) == NULL) {
            checkInput();
        }
        valueArray[strcspn(valueArray,"\n")]=0;
        if(strlen(valueArray) >= MAX) {                                    
            clean();
        }
        printf("//Enter the name of the user input.\n");
        while(fgets(select,SIZE,stdin) == NULL) {
            checkInput();
        }
        select[strcspn(select,"\n")]=0;
        if(strlen(select) >= MAX) {
            clean();
        }
        printf("//Select the name of the variable that stores the key to be selected.\n");
        printf("//Index or number is good.\n");
        while(fgets(input,SIZE,stdin) == NULL) {
            checkInput();
        }
        input[strcspn(input,"\n")]=0;
        if(strlen(input) >= MAX) {
            clean();
        }
        printf("//Select a name for the for loop int i is the usual.\n");
        while(fgets(forLoopInt,SIZE,stdin) == NULL) {
            checkInput();
        }
        forLoopInt[strcspn(forLoopInt,"\n")]=0;
        if(strlen(forLoopInt) >= MAX) {
            clean();
        }
        if(strcmp(forLoopInt,"m")==0) {
            break;
        }
        printf("//Enter the number of elements in arrays.\n");
        while(fgets(elements,SIZE,stdin) == NULL) {
            checkInput();
        }
        elements[strcspn(elements,"\n")]=0;
        if(strlen(elements) >= MAX) {
            clean();
        }
        printf("//Enter a key error message m for main.\n");
        while(fgets(error,SIZE,stdin) == NULL) {
            checkInput();
        }
        error[strcspn(error,"\n")]=0;
        if(strlen(error) >= MAX) {
            clean();
        }
        printf("//Enter a format specifier s for string i for int d for double.\n");
        while(1) {
            if(fgets(format,SIZE,stdin) == NULL) {
                checkInput();
                continue;
            }
            if(strlen(format) >= MAX) {
                clean();
            }
            format[strcspn(format,"\n")]=0;
            if(strcmp(format,"s")!=0 && strcmp(format,"i")!=0 && strcmp(format,"d")!=0){
                printf("//\nEnter s i or d only.\n\n");
            }else{
                break;
            }
        }
        if(strcmp(format,"s")==0){
            strcpy(format,end[1]);
        }else if(strcmp(format,"i")==0) {
            strcpy(format,end[2]);
        }else if(strcmp(format,"d")==0) {
            strcpy(format,end[3]);
        }             
        printf("\n%s%s%s\n",loop[0],input,loop[1]); 
        printf("%s%s%s%s%s%s%s%s%s\n",loop[2],forLoopInt,loop[3],forLoopInt,loop[4],elements,loop[5],forLoopInt,loop[6]);
        printf("%s%s%s%s%s%s%s%s\n",ifStatement[0],select,ifStatement[1],keyArray,ifStatement[2],forLoopInt,ifStatement[3],ifStatement[4]);
        printf("%s%s%s%s%s\n",ifStatement[10],input,ifStatement[5],forLoopInt,ifStatement[6]);
        printf("%s\n%s\n",ifStatement[8],ifStatement[9]);
        printf("%s%s%s\n",keyError[0],input,keyError[1]);
        printf("%s%s%s%s%s%s\n",keyError[2],keyError[3],error,keyError[3],keyError[3],keyError[4]);
        printf("%s\n",keyError[5]);
        printf("%s\n",keyError[6]); 
        printf("%s%s%s%s%s%s%s%s%s%s\n\n",end[0],format,end[4],end[5],end[6],valueArray,end[7],input,end[8],end[9]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
    free(keyArray);
    keyArray = NULL;
    free(valueArray);
    valueArray = NULL; 
    free(select);
    select = NULL;
    free(input);
    input = NULL;
    free(forLoopInt);
    forLoopInt = NULL;
    free(elements);
    elements = NULL;
    free(error);
    error = NULL;
    free(format);
    format = NULL;
}

void mapNum() {
    char loop [7] [25] = {"int "," = -1;","for(int "," = 0;","<",";","++) {"};
    char ifStatement [12] [25] = {"    if(",", ","[","]",") {"," = ",";","}","    }","}","        "," == "};
    char keyError [7] [25] = {"if(", " == -1) {", "    printf(\"", "\\n", "\");","    continue;","}"};
    char end [10] [25] = {"printf(\"","%s","%d","%f","\\n","\"",",","[","]",");"};
    char *keyArray;
    char *valueArray;
    char *select;
    char *input;
    char *forLoopInt;
    char *elements;
    char *error;
    char *format;

        keyArray = (char*)malloc(SIZE* sizeof(char));
        valueArray = (char*)malloc(SIZE* sizeof(char));
        select = (char*)malloc(SIZE* sizeof(char));
        input = (char*)malloc(SIZE* sizeof(char));
        forLoopInt = (char*)malloc(SIZE* sizeof(char));
        elements = (char*)malloc(SIZE* sizeof(char));
        error = (char*)malloc(SIZE* sizeof(char));
        format = (char*)malloc(SIZE* sizeof(char));
        if(keyArray == NULL || valueArray == NULL || select == NULL || input == NULL || forLoopInt == NULL || elements == NULL || error == NULL || format == NULL) {
            printf("\nInsufficent memory.\n\n");
            exit(1);
        }
    while(1) {
        printf("//Enter the name of the key array m for main.\n");
        printf("//The key array must be a int or double.\n");
        while(fgets(keyArray,SIZE,stdin) == NULL) {
            checkInput();
        }
        keyArray[strcspn(keyArray,"\n")]=0;
        if(strlen(keyArray) >= MAX) {
            clean();
        }
        if(strcmp(keyArray,"m") == 0) {
            break;
        }
        printf("//Enter the value array.\n");
        while(fgets(valueArray,SIZE,stdin) == NULL) {
            checkInput();
        }
        valueArray[strcspn(valueArray,"\n")]=0;
        if(strlen(valueArray) >= MAX) {
            clean();
        }
        printf("//Enter the name of the  int or double user input.\n");
        while(fgets(select,SIZE,stdin) == NULL) {
            checkInput();
        }
        select[strcspn(select,"\n")]=0;
        if(strlen(select) >= MAX) {
            clean();
        } 
        printf("//Select the name of the variable that stores the key to be selected.\n");
        printf("//Index or number is good.\n");
        while(fgets(input,SIZE,stdin) == NULL) {
            checkInput();
        }
        input[strcspn(input,"\n")]=0;
        if(strlen(input) >= MAX) {
            clean();
        }
        printf("//Select a name for the for loop int i is the usual m for main.\n");
        while(fgets(forLoopInt,SIZE,stdin) == NULL) {
            checkInput();
        }
        forLoopInt[strcspn(forLoopInt,"\n")]=0;
        if(strlen(forLoopInt) >= MAX) {
            clean();
        }
        if(strcmp(forLoopInt,"m") == 0) {
            break;
        }
        printf("//Enter the number of elements in arrays.\n");
        while(fgets(elements,SIZE,stdin) == NULL) {
            checkInput();
        }
        elements[strcspn(elements,"\n")]=0;
        if(strlen(elements) >= MAX) {
            clean();
        }
        printf("//Enter a key error message.\n");
        while(fgets(error,SIZE,stdin) == NULL) {
            checkInput();
        }
        error[strcspn(error,"\n")]=0;
        if(strlen(error) >= MAX) {
            clean();
        }
        printf("//Enter a format specifier s for string i for int d for double.\n");
        while(1) {
            if(fgets(format,SIZE,stdin) == NULL) {
                checkInput();
                continue;
            }
            if(strlen(format) >= MAX) {
                clean(); 
            }
            format[strcspn(format,"\n")]=0;
            if(strcmp(format,"s")!=0 && strcmp(format,"i")!=0 && strcmp(format,"d")!=0){
                printf("//\nEnter s i or d only.\n\n");
            }else{
                break;
            }
        }
        if(strcmp(format,"s")==0){
            strcpy(format,end[1]);
        }else if(strcmp(format,"i")==0) {
            strcpy(format,end[2]);
        }else if(strcmp(format,"d")==0) {
            strcpy(format,end[3]);
        }
        printf("\n%s%s%s\n",loop[0],input,loop[1]);
        printf("%s%s%s%s%s%s%s%s%s\n",loop[2],forLoopInt,loop[3],forLoopInt,loop[4],elements,loop[5],forLoopInt,loop[6]);
        printf("%s%s%s%s%s%s%s%s\n",ifStatement[0],select,ifStatement[11],keyArray,ifStatement[2],forLoopInt,ifStatement[3],ifStatement[4]);
        printf("%s%s%s%s%s\n",ifStatement[10],input,ifStatement[5],forLoopInt,ifStatement[6]);
        printf("%s\n%s\n",ifStatement[8],ifStatement[9]);
        printf("%s%s%s\n",keyError[0],input,keyError[1]);
        printf("%s%s%s%s%s%s\n",keyError[2],keyError[3],error,keyError[3],keyError[3],keyError[4]);
        printf("%s\n",keyError[5]);
        printf("%s\n",keyError[6]);
        printf("%s%s%s%s%s%s%s%s%s%s\n\n",end[0],format,end[4],end[5],end[6],valueArray,end[7],input,end[8],end[9]);
        if (strcmp(repeat, "r") != 0) {
            break; 
        }
    }
    free(keyArray);
    keyArray = NULL;
    free(valueArray);
    valueArray = NULL; 
    free(select);
    select = NULL;
    free(input);
    input = NULL;
    free(forLoopInt);
    forLoopInt = NULL;
    free(elements);
    elements = NULL;
    free(error);
    error = NULL;
    free(format);
    format = NULL;
}

void funct() {
    const char* t[] = {"void ", "(", "){", "}"};
    char *name;
    char *per;

    name = (char *)malloc(SIZE * sizeof(char));
    per = (char *)malloc(SIZE * sizeof(char));
    if (name == NULL || per == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Name function m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean(); 
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter parameters.\n");
        printf("//");
        while(fgets(per, SIZE, stdin) == NULL) {
            checkInput();
        } 
        per[strcspn(per, "\n")] = 0;
        if(strlen(per) >= MAX) {
            clean();
        }
        printf("\n%s%s%s%s%s\n\n\n%s\n\n", t[0], name, t[1], per, t[2], t[3]);
        if(strcmp(repeat, "r")!=0) {
            break;     
        }
    }
    free(name);
    name = NULL;
    free(per);
    per = NULL;
}

void callFunct() {
    const char* t[] = {"(", ");"};
    char *name;
    char *per;

    name = (char *)malloc(SIZE * sizeof(char));
    per = (char *)malloc(SIZE * sizeof(char));
    if (name == NULL || per == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter the name of function m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter values for parameters.\n");
        printf("//");
        while(fgets(per, SIZE, stdin) == NULL) {
            checkInput();
        }
        per[strcspn(per, "\n")] = 0;
        if(strlen(per) >= MAX) {
            clean();
        }
        printf("\n%s%s%s%s\n\n", name, t[0], per, t[1]);
        if(strcmp(repeat, "r")!=0) {
            break;      
        }
    }
    free(name);
    name = NULL;
    free(per);
    per = NULL;
}

void heap() {
    const char* t[] = {"char", " *", ";", " = (char*)malloc", "(", ");", "* sizeof(char));", "free", " = NULL;"};
    char *name;
    char *mem;

    name = (char *)malloc(SIZE * sizeof(char));
    mem = (char *)malloc(SIZE * sizeof(char));
    if (name == NULL || mem == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter the name of the variable m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter memory to allocate.\n");
        printf("//");
        while(fgets(mem, SIZE, stdin) == NULL) {
            checkInput();
        }
        mem[strcspn(mem, "\n")] = 0;
        if(strlen(mem) >= MAX) {
            clean();
        }
        printf("\n");
        printf("\n%s%s%s%s\n\n", t[0], t[1], name, t[2]);
        printf("%s%s%s%s%s\n\n", name, t[3], t[4], mem, t[5]);
        printf("%s%s%s%s%s\n\n", name, t[3], t[4], mem, t[6]);
        printf("%s%s%s%s\n", t[7], t[4], name, t[5]);
        printf("%s%s\n\n", name, t[8]);
        if(strcmp(repeat, "r")!=0) {
            break;     
        }
    } 
    free(name);
    name = NULL;
    free(mem);
    mem = NULL;
}

void heapNum() {
    const char* t[] = {"int"," *",";"," = (int*)malloc","(",");","* sizeof(int));","free"," = NULL;","double","float"," = (double*)malloc"," = (float*)malloc","* sizeof(double));","* sizeof(float));"};                  
    char *name;
    char *mem;

    name = (char *)malloc(SIZE * sizeof(char));
    mem = (char *)malloc(SIZE * sizeof(char));
    if (name == NULL || mem == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter the name of the variable m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter memory to allocate.\n");
        printf("//");
        while(fgets(mem, SIZE, stdin) == NULL) {
            checkInput();
        }
        mem[strcspn(mem, "\n")] = 0;
        if(strlen(mem) >= MAX) {
            clean();
        }
        printf("\n");
        printf("%s%s%s%s\n\n", t[0], t[1], name, t[2]);
        printf("%s%s%s%s\n\n", t[9], t[1], name, t[2]);
        printf("%s%s%s%s\n\n", t[10], t[1], name, t[2]);
        printf("%s%s%s%s%s\n\n", name, t[3], t[4], mem, t[6]);
        printf("%s%s%s%s%s\n\n", name, t[11], t[4], mem, t[13]);
        printf("%s%s%s%s%s\n\n", name, t[12], t[4], mem, t[14]);
        printf("%s%s%s%s\n", t[7], t[4], name, t[5]);
        printf("%s%s\n\n", name, t[8]);
        if(strcmp(repeat, "r")!=0) {
            break;     
        }
    }
    free(name);
    name = NULL;
    free(mem);
    mem = NULL;
}

void checkMalloc() {
    const char* t[] = {"if(", " == NULL){", "    printf(\"", "\\n", "\");", "    exit(1);}"};
    char *name;
    char *em;

    name = (char *)malloc(SIZE * sizeof(char));
    em = (char *)malloc(SIZE * sizeof(char));
    if (name == NULL || em == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Enter the name m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter an error message.\n");
        printf("//");
        while(fgets(em, SIZE, stdin) == NULL) {
            checkInput();
        }
        em[strcspn(em, "\n")] = 0;
        if(strlen(em) >= MAX) {
            clean();
        }
        printf("\n%s%s%s\n", t[0], name, t[1]);
        printf("%s%s%s%s\n", t[2], em, t[3], t[4]);
        printf("%s\n\n", t[5]);
        if(strcmp(repeat, "r")!=0) {
            break;     
        }
    }
    free(name);
    name = NULL;
    free(em);
    em = NULL;
}

void variableNum() {
    const char* t[] = {"double ", "int ", " = ", ";", " ;"};
    char *ch;
    char *name;
    char *value;

    ch = (char *)malloc(SIZE * sizeof(char));
    name = (char *)malloc(SIZE * sizeof(char));
    value = (char *)malloc(SIZE * sizeof(char));
    if (ch == NULL || name == NULL || value == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Choose i for int d for double, m for main.\n");
        printf("//");
        while(fgets(ch, SIZE, stdin) == NULL) {
            checkInput();
        }
        ch[strcspn(ch, "\n")] = 0;
        if(strlen(ch) >= MAX) {
            clean();
        }
        if (strcmp(ch, "m") == 0) {
            break;
        } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
            printf("Choose i or d or m only.\n");
            continue;
        }
        printf("Enter the name.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        printf("Enter a value.\n");
        printf("//");
        while(fgets(value, SIZE, stdin) == NULL) {
            checkInput();
        }
        value[strcspn(value, "\n")] = 0;
        if(strlen(value) >= MAX) {
            clean();
        }
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[1], name, t[2], value, t[3]);
            if(strcmp(repeat, "r")!=0) {
                break;
            }
        } else if (strcmp(ch, "d") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], name, t[2], value, t[3]);
            if(strcmp(repeat, "r")!=0) {
                break;    
            }
        }
    }
    free(ch);
    ch = NULL;
    free(name);
    name = NULL;
    free(value);
    value = NULL;
}

void varNoValue() {
    const char* t[] = {"double ", "int ", ";"};
    char *ch;
    char *name;

    ch = (char *)malloc(SIZE * sizeof(char));
    name = (char *)malloc(SIZE * sizeof(char));
    if (ch == NULL || name == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Choose i for int d for double, m for main.\n");
        printf("//");
        while(fgets(ch, SIZE, stdin) == NULL) {
            checkInput();
        }
        ch[strcspn(ch, "\n")] = 0;
        if(strlen(ch) >= MAX) {
            clean();
        }
        if (strcmp(ch, "m") == 0) {
            break;
        } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
            printf("Choose i or d or m only.\n");
            continue;
        }
        printf("Enter the name.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s\n\n", t[1], name, t[2]);
            if (strcmp(repeat, "r")!=0) {
                break;
            }
        } else if (strcmp(ch, "d") == 0) {
            printf("\n%s%s%s\n\n", t[0], name, t[2]);
            if(strcmp(repeat, "r")!=0) {
                break;       
            }
        }
    }
    free(ch);
    ch = NULL;
    free(name);
    name = NULL;    
}

void scanfNum() {
    const char* t[] = {"scanf(\"", "\%d\"", "\%lf\"", ",", " &", ");"};
    char *ch;
    char *name;

    ch = (char *)malloc(SIZE * sizeof(char));
    name = (char *)malloc(SIZE * sizeof(char));
    if (ch == NULL || name == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Choose i for int d for double or m for main.\n");
        printf("//");
        while(fgets(ch, SIZE, stdin) == NULL) {
            checkInput();
        }
        ch[strcspn(ch, "\n")] = 0;
        if(strlen(ch) >= MAX) {
            clean();
        }
        if (strcmp(ch, "m") == 0) {
            break;
        } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
            printf("Choose i or d or m only.\n");
            continue;
        }
        printf("//Enter the name of variable.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s%s%s%s\n\n", t[0], t[1], t[3], t[4], name, t[5]);
            if(strcmp(repeat, "r")!=0) {
                break;     
            }
        } else if (strcmp(ch, "d") == 0) {
            printf("\n%s%s%s%s%s%s\n\n", t[0], t[2], t[3], t[4], name, t[5]);
            if(strcmp(repeat, "r")!=0) {
                break;    
            }
        }
    }
    free(ch);
    ch = NULL;
    free(name);
    name = NULL;
}

void scanfHeap() {
    const char* t[] = {"scanf(\"", "\%d\"", "\%lf\"", ",", ");", "\%f\""};    
    char *ch;
    char *name;

    ch = (char *)malloc(SIZE * sizeof(char));
    name = (char *)malloc(SIZE * sizeof(char));
    if (ch == NULL || name == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Choose i for int f for float or d for double or m for main.\n");
        printf("//");
        while(fgets(ch, SIZE, stdin) == NULL) {
            checkInput();
        }
        ch[strcspn(ch, "\n")] = 0;
        if(strlen(ch) >= MAX) {
            clean();
        }
        if (strcmp(ch, "m") == 0) {
            break;
        } else if (strcmp(ch, "i") != 0 && strcmp(ch, "f") != 0 && strcmp(ch, "d") != 0) {
            printf("Choose i, f, d  or m only.\n");
            continue;
        }
        printf("//Enter the name of variable.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], t[1], t[3], name, t[4]);
            if(strcmp(repeat, "r")!=0) {
                break; 
            }
        } else if (strcmp(ch, "d") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], t[2], t[3], name, t[4]);
            if(strcmp(repeat, "r")!=0) {
                break; 
            }
        } else if (strcmp(ch, "f") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], t[5], t[3], name, t[4]);
            if(strcmp(repeat, "r")!=0) {
                break;    
            }
        }
    }
    free(ch);
    ch = NULL;
    free(name);
    name = NULL;
}

void checkScanf() {
    const char* t[] = {"if(scanf(\"", "\%d\"", "\%lf\"", ",", " &", ")!=1){", "while(scanf(\""};
    char *ch;
    char *name;

    ch = (char *)malloc(SIZE * sizeof(char));
    name = (char *)malloc(SIZE * sizeof(char));
    if (ch == NULL || name == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Choose i for int d for double or m for main.\n");
        printf("//");
        while(fgets(ch, SIZE, stdin) == NULL) {
            checkInput();
        }
        ch[strcspn(ch, "\n")] = 0;
        if(strlen(ch) >= MAX) {
            clean();
        }
        if (strcmp(ch, "m") == 0) {
            break;
        } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
            printf("\n//Choose i or d or m only.\n\n");
            continue;
        }
        printf("//Enter the name of variable.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s%s%s%s\n\n", t[0], t[1], t[3], t[4], name, t[5]);
            printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[0], t[1], t[3], name, t[5]);
            printf("\n%s%s%s%s%s%s\n\n", t[6], t[1], t[3], t[4], name, t[5]);
            printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[6], t[1], t[3], name, t[5]);	
            if(strcmp(repeat,"r")!=0) { 
                printf("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n");
                break;
            }
        } else if (strcmp(ch, "d") == 0) {
            printf("\n%s%s%s%s%s%s\n\n", t[0], t[2], t[3], t[4], name, t[5]);
            printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[0], t[2], t[3], name, t[5]);
            printf("\n%s%s%s%s%s%s\n\n", t[6], t[2], t[3], t[4], name, t[5]);
            printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[6], t[2], t[3], name, t[5]);
        }
        printf("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n");
        if(strcmp(repeat, "r")!=0) {
            break;     
        }
    }
    free(ch);
    ch = NULL;
    free(name);
    name = NULL; 
}

void checkScanfL() {
    const char* t[] = {"if(scanf(\"", "%","d\"", "lf\"", ",", " &", ")!=1){", "while(scanf(\""};
    char *ch;
    char *name;
    char *mem;

    ch = (char *)malloc(SIZE * sizeof(char));
    name = (char *)malloc(SIZE * sizeof(char));
    mem = (char *)malloc(SIZE * sizeof(char));
    if (ch == NULL || name == NULL || mem == NULL) {
        printf("Error: Insufficent memory.\n");
        exit(1);
    }
    while (1) {
        printf("//Choose i for int d for double or m for main.\n");
        printf("//");
        while(fgets(ch, SIZE, stdin) == NULL) {
            checkInput();
        }
        ch[strcspn(ch, "\n")] = 0;
        if(strlen(ch) >= MAX) {
            clean();
        }
        if (strcmp(ch, "m") == 0) {
            break;
        } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
            printf("Choose i or d or m only.\n");
            continue;
        }
        printf("//Enter the name of variable.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if(strlen(name) >= MAX) {
            clean();
        }
        printf("//Enter memory allocated to variable.\n");
        printf("//");
        while(fgets(mem,SIZE,stdin) == NULL) {
            checkInput();
        }
        mem[strcspn(mem,"\n")]=0;
        if(strlen(mem) >= MAX) {
            clean();
        }
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s%s%s%s%s%s\n\n", t[0], t[1],mem,t[2], t[4], t[5], name, t[6]);
            printf("\n%s%s%s%s%s%s%s    //Use with malloc.\n\n", t[0], t[1],mem,t[2], t[4], name, t[6]);
            printf("\n%s%s%s%s%s%s%s%s\n\n", t[7], t[1],mem, t[2], t[4],t[5], name,t[6]);
            printf("\n%s%s%s%s%s%s%s    //Use with malloc.\n\n", t[7], t[1],mem,t[2], t[4], name, t[6]); 
            if(strcmp(repeat, "r")!=0) {
                printf("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n");
                break;
            }
        } else if (strcmp(ch, "d") == 0) {
            printf("\n%s%s%s%s%s%s%s%s\n \n", t[0],t[1],mem, t[3], t[4], t[5], name, t[6]);
            printf("\n%s%s%s%s%s%s%s    //Use with malloc.\n\n", t[0],t[1],mem, t[3], t[4], name, t[6]);
            printf("\n%s%s%s%s%s%s%s%s\n\n", t[7], t[1],mem, t[3], t[4], t[5],name, t[6]);
            printf("\n%s%s%s%s%s%s%s    //Use with malloc.\n\n", t[7], t[1],mem, t[3], t[4],name, t[6]);
        }
        printf("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n");
        if(strcmp(repeat, "r")!=0) {
            break; 
        }
    }
    free(ch);
    ch = NULL;
    free(name);
    name = NULL;
    free(mem);
    mem = NULL;
}

void copy() {
    printf("\n");
    printf("#include <stdio.h>\n");
    printf("\n");
    printf("#include <stdio_ext.h>\n");
    printf("\n");
    printf("#include <string.h>\n");
    printf("\n");
    printf("#include <stdlib.h>\n");
    printf("\n");
    printf("#include <errno.h>\n");
    printf("\n");
    printf("while(1) {\n");
    printf("\n");
    printf("break;\n");
    printf("\n");
    printf("break;}\n");
    printf("\n");
    printf("continue;\n");
    printf("\n");
    printf("continue;}\n");
    printf("\n");
    printf("int main() {\n");
    printf("\n");
    printf("fflush(stdin);\n");
    printf("\n");
    printf("__fpurge(stdin);\n");
    printf("\n");
    printf("getchar();\n");
    printf("\n");
    printf("} else {\n");
    printf("\n");
    printf("else {\n");
    printf("\n");
    printf("    }\n");
    printf("}\n");
    printf("\n");
    printf("return 0;\n");
    printf("}\n");
    printf("\n");
}

int main() {
    const char *keys[] = {
        "ch",
        "cy",
        "b",
        "c",
        "bl",
        "f",
        "fs",
        "fcb",
        "fi",
        "fib",
        "s",
        "sb",
        "cb",
        "bh",
        "i",
        "e",
        "mi",
        "min",
        "in",
        "im",
        "v",
        "vv",
        "a",
        "ia",
        "ma",
        "mn",
        "fc",
        "cf",
        "h",
        "hi",
        "cm",
        "vi",
        "vn",
        "si",
        "sh",
        "sc",
        "csl", 
    };
    typedef void (*FunctPtr)();
    FunctPtr values[] = { 
        choice,
        copy,
        string,
        stringEmpty,
        stringLiteral,
        fgetss,
        fgetsSizeof,
        checkFgets,
        stringToInt,
        stringToIntBasic,
        scanff,
        scanfBasic,
        clearBuffC,
        binHex,
        ifStatement,
        elseIf,
        multiIf,
        multiIfNumber,
        ifNumber,
        ifHeap,
        variable,
        variableValue,
        array,
        numArray,
        mapArrays,
        mapNum,
        funct,
        callFunct,
        heap,
        heapNum,
        checkMalloc,
        variableNum,  
        varNoValue, 
        scanfNum,    
        scanfHeap,
        checkScanf,
        checkScanfL, 
    };

    char sw[25];

    printf("          copyright 2026 Mitchell E Wise\n");
    printf("          SPDX-License-Identifier: Apache-20\n\n\n");

    printf("//Enter r to repeat choices enter to not.\n");
    while(fgets(repeat,sizeof(repeat), stdin) == NULL) {
        checkInput();
    }
    repeat[strcspn(repeat, "\n")] = 0;
    if (strlen(repeat) >= 49) {
        clean(); 
    }
    choice();
    while (1) {
        printf("//Enter a selection from choices x to exit ch for choices.\n");
        printf("//");
        while(fgets(sw,sizeof(sw), stdin) == NULL) {
            checkInput();
        }
        sw[strcspn(sw, "\n")] = 0;
        if (strlen(sw) >= 24) {
            clean(); 
        }
        if(strcmp(sw,"x")==0){
            break;
        } 
        int index = -1;
        for(int i = 0; i<37;i++) {
            if(strcmp(sw, keys[i])==0){
                index = i;
            }
        }
        if(index == -1) {
            printf("\n//Enter a name in choices.\n\n");
            continue;
        }
        //printf("%p\n",values[index]); //Uncomment printf to display memory addresses.
        values[index]();
    }
    return 0;
}









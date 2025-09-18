// Copyright 2023-2025 Mitchell E Wise
// SPDX-License-Identifier: Apache-20

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100
#define MAX 99

/*To use CONST int SIZE and const int MAX comment out the #define SIZE 
  and the #define MAX and uncomment the const int variables.*/

//const int SIZE = 100;
//const int MAX = 99;
char repeat[100];

void clear(){
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
    printf("//Enter a for arrays.\n");
    printf("//Enter ia for arrays with numbers .\n");
    printf("//Enter b for strings with printf.\n");
    printf("//Enter c for strings with no quotation marks.\n");
    printf("//Enter cy for what's needed to copy and paste to finish a simple program.\n");
    printf("//Enter i for if statements e for else if for strings.\n");
    printf("//Enter mi for if statements with 2 conditions.\n");
    printf("//Enter in for if and else if statements for numbers.\n");
    printf("//Enter im for if and else if statements for numbers if malloc is used.\n");
    printf("//Enter f for fgets.\n");
    printf("//Enter fs for fgets with sizeof operator.\n");
    printf("//Enter fb for fgets to use with cb to clear input buffer without having ");
    printf("to press enter twice.\n");
    printf("//Enter s for scanf for strings to allow for white spaces.\n");
    printf("//Enter sb for scanf basic no white spaces.\n");
    printf("//Enter si for scanf for integers and doubles.\n");
    printf("//Enter sh for scanf for ints and doubles on the heap.\n");
    printf("//Enter sc for check scanf.\n");
    printf("//Enter csl to check scanf and limmit size.\n");
    printf("//Enter cb to clear input buffer\n");
    printf("//Enter bh to convert letters to binary and hexadecimal numbers.\n");
    printf("//Enter h to allocate memory on the heap.\n");
    printf("//Enter hi to allocate numbers on the heap.\n");
    printf("//Enter cm to check malloc.\n");
    printf("//Enter fc for void functions.\n");
    printf("//Enter cf to call functions \n");
    printf("//Enter v for variables without assigning a value.\n");
    printf("//Enter vv for variables with assigning a string value.\n");
    printf("//Enter vi for int and double variables.\n");
    printf("//Enter vn for int and double variables with no value,\n");
    printf("//Enter m for main x to exit.\n");
}

void string() {
    char string[3][15] = {"printf(\"", "\\n", "\");"};
    char text[SIZE];
    printf("//Enter your string, m for main.\n");
    while (1) {
        printf("//");
        while(fgets(text, SIZE, stdin) == NULL) {
            checkInput();
        }
        text[strcspn(text, "\n")] = 0;
        if (strlen(text) >= MAX) {
            clear();
        }
        if (strcmp(text, "m") == 0) {
            break;
        }
        printf("\n%s%s%s%s\n\n", string[0], text, string[1], string[2]);
        printf("\n%s%s%s%s%s%s\n\n", string[0], string[1], text, string[1],string[1], string[2]);
        printf("%s%s%s\n\n", string[0], text, string[2]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void stringEmpty() {
    char t[2][12] = {"printf(", ");"};
    char text[SIZE];

    printf("//Enter text m for main.\n");
    while (1) {
        printf("//");
        while(fgets(text,SIZE, stdin) == NULL) {
            checkInput();
        }
        text[strcspn(text, "\n")] = 0;
        if (strlen(text) >= MAX) {
            clear();
        }
        if (strcmp(text, "m") == 0) {
            break;
        }
        printf("\n%s%s%s\n\n", t[0], text, t[1]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void fgetss() {
    char f[8][15] = {"fgets(", ",", "stdin);", "[strcspn(", "\"\\n", "\")]=0;", "[strlen(", ")-1] = '\\0';"};
    char w[9][15] = {"while(fgets(", ",", "stdin)){", "[strcspn(", "\"\\n", "\")]=0;", "[strlen(", ")-1] = '\\0';", "      "};

    char v[SIZE];
    char me[SIZE];

    while (1) {
        printf("//Enter name of variable m for main.\n");
        printf("//");
        while(fgets(v,SIZE, stdin) == NULL) {
            checkInput();
        }
        v[strcspn(v, "\n")] = 0;
        if (strlen(v) >= MAX) {
            clear();
        }
        if (strcmp(v, "m") == 0) {
            break;
        }
        printf("//Enter the memory to be allocated to the variable.\n");
        printf("//");
        while(fgets(me,SIZE, stdin) == NULL) {
            checkInput();
        }
        me[strcspn(me, "\n")] = 0;
        if (strlen(me) >= MAX) {
            clear();
        }
        printf("\n%s%s%s%s%s%s\n", f[0], v, f[1], me, f[1], f[2]);
        printf("%s%s%s%s%s%s\n\n", v, f[3], v, f[1], f[4], f[5]);
        printf("%s%s%s%s%s%s\n", w[0], v, w[1], me, w[1], w[2]);
        printf("%s%s%s%s%s%s%s\n\n", w[8], v, w[3], v, w[1], w[4], w[5]);
        printf("\n%s%s%s%s%s%s\n", f[0], v, f[1], me, f[1], f[2]);
        printf("%s%s%s%s\n\n", v, f[6], v, f[7]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void fgetsSizeof() {
    char f[12][15] = {"fgets(", ",","sizeof(", "),stdin);", "[strcspn(", "\"\\n", "\")]=0;", "[strlen(", ")-1] = '\\0';","while(", "      ", "),stdin)) {"};
    char name[SIZE];

    while (1) {
        printf("//Enter name of variable m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear();
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
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void fgetsBuffer() {
    char f[12][15] = {"fgets(", ",", "stdin);", "[strcspn(", "\"\\n", "\")]=0;", "while(", "      ", "stdin)) {","sizeof(","),stdin);","),stdin)) {"};
    char v[SIZE];
    char me[10];
    char function[SIZE];
    int m;

    while (1) {
        printf("//Enter name of variable m for main.\n");
        printf("//");
        while(fgets(v, SIZE, stdin) == NULL) {
            checkInput();
        }
        v[strcspn(v, "\n")] = 0;
        if(strlen(v) >= MAX){ 
            clear();
        }
        if (strcmp(v, "m") == 0) {
            break;
        }
        printf("//Enter the memory to be allocated to the variable 5 minimum.\n");
        printf("//");
        while(fgets(me, sizeof(me), stdin) == NULL || (1)) {
            clearerr(stdin);

            if(strlen(me) >= 9){ 
                clear();
            }
            m = atoi(me);
            if(m <=4) {
                printf("\n//Enter a number 5 or more.\n\n");
            } else {
                break;
            }
        }
        me[strcspn(me, "\n")] = 0;
        printf("//Enter the function name.\n");
        while(fgets(function,SIZE,stdin) == NULL) {
            checkInput();
        }
        function[strcspn(function,"\n")]=0;
        if(strlen(v) >= MAX){ 
            clear();
        }
        printf("\n%s%s%s%s%s%s\n", f[0], v, f[1], me, f[1], f[2]);
        printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4], f[5]);
        printf("if(strlen(%s) >= %d) {\n",v,m - 1);
        printf("    %s();\n",function);
        printf("}\n\n");
        printf("\n%s%s%s%s%s%s%s\n",f[6], f[0], v, f[1], me, f[1], f[8]);
        printf("%s%s%s%s%s%s%s\n",f[7], v, f[3], v, f[1], f[4], f[5]);
        printf("    if(strlen(%s) >= %d) {\n",v,m - 1);
        printf("        %s();\n",function);
        printf("    }\n\n");

        printf("\n%s%s%s%s%s%s\n", f[0], v, f[1],f[9],v,f[10]);
        printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4], f[5]);
        printf("if(strlen(%s) >= %d) {\n",v,m - 1);
        printf("    %s();\n",function);
        printf("}\n\n");
        printf("\n%s%s%s%s%s%s%s\n",f[6], f[0], v, f[1],f[9],v, f[11]);	
        printf("%s%s%s%s%s%s%s\n",f[7], v, f[3], v, f[1], f[4], f[5]);
        printf("    if(strlen(%s) >= %d) {\n",v,m - 1);
        printf("        %s();\n",function);
        printf("    }\n\n");
        memset(me, '\0',sizeof(me));
        if (strcmp(repeat, "r") != 0) {
            break;
        }	
    }     
}

void scanff() {
    char t[6][15] = {"scanf(\"", "%", "[^\\n]\"", ",", ");", "getchar();"};
    char var[SIZE];
    char mem[10];
    int m;

    while (1) {
        printf("//Enter the name of variable m for main.\n");
        printf("//");
        while(fgets(var,SIZE, stdin) == NULL) {
            checkInput();
        }
        var[strcspn(var, "\n")] = 0;
        if (strlen(var) >= MAX) {
            clear();
        }
        if (strcmp(var, "m") == 0) {
            break;
        }
        printf("//Enter memory allocated to variable 2 or more.\n");
        printf("//");
        while(fgets(mem,10, stdin) == NULL || (1)){
            clearerr(stdin);

            if (strlen(mem) >= 9) {
                clear();
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
        printf("\n%s%s%d%s%s%s%s\n", t[0], t[1], m - 1, t[2], t[3], var, t[4]);
        printf("%s\n\n", t[5]);
        memset(mem, '\0', sizeof(mem));
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void scanfBasic() {
    char t[5][15] = {"scanf(\"", "%", "s\"", ", ", ");"};
    char var[SIZE];
    char mem[10];
    int m;

    while (1) {
        printf("//Enter the name of variable m for main.\n");
        printf("//");
        while(fgets(var,SIZE, stdin) == NULL) {
            checkInput();
        }
        var[strcspn(var, "\n")] = 0;
        if (strlen(var) >= MAX) {
            clear();
        }
        if (strcmp(var, "m") == 0) {
            break;
        }
        printf("//Enter memory allocated to variable 2 or higher.\n");
        printf("//");
        while(fgets(mem,10, stdin) == NULL || (1)){
            clearerr(stdin);

            if (strlen(mem) >= 9) {
                clear();
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
        printf("\n%s%s%d%s%s%s%s\n\n", t[0], t[1], m - 1, t[2], t[3], var, t[4]);
        memset(mem, '\n',sizeof(mem));
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void clearBuffC() {
    char t[5][12] = {"void ", "(", "){", "}","();"};	
    char name[SIZE];

    while (1) {
        printf("//Name function m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear();
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
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }	
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
    char key [59] [100];
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

    char value [59] [100];
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

    char select [10];

    while(1) {
        int number = -1;
        int i = 0;
        printf("//Enter a letter to get a binary and hexadecimal number.\n");
        printf("//Enter ii for index mn for main.\n");
        while(fgets(select,sizeof(select),stdin) == NULL){
            clearerr(stdin);
            printf("\nInvalid input.\n\n");
        }
        select[strcspn(select,"\n")]=0;
        if(strlen(select) >= 9) {
            clear();
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
}

void ifStatement() {
    char f[4][15] = {"if(strcmp(", ",", "\"", ")==0) {"};
    char name[SIZE];
    char value[SIZE];

    while (1) {
        printf("//Enter name of the if statement m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter the value.\n");
        printf("//");
        while(fgets(value,SIZE, stdin) == NULL) {
            checkInput();
        }
        value[strcspn(value, "\n")] = 0;
        if (strlen(value) >= MAX) {
            clear();
        }
        printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2], value, f[2], f[3]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void elseIf() {
    char f[4][18] = {"} else if(strcmp(", ",", "\"", ")==0) {"};
    char name[SIZE];
    char value[SIZE];

    while (1) {
        printf("//Enter name of the else if statement m for main.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear();
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
        if (strlen(value) >= MAX) {
            clear();
        }
        printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2], value, f[2], f[3]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void multiIf() {
    char t[11][30] = {"if(strcmp(", ",", "} else if(strcmp(", "\"", ")==0", ")!=0", ")==0) {", ")!=0) {", " && ", " || ", "strcmp("};
    char select[SIZE];
    char name[SIZE];
    char value[SIZE];
    char op[SIZE];
    char compare[SIZE];
    char sname[SIZE];
    char svalue[SIZE];
    char scompare[SIZE];

    while (1) {
        printf("//Enter i for if, e for else if.\n");
        while (fgets(select, SIZE, stdin) == NULL || (1)) {
            clearerr(stdin); 
            if (strlen(select) >= MAX) {
                clear(); 
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
            strcpy(select, t[2]);
        }
        printf("//Enter a name of first m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter a value.\n");
        printf("//");
        while(fgets(value,SIZE, stdin) == NULL) {
            checkInput();
        }
        value[strcspn(value, "\n")] = 0;
        if (strlen(value) >= MAX) {
            clear();
        }
        printf("//Enter a comparison a for equal b for not equal.\n");
        printf("//");
        while (fgets(compare,SIZE, stdin) == NULL || (1)) {
            clearerr(stdin);

            if (strlen(compare) >= MAX) {
                clear();
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
        while (fgets(op, SIZE, stdin) == NULL || (1)) {
            clearerr(stdin);     
            if (strlen(op) >= MAX) {
                clear();
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
        if (strlen(sname) >= MAX) {
            clear();
        }
        printf("Enter the second value.\n");
        printf("//");
        while(fgets(svalue,SIZE, stdin) == NULL) {
            checkInput();
        }
        svalue[strcspn(svalue, "\n")] = 0;
        if (strlen(sname) >= MAX) {
            clear();
        }
        printf("Enter a second comparison a for equal b for not equal\n");
        printf("//");
        while (fgets(scompare, SIZE, stdin) == NULL || (1)) {
            clearerr(stdin);    
            if (strlen(scompare) >= MAX) {
                clear();
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
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void ifNumber() {
    char t[10][20] = {"if(", "} else if(", "strlen", " <= ", " == ", " >= ", " != ", "(", ")", ") {"};
    char select[SIZE];
    char var[SIZE];
    char op[SIZE];
    char num[SIZE];
    while (1) {
        printf("//Enter s for strlen  or i for regular if statement. Enter e for else if.\n");
        printf("//");
        while(fgets(select, SIZE, stdin) == NULL) {
            checkInput();
        }
        select[strcspn(select, "\n")] = 0;
        if (strlen(select) >= MAX) {
            clear(); 
        }
        if (strcmp(select, "s") != 0 && strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
            printf("\n//Enter s or i or e only.\n\n");
            continue;
        }
        printf("//Enter the name of if or else if statement  enter m for main.\n");
        while(fgets(var,SIZE, stdin) == NULL) {
            checkInput();
        }
        var[strcspn(var, "\n")] = 0;
        if (strlen(var) >= MAX) {
            clear(); 
        }
        if (strcmp(var, "m") == 0) {
            break;
        }
        printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
        printf("//");
        while (fgets(op, SIZE, stdin) == NULL || (1)) {
            clearerr(stdin);

            if (strlen(op) >= MAX) {
                clear(); 
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
        num[strcspn(num, "\n")] = 0;
        if (strlen(num) >= MAX) {
            clear(); 
        }
        if (strcmp(select, "s") == 0) { 
            printf("\n%s%s%s%s%s%s%s%s\n\n", t[0], t[2], t[7], var, t[8], op, num, t[9]);
            if (strcmp(repeat, "r") !=0) {
                break;
            }
        } else if (strcmp(select, "i") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], var, op, num, t[9]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        } else if (strcmp(select, "e") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[1], var, op, num, t[9]);
            if (strcmp(repeat, "r") != 0) {
                break;              
            }
        }
    }
}

void ifHeap() {
    char t[9][20] = {"if(*", "}else if(*", " <= ", " == ", " >= ", " != ", "(", ")", "){"};
    char select[SIZE];
    char var[SIZE];
    char op[SIZE];
    char num[SIZE];
    while (1) {
        printf("//Enter i for if statement. Enter e for else if.\n");
        printf("//");
        while(fgets(select, SIZE, stdin) == NULL) {
            checkInput();
        }
        select[strcspn(select, "\n")] = 0;
        if (strlen(select) >= MAX) {
            clear(); 
        }
        if (strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
            printf("\n//Enter i or e only.\n\n");
            continue;
        }
        printf("//Enter the name of if or else if statement  enter m for main.\n");
        while(fgets(var, SIZE, stdin) == NULL) {
            checkInput();
        }
        var[strcspn(var, "\n")] = 0;
        if (strlen(var) >= MAX) {
            clear(); 
        }
        if (strcmp(var, "m") == 0) {
            break;
        }
        printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
        printf("//");
        while (fgets(op, SIZE, stdin) == NULL || (1)) {
            clearerr(stdin);

            if (strlen(op) >= MAX) {
                clear(); 
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
        if (strlen(num) >= MAX) {
            clear(); 
        }
        if (strcmp(select, "i") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], var, op, num, t[8]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        } else if (strcmp(select, "e") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[1], var, op, num, t[8]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        }
    }
}

void variable() {
    char f[3][15] = {"char ", " [", "];"};
    char name[SIZE];
    char mem[SIZE];

    while (1) {
        printf("//Enter name of variable m for main.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear(); 
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
        if (strlen(name) >= MAX) {
            clear(); 
        } 
        printf("\n%s%s%s%s%s\n\n", f[0], name, f[1], mem, f[2]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void variableValue() {
    char v[6][15] = {"char ", "[", "]", " = ", "\"", ";"};
    char name[SIZE];
    char mem[SIZE];
    char value[SIZE];
    while (1) {
        printf("//Enter a name of variable m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear(); 
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
        if (strlen(mem) >= MAX) {
            clear(); 
        }  
        printf("//enter a value\n");
        printf("//");
        while(fgets(value, SIZE, stdin) == NULL) {
            checkInput();
        }	
        value[strcspn(value, "\n")] = 0;
        if (strlen(value) >= MAX) {
            clear(); 
        }  
        printf("\n%s%s%s%s%s%s%s%s%s%s\n\n", v[0], name, v[1], mem, v[2], v[3], v[4], value, v[4], v[5]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void array() {
    char t[5][15] = {"char ", " [", "] ", "] = {", "};"};
    char name[SIZE];
    char ne[SIZE];
    char m[SIZE];
    char elements[SIZE];
    while (1) {
        printf("//Enter the name of array m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL){
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear(); 
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
        if (strlen(ne) >= MAX) {
            clear(); 
        } 
        printf("//Enter memory allocated to elements.\n");
        printf("//");
        while(fgets(m, SIZE, stdin) == NULL) {
            checkInput();
        }
        m[strcspn(m, "\n")] = 0;
        if (strlen(m) >= MAX) {
            clear(); 
        } 
        printf("//Enter elements with quotations and commas between each.\n");
        printf("//");
        while(fgets(elements,SIZE, stdin) == NULL) {
            checkInput();
        }
        elements[strcspn(elements, "\n")] = 0;
        if (strlen(elements) >= MAX) {
            clear(); 
        } 
        printf("\n%s%s%s%s%s%s%s%s%s%s\n\n", t[0], name, t[1], ne, t[2], t[1], m, t[3], elements, t[4]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void numArray() {
    char a[6][20] = {"int ", "double ", "[", "]", " = {", "};"};
    char typ[SIZE];
    char name[SIZE];
    char num[SIZE];
    char elements[SIZE];

    while (1) {
        printf("//Enter a data type i for int d for double.\n");
        printf("//");
        while (fgets(typ,SIZE, stdin) == NULL || (1)) {
            clearerr(stdin);
            typ[strcspn(typ, "\n")] = 0;
            if (strlen(typ) >= MAX) {
                clear(); 
            } 
            if (strcmp(typ, "i") != 0 && strcmp(typ, "d") != 0) {
                printf("//Enter i or d.\n");
            } else {
                break;
            }
        }
        if (strcmp(typ, "i") == 0) {
            strcpy(typ, a[0]);
        } else if (strcmp(typ, "d") == 0) {
            strcpy(typ, a[1]);
        }
        printf("//Enter the name of the array m for main.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear(); 
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
        if (strlen(num) >= MAX) {
            clear(); 
        } 
        printf("//Enter elements with a comma between them.\n");
        printf("//");
        while(fgets(elements, SIZE, stdin) == NULL) {
            checkInput();
        }
        elements[strcspn(elements, "\n")] = 0;
        if (strlen(elements) >= MAX) {
            clear(); 
        } 
        printf("%s%s%s%s%s%s%s%s\n", typ, name, a[2], num, a[3], a[4], elements, a[5]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void funct() {
    char t[4][12] = {"void ", "(", "){", "}"};
    char name[SIZE];
    char per[SIZE];

    while (1) {
        printf("//Name function m for main.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter parameters.\n");
        printf("//");
        while(fgets(per,SIZE, stdin) == NULL) {
            checkInput();
        }
        per[strcspn(per, "\n")] = 0;
        if (strlen(per) >= MAX) {
            clear(); 
        } 
        printf("\n%s%s%s%s%s\n\n\n%s\n\n", t[0], name, t[1], per, t[2], t[3]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void callFunct() {
    char t[2][12] = {"(", ");"};
    char name[SIZE];
    char per[SIZE];
    while (1) {
        printf("//Enter the name of function m for main.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter values for parameters.\n");
        printf("//");
        while(fgets(per,SIZE, stdin) == NULL) {
            checkInput();
        }
        per[strcspn(per, "\n")] = 0;
        if (strlen(per) >= MAX) {
            clear(); 
        } 
        printf("\n%s%s%s%s\n\n", name, t[0], per, t[1]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void heap() {
    char t[9][18] = {"char", " *", ";", " = (char*)malloc", "(", ");", "* sizeof(char));", "free", " = NULL;"};
    char name[SIZE];
    char mem[SIZE];

    while (1) {
        printf("//Enter the name of the variable m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter memory to allocate.\n");
        printf("//");
        while(fgets(mem,SIZE, stdin) == NULL) {
            checkInput();
        }
        mem[strcspn(mem, "\n")] = 0;
        if (strlen(mem) >= MAX) {
            clear(); 
        } 
        printf("\n");
        printf("\n%s%s%s%s\n\n", t[0], t[1], name, t[2]);
        printf("%s%s%s%s%s\n\n", name, t[3], t[4], mem, t[5]);
        printf("%s%s%s%s%s\n\n", name, t[3], t[4], mem, t[6]);
        printf("%s%s%s%s\n", t[7], t[4], name, t[5]);
        printf("%s%s\n\n", name, t[8]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void heapNum() {
    char t[15][20] = {"int"," *",";"," = (int*)malloc","(",");","* sizeof(int));","free"," = NULL;","double","float"," = (double*)malloc"," = (float*)malloc","* sizeof(double));","* sizeof(float));"};                                     
    char name[SIZE];
    char mem[SIZE];
    while (1) {
        printf("//Enter the name of the variable m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear(); 
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
        if (strlen(mem) >= MAX) {
            clear(); 
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
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void checkMalloc() {
    char t[8][18] = {"if(", " == NULL){", "    printf(\"", "\\n", "\");", "    exit(1);}","    exit(1);","}"};
    char name[SIZE];
    char em[SIZE];
    while (1) {
        printf("//Enter the name m for main.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear(); 
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
        if (strlen(em) >= MAX) {
            clear(); 
        } 
        printf("\n%s%s%s\n", t[0], name, t[1]);
        printf("%s%s%s%s\n", t[2], em, t[3], t[4]);
        printf("%s\n\n", t[5]);
        printf("\n%s%s%s\n", t[0], name, t[1]);
        printf("%s%s%s%s\n", t[2], em, t[3], t[4]);
        printf("%s\n", t[6]);
        printf("%s\n\n", t[7]);   
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void variableNum() {
    char t[5][15] = {"double ", "int ", " = ", ";", " ;"};
    char ch[SIZE];
    char name[SIZE];
    char value[SIZE];
    while (1) {
        printf("//Choose i for int d for double, m for main.\n");
        printf("//");
        while(fgets(ch,SIZE, stdin) ==NULL) {
            checkInput();
        }
        ch[strcspn(ch, "\n")] = 0;
        name[strcspn(ch, "\n")] = 0;
        if (strlen(ch) >= MAX) {
            clear(); 
        }
        if (strcmp(ch, "m") == 0) {
            break;
        } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
            printf("Choose i or d or m only.\n");
            continue;
        }
        printf("Enter the name.\n");
        printf("//");
        while(fgets(name,SIZE,stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear(); 
        } 
        printf("Enter a value.\n");
        printf("//");
        while(fgets(value, SIZE, stdin) == NULL) {
            checkInput();
        }
        value[strcspn(value, "\n")] = 0;
        if (strlen(value) >= MAX) {
            clear(); 
        } 
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[1], name, t[2], value, t[3]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        } else if (strcmp(ch, "d") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], name, t[2], value, t[3]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        }
    }
}

void varNoValue() {
    char t[3][15] = {"double ", "int ", ";"};
    char ch[SIZE];
    char name[SIZE];
    while (1) {
        printf("//Choose i for int d for double, m for main.\n");
        printf("//");
        while(fgets(ch,SIZE, stdin) == NULL) {
            checkInput();
        }
        ch[strcspn(ch, "\n")] = 0;
        if (strlen(ch) >= MAX) {
            clear(); 
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
        if (strlen(name) >= MAX) {
            clear(); 
        }
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s\n\n", t[1], name, t[2]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        } else if (strcmp(ch, "d") == 0) {
            printf("\n%s%s%s\n\n", t[0], name, t[2]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        }
    }
}

void scanfNum() {
    char t[6][15] = {"scanf(\"", "\%d\"", "\%lf\"", ",", " &", ");"};
    char ch[SIZE];
    char name[SIZE];

    while (1) {
        printf("//Choose i for int d for double or m for main.\n");
        printf("//");
        while(fgets(ch,SIZE, stdin) == NULL) {
            checkInput();
        }
        ch[strcspn(ch, "\n")] = 0;
        if (strlen(ch) >= MAX) {
            clear(); 
        }
        if (strcmp(ch, "m") == 0) {
            break;
        } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
            printf("Choose i or d or m only.\n");
            continue;
        }
        printf("//Enter the name of variable.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear(); 
        }
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s%s%s%s\n\n", t[0], t[1], t[3], t[4], name, t[5]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        } else if (strcmp(ch, "d") == 0) {
            printf("\n%s%s%s%s%s%s\n\n", t[0], t[2], t[3], t[4], name, t[5]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        }
    }
}

void scanfHeap() {
    char t[6][15] = {"scanf(\"", "\%d\"", "\%lf\"", ",", ");", "\%f\""};
    char ch[SIZE];
    char name[SIZE];
    while (1) {
        printf("//Choose i for int f for float or d for double or m for main.\n");
        printf("//");
        while(fgets(ch,SIZE, stdin) == NULL) {
            checkInput();
        }
        ch[strcspn(ch, "\n")] = 0;
        if (strlen(ch) >= MAX) {
            clear(); 
        }
        if (strcmp(ch, "m") == 0) {
            break;
        } else if (strcmp(ch, "i") != 0 && strcmp(ch, "f") != 0 && strcmp(ch, "d") != 0) {
            printf("Choose i, f, d  or m only.\n");
            continue;
        }
        printf("//Enter the name of variable.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear(); 
        }
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], t[1], t[3], name, t[4]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        } else if (strcmp(ch, "d") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], t[2], t[3], name, t[4]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        } else if (strcmp(ch, "f") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], t[5], t[3], name, t[4]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        }
    }
}

void checkScanf() {
    char t[7][15] = {"if(scanf(\"", "\%d\"", "\%lf\"", ",", " &", ")!=1){", "while(scanf(\""};
    char ch[SIZE];
    char name[SIZE];
    while (1) {
        printf("//Choose i for int d for double or m for main.\n");
        printf("//");
        while(fgets(ch,SIZE, stdin) == NULL) {
            checkInput();
        }
        ch[strcspn(ch, "\n")] = 0;
        if (strlen(ch) >= MAX) {
            clear(); 
        }
        if (strcmp(ch, "m") == 0) {
            break;
        } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
            printf("Choose i or d or m only.\n");
            continue;
        }
        printf("//Enter the name of variable.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
            checkInput();
        }
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear(); 
        }
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s%s%s%s\n\n", t[0], t[1], t[3], t[4], name, t[5]);
            printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[0], t[1], t[3], name, t[5]);
            printf("\n%s%s%s%s%s%s\n\n", t[6], t[1], t[3], t[4], name, t[5]);
            printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[6], t[1], t[3], name, t[5]);
            if (strcmp(repeat, "r") != 0) {
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
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void checkScanfL() {
    char t[8][15] = {"if(scanf(\"", "%","d\"", "lf\"", ",", " &", ")!=1){", "while(scanf(\""};
    char ch[SIZE];
    char name[SIZE];
    char mem[SIZE];
    while (1) {
        printf("//Choose i for int d for double or m for main.\n");
        printf("//");
        while(fgets(ch, SIZE, stdin) == NULL) {
            checkInput();
        }
        ch[strcspn(ch, "\n")] = 0;
        if (strlen(ch) >= MAX) {
            clear();
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
        if (strlen(name) >= MAX) {
            clear();
        }
        printf("//Enter memory allocated to variable.\n");
        printf("//");
        while(fgets(mem,SIZE,stdin) == NULL) {
            checkInput();
        }
        mem[strcspn(mem,"\n")]=0;
        if (strlen(mem) >= MAX) {
            clear();
        }
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s%s%s%s%s%s\n\n", t[0], t[1],mem,t[2], t[4], t[5], name, t[6]);
            printf("\n%s%s%s%s%s%s%s    //Use with malloc.\n\n", t[0], t[1],mem,t[2], t[4], name, t[6]);
            printf("\n%s%s%s%s%s%s%s%s\n\n", t[7], t[1],mem, t[2], t[4],t[5], name,t[6]);
            printf("\n%s%s%s%s%s%s%s    //Use with malloc.\n\n", t[7], t[1],mem,t[2], t[4], name, t[6]);
            if (strcmp(ch, "r") == 0) {
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
        if (strcmp(repeat, "r") != 0) {
            break;
        }         
    }
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
    char sw[SIZE];

    printf("          copyright 2025 Mitchell E Wise\n");
    printf("          SPDX-License-Identifier: Apache-20\n\n\n");

    printf("//Enter r to repeat choices enter to not.\n");
    while(fgets(repeat,SIZE, stdin) == NULL) {
        checkInput();
    }
    repeat[strcspn(repeat, "\n")] = 0;
    if (strlen(repeat) >= MAX) {
        clear(); 
    }
    choice();
    while (1) {
        printf("//Enter a selection from choices x to exit ch for choices.\n");
        printf("//");
        fgets(sw,SIZE, stdin);
        sw[strcspn(sw, "\n")] = 0;
        if (strlen(sw) >= MAX) {
            clear(); 
        }
        if(strcmp(sw,"ch")==0){
            choice();
        } else if(strcmp(sw,"cy")==0) {
            copy();
        } else if(strcmp(sw, "b")==0) {
            string();
        } else if(strcmp(sw, "c")==0) {
            stringEmpty();
        } else if(strcmp(sw,"f")==0) {
            fgetss();
        } else if(strcmp(sw, "fs")==0) {
            fgetsSizeof();
        } else if(strcmp(sw, "fb")==0) {
            fgetsBuffer(); 
        } else if(strcmp(sw, "s")==0) {
            scanff();
        } else if(strcmp(sw, "sb")==0) {
            scanfBasic();
        } else if(strcmp(sw, "cb")==0) {
            clearBuffC();
        } else if(strcmp(sw, "bh")==0) {
            binHex();
        } else if(strcmp(sw, "i")==0) {
            ifStatement();
        } else if(strcmp(sw, "e")==0) {
            elseIf();
        } else if(strcmp(sw, "mi")==0) {
            multiIf();
        } else if(strcmp(sw, "in")==0) {
            ifNumber();
        } else if(strcmp(sw, "im")==0) {
            ifHeap();
        } else if(strcmp(sw, "v")==0) {
            variable();    
        } else if(strcmp(sw, "vv")==0) { 
            variableValue();  
        } else if(strcmp(sw, "a")==0) { 
            array(); 
        } else if(strcmp(sw, "ia")==0) {
            numArray(); 
        } else if(strcmp(sw, "fc")==0) {
            funct();
        } else if(strcmp(sw, "cf")==0) {
            callFunct();
        } else if(strcmp(sw, "h")==0) {
            heap();
        } else if(strcmp(sw, "hi")==0) {
            heapNum();
        } else if(strcmp(sw, "cm")==0) {
            checkMalloc(); 
        } else if(strcmp(sw, "vi")==0) {
            variableNum();   
        } else if(strcmp(sw, "vn")==0) {
            varNoValue(); 
        } else if(strcmp(sw, "si")==0) {
            scanfNum();   
        } else if(strcmp(sw, "sh")==0) {
            scanfHeap();
        } else if(strcmp(sw, "sc")==0) {
            checkScanf();
        } else if(strcmp(sw, "csl")==0) {
            checkScanfL();
        } else if (strcmp(sw, "x") == 0) {
            break;
        } else {
            printf("//Enter a letter in main.\n");
        } 
    }  
    return 0;
}



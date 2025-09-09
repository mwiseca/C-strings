// Copyright 2023-2025 Mitchell E Wise 
// SPDX-License-Identifier: Apache-20

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void clean(){
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
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

int main() {
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
                break;
            }
            i++;
        }
        if( number == -1){
            printf("\n//Enter a name in index.\n\n");
            continue;
        }
        printf("%s\n",value[number]);
    }
    return 0;
}


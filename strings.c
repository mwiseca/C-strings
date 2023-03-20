//Copyright 2023 Mitchell E Wise
//SPDX-License-Identifier: Apache-2.0


#include <stdio.h>
#include <string.h>
int main (){
    char string  [2] [15] = {"printf(\"", "\");"};
    char text [100];
    printf("//Enter your string, x to exit.\n");
    while (1){
    fgets(text,100,stdin);
    text[strcspn(text,"\n")]=0;
    if (strcmp(text,"x")==0){
    break;}
    printf("%s%s%s\n",string[0],text,string[1]);
     }
return 0;
}




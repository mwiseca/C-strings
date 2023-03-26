//Copyright 2023 Mitchell E Wise
//SPDX-License-Identifier: Apache-2.0


#include <stdio.h>
#include <string.h>
int main (){
    char string  [3] [15] = {"printf(\"", "\\n","\");"};
    char text [150];
    printf("//Enter your string, x to exit.\n");
    while (1){
    printf("//");
    fgets(text,150,stdin);
    text[strcspn(text,"\n")]=0;
    if (strcmp(text,"x")==0){
    break;}
    printf("%s%s%s%s\n",string[0],text,string[1], string[2]);
     }
return 0;
}




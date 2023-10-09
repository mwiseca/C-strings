//Copyright 2023 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 

  
#include <stdio.h>
#include <string.h>
int main (){
     char f  [6] [15] = {"fgets(", ",", "stdin);", "[strlen(",")-1] = '\\0';"};
     char v [2000];
     char me [2000];
	
 while (1){
 printf("//Enter name of variable x to exit.\n");
 printf("//"); 
 fgets(v,2000,stdin);;
 v[strcspn(v,"\n")]=0;
 if (strcmp(v,"x")==0){
 break;}
 printf("//Enter the memory you alocated to the variable.\n");
 printf("//");
 fgets(me,2000,stdin);
 me[strcspn(me,"\n")]=0;
 printf("%s%s%s%s%s%s\n",f[0], v, f[1],me,f[1],f[2]);
 printf("%s%s%s%s%s\n", v, f[3], v, f[4] ,f[5]);
 }
 return 0;
}

 





//Copyright 2023 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 

  
#include <stdio.h>
#include <string.h>
int main (){
     char f  [6] [15] = {"fgets(", ",", "stdin);", "[strcspn(","\"\\n", "\")]=0;"};
     char v [50];
     int me;
	
 while (1){
 printf("//Enter name of variable x to exit.\n");
 printf("//"); 
 scanf("%50s",v);
 if (strcmp(v,"x")==0){
 break;}
 printf("//Enter the memory you alocated to the variable.\n");
 printf("//");
 scanf("%10d",&me);
 printf("%s%s%s%d%s%s\n",f[0], v, f[1],me,f[1],f[2]);
 printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4] ,f[5]);
 }
 return 0;
}

 





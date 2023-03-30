//Copyright 2023 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 

  
#include <stdio.h>
#include <string.h>
int main (){
     char f  [5] [15] = {"fgets(", ",", "stdin);", "[strcspn(", ")]=0;"};
     char v [50];
     int me;
     char nl [6];
	
 while (1){
 printf("//Enter name of variable x to exit.\n");
 printf("//"); 
 scanf("%49s",v);
 if (strcmp(v,"x")==0){
 break;}
 printf("//Enter the memory you alocated to the variable.\n");
 printf("//");
 scanf("%10d",&me);
 printf("Enter the new line character with quotes.\n");
 printf("//");
 scanf("%5s",nl);
 printf("%s%s%s%d%s%s\n",f[0], v, f[1],me,f[1],f[2]);
 printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], nl,f[4]);
 }
 return 0;
}

 





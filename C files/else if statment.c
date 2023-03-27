//Copyright 2023 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 

  
#include <stdio.h>
#include <string.h>
int main (){
     char f  [4] [18] = {"}else if (strcmp(",   ",",  "\"", ")==0){"};
     char name [50];
     char value [50];
	
 while (1){
 printf("//Enter name of the else if statment x to exit.\n");
 printf("//"); 
 fgets(name,50,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(name,"x")==0){
 break;}
 printf("//Enter the value.\n");
 printf("//");
 fgets(value,50,stdin);
 value[strcspn(value,"\n")]=0;
 printf("%s%s%s%s%s%s%s\n", f[0], name, f[1], f[2],  value, f[2],  f[3] );
 }
 return 0;
}
 

 





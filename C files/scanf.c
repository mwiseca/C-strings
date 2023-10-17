//Copyright 2023 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <stdio.h>
#include <string.h>
int main(){
         char t [6] [15] = {"scanf(\"","%","[^\\n]s\"",",",");","getchar();"};
         char mem [2000];
	 char var [2000];

 while(1){
 printf("//Enter memory allocated to variable -1 byte x to exit.\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 if(strcmp(mem,"x")==0){
 break;}
 printf("//Enter the name of variable.\n");
 printf("//");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 printf("%s%s%s%s%s%s%s\n",t[0],t[1],mem,t[2],t[3],var,t[4]);
 printf("%s\n",t[5]);
 }
return 0;
}






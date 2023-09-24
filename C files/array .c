//Copyright 2023 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <stdio.h>
#include <string.h>
int main(){
	char t [5] [15] = {"char "," [","] ", "] = {","};"};
	char name [2000];
	char ne [2000];
	char m [2000];
	char elements [2000];
 while(1){
 printf("//Enter the name of array x to exit.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"x")==0){
 break;}
 printf("//Enter the amount of elements.\n");
 printf("//");
 fgets(ne,2000,stdin);
 ne[strcspn(ne,"\n")]=0;
 printf("//Enter memory allocated to elements.\n");
 printf("//");
 fgets(m,2000,stdin);
 m[strcspn(m,"\n")]=0;
 printf("//Enter elements with quotations and commas between each.\n");
 printf("//");
 fgets(elements,2000,stdin);
 elements[strcspn(elements,"\n")]=0;
 printf("%s%s%s%s%s%s%s%s%s%s\n",t[0],name,t[1],ne,t[2],t[1],m,t[3],elements,t[4]);
 }
 return 0;
}


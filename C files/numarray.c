//Copyright 2023-2024 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <stdio.h>
#include <string.h>
int main(){
        char a [6] [20] = {"int ","double ", "[","]"," = {","};"};
	char typ [2000];
	char name [2000];
	char num [2000];
	char elements [2000]; 

 while(1){
 printf("//Enter a data type i for int d.\n");
 printf("//");
 while(fgets(typ,2000,stdin)){
      typ[strcspn(typ,"\n")]=0; 
 if(strcmp(typ,"i")!=0 && strcmp(typ,"d")!=0){ 
 printf("//Enter i or d.\n");}
 else{
     break;}
 }
 if(strcmp(typ,"i")==0){
  strcpy(typ,a[0]);
 }else if(strcmp(typ,"d")==0){
  strcpy(typ,a[1]);}
 printf("//Enter the name of the array m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 break;}
 printf("//Enter number of elements m for main.\n");
 printf("//"); 
 fgets(num,2000,stdin);
 num[strcspn(num,"\n")]=0;
 printf("//Enter elements with a comma between them.\n");
 printf("//");
 fgets(elements,2000,stdin);
 elements[strcspn(elements,"\n")]=0;
 printf("%s%s%s%s%s%s%s%s\n",typ,name,a[2],num,a[3],a[4],elements,a[5]);
 }
return 0;
}


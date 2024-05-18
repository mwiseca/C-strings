//Copyright 2023-2024 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <stdio.h>
#include <string.h>
int main(){
	char t [9] [18] = {"char"," *",";"," = (char*)malloc","(",");","* sizeof(char));","free"," = NULL;"};
        char ch [6] [18] = {"if("," == NULL){","    printf(\"", "\\n","\");","    exit(1);}"};
	char i [15] [20] = {"int"," *",";"," = (int*)malloc","(",");","* sizeof(int));","free"," = NULL;","double","float", " = (double*)malloc"," = (float*)malloc","* sizeof(double));","* sizeof(float));"};

        char name [2000];
	char mem [2000];
	char check [2000];
        char na [2000];
	char em [2000];	
 while(1){
 printf("//Enter the name of the variable m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 break;}
 printf("//Enter memory to allocate.\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("//Enter c to check malloc with error message. Press enter to continue.\n");
 printf("//"); 
 fgets(check,2000,stdin);
 check[strcspn(check,"\n")]=0;
 if(strcmp(check, "c")!=0){
 printf("\n");
 printf("\n%s%s%s%s\n\n",t[0],t[1],name,t[2]);
 printf("%s%s%s%s\n\n",i[0],i[1],name,i[2]);
 printf("%s%s%s%s\n\n",i[9],i[1],name,i[2]);
 printf("%s%s%s%s\n\n",i[10],i[1],name,i[2]);
 printf("%s%s%s%s%s\n\n",name,t[3],t[4],mem,t[6]);
 printf("%s%s%s%s%s\n\n",name,i[3],i[4],mem,i[6]);
 printf("%s%s%s%s%s\n\n",name,i[11],i[4],mem,i[13]);
 printf("%s%s%s%s%s\n\n",name,i[12],i[4],mem,i[14]);
 printf("%s%s%s%s\n",i[7],i[4],name,i[5]);
 printf("%s%s\n\n",name,i[8]);
 printf("\n");
}else if(strcmp(check,"c")==0){ 
 printf("//Enter the name.\n");
 printf("//"); 
 fgets(na,2000,stdin);
 na[strcspn(na,"\n")]=0;
 printf("//Enter an error message.\n");
 printf("//");
 fgets(em,2000,stdin);
 em[strcspn(em,"\n")]=0;
 printf("\n");
 printf("\n%s%s%s%s\n\n",t[0],t[1],name,t[2]);
 printf("%s%s%s%s\n\n",i[0],i[1],name,i[2]);
 printf("%s%s%s%s\n\n",i[9],i[1],name,i[2]);
 printf("%s%s%s%s\n\n",i[10],i[1],name,i[2]);
 printf("%s%s%s%s%s\n\n",name,t[3],t[4],mem,t[6]);
 printf("%s%s%s%s%s\n\n",name,i[3],i[4],mem,i[6]);
 printf("%s%s%s%s%s\n\n",name,i[11],i[4],mem,i[13]);
 printf("%s%s%s%s%s\n\n",name,i[12],i[4],mem,i[14]);
 printf("%s%s%s%s\n",i[7],i[4],name,i[5]);
 printf("%s%s\n\n",name,i[8]);
 printf("\n");
 printf("\n%s%s%s\n",ch[0],na,ch[1]);
 printf("%s%s%s%s\n",ch[2],em,ch[3],ch[4]);
 printf("%s\n\n",ch[5]);} 
}
return 0;
}



















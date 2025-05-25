// Copyright 2023-2025 Mitchell E Wise
// SPDX-License-Identifier: Apache-20

#include <stdio.h>
#include <string.h>
int main(){
    char f[12][15] = {"fgets(", ",","sizeof(", "),stdin);", "[strcspn(", "\"\\n", "\")]=0;", "[strlen(", ")-1] = '\\0';","while(", "      ", "),stdin)) {"};
    char name[2000];
            
            while (1) {
                printf("//Enter name of variable m for main.\n");
                printf("//");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
                if (strcmp(name, "m") == 0) {
                    break;
                }
                printf("//Enter the memory to be allocated to the variable.\n");
                printf("\n%s%s%s%s%s%s\n", f[0], name, f[1],  f[2],name, f[3]);
                printf("%s%s%s%s%s%s\n\n", name, f[4], name, f[1], f[5], f[6]);
                printf("\n%s%s%s%s%s%s%s\n",f[9], f[0], name, f[1], f[2] ,name, f[11]);
                printf("%s%s%s%s%s%s%s\n\n",f[10], name, f[4], name, f[1], f[5], f[6]);
                printf("\n%s%s%s%s%s%s\n", f[0], name, f[1],  f[2],name, f[3]); 
                printf("%s%s%s%s\n\n", name, f[7], name, f[8]);
                //if (strcmp(repeat, "r") != 0) {
                    //break;
                //}
            }


return 0;
}

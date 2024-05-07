#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

    char text[100],pattern[100];
    int i,j,n,m,count,pos,flag;

    printf("ENTER TEXT STRING : ");
    gets(text);
    printf("ENTER PATTERN STRING : ");
    gets(pattern);

    n = strlen(text);
    m = strlen(pattern);
    count = pos =flag = 0;

    for(i=0; i<=n-m;i++){
        pos++;
        for(j=0;j<m;j++){
            if(text[i+j] == pattern[j]){
                count++;
            }
        }
        if(count == m){
            flag = 1;
            break;
        }
        count = 0;
    }
    
    if(flag == 0){
        printf("PATTERN NOT FOUND");
    }
    else{
        printf("PATTERN FOUND AT POSITION : %d",pos);
    }
    return 0;
}
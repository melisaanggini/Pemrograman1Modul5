#include <stdio.h>
int main()
{
    int n,i,d=0;
    char simbol;
    while(d<=2){
    scanf("%d %c", &n,&simbol);
    for(i=1; i<=50; i++){
        if(i% n==0){
            printf("%c", simbol);
        }
        else{
            printf("%d", i);
        }
        }
    d++;
}
}

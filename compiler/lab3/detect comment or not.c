#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char x[1000];

    gets(x);
    int l = strlen(x);
    if(x[0]=='/' && x[1]=='/')
        printf("comment");
    else if(x[0]=='/' && x[1]=='*' && x[l-2]=='*' && x[l-1]=='/')
        printf("comment");
    else printf("not a comment");

    printf("\n");

    return 0;
}

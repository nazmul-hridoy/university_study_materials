#include<stdio.h>
int main()
{
    char x[50];
    int i;
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]==' ')
            if(x[i-1]==' ')
            continue;
            else
            printf("\n");

        else
            printf("%c",x[i]);
    }
    printf("\n");

    return 0;
}

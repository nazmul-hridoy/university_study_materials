#include<stdio.h>
#include<stdlib.h>
int main()
{
    char x[1000],*a;
    char y[]={'<','>',' ','%','(',')','{','}',']','[','-',',','.','\0'};

    gets(x);
    a=strtok(x,y);
    while(a!=NULL)
    {
        printf("%s\n",p);
        a=strtok(NULL,y);
    }


    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int isDig(char x);
char value(char x);
int main()
{
    char str[100],token[100];
    int a=0,b=0,c,d,i;
    gets(str);

    token[0]=value(str[0]);
    b=1;
    for(i=1;str[i]!='\0';i++)
    {

        if(isDig(str[i])&&isDig(str[i-1]))
            continue;
        token[b++]=value(str[i]);
    }
    token[b]='\0';

    for(b=0;token[b]!='\0';)
    {
        if((token[b]=='5' && token[b+1]=='3' && token[b+2]=='5')||
           (token[b]=='5' && token[b+1]=='4' && token[b+2]=='5'))
        {
            token[b]='5';
            c=b+1;
        while(token[c]!='\0')
            {
                token[c]=token[c+2];
                if(token[c]=='\0')
                    break;
            c++;
            }
        }
        else
            b++;

    }
    char s[]="5";
    if(!strcmp(token,s))
        printf("Grammar\n");
    else
        printf("Not Grammar\n");


    return 0;
}
int isDig(char x)
{
    if(x>='0' && x<='9')
        return 1;
    return 0;
}
char value(char x)
{
    if(isDig(x))
    {
        return '5';
    }
    if(x=='+')
        return '3';
    if(x=='*')
        return '4';
    if(x=='(')
        return '1';
    if(x==')')
        return '2';
}

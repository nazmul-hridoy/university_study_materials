#include<stdio.h>
#include<string.h>

int main()
{
    int i,n;
    char s[100];

    gets(s);
    n=strlen(s);

    for(i=0;i<n;i++)
    {
        if (s[i]=='+' ||s[i]=='-' || s[i]=='=' || s[i]=='<'|| s[i]=='>'|| s[i]=='*' || s[i]=='/')

        {
            printf("Operator:");
            printf("%c\n",s[i]);
        }

        if(s[i]=='(' ||s[i]==')' || s[i]=='{' || s[i]=='}'|| s[i]==';' || s[i]=='[' || s[i]==']')
        {
            printf("Symbol:");
            printf("%c\n",s[i]);
        }
        if(s[i]=='i' && s[i+1]=='n' && s[i+2]=='c' && s[i+3]=='l' && s[i+4]=='u' && s[i+5]=='d' && s[i+6]=='e')
          {
              printf("Keyword:");
              printf("include is a keyword\n");

          }
        if(s[i]=='i' && s[i+1]=='n' && s[i+2]=='t')
        {
          printf("Keyword:");
          printf("int is a keyword\n");

        }
        if( s[i]=='m' && s[i+1]=='a' && s[i+2]=='i' && s[i+3]=='n')
        {
            printf("Keyword:");
            printf("main is a keyword\n");
        }
        if( s[i]=='i' && s[i+1]=='f' )
        {
            printf("Keyword:");
            printf("if is a keyword\n");
        }
        if( s[i]=='e' && s[i+1]=='l' && s[i+2]=='s' && s[i+3]=='e')
        {
            printf("Keyword:");
            printf("else is a keyword\n");
        }
     }

   return 0;

}


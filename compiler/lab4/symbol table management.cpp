#include<bits/stdc++.h>
using namespace std;
int main()
{

    char operators[]="+-*/%<>=";
    char keywords[][100]={"int","char","float","double","include","main","return"};
    char syntaxs[] ="(){}[],.;";
    char x[99999],*p,y[100];
    char op[100][2];
    freopen("input.txt","r",stdin);
    int i,j,k=0,l;

    string xx,xxx;
    while(getline(cin,xx,'\n'))
        xxx+=xx.c_str();
    strcpy(x,xxx.c_str());


    printf("Operators:");
    for(i=0;x[i]!='\0';i++)
    {
        for(j=0;operators[j]!='\0';j++)
        {
            if(x[i]==operators[j])
                printf(" %c",x[i]);
        }
    }
    printf("\n");



    printf("Syntaxes:");
    for(i=0;x[i]!='\0';i++)
    {
        for(j=0;syntaxs[j]!='\0';j++)
        {
            if(x[i]==syntaxs[j])
                printf(" %c",x[i]);
        }
    }
    printf("\n");

    printf("Constants:");
    for(i=0;x[i]!='\0';i++)
    {

            if(x[i]<='9'&&x[i]>='0')
                printf(" %c",x[i]);

    }
    int n;
    printf("\nKeywords: ");
    for(i=0;x[i]!='\0';i++)
    {
        for(j=0;j<7;j++)
        {
            n = 1;
            if(x[i]==keywords[j][0])
            {
                for(l=0;keywords[j][l]!='\0';l++)
                {
                    if(x[i+l]!=keywords[j][l])
                    {
                    n=0;

                    }
                }
            if(n)
            {
                printf(" %s",keywords[j]);
                break;
            }
            }
        }
    }


    return 0;


}

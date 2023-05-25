#include<stdio.h>
int main()
{   int c;
    double a,b;
    printf("Enter equation e.g. 10 + 5\nOnly +, -, /, * and %% operations");
    printf(" are possible\nEnter Ctrl+Z when done\n");
    while(scanf("%lf %c %lf",&a,&c,&b)==3)
    {
        if(c=='+')
        {
            printf("Ans: %0.2lf\n",a+b);
        }
        else if(c=='-')
        {
            printf("Ans: %0.2lf\n",a-b);
        }
        else if(c=='*')
        {
            printf("Ans: %0.2lf\n",a*b);
        }
        else if(c=='/')
        {
            if(b==0)
                printf("division by zero is not possible\n");
            else
                printf("Ans: %0.2lf\n",(a/b));
        }
        else if(c=='%')
        {
            if(b==0)
                printf("error\n");
            else
                printf("Ans: %d\n",((int)a%(int)b));
        }
        else
            printf("invalid.\n");
        printf("\n");
    }
    return 0;
}

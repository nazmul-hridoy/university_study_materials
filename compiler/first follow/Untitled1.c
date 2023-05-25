#include<stdio.h>
#include<ctype.h>
char a[5][5];

struct firTab
{
    int n;
    char firT[5];
};


struct firTab first[5];
int col;
void findFirst(char,char);


void firTabOperation(char,char);
void main()
{
    int i,j,c=0,cnt=0;
    char ip;
    char b[5];

    for(i=0;i<5;i++)
    {
    scanf("%s",&a[i]);
    }
    for(i=0;i<5;i++)
    {   c=0;
    for(j=0;j<i+1;j++)
    {
        if(a[i][0] == b[j])
        {
            c=1;
            break;
        }
        }
    if(c !=1)
    {
      b[cnt] = a[i][0];
      cnt++;
    }

    }
     printf("\n");

    for(i=0;i<cnt;i++)
    {   col=1;
    first[i].firT[0] = b[i];
    first[i].n=0;
    findFirst(b[i],i);
    }


    printf("\n");
   for(i=0;i<cnt;i++)
   {
    for(j=0;j<=first[i].n;j++)
    {
            if(j==0)
            {
                printf("First(%c) : {",first[i].firT[j]);
            }
            else
            {
                printf(" %c",first[i].firT[j]);
            }
    }
    printf(" } ");
    printf("\n");
    }
     printf("\n");

    //printf(" } ");

    printf("\n");
    }


void findFirst(char ip,char pos)
{
    int i;
    for(i=0;i<8;i++)
    {
        if(ip == a[i][0])
        {
            if(isupper(a[i][3]))
            {
                findFirst(a[i][3],pos);
            }
            else
        {

        first[pos].firT[col]=a[i][3];
        first[pos].n++;
        col++;
            }
        }
    }
}




void firTabOperation(char ip,char row)
{
        int i,j;
    for(i=0;i<5;i++)
    {
        if(ip == first[i].firT[0])
        {

        }
    }

}


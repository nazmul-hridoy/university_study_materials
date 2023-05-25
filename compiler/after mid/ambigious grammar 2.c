#include<stdio.h>
#include<string.h>

int isDigit(char digit);

int isDigit(char digit)
{
  switch(digit)
  {
  case '1':
    return 1;
  case '2':
    return 1;
  case '3':
    return 1;
  case '4':
    return 1;
    case '5':
    return 1;
  case '6':
    return 1;
    case '7':
    return 1;
  case '8':
    return 1;
    case '9':
    return 1;
  case '0':
    return 1;
  default:
    break;

    return 0;

  }
}



int main()
{

  char input[100];

  char token[100];

  gets(input);

  int previousChar = 0;

   int index = 0;
  int i;

  token[0] = ' ';
   int b=0,c=0;

  for(i=0;i<strlen(input);i++)
  {

       if(isDigit(input[i]) == 1)
       {
           if(previousChar == 0)
           {
               if(index == 0)
               {
                  index = 0;
               }else{
                  index++;
               }
             token[index] = '5';
             b++;
           }
           previousChar = 1;
       }else if(input[i] == '+')
       {

                  index++;


          token[index] = '3';
          previousChar = 0;
          b++;
       }else if(input[i] == '*')
       {
        index++;


          token[index] = '4';
          previousChar = 0;
          b++;
       }else if(input[i] == '(')
       {

                  index++;

          token[index] = '1';
          previousChar = 0;
          b++;
       }else if(input[i] == ')')
       {

                  index++;

          token[index] = '2';
          previousChar = 0;
          b++;
       }

  }



   b = 0;

   while(token[b] != NULL)
   {
         if((token[b] == '5' && token[b+1] == '3' && token[b+2] == '5') ||
            (token[b] == '5' && token[b+1] == '4' && token[b+2] == '5') ||
            (token[b] == '5' && token[b+1] == '3' && token[b+2] == '5') )
         {
             token[b] = '5';
             c= b+1;

             while(token[c] != NULL)
             {
                token[c] = token[c+2]; c++;
             }
         }else{
             b++;
         }
   }


if(token[0] == '5')
{
    printf("It is grammar");
}else{
     printf("It is not grammar");
}

  return 0;
}

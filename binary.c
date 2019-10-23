//C Program to show working of binary
#include<stdio.h>
#include<math.h>
void main()
{

    int input,temp,b,count = 0;
    printf("Enter a number\n");
    scanf("%d",&input);
    temp=input;
    b=temp;
   while(temp>1)
  {  count = 0;
        do
        {
            temp=temp/2;
            count++;
        }while(temp>1);
         b = b-pow(2,count);
        printf("%d ",b);
        temp=b;
  }
}

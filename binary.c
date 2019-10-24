//C Program to show working of binary
#include<stdio.h>
#include<math.h>
void main()
{

    int input,temp,b;
    printf(" Program to show working of binary");
    printf("Enter a number\n");
    scanf("%d",&input);
    temp=input;
    b=temp;
   while(temp>1)
   {
        int count = 0;
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

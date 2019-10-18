//C Program to show working of binary
#include<stdio.h>
#include<math.h>
void main()
{

    int a,c,b;
    printf("Enter a number\n");
    scanf("%d",&a);
    c=a;
    b=c;
   while(c>1)
  { int count = 0;
        do
        {
            c=c/2;
            count++;
        }while(c>1);
         b = b-pow(2,count);
        printf("%d ",b);
        c=b;
  }
}

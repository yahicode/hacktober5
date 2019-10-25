//C Program to show working of binary
#include<stdio.h>
#include<math.h>
void main()
{

    int input,temp,b;
    printf("Enter a number\n");
    scanf("%d",&input);
    temp=input;
    b=temp;
   while(temp>1)
  { int count = 0;
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
// c program to find even-odd
#include <stdio.h>
int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    // True if the number is perfectly divisible by 2
    if(number % 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);
    return 0;
}

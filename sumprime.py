str=input("Enter the elements to the list:")
str.split(" ")
l=map(int,str.split())


def primesum(l): 
     sum=0
         for num in(l):
            flag=1
                if num > 1:
                     for i in range(2,num):
                          if (num % i) == 0:
                               flag=1
           
                     if flag==0:
                         sum=sum+num
             
     return sum

a=primesum(l)
print(a)

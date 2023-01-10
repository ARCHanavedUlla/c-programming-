#include<stdio.h>
Reverse(int n)
{
   int sum=0;
   while (n!=0)
   {
     sum = sum*10 + n%10;
     n /= 10;
   }
   return sum;
}
main()
{  
   int rev, num;
   printf("Enter a Positive Number: ");
   scanf("%d", &num);
   if(num>0){
   rev = Reverse(num);
   printf("The Reverse of given number %d is: %d", num, rev);
}
}


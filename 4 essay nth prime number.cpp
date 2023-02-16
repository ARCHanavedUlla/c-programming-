
#include<stdio.h>
int main()
{
    int i,j,cnt,FLAG,n,nthPrime;
    cnt = 0; 
    
    START: 
    printf("Enter a Positive Number (n) : ");
    scanf("%d",&n);
    if(n <= 0)
    {
        printf("Please enter positive number, Try Again , Try Again \n");
        goto START;
    }
    for(j=2; cnt<n ; j++)
    {
        FLAG=0; 
        for(i=2;i <= j/2; i++)
        {
            if(j%i == 0)
            {
                FLAG = 1;
                break;
            }
        }
 
        if(FLAG == 0)
        {
            cnt++ ;
            nthPrime = j;
        }
    }
 
    printf("%d(th) Prime Number : %d \n", n, nthPrime);
    return 0;
}

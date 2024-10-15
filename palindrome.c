#include<stdio.h>
main()
{
    int n,i,sum=0,r,temp;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    
    }
    if(temp==sum)
    printf("%d is a palindrome",temp);
    else
    printf("%d is not a palindrome ",temp);

}
    
    
    









    

   

    
       
        
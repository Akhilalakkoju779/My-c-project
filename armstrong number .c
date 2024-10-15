#include <math.h>
main()
{
int n,temp,r,pow,sum,v;
printf("Enter a number");
scanf("%d",&n);
if(n<=0)
{
    printf("Number should be positive");
}
else
{
temp=n;
pow=n%10;
v=v++;
}
for(sum=0;n>0;)
{
r=n%10;
sum=sum+pow(r,v);
n=n/10;
}
if(temp==sum)
{
    printf("%d is a Armstrong number",temp);
}
else
{
    printf("%d is not a Armstrong number",temp);
}

}
    
    
    









    

   

    
       
        
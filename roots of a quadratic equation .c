#include <stdio.h>
#include <math.h>
void main()
{
float a,b,c,d,r1,r2,r;
printf("Enter coefficients of quadratic equation");
scanf("%f%f%f",&a,&b,&c);
d=((b*b)-(4.0*a*c));
r1=((-b+sqrt(d))/(2.0*a));
r2=((-b-sqrt(d))/(2.0*a));
r=(-b/(2.0*a));
 if(d>0)
 {
     printf("the equation has real and distinct roots.\nThey are %f and %f",r1,r2);
 }
 else if(d==0)
 {
     printf("This has  real and equal roots.\nThey are %f and %f",r1,r2);
 }
 else
 {
     printf("the equation has imaginary roots");
 }
}
    
    
    









    

   

    
       
        
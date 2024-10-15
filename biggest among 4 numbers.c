#include <stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter a four numbers(a,b,c and d):");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if((a>b)&&(a>c)&&(a>d))
    printf("%d is big",a);
    else if((b>a)&&(b>c)&&(b>d))
    printf("%d is big",b);
    else if((c>a)&&(c>b)&&(c>d))
    printf("%d is big",c);
    else
    printf("%d is big",d);

}
    
    
    









    

   

    
       
        
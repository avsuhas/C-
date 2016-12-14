/ In the given number x, go to the pth position. 
From the pth position n bits towards the right should be right justified */


#include<stdio.h>

int main()
 {
    int p,x,n;
    printf("enter the value of x,p and n");
    scanf("%d%d%d",&x,&p,&n);
    
    x = x >> (p+1-n) & ~(~0<<n)
    
    printf("After getbits value = %d",x);
 }

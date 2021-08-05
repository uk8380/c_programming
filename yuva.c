#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10],n,i;    
scanf("%d",&n);    
printf("%d in decimal = ",n); 
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
for(i=i-1;i>=0;i--)    
{    
printf("%d", a[i]);  
}    
printf(" in binary");
return 0;  
}  
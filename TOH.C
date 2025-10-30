#include<stdio.h>
#include<string.h>

int c;

void TOH(int n,char src,char aux,char dest)
{
    if(n==0)
        return;
    TOH(n-1,src,dest,aux);
    printf("Disk %d moved from %c to %c\n",n,src,dest);
    c++;
    printf("%d\n",c);
    TOH(n-1,aux,src,dest);
}

int main(){
 int n;
 scanf("%d",&n);
 TOH(n,'A','B','C');
}
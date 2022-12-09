#include<stdio.h>
int main()
{
    int N,j;
    scanf("%d",&N);
    int a[N],i,sum=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
    {
    sum=(sum+a[i]);
    }
    }
        printf("%d",sum);
}
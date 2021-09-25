#include<stdio.h>

int main()
{
    int n,i;
    printf("enter numbers:");
    for(int j=1; j<=3; j++)
    {
        scanf("%d", &n);
        for(i=1; i<=10; i++)
        {
            printf("%d * %d = %d\n", n,i,n*i);
        }
    }
    return 0;
}

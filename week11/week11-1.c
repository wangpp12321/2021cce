//week11-1
#include <stdio.h>
int a[10000000];
int main()
{
    int m;
    scanf("%d",&m);
    for(int i=2;i<m;i++)
    {
        if(a[i]==0)
        {
            printf("%d ",i);
            for(int k=i+i;k<m;k+=i)
            {
                a[k]=1;
            }
        }
    }
}

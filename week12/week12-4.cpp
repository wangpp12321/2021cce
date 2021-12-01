#include <stdio.h>
int a[100];
int main()
{
	for(int i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
	}
    for(int i=0;i<100;i++)
    {
        for(int j=i+1;j<100;j++)///¤@©w­n¼g10-1
        {
            if(a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }

        }
    }
	for(int i=0;i<100;i++)
	{
		printf("%d\n",a[i]);
	}

}

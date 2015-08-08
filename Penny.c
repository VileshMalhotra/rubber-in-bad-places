#include <stdio.h>

int main()
{
    int a[100],x,n,i,j,k,flag=1,sum=0;
    scanf("%d",&n);
    if(n<3)
    {
        printf("False");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=0)
        {
            printf("False");
            return 0;
        }
    }
    
    scanf("%d",&x);
    if(x<=0)
    {
        printf("False");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(i != j && i != k && j !=k)
                {
                    sum=a[i]+a[j]+a[k];
                    if(sum==x)
                    {
                       printf("True");
                       return 0;
                    }
                } 
            }
        }
    }
    printf("False");
    return 0;
}

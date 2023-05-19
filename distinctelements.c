#include <stdio.h>

int main()
{
    int i,j,k,n,a[50],status1,status2;
    printf("enter size");
    scanf("%d",&n);
    printf("enter %d array elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
        status1 = 0;
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                status1=1;
                break;
                
            }
        }
        if(status1==0)
        {
            status2=0;
            for(k=i+1;k<n;k++)
            {
                if(a[i]==a[k])
                {
                    status2=1;
                    break;
                }
            }
        }
        else
        {
            printf("%d\n",a[i]);
        }
        if(status2==0)
        {
            printf("%d\n",a[i]);
        }
   }
 

    return 0;
}

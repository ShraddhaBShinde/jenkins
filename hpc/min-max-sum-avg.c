#include <stdio.h>
int main()
{
     int a[8],i,s=0,g,l;
     float avg;
     printf("Enter 8 Numbers:\n");
     for(i=0;i<8;i++)
     {
          scanf("%d",&a[i]);
          s=s+a[i];
          avg=s/8.0;
     }
     printf("Sum of Array Elements = %d\n",s);
     printf("Average of Elements   = %.2f\n",avg);
     g=a[0];
     for(i=0;i<8;i++)
          if(a[i]>g)
               g=a[i];
     printf(" Maximum Element      = %d\n",g);
     l=a[0];
     for(i=0;i<8;i++)
          if(a[i]<l)
               l=a[i];
     printf("Minimum Element        = %d",l);
     return 0;
}


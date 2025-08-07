#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,i,pos_sum=0,neg_sum=0,zero_sum=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			pos_sum += 1;
		}
		else if(a[i]<0)
		{
			neg_sum += 1;
		}
		else
		{
			zero_sum += 1;
		}
	}
	double pos_prop = (double)pos_sum / n;
	double neg_prop = (double)neg_sum / n;
	double zero_prop = (double)zero_sum / n;
	printf("%.6f\n%.6f\n%.6f",pos_prop,neg_prop,zero_prop);
	return 0;
}
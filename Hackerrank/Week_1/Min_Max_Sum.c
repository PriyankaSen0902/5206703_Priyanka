#include<stdio.h>
int main()
{
	long int num=5,min,max,minsum=0,maxsum=0,i;//declaration and initialization of minsum and maxsum
	int arr[5];
	for(i=0;i<num;i++)
	{
		scanf("%ld",&arr[i]);//Getting array elements from the user
	}
	min=arr[0];
	max=arr[0];
	for(i=1;i<num;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];//To find min array element
		}
		if(arr[i]>max)
		{
			max = arr[i];//To find max array element
		}
	}
	for(i=0;i<num;i++)
	{
		minsum += arr[i];//Find add sum of array elements
		maxsum += arr[i];
	}
	minsum = minsum - max;//To find minimum sum of the array elements
	maxsum = maxsum - min;//To find maximum sum of the array elements
	printf("%ld %ld",minsum,maxsum);// Print the sum of the minimum and maximum sum of the elements
	return 0;
}
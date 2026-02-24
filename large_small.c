#include<stdio.h>
#include<limits.h>
int largest(int arr[], int l)
{
	int large=INT_MIN;
	for(int i=0;i<l;i++)
	{
		if(arr[i]>large)
		large=arr[i];
	}
    return large;
 }

int smallest(int arr[], int l)
{
        int small=INT_MAX;
        for(int i=0;i<l;i++)
        {
                if(arr[i]<small)
                small=arr[i];
        }
    return small;
 }

int main()
{
	int arr[]={1,43,5,78,44};
	int l=sizeof(arr)/sizeof(arr[0]);
	int r=largest(arr,l);
	int s=smallest(arr,l);
	printf("largest = %d\n",r);
	printf("smallest = %d\n",s);
	return 0;
}

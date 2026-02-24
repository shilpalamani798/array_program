#include<stdio.h>
#include<limits.h>
void largest(int arr[], int l)
{
	int large=INT_MIN;
	int small=INT_MAX;
	for(int i=0;i<l;i++)
	{
		if(arr[i]>large)
		large=arr[i];
	}
        
	for(int i=0;i<l;i++)
        {
                if(arr[i]<small)
                small=arr[i];
        }

	printf("large=%d \n small=%d\n ",large,small);
 }



int main()
{
	int arr[]={1,43,5,78,44};
	int l=sizeof(arr)/sizeof(arr[0]);
	largest(arr,l);
	
	
	return 0;
}

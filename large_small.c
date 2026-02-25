#include<stdio.h>
#include<limits.h>
void large_small(int arr[], int l)
{
	int large=arr[0];
	int small=arr[0];
	for(int i=0;i<l;i++)
	{
		if(arr[i]>large)
		large=arr[i];
		if(arr[i]<small)
	         small=arr[i];
	}
        

	printf("large=%d \n small=%d\n ",large,small);
 }



int main()
{
	int arr[]={1,43,5,78,44};
	int l=sizeof(arr)/sizeof(arr[0]);
	large_small(arr,l);
	
	
	return 0;
}

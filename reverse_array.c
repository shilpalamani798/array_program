#include<stdio.h>
void reverse(int a[],int l)
{
	int i,j,temp;
	for(i=0;i<l/2;i++)
	{
         temp=a[i];
	 a[i]=a[l-1-i];
	 a[l-1-i]=temp;
	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	int l=sizeof(arr)/sizeof(arr[0]);
	reverse(arr,l);
	for(int i=0;i<l;i++)
	{
		printf("%d\t",arr[i]);
	}

	printf("\n");
return 0;
}

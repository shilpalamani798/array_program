#include<stdio.h>
int sum(int arr[],int l)
{
	int sum=0;
    for(int i=0;i<l;i++)
    {
	    sum+=arr[i];
    }
  return sum;    
}
int main()
{
  int arr[]={1,2,3,4,5};
  int l= sizeof(arr)/sizeof(arr[0]);
  int r=sum(arr,l);
  printf("sum = %d\n",r);
  return 0;
}

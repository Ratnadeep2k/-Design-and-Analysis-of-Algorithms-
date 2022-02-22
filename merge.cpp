
#include<iostream>
using namespace std;
void Merge(int arr[],int l,int mid,int r)
{
	int	nl=mid-l+1;
	int nr=r-mid;
	int a[nl];
	int b[nr];
	for(int i=0;i<nl;i++)
	{
		a[i]=arr[l+i];
		
	}
	for(int i=0;i<nr;i++)
	{
		b[i]=arr[mid+1+i];
		
	}
	int i=0,j=0,k=l;
	while(i<nl && j<nr)
	{
		if(a[i]<b[j])
		{
			arr[k]=a[i];
			i++;
		}
		else
		{
			arr[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<nl)
	{
		arr[k]=a[i];
			i++;
			k++;
	}
	while(j<nr)
	{
		arr[k]=b[j];
			j++;
			k++;
	}
}
void MergeSort(int arr[],int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		MergeSort(arr,l,mid);
		MergeSort(arr,mid+1,r);
		Merge(arr,l,mid,r);
	}
}

int main()
{
	int arr[100];
	int n;
	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	MergeSort(arr,0,n);
	cout<<"The sorted array is"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
}

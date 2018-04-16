#include<stdio.h>
#include<stdlib.h>

void mergeSort(int arr[], int n);

void merge(int left[], int right[], int arr[], int nl, int nr);

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	mergeSort(arr, n);
	for(int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

void mergeSort(int arr[], int n)
{
	if(n<2)
	{
		return;
	}
	int mid = n/2;
	int left[mid];
	int right[n-mid];
	for(int i=0; i<mid; i++)
	{
		left[i] = arr[i];
	}
	for(int i=mid; i<n; i++)
	{
		right[i-mid] = arr[i];
	}
	mergeSort(left, mid);
	mergeSort(right, n-mid);
	merge(left, right, arr, mid, n-mid);
}

void merge(int left[], int right[], int arr[], int nl, int nr)
{
	int i=0, j=0, k=0;
	while(i<nl && j<nr)
	{
		if(left[i]<=right[j])
		{
			arr[k] = left[i];
			k++;
			i++;
		}
		else
		{
			arr[k] = right[j];
			k++;
			j++;
		}
	}
	while(i<nl)
	{
		arr[k] = left[i];
		i++;
		k++;
	}
	while(j<nr)
	{
		arr[k] = right[j];
		j++;
		k++;
	}
}

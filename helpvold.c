#include<stdio.h>
#include<stdlib.h>

void mergeSort(long long arr[], long long n);

void merge(long long left[], long long right[], long long arr[], long long nl, long long nr);

int main()
{
	long long n, ans=0;
	scanf("%lld", &n);
	long long arr[n];
	for(long long i=0; i<n; i++)
	{
		scanf("%lld", &arr[i]);
	}
	mergeSort(arr, n);
	for(long long i=1; i<n; i++)
	{
		ans += arr[i]*arr[i-1];
	}
	printf("%lld\n", ans);
	return 0;
}

void mergeSort(long long arr[], long long n)
{
	if(n<2)
	{
		return;
	}
	long long mid = n/2;
	long long left[mid];
	long long right[n-mid];
	for(long long i=0; i<mid; i++)
	{
		left[i] = arr[i];
	}
	for(long long i=mid; i<n; i++)
	{
		right[i-mid] = arr[i];
	}
	mergeSort(left, mid);
	mergeSort(right, n-mid);
	merge(left, right, arr, mid, n-mid);
}

void merge(long long left[], long long right[], long long arr[], long long nl, long long nr)
{
	long long i=0, j=0, k=0;
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
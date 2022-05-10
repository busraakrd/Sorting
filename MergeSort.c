#include <stdio.h>

void merge(int arr[], int l, int m, int h)
{
	int n1 = m - l + 1;
	int n2 = h - m;
	int a[n1];
	int b[n2];
	int i, j, k;
	
	for(k = 0; k < n1; k++)
	{
		a[k] = arr[l + k];
	}

	for(j = 0; j < n2; j++)
	{
		b[j] = arr[m + 1 + j];
	}
	
	k = 0;
	j = 0;
	i = l;
	while( k < n1 && j < n2)
	{
		if(a[k] <= b[j])
		{
			arr[i] = a[k];
			k++;
		}
		else
		{ 
			arr[i] = b[j];
			j++;
		}
		i++;
	}

	while(k < n1)
	{
		arr[i] = a[k];
		k++;
		i++;
	}

	while(j < n2)
	{
		arr[i] = b[j];
		j++;
		i++;
	}
}

void MergeSort(int arr[], int l, int h)
{
	if(h > l)
	{
		int m = l + (h - l)/2;

		MergeSort(arr, l, m);
		MergeSort(arr, m + 1, h);

		merge(arr, l, m, h);
	}
}

int main()
{
	int arr[] = {12, 11, 13, 5, 6, 7};
	int size = sizeof(arr)/sizeof(arr[0]);
	MergeSort(arr, 0, size - 1);

	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	return(0);
}

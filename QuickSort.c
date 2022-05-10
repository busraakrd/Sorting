#include <stdio.h>

void swap(int *first, int *second)
{
	int temp;
	temp = *first;
	*first = *second;
	*second = temp;
}

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i;
	i = low -1;

	for(int j = low; j <=high -1; j++)
	{
		if(arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);

	return(i + 1);
}

void QuickSort(int arr[], int low, int high)
{
	if(low < high)
	{
		int part = partition(arr, low, high);
		QuickSort(arr, low, part - 1);
		QuickSort(arr, part + 1, high);
	}
}


int main()
{
	int arr[] = {7, 2, 3, 6, 10, 1, 5};
	int low = 0;
	int high = (sizeof(arr) / sizeof(arr[0])) - 1;
	QuickSort(arr, low, high);
	for(int i = 0; i <= high; i++)
	{
		printf("%d ", arr[i]);
	}
	return(0);
}

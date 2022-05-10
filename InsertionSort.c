#include <stdio.h>

void sorting(int arr[], int n)
{
	int i, j, end;

	for (i = 1; i < n; i++)
	{
		end = arr[i];
		j = i - 1;
		while(j >= 0 && arr[j] > end)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = end;
	}
}

int main()
{
	int arr[] = {9, 5, 4, 10, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	sorting(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return (0);
}

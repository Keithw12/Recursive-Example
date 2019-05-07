#include "selectSort.h"



selectSort::selectSort(int a[])
{
	for (size_t i = 0; i < 20; i++)
	{
		a[i] = rand() % 100 + 1;
	}
}

void selectSort::DoSelectSort(int a[], unsigned int size)
{
	int temp;
	int min;

	for (size_t i = (size / 2); i < size - 1; i++)
	{
		min = a[i];
		for (size_t j = i + 1; j < size; j++)
		{
			if (min >= a[j])
			{
				min = a[j];

				temp = a[i];

				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void selectSort::print(int a[], unsigned int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void selectSort::DoSelectSortR(int arr[], unsigned int size)
{
	int temp;
	int min;

	if (size == 1)
	{
		return;
	}
	for (size_t i = 0; i < (size / 2); i++)
	{
		min = arr[i];
		if (min >= arr[i + 1])
		{
			min = arr[i + 1];
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	DoSelectSortR(arr, size - 1);
}

#include "pch.h"
#include "..\head\utils.h"

int partition(int *arr, int left, int right) {
	int pivot = left;
	int i = left + 1;
	for (int j = i; j <= right; j++) {
		if (arr[pivot] > arr[j])
		{
			swap(arr, i, j);
			i++;
		}
	}
	swap(arr, pivot, i - 1);
	return i - 1;

}

void quicksort(int *arr,int left,int right) {
	if (left<right)
	{
		int pivot_index = partition(arr, left, right);
		quicksort(arr, left, pivot_index - 1);
		quicksort(arr,  pivot_index + 1,right);
	}
}




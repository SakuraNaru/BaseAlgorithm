#include "pch.h"
#include <iostream>


void swap(int *arr, int i, int j) {
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

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


int main()
{
	int a[] = { 5, 9, 7, 6, 4, 3, 8, 1,11,5 ,10 };
	quicksort(a, 0, (sizeof(a) / sizeof(a[0]))-1);
	for (int i=0 ;i< (sizeof(a) / sizeof(a[0]));i++)
		std::cout << a[i]<<" "; 
}

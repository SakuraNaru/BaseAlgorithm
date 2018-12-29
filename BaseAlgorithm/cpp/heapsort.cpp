#include "pch.h"
#include "..\head\utils.h"
#include <math.h>
extern int LEN = 11;

void heapMove(int *arr, int i);
void buildMaxHeap(int *arr)
{
	for (int i = floor(LEN/2); i >= 0; i--)
	{
		heapMove(arr, i);
	}
}
void heapMove(int *arr,int i)
{
	int left = i * 2 + 1;
	int right = i * 2 + 2;
	int largest = i;
	
	if (left < LEN && arr[i]<arr[left])
	{
		largest = left;
	}
	if (right < LEN && arr[largest]<arr[right])
	{
		largest = right;
	}
	if (largest!=i)
	{
		swap(arr, largest, i);
		heapMove(arr, largest);
	}
}
void heapsort(int *arr)
{
	buildMaxHeap(arr);
	for (int i = LEN-1; i > 0; i--)
	{
		swap(arr, 0, i);
		LEN--;
		heapMove(arr, 0);
	}
}
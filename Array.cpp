#include <iostream>
#include "Array.h"
using namespace std;

void Array:: enterArray(){
	cout << "Enter the elements: " << endl;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
}

void Array:: printArray(){
	for (int j = 0; j < n; j++){
		cout << arr[j] << " ";
	}
	cout << endl;
}

void Array:: merge(int *a, int low, int high, int mid){
	int i, j, k;
	int c[n];
	i = low;
	k = low;
	j = mid + 1;
	while (i <= mid && j <= high){
		if (a[i] < a[j]){
			c[k] = a[i];
			i++;
			k++;
		}
		else{
			c[k] = a[j];
			j++;
			k++;
		}
	}
	while (i <= mid){
		c[k] = a[i];
		i++;
		k++;
	}
	while (j <= high){
		c[k] = a[j];
		j++;
		k++;
	}
	for (i = low; i < k; i++){
		a[i] = c[i];
	}
}

void Array:: mergeSort(int *a, int low , int high){
	int mid;
	if (low < high){
		mid = (low + high) / 2;
		mergeSort(a, low, mid);
		mergeSort(a, mid + 1, high);
		merge(a, low, high, mid);
	}
	return;
}

void Array::sortArray(){
	mergeSort(arr , 0 , n-1);
}

void Array:: binarySearch(int searchElement){
	int first = 0;
	int last = n-1;
	int middle = (first+last)/2;
	while (first <= last){
		if(arr[middle] < searchElement){
			first = middle + 1;
		}
		else if(arr[middle] == searchElement){
			cout << searchElement << " is at location " << middle+1 << endl;
			break;
		}
		else{
			last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last){
		cout << searchElement << " not found! " << endl;
	}
}

void Array:: searchElement(){
	cout << "Enter the element to be searched: ";
	int el; cin >> el;
	binarySearch(el);
}
 Array:: ~Array(){
	delete[] arr;
}
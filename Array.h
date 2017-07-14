#ifndef ARRAY_H
#define ARRAY_H

class Array{
	
	public:
		void enterArray();
		void printArray();
		void sortArray();
		void searchElement();
		void deleteArray();

	private:
		const int n = 10;
		int* arr = new int[n];
		void merge(int *a, int low, int high, int mid);
		void mergeSort(int *a, int low , int high);
		void binarySearch(int searchElement);

};
#endif
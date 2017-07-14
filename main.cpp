#include <iostream>
#include "Array.h"
using namespace std;

int main(){
	Array arr;
	arr.enterArray();
	arr.sortArray();
	arr.printArray();
	arr.searchElement();
	arr.deleteArray();
	return 0;
}
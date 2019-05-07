#include "selectSort.h"

int main()
{
	srand(time(NULL));
	int size = 20;
	int *iArray = new int[size];

	selectSort *sSort = new selectSort(iArray);
	sSort->print(iArray,size);
	cout << "Iterative Function Sort:\n";
	sSort->DoSelectSort(iArray, size);
	sSort->print(iArray, size);
	cout << "Recursive Function Sort:\n";
	sSort->DoSelectSortR(iArray, size);
	sSort->print(iArray, size);

	delete[] iArray;
	iArray = NULL;
	delete sSort;
	sSort = NULL;

	system("pause");
	return 0;
}
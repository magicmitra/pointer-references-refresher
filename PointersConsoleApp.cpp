#include <iostream>

int val = 1;
int val2 = 2;
int* valPtr = &val;
int& valRef = val;

void printVals()
{
	// display 1st assignment
	std::cout << "Values:" << std::endl;
	std::cout << "val: " << val << "\nval2: " << val2 << "\nvalPtr: " << *valPtr << "\nvalRef: " << valRef << std::endl;
	std::cout << "Addresses:" << std::endl;
	std::cout << "val: " << &val << "\nval2: " << &val2 << "\nvalPtr: " << valPtr << "\nvalRef: " << &valRef << std::endl;

	// reassign pointer and reference (2nd assignment)
	valPtr = &val2;
	valRef = val2;
}

int main()
{
	printVals();
	return 0;
}
#include <iostream>


int main() {


	const int arraySize = 100;
	const int arraySize2 = 100;
	const int arraySize3 = 100;
	int array1[arraySize];
	int array2[arraySize2];
	int array3[arraySize3];

	for (int i = 0; i < 100; i++) {

		array1[i] = i + 1;

		std::cout << array1[i] << std::endl;
	}

	for (int i = 0; i < 100; i++) {

		array2[i] = i + 100;

		std::cout << array2[i] << std::endl;
	}

	for (int i = 0; i < 100; i++) {

		std::cout << array2[i] << '\n' << array1[i]  << std::endl;
		
	}

	//if (i = 100) {
	//	for (int i = 100; i < 200; i++) {
	//		array1[i] = i + 1;
	//		std::cout << array1[i] << std::endl;
	//	}
	//}

	return 0;

	
	
}

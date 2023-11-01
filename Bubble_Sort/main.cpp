#include <iostream>

//perform optimized bubble sort
//comparing adjacment elements in array
void bubbleSort(int* arr, int size){
	for(int i = 0; i < size; ++i){
		int swapped = false;
		for(int j = 0; j < (size - i); ++j){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = true;
			}
		}
		if(swapped == false){
			break;
		}
	}
}

void printArray(int* arr, int size){
	for(int i = 0; i < size; i++){
		std::cout << arr[i] << " ";
	}
}

int main(){
	int arr[] = {-9, 8, 3, 0, 1, 5};
	int size = sizeof(arr)/sizeof(arr[0]);

	std::cout << "Unsorted array: " ;
	printArray(arr, size);
	std::cout << std::endl;

	std::cout << "Sorted array: " ;
	bubbleSort(arr, size - 1);
	printArray(arr, size);
	std::cout << std::endl;
}

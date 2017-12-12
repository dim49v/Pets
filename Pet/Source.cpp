#include "Header.h"

int main(){
	Dog d1;
	Cat c1(2,1,15,"Myrka");
	Pet* arr[2];
	arr[0] = &c1;
	arr[1] = &d1;
	for (int i = 0; i < 2; i++){
		arr[i]->voice();
	}
	cout << (*arr[0]);
	system("pause");
}
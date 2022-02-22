#include <stdio.h>

int main(){
	int NumValue=10;
	int *ipointerNumValue;
	ipointerNumValue=&NumValue;
	
	
	printf("Address of the variable NumValue is: %p\n", &NumValue);
	
	printf("Address stored in the variable ipointerNumValue is: %p\n", &ipointerNumValue);
	
	printf("Value of the variable *ipointerNumValue is %d\n", *ipointerNumValue);
	
	return 0;
}

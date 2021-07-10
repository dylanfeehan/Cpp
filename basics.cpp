#include <cstdio>

/*
Compile: 
	% g++ -o ./runFile ./sourceCode
Run: 
	% ./runFile
*/

/*FUNCTIONS*/

// placeholder: %d = int, %s = char* (String)
void print(char const* myString){
	printf("String >> %s\n", myString);
}
void print(int myInt){
	printf("int >> %d\n", myInt);
}
//DEFAULT PARAMS
void addNums(int a = 1, int b = 1){
	printf("%d + %d: %d\n", a, b, a + b);
}

int main(){
	printf("Hello, world!\n");
	print("-char");
	print(1);
	printf("Should be 6: ");
	addNums(2, 4);
	printf("Should be 2: ");
	addNums();
	printf("Should be 3: ");
	addNums(2); // can give it one of the two params, second will be default.
	return 0;
}

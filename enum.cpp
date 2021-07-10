#include <iostream>

int main(){
	enum season{
		spring = 1,
		summer = 2, 
		fall = 3, 
		winter = 4
	};
	std::cout << "Enter season: ";
	int res;
	std::cin >> res;

	if(res == 1) printf("it is spring\n");
	else if(res == 2) printf("it is summer\n");
	else if(res == 3) printf("it is fall\n");
	else if(res == 4) printf("it is winter\n");
	else printf("Bad number.\n");

	return 0;
}
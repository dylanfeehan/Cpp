#include <cstdio>


namespace First {
	namespace Inner {
		void foo(){
			printf("This is First::Inner::foo\n");
		}
	}
}
namespace Second {
	void foo(){
		printf("This is second::foo\n");
	}
}
void foo(){
	printf("This is global foo\n");
}
int main(){
	Second::foo();
	First::Inner::foo();
	foo();

	printf("Using namespace first: \n");
	using namespace Second;
	Second::foo();
	::foo();
	using namespace First;
	First::Inner::foo();
	::foo();
	
	return 0;
}
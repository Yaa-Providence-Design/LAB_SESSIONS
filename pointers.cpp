#include <iostream>
int main(){
char array[]{"Hello"};
char *p {array};
if(&array[2] != (p+5))

	std::cout<<"Weird!" <<std::endl;
else
	std::cout<<"Good" <<std::endl;


}

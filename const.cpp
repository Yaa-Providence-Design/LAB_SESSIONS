#include <iostream>
#include <string>
int main(){
	std::string word;
	std::cout<<"Enter a word: ";
	std::cin>>word;
	std::cout<<word <<"\n";
	char* charptr {word.c_str()};

}

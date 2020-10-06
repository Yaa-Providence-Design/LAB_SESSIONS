#include <iostream>
#include <string>
int main()
{
	std::cout<<"Enter a word: ";
	std::string fullword;
		std::cin>>fullword;
		int wordCount = 0;
		for(int i = 0; i<fullword.length(); i++)
		{
			std::string letter {fullword[i]};
			if(letter!= "-"){
				std::cout<<fullword[i];
				wordCount++;
			}
			else{
				std::cout<<"\t"<<wordCount<<std::endl;
			    	wordCount = 0;
				std::cout<<"\n";
			}

		}

		std::cout<<"\t"<<wordCount<<std::endl;
		std::cout<<"\n";

}

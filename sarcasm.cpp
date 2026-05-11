#include <cctype>
#include <iostream>

int main(int argc, char* argv[])
{
	// here so that it's easier to find where the sarcams output starts
	// and where it ends when the input is very long
	std::cout << "\n";
	size_t letter_counter = 0;

	//skip the first argument cuz that's usually the name of the program
	for(int word_iterator = 1; word_iterator < argc; ++word_iterator)
	{
		std::string current_word = argv[word_iterator];
		
		for(char& letter_iterator : current_word)
		{
			//check if it's actually a letter and check if it's not upper-case already
			//cuz some words (/acronyms) need to be upper case (for example NASA)
			if(std::isalpha(letter_iterator) && std::islower(letter_iterator))
			{
				if((letter_counter % 2) != 0)
				{
					letter_iterator = std::toupper(letter_iterator);
				}
				++letter_counter;
				
			}
			std::cout << letter_iterator;
			
		}
		std::cout << " ";
		
	}
	std::cout << std::endl;

}
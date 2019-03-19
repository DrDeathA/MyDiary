#include <iostream>
#include <string>

int main(int argc, char**)
{
	std::string thoughts;
	bool exit = false;

	//Get actual device name for greeting
	std::cout << "What is the title of this diary entry?" << std::endl;
	std::string tital;
	std::getline(std::cin, tital);

	//setup file to write

	std::cout << "to exit, enter only a single back slash (\\)" << std::endl;
	std::cout << "What is on your mind?" << std::endl;
	while (!exit)
	{
		std::getline(std::cin, thoughts);
		if (thoughts == "\\")
		{
			exit = true;
		}
		else
		{
			//File append
			std::cout << "tell me more!" << std::endl;
		}

	}

	return 0;
}
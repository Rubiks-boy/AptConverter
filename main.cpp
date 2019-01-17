// (C) Stephan Vedder
#ifndef DLL_PROJECT
#include "Aptfile.hpp"

int main(int argc, char** argv)
{
	std::string filename;
	switch(argc)
	{
	case 1:
	{
		std::cout << "Please specify the file you want to convert:" << std::endl;	
		std::cin >> filename;
		break;
	}
	case 2:
	{		
		filename = argv[1];
		break;
	}
	default:
		break;
	}

	if (AptFile::Convert(filename))
		std::cout << "Succesfully converted " << filename << " !" << std::endl;
	else
		std::cout << "Failed to convert " << filename << " !" << std::endl;

	system("pause");
	
	return 0;
}
#endif
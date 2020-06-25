#include <iostream>
#include <fstream>
#include "ListOfPositions.h"


#define LISTOFPOSITIONFILE "ListOfPositions.txt"
enum class controls:char {add = '1', remove = '2', listAll = '3', find = '4', help = '5'};

int main() {
	const std::string help = "Enter 1 to add position to list.\nEnter 2 to remove position by name from list.\nEnter 3 to list all positions in list.\nEnter 4 to find positions in list\nEnter 5 to show this message.\nEnter 0 to quit.";
	std::ofstream outputListFile;
	ListOfPositions* positionsList = new ListOfPositions;
	inputListFile.open(LISTOFPOSITIONFILE);
	
	std::ifstream inputListFile;
	if (inputListFile.is_open()) {
		std::string buf;
		while (std::getline(inputListFile, buf))
			positionsList->Add(new SimplePosition(buf));
		inputListFile.close();
	}
	
	std::cout << help << std::endl;
	std::string controlSymbol;
	std::cin >> controlSymbol;
	
	while (controlSymbol[0] != '0')
	{
		controls c = static_cast<controls>(controlSymbol[0]);

		switch (c)
		{
		case controls::add:{
			std::cout << "Please enter position value" << std::endl;
			std::cin >> buf;
			if(!buf.empty()){
				std::string buf;
				outputListFile.open(LISTOFPOSITIONFILE, std::ios::app);
				positionsList->Add(new SimplePosition(buf));
				outputListFile << buf + '\n';
				outputListFile.close();
				std::cout<< "Added position \"" << buf << "\"" << std::endl; 
			}else{
				std::cout<< "Can't add empty position" << std::endl;
			}
			break;
		}
		case controls::remove:{
			std::string buf;
			std::cout << "Please enter position value to remove" << std::endl;
			std::cin >> buf;
			SimlePosition pos(buf);
			positionsList->Remove(&pos);
			delete(&pos);
			outputListFile.open(LISTOFPOSITIONFILE,std::ios::trunc);
			std::list<AbstractPosition*> allPositions = positionsList->ReturnAll();
			for (const auto& position : allPositions) {
				outputListFile << position->GetValue() << "\n";
			}
			outputListFile.close();	
			break;
		}
		case controls::listAll:
		{
			allPositions = positionsList->ReturnAll();
			int i = 1;
			for (const auto& position : allPositions) {
				std::cout << std::to_string(i) << ") " << position->GetValue() << std::endl;
				i++;
			}
			break;
		}
		case controls::find:
		{
			std::string buf;
			std::cout << "Please enter substring of positions you want to find." << std::endl;
			std::cin >> buf;
			std::list<AbstractPosition*> listBuf;
			listBuf = positionsList->Find(buf);

			if (listBuf.empty()) {
				std::cout << "nothing found" << std::endl;
			}
			else {
				for (const auto& position : listBuf) {
					std::cout << position->GetValue() << std::endl;
				}
			}
			break;
		}
		case controls::help:
			std::cout << help << std::endl;
			break;
		default:
			std::cout << "not valid comand" << std::endl;
		}
		std::cin >> controlSymbol;
	}
	delete(positionsList);
	return 0;
}



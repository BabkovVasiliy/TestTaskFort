#include "ListOfPositions.h"
#include <algorithm>
/// Реализация методов класса ListOfPositions
void ListOfPositions::Add(AbstractPosition* newPosition)
{	
	positions.push_back(newPosition);
}

void ListOfPositions::Remove(AbstractPosition* positionToRemove)
{
	positions.remove_if([positionToRemove](AbstractPosition* position) {return *positionToRemove == *position; });

}

std::list<AbstractPosition*> ListOfPositions::Find(std::string positionToFind)
{
	std::list<AbstractPosition*> found;


	std::copy_if(positions.begin(), positions.end(), std::back_inserter(found),
		[positionToFind](AbstractPosition* position) {return !position->GetValue().find(positionToFind); });

	return found;
}

std::list<AbstractPosition*> ListOfPositions::ReturnAll()
{
	return positions;
}


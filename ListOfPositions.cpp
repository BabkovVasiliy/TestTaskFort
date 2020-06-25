#include "ListOfPositions.h"
#include <algorithm>
/// Реализация методов класса ListOfPositions
void ListOfPositions::Add(AbstractPosition* newPosition)
{	
	positions.push_back(newPosition);
}

void ListOfPositions::Remove(AbstractPosition* positionToRemove)
{
	for (auto it = positions.begin(); it != positions.end(); ++it) {
		AbstractPosition* pos = *it;
		if (*pos == *positionToRemove) {
			positions.erase(it);
			delete(pos);
		}
	}
}

std::list<AbstractPosition*> ListOfPositions::Find(const std::string positionToFind)
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

ListOfPositions::~ListOfPositions()
{
	for (auto it = positions.begin(); it != positions.end(); ++it) {

			positions.erase(it);
			delete(pos);
	}
}
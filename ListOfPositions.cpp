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
			it = positions.erase(it);
			delete(pos);
			--it;
		}
	}
}

std::list<AbstractPosition*> ListOfPositions::Find(const std::string positionToFind)
{
	std::list<AbstractPosition*> found;
	std::copy_if(positions.begin(), positions.end(), std::back_inserter(found),
		[positionToFind](auto position) {return !position->GetValue().find(positionToFind); });
	return found;
}

std::list<AbstractPosition*> ListOfPositions::ReturnAll()
{
	return positions;
}

ListOfPositions::~ListOfPositions()
{
	for (auto it = positions.begin(); it != positions.end(); ++it) {
			it = positions.erase(it);
			delete(*it);
	}
}
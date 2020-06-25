#include "ListOfPositions.h"
#include <algorithm>

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
			if (!positions.empty()&& it !=positions.begin())
				--it;
			if (positions.empty())
				break;
		}
	}
}

std::list<AbstractPosition*> ListOfPositions::Find(const std::string positionToFind)
{
	std::list<AbstractPosition*> found;
	std::copy_if(positions.begin(), positions.end(), std::back_inserter(found),
		[positionToFind](auto position) {return (position->GetValue().find(positionToFind))!=std::string::npos; });
	return found;
}

std::list<AbstractPosition*> ListOfPositions::ReturnAll()
{
	return positions;
}

ListOfPositions::~ListOfPositions()
{
	for (const auto& pos : positions) {
		delete(pos);
	}
	positions.clear();
}
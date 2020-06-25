#include "SimplePosition.h"
/**
*Реализация методов класса SimplePosition
*/

SimplePosition::SimplePosition(std::string value)
{
	this->value = value;
}

std::string SimplePosition::GetValue() const
{
	return value;
}

bool SimplePosition::operator==(const AbstractPosition& other) const
{
	return(GetValue() == other.GetValue());
}

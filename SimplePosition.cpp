#include "SimplePosition.h"

SimplePosition::SimplePosition(const std::string& value)
{
	this->value = value;
}

std::string SimplePosition::GetValue() const
{
	return value;
}

bool SimplePosition::operator==(const AbstractPosition& other) const
{
	return GetValue() == other.GetValue();
}

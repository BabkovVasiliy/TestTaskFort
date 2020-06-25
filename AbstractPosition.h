#pragma once
#include <string>
/// \class AbstractPosition
/*!Класс, описывающий абстрактую позицию. ќт него могут быть наследованы другие имплементации позиции, например со списком аргументов.

*/

class AbstractPosition {
protected:
	std::string value; /*< «начение позиции. */
public:

	virtual ~AbstractPosition() {};
	virtual std::string GetValue() const = 0; /* √еттер дл¤ значени¤*/
	virtual bool operator==(const AbstractPosition&) const = 0 ;
};
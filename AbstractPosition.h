#pragma once
#include <string>

/// \class AbstractPosition
/*!Класс, описывающий абстрактую позицию.

*/

class AbstractPosition {
protected:
	std::string value; /** Значение позиции. */
public:
	virtual ~AbstractPosition() {};
	virtual std::string GetValue() const = 0; /** Геттер для значения*/
	virtual bool operator==(const AbstractPosition&) const = 0 ;
};
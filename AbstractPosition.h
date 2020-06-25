#pragma once
#include <string>

/// \class AbstractPosition
/*!Класс, описывающий абстрактую позицию.

*/

class AbstractPosition {
protected:
	/** Значение позиции. */
	std::string value; 
public:
	virtual ~AbstractPosition() {};
	/** Геттер для значения*/
	virtual std::string GetValue() const = 0; 
	/**Оператор равенства*/
	virtual bool operator==(const AbstractPosition&) const = 0 ;
};
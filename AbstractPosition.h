#pragma once
#include <string>
//! AbstractPosition
/*! Класс, описывающий абстрактую позицию. От него могут быть наследованы другие имплементации позиции, например со списком аргументов.

*/

class AbstractPosition {
protected:
	std::string value; /*< Значение позиции. */
public:

	virtual ~AbstractPosition() {};
	virtual std::string GetValue() const = 0; /* Геттер для значения*/
	virtual bool operator==(const AbstractPosition&) const = 0 ;
};
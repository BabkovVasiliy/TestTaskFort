#pragma once
#include "AbstractPosition.h"

/*! Класс для простой позиции. Содержит в с простая строка со значением. 
От данного класса дальнейшее наследование невозможно.
*/
class SimplePosition final: public AbstractPosition {

public:

	SimplePosition(std::string );
	std::string GetValue() const override; /**Возвращает значение позиции.*/

	bool operator==(const AbstractPosition&) const override; /**Определение оператора ==*/

};
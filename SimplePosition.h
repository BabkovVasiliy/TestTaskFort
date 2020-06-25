#pragma once
#include "AbstractPosition.h"

/// \class SimplePosition
/*! Класс для простой позиции. Содержит в себе только строку со значением. 
От данного класса дальнейшее наследование невозможно.
*/
class SimplePosition final: public AbstractPosition {

public:
	SimplePosition(const std::string&);
	/**Возвращает значение позиции.*/
	std::string GetValue() const override;
	/**Определение оператора ==*/
	bool operator==(const AbstractPosition&) const override;
};
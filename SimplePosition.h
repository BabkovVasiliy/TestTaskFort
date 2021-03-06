#pragma once
#include "AbstractPosition.h"

/// \class SimplePosition
/** Класс для простой позиции.
*Содержит в себе только строку со значением и геттер этого значения. 
*От данного класса дальнейшее наследование невозможно.
*/
class SimplePosition final: public AbstractPosition {

public:
	SimplePosition(const std::string&);
	/**Возвращает значение позиции.*/
	std::string GetValue() const override;
	/**Определение оператора ==
	*Возвращает true если value обоих операндов одинаково и false иначе.
	*/
	bool operator==(const AbstractPosition&) const override;
};
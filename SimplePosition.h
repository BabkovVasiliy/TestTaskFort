#pragma once
#include "AbstractPosition.h"

/*! ����� ��� ������� �������. �������� � � ������� ������ �� ���������. 
�� ������� ������ ���������� ������������ ����������.
*/
class SimplePosition final: public AbstractPosition {

public:

	SimplePosition(std::string );
	std::string GetValue() const override; /**���������� �������� �������.*/

	bool operator==(const AbstractPosition&) const override; /**����������� ��������� ==*/

};
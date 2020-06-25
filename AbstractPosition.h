#pragma once
#include <string>
//! AbstractPosition
/*! �����, ����������� ���������� �������. �� ���� ����� ���� ����������� ������ ������������� �������, �������� �� ������� ����������.

*/

class AbstractPosition {
protected:
	std::string value; /*< �������� �������. */
public:

	virtual ~AbstractPosition() {};
	virtual std::string GetValue() const = 0; /* ������ ��� ��������*/
	virtual bool operator==(const AbstractPosition&) const = 0 ;
};
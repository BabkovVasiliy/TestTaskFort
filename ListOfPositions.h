#pragma once
#include <list>

#include "SimplePosition.h"


/**
* ������ ����� ��������� ������ � ���������, � ������ ��������, ����������, ��������, ����� � ��������� ������ ������ ���� �������.
*/
class ListOfPositions final{
private:
	std::list<AbstractPosition*> positions; /**< ���� ���� �������*/
public:
	void Add(AbstractPosition*);	/**< ����� ���������� ������� � ����*/
	void Remove(AbstractPosition*); /**< ����� �������� ������� �� �����*/
	/**
		*����� ������ ������� � �����.
		*������ ����� ���������� ������ �� ������ �������.
	*/
	std::list<AbstractPosition*> Find(std::string);   

	std::list<AbstractPosition*> ReturnAll();

};
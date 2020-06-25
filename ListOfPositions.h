#pragma once
#include <list>

#include "SimplePosition.h"


/**
* Данный класс реализует работу с позициями, а именно хранение, добавление, удаление, поиск и генерацию строки вывода всех позиций.
*/
class ListOfPositions final{
private:
	std::list<AbstractPosition*> positions; /**< Лист всех позиций*/
public:
	void Add(AbstractPosition*);	/**< Метод добавления позиции в лист*/
	void Remove(AbstractPosition*); /**< Метод удаления позиции из листа*/
	/**
		*Метод поиска позиции в листе.
		*Данный метод возвращает ссылку на объект позиции.
	*/
	std::list<AbstractPosition*> Find(std::string);   

	std::list<AbstractPosition*> ReturnAll();

};
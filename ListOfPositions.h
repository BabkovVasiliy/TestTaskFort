#pragma once
#include <list>

#include "SimplePosition.h"

/// \class ListOfPositions
/**
* Данный класс реализует работу с позициями, а именно хранение, добавление, удаление, поиск и генерацию строки вывода всех позиций.
*/
class ListOfPositions final{
private:
	/**Лист всех позиций*/
	std::list<AbstractPosition*> positions; 
public:
	~ListOfPositions();
	/** Метод добавления позиции в лист.
	*В качестве аргумента принимает AbstractPosition* и добавляет её в список positions.
	*/
	void Add(AbstractPosition*);	
	/** Метод удаления позиции из листа
	*В качестве аргумента принимает AbstractPostion* и удаляет её из списка positions.
	*/
	void Remove(AbstractPosition*);
	/**Метод поиска позиции в листе.
	*Выполняет поиск всех посзиций содержащих 
	*Возвращает ссылку на лист найденных позиций.
	*/
	std::list<AbstractPosition*> Find(std::string);   
	/**Метод, возвращающий все позиции*/
	std::list<AbstractPosition*> ReturnAll();
};
#pragma once
#include <list>

class AbstractPosition;

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
	/** Метод добавления позиции в лист*/
	void Add(AbstractPosition*);	
	/**< Метод удаления позиции из листа*/
	void Remove(AbstractPosition*);
	/**
		*Метод поиска позиции в листе.
		*Данный метод возвращает ссылку на объект позиции.
	*/
	std::list<AbstractPosition*> Find(std::string);   
	/**Метод, возвращающий все позиции*/
	std::list<AbstractPosition*> ReturnAll();
};
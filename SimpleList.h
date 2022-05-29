// SimpleList.h

#ifndef SIMPLELIST_H
#define SIMPLELIST_H

#include "EmptyListException.h"
#include "FullListException.h"
#include "InvalidIndexException.h"

template <class T>
class SimpleList {

	public:
		SimpleList();
		~SimpleList();
		T at(int index) const;
		bool empty() const;
		T first() const;
		T last() const;
		int getNumElements() const;
		void insert(T item);
		void remove(int index);
		static const int CAPACITY = 10;
	private:
		int numElements;
		T* elements;
};
#include "SimpleList.cpp"

#endif

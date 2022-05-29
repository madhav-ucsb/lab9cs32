#include "EmptyListException.h"
#include "FullListException.h"
#include "InvalidIndexException.h"
#include "SimpleList.h"

#include <stdexcept>
template <class T>
SimpleList<T>::SimpleList()
{

  T *a = new T[CAPACITY];
  numElements = 0;

  elements = a;
}
template <class T>
bool SimpleList<T>::empty() const
{
  return numElements==0;
}
template <class T>
T SimpleList<T>::at(int index) const
{
  if (index>=numElements|| index<0)
  {
    throw InvalidIndexException();
  }

  return elements[index];

}



template <class T>
T SimpleList<T>::first() const
{
  if (empty())
  {
    throw EmptyListException();
  }

  return elements[0];

}
template <class T>
T SimpleList<T>::last() const
{
  if (empty())
  {
    throw EmptyListException();
  }

  return elements[numElements-1];
}
template <class T>

int SimpleList<T>::getNumElements() const
{
  return numElements;
}
template <class T>
void SimpleList<T>::insert(T item)
{
  if (numElements==10)
  {
    throw FullListException();
  }
    
  elements[numElements] = item;
  numElements = numElements+1;

}
template <class T>
SimpleList<T>::~SimpleList()
{
  delete[] elements;
  
}

template <class T>
void SimpleList<T>::remove(int index)
{
  if(empty())
  {
    throw EmptyListException();
  }
  if (numElements<=index || index<0)
  {
    throw InvalidIndexException();
  }
  for (int i = index + 1; i<numElements; i++)
    {
      elements[i-1] = elements[i];
        
    }
  numElements = numElements - 1;
    
}









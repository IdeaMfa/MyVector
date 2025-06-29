#pragma once

//Feature	Description
//Constructor	Initializes internal array with given capacity
//Destructor	Frees the dynamic memory
//PushBack(int)	Adds an element to the end of the array(resizes if needed)
//PopBack()	Removes the last element
//operator[]	Returns a reference to an element at a given index
//Size()	Returns current number of elements
//Capacity()	Returns how much space is allocated

#include <cassert>

template<class T>
class MyVector
{
private:
	T* m_Data;
	int m_size;
	int m_capacity;

	void Resize(int newCapacity)
	{
		assert(newCapacity >= m_size && "Resize error: newCapacity must be >= current size!");

		T* newData = new T[newCapacity];

		for (int i = 0; i < m_size; i++) {
			newData[i] = m_Data[i];
		}

		delete[] m_Data;

		m_Data = newData;
		m_capacity = newCapacity;
	}

public:
	MyVector() // Default constructor
		: m_Data(nullptr), m_size(0), m_capacity(0) {};

	~MyVector() { // Default Destructor
		delete[] m_Data;
		m_Data = nullptr;
	};

	void PushBack(T newElement)
	{
		if (m_size == m_capacity) {
			Resize(m_capacity == 0 ? 1 : 2 * m_capacity);
		}

		m_Data[m_size] = newElement;
		m_size++;
	}
	void PopBack()
	{
		if (m_size > 0) {
			--m_size;
		}
	}
	int Size() const
	{
		return m_size;
	}
	int Capacity() const
	{
		return m_capacity;
	}
	void Print() const
	{
		if (m_size == 0) {
			std::cout << "[]" << std::endl;
			return;
		}

		std::cout << "[";
		for (int i = 0; i < m_size - 1; i++) {
			std::cout << m_Data[i] << ", ";
		}
		std::cout << m_Data[m_size - 1] << "]" << std::endl;
	}

	int& operator[](int index) // ReturnType operator<symbol>(ArgumentType)
	{
		assert(index >= 0 && index < m_size && "Index out of bounds!");
		return m_Data[index];
	}
};
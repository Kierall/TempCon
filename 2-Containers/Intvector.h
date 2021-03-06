#pragma once


class intvector
{

	int * data;     //ptr to dynamically allocated arry
	size_t capacity;//total capacity
	size_t size;    //total number of elements stored

public:
	intvector();
	~intvector();

	int &at(size_t idx);

	int &append(int val);
	int *Data() const;
	size_t Capacity() const;
	size_t Size() const;
	bool Empty() const;
	int Front() const;
	int Back() const;
	int & operator[](size_t idx);
	int operator[](size_t idx) const;
	void clear();
	void erase(size_t idx);
	int count(size_t idx);
	void insert(size_t idx, size_t val);
	void reserve(size_t nCap);
	void compact();
	void printVector();

private:
	bool grow(size_t minSize);
	
};

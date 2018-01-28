#pragma once

#include "header.h"

template<typename T>
class Stack{
public:
	Stack(int n = 10);
	~Stack() {
		delete stackPtr;
	}
	bool push(const T& pushValue);
	bool pop(T& popValue);

private:
	int size;
	int top;
	T *stackPtr;
	
	bool isEmpty() const{
		return (top == -1);
	}
	bool isFull() const {
		return (top == (size - 1));
	}	
};


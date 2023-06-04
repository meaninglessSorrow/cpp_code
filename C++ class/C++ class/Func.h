#pragma once

#include<iostream>

using namespace std;

typedef int DataType;

//struct Stack
class Stack
{
public:
	//��Ա����  ����������Ҫ��ǰ׺���� StackInit
	void Init(size_t capacity = 4);

	void Push(const DataType data);

	DataType Top();

	void Destroy();

private:
	//��Ա����
	DataType* _array;
	size_t _capacity;
	size_t _top;
};

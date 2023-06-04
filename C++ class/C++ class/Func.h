#pragma once

#include<iostream>

using namespace std;

typedef int DataType;

//struct Stack
class Stack
{
public:
	//成员函数  函数名不需要加前缀名称 StackInit
	void Init(size_t capacity = 4);

	void Push(const DataType data);

	DataType Top();

	void Destroy();

private:
	//成员变量
	DataType* _array;
	size_t _capacity;
	size_t _top;
};

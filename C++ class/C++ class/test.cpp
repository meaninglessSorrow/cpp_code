#define _CRT_SECURE_NO_WARNINGS 1

#include"Func.h"

//#include<iostream>
//
//using namespace std;
//
//typedef int DataType;
//
////类也是一个域，虽然Init函数名相同，但是它们是在不同的域中，一般情况下Cpp有这个{}括号都是一个域
//struct Queue {
//	void Init()
//	{
//
//	}
//};
//
////成员变量可以写在成员函数之后，也可以在之前，因为类域是一个整体
//struct Stack
//{
//	//成员函数  函数名不需要加前缀名称 StackInit
//	void Init(size_t capacity=4)
//	{
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (nullptr == _array)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_capacity = capacity;
//		_top = 0;
//	}
//	void Push(const DataType data)
//	{
//		// 扩容
//		_array[_top] = data;
//		++_top;
//	}
//	DataType Top()
//	{
//		return _array[_top- 1];
//	}
//	void Destroy()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_top = 0;
//		}
//	}
//
//	//成员变量
//	DataType* _array;
//	size_t _capacity;
//	size_t _top;
//};
//
//int main()
//{
//	struct Stack st1;//C
//
//	Stack st2;//C++
//
//	st2.Init();
//	st2.Push(1);
//	st2.Push(2);
//	st2.Push(1);
//	st2.Push(2);
//	cout << st2.Top() << endl;
//
//	//for (auto e : st2._array)
//	//{
//
//	//}
//	st2.Destroy();
//	return 0;
//}

//class className
//{
//	// 类体：由成员函数和成员变量组成
//};  // 一定要注意后面的分号

//#include<iostream>
//
//using namespace std;
//
//typedef int DataType;
//
////类也是一个域，虽然Init函数名相同，但是它们是在不同的域中，一般情况下Cpp有这个{}括号都是一个域
//class Queue {
//	void Init()
//	{
//
//	}
//};
//
////成员变量可以写在成员函数之后，也可以在之前，因为类域是一个整体
//
////struct Stack
//class Stack
//{
//public:
//	//成员函数  函数名不需要加前缀名称 StackInit
//	void Init(size_t capacity = 4)
//	{
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (nullptr == _array)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_capacity = capacity;
//		_top = 0;
//	}
//	void Push(const DataType data)
//	{
//		// 扩容
//		_array[_top] = data;
//		++_top;
//	}
//	DataType Top()
//	{
//		return _array[_top - 1];
//	}
//	void Destroy()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_top = 0;
//		}
//	}
//
//private:
//	//成员变量
//	DataType* _array;
//	size_t _capacity;
//	size_t _top;
//};

int main()
{
	struct Stack st1;//C

	Stack st2;//C++

	st2.Init();
	st2.Push(1);
	st2.Push(2);
	st2.Push(1);
	st2.Push(2);

	cout << st2.Top() << endl;

	st2.Destroy();

	return 0;
}
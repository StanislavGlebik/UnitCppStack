#include <cppunit/TestRunner.h>
#include <stdexcept>

class MyStack {
private:
	size_t ssize;

	struct cell {
 		cell * next;
		int value;
	} *p;

public:
	MyStack() {
		ssize = 0;	
	}

	size_t size() const; 
	
	void Pop();
	void Push(int elem);
	int Top() const;

	~MyStack();
};

MyStack::~MyStack() {
	cell * help;
	for (size_t i = 0; i < ssize; ++i) {
		help = p->next;
		delete p;
		p = help;
	}
}

size_t MyStack::size() const {
	return ssize;
}

void MyStack::Pop() {
	if (ssize == 0) {
		throw std::runtime_error("Stack is empty!");
	}
	ssize -= 1;
	p = p->next;	
}

int MyStack::Top() const {
	if (ssize == 0) {
		throw std::runtime_error("Stack is empty!");
	}
	return p->value;
}

void MyStack::Push(int elem) {
	ssize += 1;
	cell * newCell = new cell;
	newCell->value = elem;
	newCell->next = p;
	p = newCell;
}


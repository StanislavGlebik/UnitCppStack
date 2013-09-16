#include <cppunit/TestRunner.h>

class MyStack {
private:
	size_t ize;
public:
	size_t size() const; 
	
};

size_t MyStack::size() const {
	return ize;
}

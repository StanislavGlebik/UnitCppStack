#include "stack.h"

#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TextTestRunner.h>

class stacktests: public CppUnit::TestFixture {
public:

	void checkInitSize() {
		MyStack stack;
		CPPUNIT_ASSERT_MESSAGE("Initial size isn't zero", stack.size() == 0);
	}
	
	void checkPushPopSize() {
		MyStack stack;
		stack.Push(1);
		stack.Pop();
		CPPUNIT_ASSERT_MESSAGE("Push/pop size isn't zero", stack.size() == 0);
	}

CPPUNIT_TEST_SUITE(stacktests);
CPPUNIT_TEST(checkInitSize);	
CPPUNIT_TEST_SUITE_END();
};

CPPUNIT_TEST_SUITE_REGISTRATION(stacktests);

int main() {
	CppUnit::Test *test = CppUnit::TestFactoryRegistry::getRegistry().makeTest();
	CppUnit::TextTestRunner runner;
	runner.addTest(test);

	runner.run();
	return 0;
}

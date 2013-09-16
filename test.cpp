#include <cppunit/TestCase.h>
#include <cppunit/ui/text/TextTestRunner.h>

class mytest : public CppUnit::TestCase {
public:
	void runTest() {
		CPPUNIT_ASSERT_MESSAGE("Test of the test :)", true);
	}
};

int main() {
	mytest test;
	CppUnit::TextTestRunner runner;
	runner.addTest(&test);

	runner.run();
	return 0;
}

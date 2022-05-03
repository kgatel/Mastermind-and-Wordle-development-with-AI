#include <iostream>
#include <string>
#include <list>
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/XmlOutputter.h>
#include <netinet/in.h>
#include "CombiMastermind.hpp"
#include "CombiWordle.hpp"
#include "FonctionsUtiles.hpp"

using namespace CppUnit;
using namespace std;

//-----------------------------------------------------------------------------

class UnitTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(UnitTest);
	CPPUNIT_TEST(testGetI);
	CPPUNIT_TEST(testResultatMastermind);
	CPPUNIT_TEST(testResultatWordle);
	CPPUNIT_TEST_SUITE_END();
public:
	void setUp(void);
	void tearDown(void);
protected:
	void testGetI(void);
	void testResultatMastermind(void);
	void testResultatWordle(void);
private:
	CombiMastermind *combiMaster;
	CombiWordle *combiWord;
};
//-----------------------------------------------------------------------------
void UnitTest::testGetI(void)
{
	CPPUNIT_ASSERT("rouge" == combiMaster->get(0));
	CPPUNIT_ASSERT("vert" == combiMaster->get(1));
	CPPUNIT_ASSERT("bleu" == combiMaster->get(2));
	CPPUNIT_ASSERT("orange" == combiMaster->get(3));
}
void UnitTest::testResultatMastermind(void)
{
	FonctionsUtiles f;
	CombiMastermind code("rouge orange vert rose");
	CPPUNIT_ASSERT(f.equals(f.intToString(1),f.charToString(combiMaster->resultat(code)[0])));	//nombre de bien placé
	CPPUNIT_ASSERT(f.equals(f.intToString(2),f.charToString(combiMaster->resultat(code)[1])));	//nombre de mal placé
}
void UnitTest::testResultatWordle(void)
{
	FonctionsUtiles f;
	CombiWordle::Menu::NB_Case;
	CombiWordle code("appl");
	CPPUNIT_ASSERT(f.equals(f.toCarre("t")+" "+"\033[33m"+f.toCarre("a")+" \033[0m"+f.toCarre("b")+" "+"\033[32m"+f.toCarre("l")+" \033[0m",combiWord->resultat(code)));
}
void UnitTest::setUp(void)
{
	combiMaster = new CombiMastermind("rouge vert bleu orange");
	combiWord = new CombiWordle("tabl");
}
void UnitTest::tearDown(void)
{
	delete combiMaster;
}
//-----------------------------------------------------------------------------
CPPUNIT_TEST_SUITE_REGISTRATION( UnitTest );
int main(int argc, char* argv[])
{
	// informs test-listener about testresults
	CPPUNIT_NS::TestResult testresult;
	// register listener for collecting the test-results
	CPPUNIT_NS::TestResultCollector collectedresults;
	testresult.addListener (&collectedresults);
	// register listener for per-test progress output
	CPPUNIT_NS::BriefTestProgressListener progress;
	testresult.addListener (&progress);
	// insert test-suite at test-runner by registry
	CPPUNIT_NS::TestRunner testrunner;
	testrunner.addTest (CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest ());
	testrunner.run(testresult);
	// output results in compiler-format
	CPPUNIT_NS::CompilerOutputter compileroutputter(&collectedresults, std::cerr);
	compileroutputter.write ();
	// Output XML for Jenkins CPPunit plugin
	ofstream xmlFileOut("cppUnitTest.xml");
	XmlOutputter xmlOut(&collectedresults, xmlFileOut);
	xmlOut.write();
	// return 0 if tests were successful
	return collectedresults.wasSuccessful() ? 0 : 1;
}

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
#include "../include/CombiMastermind.hpp"
#include "../include/CombiWordle.hpp"
#include "../include/FonctionsUtiles.hpp"
#include "../include/Menu.hpp"

using namespace CppUnit;
using namespace std;

//-----------------------------------------------------------------------------

class UnitTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(UnitTest);
	CPPUNIT_TEST(testGetI);
	CPPUNIT_TEST(testResultatMastermind);
	CPPUNIT_TEST(testResultatWordle);
	CPPUNIT_TEST(testSplit);
	CPPUNIT_TEST(testCheckMotFichier);
	CPPUNIT_TEST(testIsNumber);
	CPPUNIT_TEST(testIntToString);
	CPPUNIT_TEST(testCharToString);
	CPPUNIT_TEST(testEquals);
	CPPUNIT_TEST_SUITE_END();
public:
	void setUp(void);
	void tearDown(void);
protected:
	void testGetI(void);
	void testResultatMastermind(void);
	void testResultatWordle(void);
	void testSplit(void);
	void testCheckMotFichier(void);
	void testIsNumber(void);
	void testIntToString(void);
	void testCharToString(void);
	void testEquals(void);
private:
	CombiMastermind *combiMaster3,*combiMaster4,*combiMaster5,*combiMaster6;
	CombiWordle *combiWord4,*combiWord5,*combiWord6,*combiWord7;
	FonctionsUtiles *f;
};
//-----------------------------------------------------------------------------
void UnitTest::testGetI(void)
{
	CPPUNIT_ASSERT("rouge" == combiMaster3->get(0));
	CPPUNIT_ASSERT("rouge" == combiMaster4->get(0));
	CPPUNIT_ASSERT("rouge" == combiMaster5->get(0));
	CPPUNIT_ASSERT("rouge" == combiMaster6->get(0));
	CPPUNIT_ASSERT("vert" == combiMaster3->get(1));
	CPPUNIT_ASSERT("vert" == combiMaster4->get(1));
	CPPUNIT_ASSERT("vert" == combiMaster5->get(1));
	CPPUNIT_ASSERT("vert" == combiMaster6->get(1));
	CPPUNIT_ASSERT("bleu" == combiMaster3->get(2));
	CPPUNIT_ASSERT("bleu" == combiMaster4->get(2));
	CPPUNIT_ASSERT("bleu" == combiMaster5->get(2));
	CPPUNIT_ASSERT("bleu" == combiMaster6->get(2));
	CPPUNIT_ASSERT("orange" == combiMaster4->get(3));
	CPPUNIT_ASSERT("orange" == combiMaster5->get(3));
	CPPUNIT_ASSERT("orange" == combiMaster6->get(3));
	CPPUNIT_ASSERT("violet" == combiMaster5->get(4));
	CPPUNIT_ASSERT("violet" == combiMaster6->get(4));
	CPPUNIT_ASSERT("blanc" == combiMaster6->get(5));
	
	CPPUNIT_ASSERT("t" == combiWord4->get(0));
	CPPUNIT_ASSERT("t" == combiWord5->get(0));
	CPPUNIT_ASSERT("t" == combiWord6->get(0));
	CPPUNIT_ASSERT("t" == combiWord7->get(0));
	CPPUNIT_ASSERT("a" == combiWord4->get(1));
	CPPUNIT_ASSERT("a" == combiWord5->get(1));
	CPPUNIT_ASSERT("a" == combiWord6->get(1));
	CPPUNIT_ASSERT("a" == combiWord7->get(1));
	CPPUNIT_ASSERT("b" == combiWord4->get(2));
	CPPUNIT_ASSERT("b" == combiWord5->get(2));
	CPPUNIT_ASSERT("b" == combiWord6->get(2));
	CPPUNIT_ASSERT("b" == combiWord7->get(2));
	CPPUNIT_ASSERT("l" == combiWord4->get(3));
	CPPUNIT_ASSERT("l" == combiWord5->get(3));
	CPPUNIT_ASSERT("l" == combiWord6->get(3));
	CPPUNIT_ASSERT("l" == combiWord7->get(3));
	CPPUNIT_ASSERT("e" == combiWord5->get(4));
	CPPUNIT_ASSERT("e" == combiWord6->get(4));
	CPPUNIT_ASSERT("e" == combiWord7->get(4));
	CPPUNIT_ASSERT("s" == combiWord6->get(5));
	CPPUNIT_ASSERT("a" == combiWord7->get(5));
	CPPUNIT_ASSERT("u" == combiWord7->get(6));
}
void UnitTest::testResultatMastermind(void)
{
	//rouge vert bleu orange violet blanc
	FonctionsUtiles f;
	CombiMastermind code3("jaune bleu blanc");
	CombiMastermind code4("rouge orange vert rose");
	CombiMastermind code5("blanc vert violet marron blanc");
	CombiMastermind code6("rouge vert bleu orange violet blanc");
	Menu::NB_CASE=3;
	CPPUNIT_ASSERT(f.equals(f.intToString(0),f.charToString(combiMaster3->resultat(code3)[0])));	//nombre de bien placé
	CPPUNIT_ASSERT(f.equals(f.intToString(1),f.charToString(combiMaster3->resultat(code3)[1])));	//nombre de mal placé
	Menu::NB_CASE=4;
	CPPUNIT_ASSERT(f.equals(f.intToString(1),f.charToString(combiMaster4->resultat(code4)[0])));
	CPPUNIT_ASSERT(f.equals(f.intToString(2),f.charToString(combiMaster4->resultat(code4)[1])));
	Menu::NB_CASE=5;
	CPPUNIT_ASSERT(f.equals(f.intToString(1),f.charToString(combiMaster5->resultat(code5)[0])));
	CPPUNIT_ASSERT(f.equals(f.intToString(1),f.charToString(combiMaster5->resultat(code5)[1])));
	Menu::NB_CASE=6;
	CPPUNIT_ASSERT(f.equals(f.intToString(6),f.charToString(combiMaster6->resultat(code6)[0])));
	CPPUNIT_ASSERT(f.equals(f.intToString(0),f.charToString(combiMaster6->resultat(code6)[1])));
}
void UnitTest::testResultatWordle(void)
{
	FonctionsUtiles f;
	CombiWordle code("appl");
	//affiche bien le code en vert pour les lettres bien placées et en jaune les lettres appartenant au code mais mal placées
	Menu::NB_CASE=4;
	CPPUNIT_ASSERT(f.equals(f.toCarre("t")+" "+"\033[33m"+f.toCarre("a")+" \033[0m"+f.toCarre("b")+" "+"\033[32m"+f.toCarre("l")+" \033[0m",combiWord4->resultat(code)));
}
void UnitTest :: testSplit(void){
	vector<string> v = f->split("rouge vert bleu orange",' ');
	CPPUNIT_ASSERT("rouge" == v[0]);
	CPPUNIT_ASSERT("vert" == v[1]);
	CPPUNIT_ASSERT("bleu" == v[2]);
	CPPUNIT_ASSERT("orange" == v[3]);
}
void UnitTest :: testCheckMotFichier(void){
	CPPUNIT_ASSERT(f->checkMotFichier("ressources/Francais/4lettres/p.txt","papa"));
	CPPUNIT_ASSERT(f->checkMotFichier("ressources/Francais/5lettres/d.txt","dague"));
	CPPUNIT_ASSERT(f->checkMotFichier("ressources/Francais/6lettres/l.txt","laitue"));
	CPPUNIT_ASSERT(f->checkMotFichier("ressources/Francais/7lettres/f.txt","facture"));
	CPPUNIT_ASSERT(f->checkMotFichier("ressources/Anglais/4lettres/q.txt","quiz"));
	CPPUNIT_ASSERT(f->checkMotFichier("ressources/Anglais/5lettres/v.txt","value"));
	CPPUNIT_ASSERT(f->checkMotFichier("ressources/Anglais/6lettres/m.txt","manual"));
	CPPUNIT_ASSERT(f->checkMotFichier("ressources/Anglais/7lettres/g.txt","gamming"));
}
void UnitTest :: testIsNumber(void){
	CPPUNIT_ASSERT(!f->isNumber("A"));
	CPPUNIT_ASSERT(f->isNumber("1"));
	CPPUNIT_ASSERT(!f->isNumber("2b2"));
	CPPUNIT_ASSERT(!f->isNumber("1.2"));
	CPPUNIT_ASSERT(!f->isNumber("1,2"));
	CPPUNIT_ASSERT(!f->isNumber("-1"));
	CPPUNIT_ASSERT(f->isNumber("115"));
}
void UnitTest :: testIntToString(void){
	CPPUNIT_ASSERT(f->intToString(127) == "127");
	CPPUNIT_ASSERT(f->intToString(-12) == "-12");
	CPPUNIT_ASSERT(f->intToString(0) == "0");
}
void UnitTest :: testCharToString(void){
	CPPUNIT_ASSERT(f->charToString('a')=="a");
	CPPUNIT_ASSERT(f->charToString('z')=="z");
	CPPUNIT_ASSERT(f->charToString('0')=="0");
}
void UnitTest :: testEquals(void){
	CPPUNIT_ASSERT(f->equals("12b7","12b7"));
	string s1("Test1");
	CPPUNIT_ASSERT(f->equals("Test1",s1));
	CPPUNIT_ASSERT(f->equals(s1,"Test1"));
	string s2("Test1");
	CPPUNIT_ASSERT(f->equals(s1,s2));
	string s3("Test2");
	CPPUNIT_ASSERT(!f->equals(s1,s3));
}
void UnitTest::setUp(void)
{
	combiMaster3 = new CombiMastermind("rouge vert bleu");
	combiMaster4 = new CombiMastermind("rouge vert bleu orange");
	combiMaster5 = new CombiMastermind("rouge vert bleu orange violet");
	combiMaster6 = new CombiMastermind("rouge vert bleu orange violet blanc");
	combiWord4 = new CombiWordle("tabl");
	combiWord5 = new CombiWordle("table");
	combiWord6 = new CombiWordle("tables");
	combiWord7 = new CombiWordle("tableau");
	f = new FonctionsUtiles();
}
void UnitTest::tearDown(void)
{
	delete combiMaster3;
	delete combiMaster4;
	delete combiMaster5;
	delete combiMaster6;
	delete combiWord4;
	delete combiWord5;
	delete combiWord6;
	delete combiWord7;
	delete f;
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

#include "Span.hpp"

int getRand(int min, int max)
{
	return (rand() % (max + 1 - (min))) + min;
}

void printArr(const std::vector<int> &v)
{
	std::vector<int>::const_iterator it;
	std::cout << "[ ";
	for (it = v.begin(); it != v.end(); it++)
		std::cout << *it << ' ';
	std::cout << "]" <<std::endl;
}

void test(std::string s, void (*test)(void)) {
    std::cout << "==============================\n";
    std::cout << s << std::endl;
    std::cout << "==============================\n";
	test();
	std::cout << "All testcases passed successfully\n";
	std::cout << "******************************\n";
}

/*
** ========== TESTS ===============================
*/

void test_subject(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void test_spanIsFullException() {
	int size = 3;
	Span sp = Span(size);
	try
	{
		for (int i = 0; i < size + 1; i++) {
			sp.addNumber(i);	
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void test_checkSpans() {
	Span sp = Span(6);
	sp.addNumber(-1);
	sp.addNumber(-10);
	sp.addNumber(0);
	sp.addNumber(23);
	sp.addNumber(-5);
	sp.addNumber(-11);

	printArr(sp.m_span);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void test_noSpanException() {
	Span sp = Span(1);
	sp.addNumber(10);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void test_10k() {
	int size = 10001;
	Span sp = Span(size);
	std::vector<int> v;

	for (int i = 0; i < size; i++) {
		v.push_back(getRand(-2000000, RAND_MAX));
	}

	sp.addNumber(v);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int main(void)
{
	srand(time(NULL));

	test("test subject", &test_subject);
	test("test 10k", &test_10k);
	test("test get span of an array with one element", &test_noSpanException);
	test("test checkSpans", &test_checkSpans);
	test("test spanIsFullException", &test_spanIsFullException);
	
	return (1);
}
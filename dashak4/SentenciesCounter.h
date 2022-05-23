#pragma once
#include <iostream>
#include <string>
class SentenciesCounter
{
private:
	int CountOfSent{1};
	const int countOfWords;
public:
	SentenciesCounter(int count_of_words_)
		:countOfWords(count_of_words_)
	{}
	int GetcountOfWords();
	void PrintInfo();
	void PlusCount();
	std::string ReturnInfo();


};


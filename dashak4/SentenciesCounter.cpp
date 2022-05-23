#include "SentenciesCounter.h"

int SentenciesCounter::GetcountOfWords()
{
	return countOfWords;
}

void SentenciesCounter::PrintInfo()
{
	std::cout << "Sentensies with " << countOfWords << " words - " << CountOfSent << std::endl;
}


void SentenciesCounter::PlusCount()
{
	CountOfSent++;
}

std::string SentenciesCounter::ReturnInfo()
{
	return "Sentensies with " + std::to_string(countOfWords) + " words - " + std::to_string(CountOfSent) + "\n";
}

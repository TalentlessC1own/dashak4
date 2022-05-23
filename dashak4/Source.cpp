#include "MultilineInput.h"
#include <vector>
#include "Counter.h"
#include "SentenciesCounter.h"
#include "CountSentence.h"
#include "SaveText.h"
#include "SaveInfo.h"
#include "InputFileText.h"
#include "Check.h"

enum  menu
{
	console = 1,
	file,
	out
};

enum option
{
	yes = 1,
	no
};

int main()
{
	while (true)
	{
		std::vector<char> all_text;
		std::cout << "1 - console input\n2 - file input\n3 - out " << std::endl;
		int input_type = CheckMenu(3);
		switch (input_type)
		{
		case console:
			all_text = MultilineInput();
			break;
		case file:
			all_text = InputFileText();
			break;
		case out:
			return 0;
		}
		std::vector <std::string> SWLA = CountAll(all_text);
		std::vector <SentenciesCounter> sentences = CountSentence(all_text);

		for (int i = 0; i < SWLA.size(); i++)
			std::cout << SWLA[i];
		for (int i = 0; i < sentences.size(); i++)
			sentences[i].PrintInfo();

		std::cout << "Save text ?\n1 - yes\n2 - no" << std::endl;
		int save_text = CheckMenu(2);
		if (save_text == yes)
			SaveText(all_text);
		std::cout << "Save info ?\n1 - yes\n2 - no" << std::endl;
		int save_info = CheckMenu(2);;
		if (save_info == yes)
			SaveInfo(SWLA, sentences);

		
	}
}


#include "SaveInfo.h"

void SaveInfo(std::vector<std::string> SWLA_info, std::vector<SentenciesCounter> sentences_info)
{
	std::ofstream FileRecorder = CheckFile();
	for (int i = 0; i < SWLA_info.size(); i++)
		FileRecorder << SWLA_info[i];
	for (int i = 0; i < sentences_info.size(); i++)
		FileRecorder << sentences_info[i].ReturnInfo();
	FileRecorder.close();
}

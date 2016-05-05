#include "rapidjson/document.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/stringbuffer.h"
#include "JobLoadInGameText.h"

using namespace rapidjson;
using namespace std;

void JobLoadInGameText::Process()
{
	bool isGameInText = false;
	while (!isGameInText)
	{
		std::string fileName = CCFileUtils::sharedFileUtils()->fullPathForFilename("data/GameInText.json");
		ssize_t bufferSize = 0;
		unsigned char* json = CCFileUtils::sharedFileUtils()->getFileData(fileName.c_str(), "r", &bufferSize);
		Document document;
		std::string clearData((const char*)json);
		size_t pos = clearData.rfind("}");
		clearData = clearData.substr(0, pos + 1);

		if (document.Parse<0>(clearData.c_str()).HasParseError()) {
			//CCLog("TutorialData::init() Err..%s", document.Parse<0>(clearData.c_str()).GetParseError());
			continue;
		}

		const GenericValue<UTF8<> >& aGameObjects = document["GameInText"];
		assert(aGameObjects.IsArray());
		for (int i = 0; i < aGameObjects.Size(); i++)
		{
			const GenericValue<UTF8<> >&  obj = aGameObjects[i];
			{
				const GenericValue<UTF8<> >&  ID = obj["ID"];
				const GenericValue<UTF8<> >&  contents = obj["contents"];
				
				ArdaClient::GetInstace()->m_GameText.GameInText[ID.GetString()] = contents.GetString();
			}
		}
		if (ArdaClient::GetInstace()->m_GameText.GameInText.size() != 0)
		{
			isGameInText = true;
			cocos2d::log("GameInText Complete");
		}
	}
}

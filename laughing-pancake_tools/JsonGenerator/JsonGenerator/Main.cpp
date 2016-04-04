
#include "rapidjson/document.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/stringbuffer.h"

#include <string>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <iostream>
#include <fstream>
using namespace rapidjson;
using namespace std;

string openfilename(char *filter = "json Files (*.json)\0*.json\0", HWND owner = NULL) {
	OPENFILENAME ofn;
	char fileName[MAX_PATH] = "";
	ZeroMemory(&ofn, sizeof(ofn));
	ofn.lStructSize = sizeof(OPENFILENAME);
	ofn.hwndOwner = owner;
	ofn.lpstrFilter = filter;
	ofn.lpstrFile = fileName;
	ofn.nMaxFile = MAX_PATH;
	ofn.Flags = OFN_EXPLORER | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY;
	ofn.lpstrDefExt = "";
	string fileNameStr;
	if (GetSaveFileNameA(&ofn))
		fileNameStr = fileName;
	return fileNameStr;
}

void SaveBettleMode(std::string FileName)
{
	Document doc;
	doc.SetObject();

	Document::AllocatorType& allocator = doc.GetAllocator();
	GenericValue<UTF8<> > arraydata(kArrayType);
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("bettlemode", "1", doc.GetAllocator());
		ArrayObject.AddMember("randomvalue", 1, doc.GetAllocator());
		ArrayObject.AddMember("gamemoneycost", 200, doc.GetAllocator());
		ArrayObject.AddMember("cashcost", 10, doc.GetAllocator());
		ArrayObject.AddMember("postx", 0, doc.GetAllocator());
		ArrayObject.AddMember("posty", 0, doc.GetAllocator());
		ArrayObject.AddMember("sellgamemoney", 100, doc.GetAllocator());
		ArrayObject.AddMember("collection_idcollection", 1, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}



	doc.AddMember("tutorialscript", arraydata, doc.GetAllocator());

	// Convert JSON document to string
	GenericStringBuffer< UTF8<> > buffer;
	Writer< GenericStringBuffer< UTF8<> > > writer(buffer);

	doc.Accept(writer);

	const char* str = buffer.GetString();


	ofstream SaveFile(FileName.c_str(), ios::ate);

	if (SaveFile.is_open())
	{
		SaveFile << str;

		SaveFile.close();
	}

	printf("JSON: %s\n", str);

}

void SaveText(std::string FileName)
{
	Document doc;
	doc.SetObject();

	Document::AllocatorType& allocator = doc.GetAllocator();
	GenericValue<UTF8<> > arraydata(kArrayType);
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("ID", "BUY_CASH_COMPLETE", doc.GetAllocator());
		ArrayObject.AddMember("contents", "캐시 구매 완료 되었습니다.", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("ID", "BUY_GOLD_COMPLETE", doc.GetAllocator());
		ArrayObject.AddMember("contents", "골드 구매 완료 되었습니다.", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("ID", "ITEM_SLOT_FAIL", doc.GetAllocator());
		ArrayObject.AddMember("contents", "사용하기가 실패 되었습니다.", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("ID", "ITEM_SLOTCOMPLETE", doc.GetAllocator());
		ArrayObject.AddMember("contents", "슬롯에 등록되었습니다.", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}





	doc.AddMember("GameInText", arraydata, doc.GetAllocator());

	// Convert JSON document to string
	GenericStringBuffer< UTF8<> > buffer;
	Writer< GenericStringBuffer< UTF8<> > > writer(buffer);

	doc.Accept(writer);

	const char* str = buffer.GetString();


	ofstream SaveFile(FileName.c_str(), ios::ate);

	if (SaveFile.is_open())
	{
		SaveFile << str;

		SaveFile.close();
	}

	printf("JSON: %s\n", str);

}

void SaveTodayTip(std::string FileName)
{
	Document doc;
	doc.SetObject();

	Document::AllocatorType& allocator = doc.GetAllocator();
	GenericValue<UTF8<> > arraydata(kArrayType);
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("contents", "1", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("contents", "1", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("contents", "1", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("contents", "1", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("contents", "1", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("contents", "1", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("contents", "1", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}


	doc.AddMember("todaytip", arraydata, doc.GetAllocator());

	// Convert JSON document to string
	GenericStringBuffer< UTF8<> > buffer;
	Writer< GenericStringBuffer< UTF8<> > > writer(buffer);

	doc.Accept(writer);

	const char* str = buffer.GetString();


	ofstream SaveFile(FileName.c_str(), ios::ate);

	if (SaveFile.is_open())
	{
		SaveFile << str;

		SaveFile.close();
	}

	printf("JSON: %s\n", str);

}

void SaveItemInfo(std::string FileName)
{
	Document doc;
	doc.SetObject();

	Document::AllocatorType& allocator = doc.GetAllocator();
	GenericValue<UTF8<> > arraydata(kArrayType);
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("ItemIndex", 1, doc.GetAllocator());
		ArrayObject.AddMember("itemtitle", "한번만 봐줄께", doc.GetAllocator());
		ArrayObject.AddMember("description", "실드 보유량이 +10만큼 증가 합니다.", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("ItemIndex", 2, doc.GetAllocator());
		ArrayObject.AddMember("itemtitle", "안마 의자", doc.GetAllocator());
		ArrayObject.AddMember("description", "피버 지속시간이 7초동안 됩니다.", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("ItemIndex",3, doc.GetAllocator());
		ArrayObject.AddMember("itemtitle", "THE 큰 도장", doc.GetAllocator());
		ArrayObject.AddMember("description", "잉크 횟수가 2배로 증가합니다.", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}



	doc.AddMember("ItemInfo", arraydata, doc.GetAllocator());

	// Convert JSON document to string
	GenericStringBuffer< UTF8<> > buffer;
	Writer< GenericStringBuffer< UTF8<> > > writer(buffer);

	doc.Accept(writer);

	const char* str = buffer.GetString();


	ofstream SaveFile(FileName.c_str(), ios::ate);

	if (SaveFile.is_open())
	{
		SaveFile << str;

		SaveFile.close();
	}

	printf("JSON: %s\n", str);
}

void SaveCharInfo(std::string FileName)
{
	Document doc;
	doc.SetObject();

	Document::AllocatorType& allocator = doc.GetAllocator();
	GenericValue<UTF8<> > arraydata(kArrayType);
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 12, doc.GetAllocator());
		ArrayObject.AddMember("Name", "지배원", doc.GetAllocator());
		ArrayObject.AddMember("level", 1, doc.GetAllocator());
		ArrayObject.AddMember("description", "기본 캐릭터 입니다.", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/man_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 12, doc.GetAllocator());
		ArrayObject.AddMember("Name", "지배원", doc.GetAllocator());
		ArrayObject.AddMember("level", 2, doc.GetAllocator());
		ArrayObject.AddMember("description", "먼가 다름 조금더", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/man2_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 12, doc.GetAllocator());
		ArrayObject.AddMember("Name", "지배원", doc.GetAllocator());
		ArrayObject.AddMember("level", 3, doc.GetAllocator());
		ArrayObject.AddMember("description", "생각보다 다름", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/man3_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 12, doc.GetAllocator());
		ArrayObject.AddMember("Name", "지배원", doc.GetAllocator());
		ArrayObject.AddMember("level", 4, doc.GetAllocator());
		ArrayObject.AddMember("description", "완전 다름", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/man4_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 12, doc.GetAllocator());
		ArrayObject.AddMember("Name", "지배원", doc.GetAllocator());
		ArrayObject.AddMember("level", 5, doc.GetAllocator());
		ArrayObject.AddMember("description", "일 중독자", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/man5_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	/////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid",9, doc.GetAllocator());
		ArrayObject.AddMember("Name", "노말곰", doc.GetAllocator());
		ArrayObject.AddMember("level", 1, doc.GetAllocator());
		ArrayObject.AddMember("description", "기본 캐릭터 입니다.", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/bear_click.png", doc.GetAllocator());
		//
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 9, doc.GetAllocator());
		ArrayObject.AddMember("Name", "노말곰", doc.GetAllocator());
		ArrayObject.AddMember("level", 2, doc.GetAllocator());
		ArrayObject.AddMember("description", "먼가 다름 조금더", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/bear2_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 9, doc.GetAllocator());
		ArrayObject.AddMember("Name", "노말곰", doc.GetAllocator());
		ArrayObject.AddMember("level", 3, doc.GetAllocator());
		ArrayObject.AddMember("description", "생각보다 다름", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/bear3_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 9, doc.GetAllocator());
		ArrayObject.AddMember("Name", "노말곰", doc.GetAllocator());
		ArrayObject.AddMember("level", 4, doc.GetAllocator());
		ArrayObject.AddMember("description", "완전 다름", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/bear4_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 9, doc.GetAllocator());
		ArrayObject.AddMember("Name", "지배원", doc.GetAllocator());
		ArrayObject.AddMember("level", 5, doc.GetAllocator());
		ArrayObject.AddMember("description", "일 중독자", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/bear5_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	/////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 10, doc.GetAllocator());
		ArrayObject.AddMember("Name", "고양이", doc.GetAllocator());
		ArrayObject.AddMember("level", 1, doc.GetAllocator());
		ArrayObject.AddMember("description", "기본 캐릭터 입니다.", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/cat_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 10, doc.GetAllocator());
		ArrayObject.AddMember("Name", "고양이", doc.GetAllocator());
		ArrayObject.AddMember("level", 2, doc.GetAllocator());
		ArrayObject.AddMember("description", "먼가 다름 조금더", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/cat2_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 10, doc.GetAllocator());
		ArrayObject.AddMember("Name", "고양이", doc.GetAllocator());
		ArrayObject.AddMember("level", 3, doc.GetAllocator());
		ArrayObject.AddMember("description", "생각보다 다름", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/cat3_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 10, doc.GetAllocator());
		ArrayObject.AddMember("Name", "고양이", doc.GetAllocator());
		ArrayObject.AddMember("level", 4, doc.GetAllocator());
		ArrayObject.AddMember("description", "완전 다름", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/cat4_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 10, doc.GetAllocator());
		ArrayObject.AddMember("Name", "고양이", doc.GetAllocator());
		ArrayObject.AddMember("level", 5, doc.GetAllocator());
		ArrayObject.AddMember("description", "일 중독자", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/cat5_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	/////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 11, doc.GetAllocator());
		ArrayObject.AddMember("Name", "불토끼", doc.GetAllocator());
		ArrayObject.AddMember("level", 1, doc.GetAllocator());
		ArrayObject.AddMember("description", "기본 캐릭터 입니다.", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/rabbit_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 11, doc.GetAllocator());
		ArrayObject.AddMember("Name", "불토끼", doc.GetAllocator());
		ArrayObject.AddMember("level", 2, doc.GetAllocator());
		ArrayObject.AddMember("description", "먼가 다름 조금더", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/rabbit2_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 11, doc.GetAllocator());
		ArrayObject.AddMember("Name", "불토끼", doc.GetAllocator());
		ArrayObject.AddMember("level", 3, doc.GetAllocator());
		ArrayObject.AddMember("description", "생각보다 다름", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/rabbit3_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 11, doc.GetAllocator());
		ArrayObject.AddMember("Name", "불토끼", doc.GetAllocator());
		ArrayObject.AddMember("level", 4, doc.GetAllocator());
		ArrayObject.AddMember("description", "완전 다름", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/rabbit4_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 11, doc.GetAllocator());
		ArrayObject.AddMember("Name", "불토끼", doc.GetAllocator());
		ArrayObject.AddMember("level", 5, doc.GetAllocator());
		ArrayObject.AddMember("description", "일 중독자", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/rabbit5_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	doc.AddMember("Gamecharinfo", arraydata, doc.GetAllocator());

	// Convert JSON document to string
	GenericStringBuffer< UTF8<> > buffer;
	Writer< GenericStringBuffer< UTF8<> > > writer(buffer);

	doc.Accept(writer);

	const char* str = buffer.GetString();


	ofstream SaveFile(FileName.c_str(), ios::ate);

	if (SaveFile.is_open())
	{
		SaveFile << str;

		SaveFile.close();
	}

	printf("JSON: %s\n", str);
}

void SavePostListFile(std::string FileName)
{
	Document doc;
	doc.SetObject();




	Document::AllocatorType& allocator = doc.GetAllocator();
	GenericValue<UTF8<> > arraydata(kArrayType);
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("imgurl", "img/game/post/post_album/gom_00.png", doc.GetAllocator());
		ArrayObject.AddMember("randomvalue", 1, doc.GetAllocator());
		ArrayObject.AddMember("gamemoneycost", 200, doc.GetAllocator());
		ArrayObject.AddMember("cashcost", 10, doc.GetAllocator());
		ArrayObject.AddMember("postx", 0, doc.GetAllocator());
		ArrayObject.AddMember("posty", 0, doc.GetAllocator());
		ArrayObject.AddMember("sellgamemoney", 100, doc.GetAllocator());
		ArrayObject.AddMember("collection_idcollection", 1, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("imgurl", "img/game/post/post_album/gom_01.png", doc.GetAllocator());
		ArrayObject.AddMember("randomvalue", 1, doc.GetAllocator());
		ArrayObject.AddMember("gamemoneycost", 200, doc.GetAllocator());
		ArrayObject.AddMember("cashcost", 10, doc.GetAllocator());
		ArrayObject.AddMember("postx", 0, doc.GetAllocator());
		ArrayObject.AddMember("posty", 1, doc.GetAllocator());
		ArrayObject.AddMember("sellgamemoney", 100, doc.GetAllocator());
		ArrayObject.AddMember("collection_idcollection", 1, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("imgurl", "img/game/post/post_album/gom_10.png", doc.GetAllocator());
		ArrayObject.AddMember("randomvalue", 1, doc.GetAllocator());
		ArrayObject.AddMember("gamemoneycost", 200, doc.GetAllocator());
		ArrayObject.AddMember("cashcost", 10, doc.GetAllocator());
		ArrayObject.AddMember("postx", 1, doc.GetAllocator());
		ArrayObject.AddMember("posty", 0, doc.GetAllocator());
		ArrayObject.AddMember("sellgamemoney", 100, doc.GetAllocator());
		ArrayObject.AddMember("collection_idcollection", 1, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("imgurl", "img/game/post/post_album/gom_11.png", doc.GetAllocator());
		ArrayObject.AddMember("randomvalue", 1, doc.GetAllocator());
		ArrayObject.AddMember("gamemoneycost", 200, doc.GetAllocator());
		ArrayObject.AddMember("cashcost", 10, doc.GetAllocator());
		ArrayObject.AddMember("postx", 1, doc.GetAllocator());
		ArrayObject.AddMember("posty", 1, doc.GetAllocator());
		ArrayObject.AddMember("sellgamemoney", 100, doc.GetAllocator());
		ArrayObject.AddMember("collection_idcollection", 1, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("imgurl", "img/game/post/post_album/gom_12.png", doc.GetAllocator());
		ArrayObject.AddMember("randomvalue", 1, doc.GetAllocator());
		ArrayObject.AddMember("gamemoneycost", 200, doc.GetAllocator());
		ArrayObject.AddMember("cashcost", 10, doc.GetAllocator());
		ArrayObject.AddMember("postx", 1, doc.GetAllocator());
		ArrayObject.AddMember("posty", 2, doc.GetAllocator());
		ArrayObject.AddMember("sellgamemoney", 100, doc.GetAllocator());
		ArrayObject.AddMember("collection_idcollection", 1, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("imgurl", "img/game/post/post_album/gom_02.png", doc.GetAllocator());
		ArrayObject.AddMember("randomvalue", 1, doc.GetAllocator());
		ArrayObject.AddMember("gamemoneycost", 200, doc.GetAllocator());
		ArrayObject.AddMember("cashcost", 10, doc.GetAllocator());
		ArrayObject.AddMember("postx", 0, doc.GetAllocator());
		ArrayObject.AddMember("posty", 2, doc.GetAllocator());
		ArrayObject.AddMember("sellgamemoney", 100, doc.GetAllocator());
		ArrayObject.AddMember("collection_idcollection", 1, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("imgurl", "img/game/post/post_album/gom2_00.png", doc.GetAllocator());
		ArrayObject.AddMember("randomvalue", 1, doc.GetAllocator());
		ArrayObject.AddMember("gamemoneycost", 200, doc.GetAllocator());
		ArrayObject.AddMember("cashcost", 10, doc.GetAllocator());
		ArrayObject.AddMember("postx", 0, doc.GetAllocator());
		ArrayObject.AddMember("posty", 0, doc.GetAllocator());
		ArrayObject.AddMember("sellgamemoney", 100, doc.GetAllocator());
		ArrayObject.AddMember("collection_idcollection", 2, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("imgurl", "img/game/post/post_album/gom2_01.png", doc.GetAllocator());
		ArrayObject.AddMember("randomvalue", 1, doc.GetAllocator());
		ArrayObject.AddMember("gamemoneycost", 200, doc.GetAllocator());
		ArrayObject.AddMember("cashcost", 10, doc.GetAllocator());
		ArrayObject.AddMember("postx", 0, doc.GetAllocator());
		ArrayObject.AddMember("posty", 1, doc.GetAllocator());
		ArrayObject.AddMember("sellgamemoney", 100, doc.GetAllocator());
		ArrayObject.AddMember("collection_idcollection", 2, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("imgurl", "img/game/post/post_album/gom2_10.png", doc.GetAllocator());
		ArrayObject.AddMember("randomvalue", 1, doc.GetAllocator());
		ArrayObject.AddMember("gamemoneycost", 200, doc.GetAllocator());
		ArrayObject.AddMember("cashcost", 10, doc.GetAllocator());
		ArrayObject.AddMember("postx", 1, doc.GetAllocator());
		ArrayObject.AddMember("posty", 0, doc.GetAllocator());
		ArrayObject.AddMember("sellgamemoney", 100, doc.GetAllocator());
		ArrayObject.AddMember("collection_idcollection", 2, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("imgurl", "img/game/post/post_album/gom2_11.png", doc.GetAllocator());
		ArrayObject.AddMember("randomvalue", 1, doc.GetAllocator());
		ArrayObject.AddMember("gamemoneycost", 200, doc.GetAllocator());
		ArrayObject.AddMember("cashcost", 10, doc.GetAllocator());
		ArrayObject.AddMember("postx", 1, doc.GetAllocator());
		ArrayObject.AddMember("posty", 1, doc.GetAllocator());
		ArrayObject.AddMember("sellgamemoney", 100, doc.GetAllocator());
		ArrayObject.AddMember("collection_idcollection", 2, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("imgurl", "img/game/post/post_album/gom2_12.png", doc.GetAllocator());
		ArrayObject.AddMember("randomvalue", 1, doc.GetAllocator());
		ArrayObject.AddMember("gamemoneycost", 200, doc.GetAllocator());
		ArrayObject.AddMember("cashcost", 10, doc.GetAllocator());
		ArrayObject.AddMember("postx", 1, doc.GetAllocator());
		ArrayObject.AddMember("posty", 2, doc.GetAllocator());
		ArrayObject.AddMember("sellgamemoney", 100, doc.GetAllocator());
		ArrayObject.AddMember("collection_idcollection", 2, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("imgurl", "img/game/post/post_album/gom2_02.png", doc.GetAllocator());
		ArrayObject.AddMember("randomvalue", 1, doc.GetAllocator());
		ArrayObject.AddMember("gamemoneycost", 200, doc.GetAllocator());
		ArrayObject.AddMember("cashcost", 10, doc.GetAllocator());
		ArrayObject.AddMember("postx", 0, doc.GetAllocator());
		ArrayObject.AddMember("posty", 2, doc.GetAllocator());
		ArrayObject.AddMember("sellgamemoney", 100, doc.GetAllocator());
		ArrayObject.AddMember("collection_idcollection", 2, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	doc.AddMember("post", arraydata, doc.GetAllocator());

	GenericValue<UTF8<> > MailBox(kArrayType);
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("collectionname", "노말 곰", doc.GetAllocator());
		ArrayObject.AddMember("idcollection", 1, doc.GetAllocator());
		ArrayObject.AddMember("collectionimg", "img/game/post/post_collection/gom.png", doc.GetAllocator());
		ArrayObject.AddMember("description", "우리곰돌이 사랑해주세요", doc.GetAllocator());
		ArrayObject.AddMember("sizex", 2, doc.GetAllocator());
		ArrayObject.AddMember("sizey", 3, doc.GetAllocator());
		MailBox.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("collectionname", "물 곰", doc.GetAllocator());
		ArrayObject.AddMember("idcollection", 2, doc.GetAllocator());
		ArrayObject.AddMember("collectionimg", "img/game/post/post_collection/gom2.png", doc.GetAllocator());
		ArrayObject.AddMember("description", "물속에 사는 곰돌이", doc.GetAllocator());
		ArrayObject.AddMember("sizex", 2, doc.GetAllocator());
		ArrayObject.AddMember("sizey", 3, doc.GetAllocator());
		MailBox.PushBack(ArrayObject, doc.GetAllocator());
	}

	doc.AddMember("collection", MailBox, doc.GetAllocator());


	// Convert JSON document to string
	GenericStringBuffer< UTF8<> > buffer;
	Writer< GenericStringBuffer< UTF8<> > > writer(buffer);

	doc.Accept(writer);

	const char* str = buffer.GetString();


	ofstream SaveFile(FileName.c_str(), ios::ate);

	if (SaveFile.is_open())
	{
		SaveFile << str;

		SaveFile.close();
	}

	printf("JSON: %s\n", str);
}


void SaveFile(std::string FileName)
{

	Document doc;
	doc.SetObject();




	Document::AllocatorType& allocator = doc.GetAllocator();
	GenericValue<UTF8<> > arraydata(kArrayType);
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/false/post_001_false.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", false, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/false/post_002_false.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", false, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/false/post_003_false.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", false, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/false/post_004_false.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", false, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/false/post_005_false.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", false, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/false/post_006_false.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", false, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/false/post_007_false.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", false, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/false/post_008_false.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", false, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/false/post_009_false.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", false, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/false/post_010_false.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", false, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/true/post_001_true.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", true, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/true/post_002_true.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", true, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/true/post_003_true.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", true, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/true/post_004_true.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", true, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/true/post_005_true.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", true, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/true/post_006_true.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", true, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/true/post_007_true.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", true, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/true/post_008_true.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", true, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/true/post_009_true.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", true, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/true/post_010_true.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", true, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/true/post_011_true.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", true, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Postage", "img/game/post/true/post_012_true.png", doc.GetAllocator());
		ArrayObject.AddMember("PostOk", true, doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	doc.AddMember("GameObjects", arraydata, doc.GetAllocator());

	GenericValue<UTF8<> > MailBox(kArrayType);
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Mail", "img/game/mail/mail_01.png", doc.GetAllocator());
		MailBox.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Mail", "img/game/mail/mail_02.png", doc.GetAllocator());
		MailBox.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Mail", "img/game/mail/mail_03.png", doc.GetAllocator());
		MailBox.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Mail", "img/game/mail/mail_04.png", doc.GetAllocator());
		MailBox.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Mail", "img/game/mail/mail_05.png", doc.GetAllocator());
		MailBox.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Mail", "img/game/mail/mail_06.png", doc.GetAllocator());
		MailBox.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Mail", "img/game/mail/mail_07.png", doc.GetAllocator());
		MailBox.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Mail", "img/game/mail/mail_08.png", doc.GetAllocator());
		MailBox.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Mail", "img/game/mail/mail_09.png", doc.GetAllocator());
		MailBox.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("Mail", "img/game/mail/mail_10.png", doc.GetAllocator());
		MailBox.PushBack(ArrayObject, doc.GetAllocator());
	}

	doc.AddMember("Mails", MailBox, doc.GetAllocator());

	// Convert JSON document to string
	GenericStringBuffer< UTF8<> > buffer;
	Writer< GenericStringBuffer< UTF8<> > > writer(buffer);

	doc.Accept(writer);

	const char* str = buffer.GetString();


	ofstream SaveFile(FileName.c_str(), ios::ate);

	if (SaveFile.is_open())
	{
		SaveFile << str;

		SaveFile.close();
	}

	printf("JSON: %s\n", str);
}

void tutorialFile(std::string FileName)
{

	Document doc;
	doc.SetObject();




	Document::AllocatorType& allocator = doc.GetAllocator();
	GenericValue<UTF8<> > arraydata(kArrayType);
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "뭘봐! 제비가 말하는거 처음봐?!!", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "이봐 당신, 일은 어떻게 하는지 알겠지?", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "뭐?! 모르겠다고? 뭐이딴 녀석이 왔어!", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "하아.. 어쩔수없지 저기 보이는 \"게임 시작\"을 눌러", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Start_idle", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "이제 저 멍청하게 생긴 녀석을 터치해", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "chr_01", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "앉는 것도 느려서 먹고 살겠냐?", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "넌 앞으로 여기서 일을 하게 될꺼야.", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "너의 일은 우표에 도장을 찍는거야", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "멀쩡한 우표에만 찍는거 알지?", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "틀리기만 해봐 그냥! 제비집을 만들어 버릴거야", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "뭐해? 빨리 일 안해?", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "뭐?! 어떻게 하는지 모르겠다고?!", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "오른손은 도장!", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "왼손은 넘기기!", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "날 화나게 하면 좋을게 없어", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "이게 어렵냐!?!", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "뭐? 난 뭐하냐고?", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "...", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "뭘봐!! 빨리 일안해?!", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "End", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}



	doc.AddMember("tutorialscript", arraydata, doc.GetAllocator());

	// Convert JSON document to string
	GenericStringBuffer< UTF8<> > buffer;
	Writer< GenericStringBuffer< UTF8<> > > writer(buffer);

	doc.Accept(writer);

	const char* str = buffer.GetString();


	ofstream SaveFile(FileName.c_str(), ios::ate);

	if (SaveFile.is_open())
	{
		SaveFile << str;

		SaveFile.close();
	}

	printf("JSON: %s\n", str);
}


int main()
{
	SaveText(openfilename());
}

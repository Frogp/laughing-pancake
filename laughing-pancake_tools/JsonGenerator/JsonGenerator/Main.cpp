
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
		ArrayObject.AddMember("contents", "ĳ�� ���� �Ϸ� �Ǿ����ϴ�.", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("ID", "BUY_GOLD_COMPLETE", doc.GetAllocator());
		ArrayObject.AddMember("contents", "��� ���� �Ϸ� �Ǿ����ϴ�.", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("ID", "ITEM_SLOT_FAIL", doc.GetAllocator());
		ArrayObject.AddMember("contents", "����ϱⰡ ���� �Ǿ����ϴ�.", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("ID", "ITEM_SLOTCOMPLETE", doc.GetAllocator());
		ArrayObject.AddMember("contents", "���Կ� ��ϵǾ����ϴ�.", doc.GetAllocator());
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
		ArrayObject.AddMember("itemtitle", "�ѹ��� ���ٲ�", doc.GetAllocator());
		ArrayObject.AddMember("description", "�ǵ� �������� +10��ŭ ���� �մϴ�.", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("ItemIndex", 2, doc.GetAllocator());
		ArrayObject.AddMember("itemtitle", "�ȸ� ����", doc.GetAllocator());
		ArrayObject.AddMember("description", "�ǹ� ���ӽð��� 7�ʵ��� �˴ϴ�.", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("ItemIndex",3, doc.GetAllocator());
		ArrayObject.AddMember("itemtitle", "THE ū ����", doc.GetAllocator());
		ArrayObject.AddMember("description", "��ũ Ƚ���� 2��� �����մϴ�.", doc.GetAllocator());
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
		ArrayObject.AddMember("Name", "�����", doc.GetAllocator());
		ArrayObject.AddMember("level", 1, doc.GetAllocator());
		ArrayObject.AddMember("description", "�⺻ ĳ���� �Դϴ�.", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/man_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 12, doc.GetAllocator());
		ArrayObject.AddMember("Name", "�����", doc.GetAllocator());
		ArrayObject.AddMember("level", 2, doc.GetAllocator());
		ArrayObject.AddMember("description", "�հ� �ٸ� ���ݴ�", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/man2_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 12, doc.GetAllocator());
		ArrayObject.AddMember("Name", "�����", doc.GetAllocator());
		ArrayObject.AddMember("level", 3, doc.GetAllocator());
		ArrayObject.AddMember("description", "�������� �ٸ�", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/man3_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 12, doc.GetAllocator());
		ArrayObject.AddMember("Name", "�����", doc.GetAllocator());
		ArrayObject.AddMember("level", 4, doc.GetAllocator());
		ArrayObject.AddMember("description", "���� �ٸ�", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/man4_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 12, doc.GetAllocator());
		ArrayObject.AddMember("Name", "�����", doc.GetAllocator());
		ArrayObject.AddMember("level", 5, doc.GetAllocator());
		ArrayObject.AddMember("description", "�� �ߵ���", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/man5_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	/////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid",9, doc.GetAllocator());
		ArrayObject.AddMember("Name", "�븻��", doc.GetAllocator());
		ArrayObject.AddMember("level", 1, doc.GetAllocator());
		ArrayObject.AddMember("description", "�⺻ ĳ���� �Դϴ�.", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/bear_click.png", doc.GetAllocator());
		//
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 9, doc.GetAllocator());
		ArrayObject.AddMember("Name", "�븻��", doc.GetAllocator());
		ArrayObject.AddMember("level", 2, doc.GetAllocator());
		ArrayObject.AddMember("description", "�հ� �ٸ� ���ݴ�", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/bear2_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 9, doc.GetAllocator());
		ArrayObject.AddMember("Name", "�븻��", doc.GetAllocator());
		ArrayObject.AddMember("level", 3, doc.GetAllocator());
		ArrayObject.AddMember("description", "�������� �ٸ�", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/bear3_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 9, doc.GetAllocator());
		ArrayObject.AddMember("Name", "�븻��", doc.GetAllocator());
		ArrayObject.AddMember("level", 4, doc.GetAllocator());
		ArrayObject.AddMember("description", "���� �ٸ�", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/bear4_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 9, doc.GetAllocator());
		ArrayObject.AddMember("Name", "�����", doc.GetAllocator());
		ArrayObject.AddMember("level", 5, doc.GetAllocator());
		ArrayObject.AddMember("description", "�� �ߵ���", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/bear5_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	/////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 10, doc.GetAllocator());
		ArrayObject.AddMember("Name", "�����", doc.GetAllocator());
		ArrayObject.AddMember("level", 1, doc.GetAllocator());
		ArrayObject.AddMember("description", "�⺻ ĳ���� �Դϴ�.", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/cat_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 10, doc.GetAllocator());
		ArrayObject.AddMember("Name", "�����", doc.GetAllocator());
		ArrayObject.AddMember("level", 2, doc.GetAllocator());
		ArrayObject.AddMember("description", "�հ� �ٸ� ���ݴ�", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/cat2_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 10, doc.GetAllocator());
		ArrayObject.AddMember("Name", "�����", doc.GetAllocator());
		ArrayObject.AddMember("level", 3, doc.GetAllocator());
		ArrayObject.AddMember("description", "�������� �ٸ�", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/cat3_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 10, doc.GetAllocator());
		ArrayObject.AddMember("Name", "�����", doc.GetAllocator());
		ArrayObject.AddMember("level", 4, doc.GetAllocator());
		ArrayObject.AddMember("description", "���� �ٸ�", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/cat4_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 10, doc.GetAllocator());
		ArrayObject.AddMember("Name", "�����", doc.GetAllocator());
		ArrayObject.AddMember("level", 5, doc.GetAllocator());
		ArrayObject.AddMember("description", "�� �ߵ���", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/cat5_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	/////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 11, doc.GetAllocator());
		ArrayObject.AddMember("Name", "���䳢", doc.GetAllocator());
		ArrayObject.AddMember("level", 1, doc.GetAllocator());
		ArrayObject.AddMember("description", "�⺻ ĳ���� �Դϴ�.", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/rabbit_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 11, doc.GetAllocator());
		ArrayObject.AddMember("Name", "���䳢", doc.GetAllocator());
		ArrayObject.AddMember("level", 2, doc.GetAllocator());
		ArrayObject.AddMember("description", "�հ� �ٸ� ���ݴ�", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/rabbit2_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 11, doc.GetAllocator());
		ArrayObject.AddMember("Name", "���䳢", doc.GetAllocator());
		ArrayObject.AddMember("level", 3, doc.GetAllocator());
		ArrayObject.AddMember("description", "�������� �ٸ�", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/rabbit3_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 11, doc.GetAllocator());
		ArrayObject.AddMember("Name", "���䳢", doc.GetAllocator());
		ArrayObject.AddMember("level", 4, doc.GetAllocator());
		ArrayObject.AddMember("description", "���� �ٸ�", doc.GetAllocator());
		ArrayObject.AddMember("img", "img/ui/chr/rabbit4_click.png", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("charid", 11, doc.GetAllocator());
		ArrayObject.AddMember("Name", "���䳢", doc.GetAllocator());
		ArrayObject.AddMember("level", 5, doc.GetAllocator());
		ArrayObject.AddMember("description", "�� �ߵ���", doc.GetAllocator());
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
		ArrayObject.AddMember("collectionname", "�븻 ��", doc.GetAllocator());
		ArrayObject.AddMember("idcollection", 1, doc.GetAllocator());
		ArrayObject.AddMember("collectionimg", "img/game/post/post_collection/gom.png", doc.GetAllocator());
		ArrayObject.AddMember("description", "�츮������ ������ּ���", doc.GetAllocator());
		ArrayObject.AddMember("sizex", 2, doc.GetAllocator());
		ArrayObject.AddMember("sizey", 3, doc.GetAllocator());
		MailBox.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("collectionname", "�� ��", doc.GetAllocator());
		ArrayObject.AddMember("idcollection", 2, doc.GetAllocator());
		ArrayObject.AddMember("collectionimg", "img/game/post/post_collection/gom2.png", doc.GetAllocator());
		ArrayObject.AddMember("description", "���ӿ� ��� ������", doc.GetAllocator());
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
		ArrayObject.AddMember("TutorialScript", "����! ���� ���ϴ°� ó����?!!", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "�̺� ���, ���� ��� �ϴ��� �˰���?", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "��?! �𸣰ڴٰ�? ���̵� �༮�� �Ծ�!", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "�Ͼ�.. ��¿������ ���� ���̴� \"���� ����\"�� ����", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Start_idle", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}

	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "���� �� ��û�ϰ� ���� �༮�� ��ġ��", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "chr_01", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "�ɴ� �͵� ������ �԰� ��ڳ�?", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "�� ������ ���⼭ ���� �ϰ� �ɲ���.", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "���� ���� ��ǥ�� ������ ��°ž�", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "������ ��ǥ���� ��°� ����?", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "Ʋ���⸸ �غ� �׳�! �������� ����� �����ž�", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "����? ���� �� ����?", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "��?! ��� �ϴ��� �𸣰ڴٰ�?!", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "�������� ����!", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "�޼��� �ѱ��!", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "�� ȭ���� �ϸ� ������ ����", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "�̰� ��Ƴ�!?!", doc.GetAllocator());
		ArrayObject.AddMember("TutorialAction", "Next", doc.GetAllocator());
		arraydata.PushBack(ArrayObject, doc.GetAllocator());
	}
	{
		GenericValue<UTF8<> > ArrayObject(kObjectType);
		ArrayObject.AddMember("TutorialScript", "��? �� ���ϳİ�?", doc.GetAllocator());
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
		ArrayObject.AddMember("TutorialScript", "����!! ���� �Ͼ���?!", doc.GetAllocator());
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

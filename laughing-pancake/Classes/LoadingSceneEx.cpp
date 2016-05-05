#include "LoadingSceneEx.h"
#include "MainSceneEx.h"

LoadingSceneEx::LoadingSceneEx()
{
	LoadingScene::LoadingScene();

	m_logoui = new LogoUI();
	addChild(m_logoui);

	Node* filenode = static_cast<logoani *>(m_logoui->root->getChildByName("FileNode_1"));

	Sprite* logo = static_cast<Sprite *>(filenode->getChildByName("Sprite_5"));
	cocostudio::timeline::ActionTimeline* actionLogoUI = CSLoader::createTimeline("logoani.csb");
	filenode->runAction(actionLogoUI);
	actionLogoUI->setAnimationEndCallFunc("LogoPlay", [=]()
	{
		auto director = Director::getInstance();
		Scene* scene = Scene::create();
		Layer *layer = new MainSceneEx();
		scene->addChild(layer);
		director->replaceScene((Scene*)scene);
	});
	actionLogoUI->play("LogoPlay", false);
}

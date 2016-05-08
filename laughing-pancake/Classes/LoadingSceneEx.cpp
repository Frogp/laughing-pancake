#include "LoadingSceneEx.h"
#include "MainSceneEx.h"

LoadingSceneEx::LoadingSceneEx()
{
	LoadingScene::LoadingScene();

	m_logoui = new LogoUI();
	addChild(m_logoui);

	Node* filenode = static_cast<Node *>(m_logoui->root->getChildByName("FileNode_1"));

	Sprite* logo = static_cast<Sprite *>(filenode->getChildByName("Sprite_5"));
	cocostudio::timeline::ActionTimeline* actionLogoUI = CSLoader::createTimeline("logoani.csb");
	filenode->runAction(actionLogoUI);
	m_logoui->m_LPlogoUI->setVisible(false);
	m_logoui->m_FileNode_1->setVisible(true);
	actionLogoUI->setAnimationEndCallFunc("LogoPlay", [=]()
	{

		//LPlogoAni
		m_logoui->m_LPlogoUI->setVisible(true);
		m_logoui->m_FileNode_1->setVisible(false);
		Node* LPlogo_ = static_cast<Node *>(m_logoui->root->getChildByName("LPlogoUI"));
		Sprite* logo_ = static_cast<Sprite *>(LPlogo_->getChildByName("Sprite_1"));
		cocostudio::timeline::ActionTimeline* actionLogoUI_ = CSLoader::createTimeline("LPlogo.csb");
		LPlogo_->runAction(actionLogoUI_);
		actionLogoUI_->setAnimationEndCallFunc("LPlogoAni", [=]()
		{
			auto director = Director::getInstance();
			Scene* scene_ = Scene::create();
			Layer *layer_ = new MainSceneEx();
			scene_->addChild(layer_);
			director->replaceScene((Scene*)scene_);
		});
		actionLogoUI_->play("LPlogoAni", false);

	});

	actionLogoUI->play("LogoPlay", false);
}

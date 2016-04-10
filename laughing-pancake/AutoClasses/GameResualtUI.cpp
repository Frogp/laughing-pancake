/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "GameResualtUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

GameResualtUI * GameResualtUI::instance;
GameResualtUI::GameResualtUI()
{
	root = CSLoader::createNode("res\\GameResualtUI.csb");
	this->addChild(root, 0, 1);
	InitPage();
	GameResualtUI::instance = this;
}
GameResualtUI::GameResualtUI(Widget* _root)
{
	root = _root;
	InitPage();
	GameResualtUI::instance = this;
}
void GameResualtUI::InitPage()
{
	cocostudio::timeline::ActionTimeline* actionGameResualtUI = CSLoader::createTimeline("res\\GameResualtUI.csb");
	root->runAction(actionGameResualtUI);
	m_Panel_1= static_cast<Layout *>(root->getChildByName("Panel_1"));
	m_Panel_1->retain();
	m_Text_1= static_cast<cocos2d::ui::Text *>(root->getChildByName("Text_1"));
	m_Text_1->retain();
	m_LoadingBar_1= static_cast<cocos2d::ui::LoadingBar *>(root->getChildByName("LoadingBar_1"));
	m_LoadingBar_1->retain();
	m_Text_1_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("Text_1_0"));
	m_Text_1_0->retain();
	m_LoadingBar_1_0= static_cast<cocos2d::ui::LoadingBar *>(root->getChildByName("LoadingBar_1_0"));
	m_LoadingBar_1_0->retain();
	m_Text_4= static_cast<cocos2d::ui::Text *>(root->getChildByName("Text_4"));
	m_Text_4->retain();
	m_Text_4_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("Text_4_0"));
	m_Text_4_0->retain();
	m_Particle_1= static_cast<cocos2d::ParticleSystem *>(root->getChildByName("Particle_1"));
	m_Particle_1->retain();
	m_ArmatureNode_1= static_cast<cocostudio::Armature *>(root->getChildByName("ArmatureNode_1"));
	m_ArmatureNode_1->retain();
	m_Particle_2= static_cast<cocos2d::ParticleSystem *>(root->getChildByName("Particle_2"));
	m_Particle_2->retain();
	m_LoadingBar_3= static_cast<cocos2d::ui::LoadingBar *>(root->getChildByName("LoadingBar_3"));
	m_LoadingBar_3->retain();
	m_LoadingBar_3_0= static_cast<cocos2d::ui::LoadingBar *>(root->getChildByName("LoadingBar_3_0"));
	m_LoadingBar_3_0->retain();
	m_ArmatureNode_2= static_cast<cocostudio::Armature *>(root->getChildByName("ArmatureNode_2"));
	m_ArmatureNode_2->retain();
	m_Button_2_0= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_2_0"));
	m_Button_2_0->retain();
}

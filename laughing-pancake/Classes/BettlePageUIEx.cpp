#include "BettlePageUIEx.h"

BettlePageUIEx::BettlePageUIEx()
{
	BettlePageUI::BettlePageUI();

	//Layout *_Pn_2 = static_cast<Layout *>(m_Panel_8->m_Panel_2->root->getChildByName("Pn_2"));
	for (int i = 0; i < 12; i++)
	{
		Layout *_ObjCharictor = nullptr;
		if (i == 0)
			_ObjCharictor = static_cast<Layout *>(m_Panel_8->m_Panel_2->root->getChildByName(StringUtils::format("ObjCharictor")));
		else
			_ObjCharictor = static_cast<Layout *>(m_Panel_8->m_Panel_2->root->getChildByName(StringUtils::format("Pn_%d", i + 1)));
		_ObjCharictor->retain();
		ObjCharictorEx* m_ObjCharictor = new ObjCharictorEx();
		m_ObjCharictor->root = _ObjCharictor;
		{
			m_ObjCharictor->m_DeckName = static_cast<cocos2d::ui::Text *>(_ObjCharictor->getChildByName("DeckName"));
			m_ObjCharictor->m_DeckName->retain();
			m_ObjCharictor->m_ImgChar = static_cast<cocos2d::ui::ImageView *>(_ObjCharictor->getChildByName("ImgChar"));
			m_ObjCharictor->m_ImgChar->retain();
			if (i == 0)
			{
				m_ObjCharictor->m_FileNode_2 = static_cast<cocos2d::Node *>(_ObjCharictor->getChildByName("FileNode_2"));
				m_ObjCharictor->m_FileNode_2->retain();
			}
			else
			{
				m_ObjCharictor->m_FileNode_2 = static_cast<cocos2d::Node *>(_ObjCharictor->getChildByName("FileNode_2_0"));
				m_ObjCharictor->m_FileNode_2->retain();
			}

		}
		m_ObjCharictor->init();
		m_ObjCharictor->IdleAnimation();

		(static_cast<Layout *>(m_ObjCharictor->root))->addTouchEventListener([=](Ref* obj, Widget::TouchEventType type)
		{
			if (type == Widget::TouchEventType::BEGAN)
			{
				m_ObjCharictor->ClickAnimation();
			}
		});
		ItemList[i] = m_ObjCharictor;
	}
}

void BettlePageUIEx::OpenUI()
{
	this->actionBettlePageUI->play("Oppening", false);

	this->schedule(schedule_selector(BettlePageUIEx::update));

	
}

void BettlePageUIEx::update(float dt)
{

}
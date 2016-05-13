#include "ObjCharictorEx.h"

ObjCharictorEx::ObjCharictorEx()
{
}

ObjCharictorEx::~ObjCharictorEx()
{
}
void ObjCharictorEx::init()
{
	if (m_FileNode_2 == NULL)
	{
		CCASSERT("Can't find m_FileNode_2", "Node Name is Changed?");
	}
	
	actionLogoUI_ = CSLoader::createTimeline("ConnerItem.csb");
	m_FileNode_2->runAction(actionLogoUI_);
}
void ObjCharictorEx::ClickAnimation()
{
	actionLogoUI_->stop();
	actionLogoUI_->setAnimationEndCallFunc("ClickAnimation", [=]()
	{
		IdleAnimation();
	});
	actionLogoUI_->play("ClickAnimation", false);
}

void ObjCharictorEx::ClickAnimation(std::function<void()> func)
{
	actionLogoUI_->setAnimationEndCallFunc("ClickAnimation", func);
	actionLogoUI_->play("ClickAnimation", false);
}

void ObjCharictorEx::IdleAnimation()
{
	actionLogoUI_->stop();
	actionLogoUI_->play("IdleAnimation", true);
}
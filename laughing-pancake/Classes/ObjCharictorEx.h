#ifndef __OBJCHARICTOREX_H__
#define __OBJCHARICTOREX_H__

#include "AutoClasses\BettlePageUI.h"

class ObjCharictorEx : public CCPanel_2::ObjCharictor
{
public:
	ObjCharictorEx();
	~ObjCharictorEx();
	void ClickAnimation();
	void ClickAnimation(std::function<void()> func);
	void IdleAnimation();

	void init();

	
private:
	cocostudio::timeline::ActionTimeline* actionLogoUI_;
};



#endif // __OBJCHARICTOREX_H__
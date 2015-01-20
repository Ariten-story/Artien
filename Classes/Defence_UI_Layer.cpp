#include "Defence_UI_Layer.h"

USING_NS_CC;

bool Defence_UI::init()
{
	if (!Layer::init())
	{
		return false;
	}

	Size winSize = Director::getInstance()->getWinSize();

	auto UI_bg = Sprite::create("Defence_UI_bg.png");
	auto UI_catlehp = Sprite::create("Defence_UI_catlehp.png");
	auto UI_minimap = Sprite::create("Defence_UI_minimap.png");
	auto charUI_bg = Sprite::create("Defence_charUI_bg.png");
	auto charUI_hpmp = Sprite::create("Defence_charUI_hpmp.png");
	auto charUI_btn_skill = Sprite::create("Defence_charUI_btn_skill.png");
	auto charUI_rudder = Sprite::create("Defence_charUI_rudder.png");

	if (!UI_bg && !UI_catlehp && !UI_minimap && !charUI_bg && !charUI_hpmp && !charUI_btn_skill && !charUI_rudder)
	{
		return false;
	}
	UI_bg->setPosition(Point(winSize.width / 2, winSize.height / 2));
	UI_catlehp->setPosition(Point(winSize.width*5 / 32, winSize.height*91 / 100));
	UI_minimap->setPosition(Point(winSize.width*53  / 64, winSize.height*17  / 20));
	charUI_bg->setPosition(Point(winSize.width / 2, winSize.height / 9));
	charUI_hpmp->setPosition(Point(winSize.width*89 / 200, winSize.height / 10));
	charUI_btn_skill->setPosition(Point(winSize.width*39 / 50, winSize.height / 9));
	charUI_rudder->setPosition(Point(winSize.width / 6, winSize.height / 9));

	this->addChild(UI_bg);
	this->addChild(UI_catlehp);
	this->addChild(UI_minimap);
	this->addChild(charUI_bg);
	this->addChild(charUI_hpmp);
	this->addChild(charUI_btn_skill);
	this->addChild(charUI_rudder);

	return true;
}

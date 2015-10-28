//
//  PauseLayer.cpp
//  Xiangqi
//
//  Created by student on 15/8/22.
//
//

#include "PauseLayer.h"
PauseLayer *PauseLayer::create(){   //工厂模式
    PauseLayer *layer=new (std:: nothrow)PauseLayer;
    if (layer&&layer->init()) {
        layer->autorelease();
        return layer;
    }
    CC_SAFE_DELETE(layer);
    return nullptr;

}
bool PauseLayer::init(){
    if (!LayerColor::init()) {
        return false;
    }
    this->setOpacity(150);
    auto item=MenuItemImage::create("5.png","5.png");
    item->setCallback(CC_CALLBACK_1(PauseLayer::itemClicked,this));
    item->setPosition(Vec2(480, 320));
    auto menu=Menu::create(item,NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu);
    return true;
}
void PauseLayer:: itemClicked(Ref*sender){
    this->removeFromParent();
    //点击按钮的时候，通过代理调用对应的函数
    delegate->sureClicked();
}

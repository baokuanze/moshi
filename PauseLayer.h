//
//  PauseLayer.h
//  Xiangqi
//
//  Created by student on 15/8/22.
//
//

#ifndef __Xiangqi__PauseLayer__
#define __Xiangqi__PauseLayer__

#include <stdio.h>
#include "cocos2d.h"
USING_NS_CC;
class PauseDelegate{
public:
    virtual void sureClicked()=0;
};
class PauseLayer:public LayerColor{
public:
    static PauseLayer *create();
    virtual bool init();
    void itemClicked(Ref*sender);
    CC_SYNTHESIZE(PauseDelegate*, delegate, delegate);

};




#endif /* defined(__Xiangqi__PauseLayer__) */

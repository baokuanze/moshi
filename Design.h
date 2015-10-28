//
//  Design.h
//  Xiangqi
//
//  Created by student on 15/8/22.
//
//

#ifndef __Xiangqi__Design__
#define __Xiangqi__Design__

#include <stdio.h>
#include <iostream>
#include <cocos2d.h>

USING_NS_CC;
class CSystemControl{
public:
    static CSystemControl *instance();
    static void destroy();
protected:
    ~CSystemControl();
public:
    void print();
private:
    CSystemControl();
private:
    static CSystemControl* _instance;
};



#endif /* defined(__Xiangqi__Design__) */

//
//  GameData.h
//  Xiangqi
//
//  Created by student on 15/8/22.
//
//

#ifndef __Xiangqi__GameData__
#define __Xiangqi__GameData__

#include <stdio.h>
class GameData{
public:
    static GameData*getInstance();
    static void purgetInstance();
    
    CC_SYNTHESIZE(int , level, Level);
    CC_SYNTHESIZE(int , score, Score);
protected:
    GameData(){}
    ~GameData(){};
};

#endif /* defined(__Xiangqi__GameData__) */

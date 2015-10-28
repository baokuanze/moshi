//
//  GameData.cpp
//  Xiangqi
//
//  Created by student on 15/8/22.
//
//

#include "GameData.h"
static GameData *instance=nullptr;
GameData *GameData::getInstance(){
    if (instance==nullptr) {
        instance =new GameData();
        return instance;
    }
    return instance;
}
void GameData::purgetInstance(){

    if (instance) {
        delete instance;
        instance=nullptr;
    }

}
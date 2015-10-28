//
//  Observer.h
//  Xiangqi
//
//  Created by student on 15/8/22.
//
//

#ifndef __Xiangqi__Observer__
#define __Xiangqi__Observer__

#include <stdio.h>
#include <iostream>
USING_NS_CC;
using namespace std;
class Obsetver{ //观察折
public:
    virtual void Update()=0;
    virtual ~Obsetver(){}
};
class Engine{ //控制中兴、心
public:
    Engine(Obsetver& aObserver):_observer(aObserver){}
public:
    void Dowdload(){
    //漫长的下载。。。。
        cout<<"Subject funish"<<endl;
        _observer.Update();
    }
private:
    Obsetver&_observer;
    
};
class AppUI:public Obsetver{
public:
    AppUI(){
        _engine=new Engine(*this);}
    ~AppUI(){
        delete _engine;
    }
public:
    void Start(){
        cout<<"The subject is called!"<<endl;
        _engine->Dowdload();
    }
public:
    void Update(){
        cout<<"the observer is called"<<endl;
    }
private:
    Engine *_engine;
    
};
int main(){
    AppUI *pUI=new AppUI;
    pUI->Start();
    delete pUI;
    return 0;
}




#endif /* defined(__Xiangqi__Observer__) */

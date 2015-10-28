//
//  Design.cpp
//  Xiangqi
//
//  Created by student on 15/8/22.
//
//

#include "Design.h"
CSystemControl *CSystemControl::_instance=NULL;
CSystemControl *CSystemControl::instance(){
    if (_instance==NULL) {
        _instance=new  CSystemControl;
    }
    return _instance;
}
CSystemControl::~CSystemControl(){
    
    //释放开辟的空间
}
void CSystemControl::destroy(){
    if (_instance) {
        delete _instance;
        _instance=NULL;
    }
}
void CSystemControl::print(){
    std::cout<<"call the print method!"<<std::endl;
}
CSystemControl::CSystemControl(){
    std::cout<<"Constrct a SystemControll object"<<std::endl;
}

int main(){
    CSystemControl *p1=CSystemControl::instance();
   // CSystemControl *p2=CSystemControl::instance();
    p1->print();
    return 0;


}
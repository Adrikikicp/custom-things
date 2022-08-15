#include "SetupTimeWarpEffect.h"
#include "includes.h"





SetupTimeWarpEffect* SetupTimeWarpEffect::create() {
    auto ret = new SetupTimeWarpEffect();
    if (ret && ret->init()) {
        ret->autorelease();
    } else {
        // if `new` or `init` went wrong, delete the object and return a nullptr
        delete ret;
        ret = nullptr;
    }
    return ret;
}

bool SetupTimeWarpEffect::init(){
  
SetupTimeWarpEffect::m_nObjectID =  1916;
SetupTimeWarpEffect::m_nBuildTabPage = 4;
 SetupTimeWarpEffect::m_nBuildTab = 12;
  
  auto editorUI = gd::EditorUI::get();
  
  
  auto editorPopUp = editorUI->getCreateBtn(2020, 4);
  
  auto startEditorPopUp = editorUI->enableButton(SetupTimeWarpEffect*);
  
  
  
  
} //Idk what to put here
  
  
  
  
}

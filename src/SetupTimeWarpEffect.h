#include "includes.h"

class SetupTimeWarpEffect : public CreateMenuItem {
  
  
  
  protected:
  
  
  virtual bool init();
  
  virtual void keyBackClicked();
  
  void startEffectCallback(PlayLayer*);
  
  void stopEffectCallback(PlayLayer*);
  public:
  
  static SetupTimeWarpEffect* create();
  
  
  
  //this class continues in SetupTimeWarpEffect.cpp
  
  
  
  
}

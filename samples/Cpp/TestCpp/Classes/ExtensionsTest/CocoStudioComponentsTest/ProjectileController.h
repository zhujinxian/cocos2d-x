#ifndef __CC_PROJECTILECONTROLLER_H__
#define __CC_PROJECTILECONTROLLER_H__

#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "cocostudio/CocoStudio.h"

class ProjectileController : public cocostudio::ComController
{
protected:
    ProjectileController(void);
    virtual ~ProjectileController(void);
        
public:
    virtual bool init();
    virtual void onEnter();
    virtual void onExit();
    virtual void update(float delta);
    
    static ProjectileController* create(void);
public:
    void move(float flocationX, float flocationY);
    void die();
};


#endif  // __FUNDATION__CCCOMPONENT_H__

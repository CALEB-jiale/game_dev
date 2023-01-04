//
//  Component.hpp
//  Sprite
//
//  Created by 叶子寻 on 24/12/2022.
//

#ifndef Component_hpp
#define Component_hpp

#include "Math.hpp"

class Component {
public:
    // 构造函数
    // (值越低的更新顺序，则组件越早更新)
    Component(class Actor* owner, int updateOrder = 100);
    
    // 析构函数
    virtual ~Component();
    
    // 通过增量时间更新组件
    virtual void Update(float deltaTime);
    
    // 处理输入
    virtual void ProcessInput(const uint8_t* keyState) {}

    int GetUpdateOrder() const { return mUpdateOrder; }
    
protected:
    // 所属的角色
    class Actor* mOwner;
    
    // 组件的更新顺序
    int mUpdateOrder;
};

#endif /* Component_hpp */

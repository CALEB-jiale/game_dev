//
//  MoveComponent.hpp
//  BasicPhysics
//
//  Created by 叶子寻 on 29/12/2022.
//

#ifndef MoveComponent_hpp
#define MoveComponent_hpp

#include "Component.hpp"

class MoveComponent : public Component {
public:
    // 值低者优先更新
    MoveComponent(class Actor* owner, int updateOrder = 10);
    
    void Update(float deltaTime) override;
    
    float GetAngularSpeed() const { return mAngularSpeed; }
    float GetForwardSpeed() const { return mForwardSpeed; }
    void SetAngularSpeed(float speed) { mAngularSpeed = speed; }
    void SetForwardSpeed(float speed) { mForwardSpeed = speed; }
    
private:
    // 控制旋转
    float mAngularSpeed;
    // 控制方向移动
    float mForwardSpeed;
};

#endif /* MoveComponent_hpp */

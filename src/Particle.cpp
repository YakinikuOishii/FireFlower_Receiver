//
//  Particle.cpp
//  myFirstOriginalApp
//
//  Created by 笠原未来 on 2019/03/22.
//

#include "Particle.hpp"

// コンストラクタ(初期化)
Particle::Particle() {
    ofColor setColor = (0,0,0);
    ofColor setColor2 = (0,0,0);
    ofColor setColor3 = (0,0,0);
    
    setInitialCondition(0, 0, 0, 0, setColor, 0);
    damping = 0.03f;
    count = 0;
}

// 力(加速度をリセット)
void Particle::resetForce() {
    force.set(0, 0);
}

// 力を加える
void Particle::addForce(float x, float y){
    force.x = force.x + x;
    force.y = force.y + y;
}

// 抵抗力の計算
void Particle::addDampingForce(){
    force.x = force.x - velocity.x * damping;
    force.y = force.y - velocity.y * damping;
}

// 初期状態を設定
void Particle::setInitialCondition(float px, float py, float vx, float vy, ofColor c, int num){
    position.set(px, py);
    velocity.set(vx, vy);
    color = c;
    //    color2 = c2;
    //    color3 = c3;
    particleNum = num;
}

// 更新
void Particle::update(){
    velocity = velocity + force;
    position = position + velocity;
}

// 描画
void Particle::draw(){
    ofDrawCircle(position.x, position.y, 3);
}


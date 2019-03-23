//
//  Particle.hpp
//  myFirstOriginalApp
//
//  Created by 笠原未来 on 2019/03/22.
//

#ifndef Particle_hpp
#define Particle_hpp

#pragma once

#include "ofMain.h"

#endif /* Particle_hpp */

class Particle {
public:
    
    ofVec2f position; // 位置
    ofVec2f velocity; // 速度
    ofVec2f force; // 力
    float damping; // 摩擦力
    ofColor color; // 色
    ofColor color2;
    ofColor color3;
    
    int count;
    int particleNum; // パーティクル自体の個数
    
    Particle();
    virtual ~Particle(){};
    void resetForce(); // 力のリセット
    void addForce(float x, float y); // 力を加える
    void addDampingForce(); // 抵抗力(摩擦力)を加える
    //    void setInitialCondition(float px, float py, float vx, float vy, ofColor c, ofColor c2, ofColor c3, int num); // 状態の初期化
    void setInitialCondition(float px, float py, float vx, float vy, ofColor c, int num);
    void update(); // 位置更新
    void draw(); // 描画
    
protected:
private:
};

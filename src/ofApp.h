#pragma once

#include "ofMain.h"
#include "Particle.hpp"
#include "ofxOsc.h"

#define PORT 121439

#define NUM 100

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofxOscReceiver receiver;
    ofPoint remoteMouse;
    
//    Particle p[100];
    vector <Particle> particles;
    
    ofImage backGroundImage;
    
    ofColor colorArray[100];
    ofColor colorArray2[100];
    ofColor colorArray3[100];
    
    float *volume;
    ofSoundPlayer soundPlayer;
    ofSoundPlayer backgroundBGM;
    ofSoundPlayer handFireFlowerSound;
    
    
    int clickCount;
    int particleCount;
};

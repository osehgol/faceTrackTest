#pragma once

#include "ofMain.h"
#include "ofxFaceTracker.h"
#include "ofxDisplayBrightness.h"

class ofApp : public ofBaseApp {
public:
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    
    ofVideoGrabber cam;
    ofxFaceTracker tracker;
    ExpressionClassifier classifier;
    
    ofxDisplayBrightness dis;
    float db;
};

//class ofxDisplayBrightness {
//public:
//    string fTs;
//    int ret;
//    void displayBrightness(float dbLevel) {
//        
//        fTs = ofToString(dbLevel);
//        stringstream s;
//        s << "../../../../../../../addons/ofxDisplayBrightness/src/display-brightness " << dbLevel;
//        ret = system(s.str().c_str());
//    }
//};
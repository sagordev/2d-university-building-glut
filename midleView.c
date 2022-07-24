//
//  midleView.c
//  GlutTest
//
//  Created by SAGOR on 24/7/22.
//

#include "midleView.h"
#include "Common.h"
void topSegments();
void academicFloor(int index);
void getRoofTop();
void leftTower();
void bimbs();

int y = 0;
int acaY = 0;
void getMiddleView(){
    // Background
    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_QUADS);
        glVertex2i (347, 515);
        glVertex2i (772, 522);
        glVertex2i (772, 781);
        glVertex2i (344, 780);
    glEnd();
    
    glPushMatrix();
    for(int i = 1; i <= 7; i++){
        if(i > 1){
            glTranslatef(50, 0, 0);
        }
        topSegments();
    }
    glPopMatrix();
    glPushMatrix();
    getRoofTop();
    glPopMatrix();
    glPushMatrix();
    for(int i = 0; i < 3; i++){
        if(i > 0){
            glTranslatef(0, 60, 0);
        }
        academicFloor(i);
    }
    glTranslatef(-25, 65, 0);
    academicFloor(2);
    glPopMatrix();
    
    glPushMatrix();
    bimbs();
    glPopMatrix();
    leftTower();
}


void topSegments(){
    
    glColor3f(0.73, 0.36, 0.2);
    glBegin(GL_QUADS);
        glVertex2i (312, 461 + y);
        glVertex2i (367, 464 + y);
        glVertex2i (367, 482 + y);
        glVertex2i (312, 480 + y);
    glEnd();
    
    glBegin(GL_QUADS);
        glVertex2i (312, 496 + y);
        glVertex2i (367, 498 + y);
        glVertex2i (367, 520 + y);
        glVertex2i (312, 517 + y);
    glEnd();
    
    glColor3f(0.77, 0.8, 0.82);
    glPointSize(3.0);
    glLineWidth(2.5);
    
    glBegin(GL_LINES);
        glVertex2d (312, 461 + y);
        glVertex2d (367, 464 + y);
    glEnd();
    glBegin(GL_LINES);
        glVertex2d (312, 432 + y);
        glVertex2d (367, 436 + y);
    glEnd();
    glBegin(GL_LINES);
        glVertex2d (367, 433 + y);
        glVertex2d (367, 520 + y);
    glEnd();
    glBegin(GL_LINES);
        glVertex2d (312, 480 + y);
        glVertex2d (367, 482 + y);
    glEnd();
    y += 3;
}

void getRoofTop(){
    glColor3f(0.59, 0.59, 0.6);
    glBegin(GL_QUADS);
        glVertex2i(559, 459);
        glVertex2i(702, 469);
        glVertex2i(660, 511);
        glVertex2i(506, 500);
    glEnd();
    glColor3f(0.49, 0.49, 0.5);
    glBegin(GL_QUADS);
        glVertex2i(565, 484);
        glVertex2i(575, 484);
        glVertex2i(575, 576);
        glVertex2i(565, 576);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2i(660, 484);
        glVertex2i(670, 484);
        glVertex2i(670, 576);
        glVertex2i(660, 576);
    glEnd();
}

void academicFloor(index){
    glColor3f(0.73, 0.36, 0.24);
    glBegin(GL_QUADS);
        glVertex2i(427, 523 - index * 5);
        glVertex2i(468, 497);
        glVertex2i(468, 553);
        glVertex2i(427, 575 - index * 5);
    glEnd();
    glColor3f(0.76, 0.38, 0.29);
    
    glBegin(GL_QUADS);
        glVertex2i(468, 497);
        glVertex2i(762, 521 - index * 2);
        glVertex2i(762, 575 - index * 2);
        glVertex2i(468, 553);
    glEnd();
    
    // Window
    glColor3f(0.31, 0.43, 0.52);
    glBegin(GL_QUADS);
        glVertex2i(486, 498);
        glVertex2i(511, 502);
        glVertex2i(511, 556);
        glVertex2i(486, 554);
    glEnd();
    
    glColor3f(0.31, 0.43, 0.52);
    glBegin(GL_QUADS);
        glVertex2i(570, 505);
        glVertex2i(664, 513 - index * 2);
        glVertex2i(664, 568 - index * 3);
        glVertex2i(570, 559);
    glEnd();
    
    glBegin(GL_QUADS);
        glVertex2i(717, 518 - index);
        glVertex2i(741, 519 - index * 2);
        glVertex2i(741, 572 - index * 2);
        glVertex2i(717, 571 - index);
    glEnd();
    
    acaY += 5;
}


void leftTower(){
    glColor3f(0.65, 0.70, 0.70);
    glBegin(GL_QUADS);
        glVertex2i(360, 491);
        glVertex2i(380, 472);
        glVertex2i(380, 782);
        glVertex2i(360, 779);
    glEnd();
    glColor3f(0.72, 0.74, 0.76);
    glBegin(GL_QUADS);
        glVertex2i(380, 472);
        glVertex2i(430, 472);
        glVertex2i(430, 782);
        glVertex2i(380, 782);
    glEnd();
}

void bimbs() {
    glColor3f(0.61, 0.61, 0.61);
    int inc = 0;
    for(int i = 0; i <= 3; i++){
        glBegin(GL_QUADS);
            glVertex2i(469 + inc, 673 + i * 5);
            glVertex2i(479 + inc, 674 + i * 5);
            glVertex2i(479 + inc, 783);
            glVertex2i(469 + inc, 783);
        glEnd();
        glBegin(GL_QUADS);
            glVertex2i(449 + inc, 737 + i * 5);
            glVertex2i(457 + inc, 738 + i * 5);
            glVertex2i(457 + inc, 783);
            glVertex2i(449 + inc, 783);
        glEnd();
        inc += 90;
    }
    
}


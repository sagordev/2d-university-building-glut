//
//  rightSide.c
//  GlutTest
//
//  Created by SAGOR on 24/7/22.
//

#include "rightSide.h"
#include "Common.h"
void getSurface();
void getRightSide(){
    glColor3f(0.94, 0.98, 0.94);
    getSurface();
    glColor3f(0.74, 0.74, 0.74);
    glBegin(GL_POLYGON);
        glVertex2i(685, 434);
        glVertex2i(813, 371);
        glVertex2i(813, 782);
        glVertex2i(685, 782);
    glEnd();
    glColor3f(0.49, 0.4, 0.37);
    glBegin(GL_QUADS);
        glVertex2i(813, 341);
        glVertex2i(984, 303);
        glVertex2i(984, 782);
        glVertex2i(813, 782);
    glEnd();
    
    glColor3f(0.59, 0.5, 0.47);
    glBegin(GL_QUADS);
        glVertex2i(984, 319);
        glVertex2i(1075, 335);
        glVertex2i(1075, 772);
        glVertex2i(984, 782);
    glEnd();
    
    // photo area
    glColor3f(0.59, 0.5, 0.47);
    glBegin(GL_POLYGON);
            glVertex2i (827, 391);
            glVertex2i (961, 365);
            glVertex2i (960, 530);
            glVertex2i (827, 542);
    glEnd();
}

void getSurface(){
    glBegin(GL_QUADS);
        glVertex2i(125, 732);
        glVertex2i(1060, 732);
        glVertex2i(1121, 802);
        glVertex2i(31, 802);
    glEnd();
}

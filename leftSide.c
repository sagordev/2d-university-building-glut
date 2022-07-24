//
//  leftSide.c
//  GlutTest
//
//  Created by SAGOR on 23/7/22.
//

#include "leftSide.h"
#include "Common.h"
void getFloor(float windowY);
void trees();

float x = 0;

void getLeftSide(){
    

    glColor3f (0.73, 0.36, 0.24);

    glBegin(GL_POLYGON);
            glVertex2i (222, 320);
            glVertex2i (350, 341);
            glVertex2i (350, 771);
            glVertex2i (222, 786);
    glEnd();
    glColor3f(0.9,0.9,0.9);

    glBegin(GL_POLYGON);
            glVertex2i (121, 345);
            glVertex2i (222, 320);
            glVertex2i (222, 786);
            glVertex2i (114, 786);
    glEnd();
    
    glColor3f (0.63, 0.62, 0.62);
    glBegin(GL_LINES);
        glVertex2i (210, 323);
        glVertex2i (210, 786);
    
        glVertex2i (200, 325);
        glVertex2i (200, 786);
    
        glVertex2i (170, 333);
        glVertex2i (170, 786);

        glVertex2i (160, 335);
        glVertex2i (160, 786);
    glEnd();
    
    
    trees();
    float windowY = 0;
    for(int i = 1; i <= 8; i++){
        getFloor(windowY);
        
        windowY = 50;
    }
}


void getFloor(float windowY){
    glTranslatef(0.0f, windowY , 0.0f);

    glColor3f (0.59, 0.74, 0.85);

    glBegin(GL_QUADS);
            glVertex2i (253, 355);
            glVertex2i (270, 358 - x);
            glVertex2i (270, 386 - x);
            glVertex2i (253, 385);
    glEnd();
    
    glBegin(GL_QUADS);
            glVertex2i (282, 359 - x * 2);
            glVertex2i (326, 365 - x * 5.0);
            glVertex2i (326, 394 - x * 5.0);
            glVertex2i (282, 389 - x * 2);
    glEnd();
    
    glColor3f(0.9,0.9,0.9);
    glPointSize(3.0);
    
    glBegin(GL_LINES);
        glVertex2d(222, 392 + x * 4);
        glVertex2d(350, 404 - x * 5.0);
    glEnd();
    x+= 0.5;

}



void trees(){
    glColor3f(0.0, 0.61, 0.2);
    for(int i = 0; i <= 19; i++){
        int space = i * 45;
        if(i > 9 && i < 12){
            continue;
        }
        glBegin(GL_TRIANGLES);
            glVertex2i(110 + space, 769);
            glVertex2i(125 + space, 750);
            glVertex2i(140 + space, 769);
        glEnd();
        
        glBegin(GL_TRIANGLES);
            glVertex2i(115 + space, 755);
            glVertex2i(125 + space, 745);
            glVertex2i(135 + space, 755);
        glEnd();
        
        glBegin(GL_POLYGON);
            glVertex2i(122 + space, 769);
            glVertex2i(127 + space, 769);
            glVertex2i(132 + space, 789);
            glVertex2i(117 + space, 789);
        glEnd();
    }
    
}

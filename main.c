
#include "Common.h"
#include "leftSide.h"
#include "midleView.h"
#include "rightSide.h"
void init(void)
{
    
    glPixelStorei (GL_UNPACK_ALIGNMENT, 1);
    glClearColor (1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1200.0, 800.0, 230.0);
    
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    getRightSide();
    getMiddleView();
    getLeftSide();
    glFlush();
}


void keyboard(unsigned char key, int x, int y)
{
   switch (key) {
      case 27:
      case 'q':
      case 'Q':
         exit(0);
         break;
   }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    
    glutInitWindowSize(1200,600);
    glutInitWindowPosition(0, 0);
    
    glutCreateWindow("UITS Building by Sagor");
    
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    
    glutMainLoop();
    
   return 0;
}


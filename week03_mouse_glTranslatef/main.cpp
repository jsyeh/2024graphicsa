///�{���q week03_mouse ���ӥ�
#include <GL/glut.h>
#include <stdio.h>
float teapotX = 0, teapotY = 0;
void mouse(int button, int state, int x, int y)
{
    teapotX = (x-150)/150.0;
    teapotY = -(y-150)/150.0;
}
void display()
{///���d�Ҫ���46��glClear()�B49��B54��
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix(); ///��49��
        glTranslatef(teapotX, teapotY, 0);///�ۤv�g
        glutSolidTeapot( 0.3 );
    glPopMatrix(); ///��54��
    glutSwapBuffers();
}
int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week03 mouse");
    glutDisplayFunc(display);
    glutMouseFunc(mouse); ///(1) ���Umouse�禡

    glutMainLoop();
}

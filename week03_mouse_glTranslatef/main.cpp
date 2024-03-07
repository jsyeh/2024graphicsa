///程式從 week03_mouse 拿來用
#include <GL/glut.h>
#include <stdio.h>
float teapotX = 0, teapotY = 0;
void mouse(int button, int state, int x, int y)
{
    teapotX = (x-150)/150.0;
    teapotY = -(y-150)/150.0;
}
void display()
{///偷範例的第46行glClear()、49行、54行
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix(); ///第49行
        glTranslatef(teapotX, teapotY, 0);///自己寫
        glutSolidTeapot( 0.3 );
    glPopMatrix(); ///第54行
    glutSwapBuffers();
}
int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week03 mouse");
    glutDisplayFunc(display);
    glutMouseFunc(mouse); ///(1) 註冊mouse函式

    glutMainLoop();
}

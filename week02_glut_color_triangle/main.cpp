/// week02_glut_color_triangle
///�K�W��誺 week02_glut_color_teapot
#include <GL/glut.h>
void display()
{
    ///glBegin(GL_LINE_LOOP); ///�}�l�e(�h���)
    glBegin(GL_POLYGON);///�}�l�e
        ///glColor3f(r,g,b)��m�B���IglVertex2f(x,y);
        glColor3f(1,0,0); glVertex2f(0, 1);
        glColor3f(0,1,0); glVertex2f(+1,-0.6);
        glColor3f(0,0,1); glVertex2f(-1,-0.6);
    glEnd(); /// �����e
    glutSwapBuffers();
}
int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week02_color_teapot");
    glutDisplayFunc(display);
    glutMainLoop();
}

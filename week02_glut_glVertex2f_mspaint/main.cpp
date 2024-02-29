/// week02_glut_glVertex2f_mspaint
///貼上剛剛的 week02_glut_color_triangle
#include <GL/glut.h>
void display()
{
    glBegin(GL_POLYGON);///開始畫
        glVertex2f((34-200)/200.0, -(76-200)/200.0);
        glVertex2f((48-200)/200.0, -(131-200)/200.0);
        glVertex2f((85-200)/200.0, -(59-200)/200.0);
    glEnd(); /// 結束畫
    glBegin(GL_POLYGON);///開始畫
        glVertex2f((383-200)/200.0, -(79-200)/200.0);
        glVertex2f((348-200)/200.0, -(146-200)/200.0);
        glVertex2f((312-200)/200.0, -(55-200)/200.0);
    glEnd(); /// 結束畫
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

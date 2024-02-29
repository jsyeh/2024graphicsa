/// week02_glut_color_triangle
///貼上剛剛的 week02_glut_color_teapot
#include <GL/glut.h>
void display()
{
    ///glBegin(GL_LINE_LOOP); ///開始畫(多邊形)
    glBegin(GL_POLYGON);///開始畫
        ///glColor3f(r,g,b)色彩、頂點glVertex2f(x,y);
        glColor3f(1,0,0); glVertex2f(0, 1);
        glColor3f(0,1,0); glVertex2f(+1,-0.6);
        glColor3f(0,0,1); glVertex2f(-1,-0.6);
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

///貼上上週的「10行」程式,直接拿來用
#include <GL/glut.h>
void display()
{
    glColor3f(247/255.0, 180/255.0, 171/255.0); ///今天加這行
    glutSolidTeapot( 0.3 );

    glColor3f(251/255.0, 233/255.0, 219/255.0); ///今天加這行
    glutSolidTeapot( 0.2 );

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

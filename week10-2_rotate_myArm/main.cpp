/// week10-2_rotate_myArm
/// �K�W week10-1_glutWireCube_myBody_myArm
#include <GL/glut.h>
void myBody() { ///�ڪ�����
	glPushMatrix(); ///�ƥ��x�}
        glColor3f(1, 0, 0);///���⪺
        glutWireCube(0.6);///myBody();
	glPopMatrix(); ///�٭�x�}
}
void myArm() { ///�ڪ����u
	glPushMatrix();
        glColor3f(0, 1, 0); ///��⪺
        glScalef(1, 0.4, 0.4);///myArm();
        glutWireCube(0.3);
	glPopMatrix();
}
float angle = 0; ///���઺����
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    myBody(); ///�ڪ�����
    glPushMatrix();
        glRotatef(angle++, 0, 0, 1); ///���઺����
        myArm(); ///�ڪ����u
    glPopMatrix();

    glutSwapBuffers();
}
int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week10");
	glutDisplayFunc(display);
	glutIdleFunc(display); ///���ŴN����
	glutMainLoop();
}
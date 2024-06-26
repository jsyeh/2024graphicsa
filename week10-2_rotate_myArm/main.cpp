/// week10-2_rotate_myArm
/// 貼上 week10-1_glutWireCube_myBody_myArm
#include <GL/glut.h>
void myBody() { ///我的身體
	glPushMatrix(); ///備份矩陣
        glColor3f(1, 0, 0);///紅色的
        glutWireCube(0.6);///myBody();
	glPopMatrix(); ///還原矩陣
}
void myArm() { ///我的手臂
	glPushMatrix();
        glColor3f(0, 1, 0); ///綠色的
        glScalef(1, 0.4, 0.4);///myArm();
        glutWireCube(0.3);
	glPopMatrix();
}
float angle = 0; ///旋轉的角度
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    myBody(); ///我的身體
    glPushMatrix();
        glRotatef(angle++, 0, 0, 1); ///旋轉的角度
        myArm(); ///我的手臂
    glPopMatrix();

    glutSwapBuffers();
}
int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week10");
	glutDisplayFunc(display);
	glutIdleFunc(display); ///有空就旋轉
	glutMainLoop();
}

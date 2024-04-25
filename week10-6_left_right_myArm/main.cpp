/// week10-6_left_right_myArm
/// �K�W week10-5_TRT_TRT_myArm
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

    glPushMatrix(); ///�k�b��
        glTranslatef(0.3, 0.3, 0);  ///(3) ����ӤW
        glRotatef(angle++, 0, 0, 1);///(2) ����
        glTranslatef(0.15, 0, 0);   ///(1) ����त��, ��b�e����������
        myArm(); ///�ڪ��k�W���u/// week10-3_rotate_translate_myArm
        glPushMatrix();
            glTranslatef(0.15, 0, 0);   ///(3) �����y�W
            glRotatef(angle++, 0, 0, 1);///(2) ����
            glTranslatef(0.15, 0, 0);   ///(1) ����त��, ��b�e����������
            myArm(); ///�ڪ��k�U���u/// week10-3_rotate_translate_myArm
        glPopMatrix();
    glPopMatrix();

    glPushMatrix(); ///���b��
        glTranslatef(-0.3, 0.3, 0);  ///(3) ����ӤW
        glRotatef(angle++, 0, 0, 1);///(2) ����
        glTranslatef(-0.15, 0, 0);   ///(1) ����त��, ��b�e����������
        myArm(); ///�ڪ����W���u/// week10-3_rotate_translate_myArm
        glPushMatrix();
            glTranslatef(-0.15, 0, 0);   ///(3) �����y�W
            glRotatef(angle++, 0, 0, 1);///(2) ����
            glTranslatef(-0.15, 0, 0);   ///(1) ����त��, ��b�e����������
            myArm(); ///�ڪ����U���u/// week10-3_rotate_translate_myArm
        glPopMatrix();
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

/// week10-5_TRT_TRT_myArm
/// 貼上 week10-4_translate_rotate_translate_myArm
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

    glPushMatrix(); ///右半邊
        glTranslatef(0.3, 0.3, 0);  ///(3) 掛到肩上
        glRotatef(angle++, 0, 0, 1);///(2) 旋轉
        glTranslatef(0.15, 0, 0);   ///(1) 把旋轉中心, 放在畫面的正中心
        myArm(); ///我的右上手臂/// week10-3_rotate_translate_myArm
        glPushMatrix();
            glTranslatef(0.15, 0, 0);   ///(3) 掛到手肘上
            glRotatef(angle++, 0, 0, 1);///(2) 旋轉
            glTranslatef(0.15, 0, 0);   ///(1) 把旋轉中心, 放在畫面的正中心
            myArm(); ///我的右下手臂/// week10-3_rotate_translate_myArm
        glPopMatrix();
    glPopMatrix();

    glPushMatrix(); ///左半邊
        glTranslatef(-0.3, 0.3, 0);  ///(3) 掛到肩上
        glRotatef(angle++, 0, 0, 1);///(2) 旋轉
        glTranslatef(-0.15, 0, 0);   ///(1) 把旋轉中心, 放在畫面的正中心
        myArm(); ///我的左上手臂/// week10-3_rotate_translate_myArm
        glPushMatrix();
            glTranslatef(-0.15, 0, 0);   ///(3) 掛到手肘上
            glRotatef(angle++, 0, 0, 1);///(2) 旋轉
            glTranslatef(-0.15, 0, 0);   ///(1) 把旋轉中心, 放在畫面的正中心
            myArm(); ///我的左下手臂/// week10-3_rotate_translate_myArm
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
	glutIdleFunc(display); ///有空就旋轉
	glutMainLoop();
}

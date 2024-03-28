/// 1. File-New-Project, GLUT專案, week06-2_lighting_glNormal3f
/// 2. 剛剛的程式 week06-1_lighting 拿來用
#include <GL/glut.h>
float angle = 0; ///想讓東西轉動
void display()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle++, 0, 1, 0);///對Y軸轉
        glBegin(GL_POLYGON);
            glNormal3f(0, 0, 1); ///打光的法向量
            glVertex2f(-1,-1);
            glVertex2f(+1,-1);
            glVertex2f(+1,+1);
            glVertex2f(-1,+1);
        glEnd();
        glutSolidTeapot( 0.3 );
    glPopMatrix();
	glutSwapBuffers();
}
///這裡, 等一下要放打光的陣列宣告8行
const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 0.0f, 1.0f };///黃光
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, -5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
	glutCreateWindow("week06 lighting");
	glutDisplayFunc(display);
	glutIdleFunc(display);
	///這裡, 等一下要放打光的12+2行程式碼
	glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

	glutMainLoop();
}

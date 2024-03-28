///1. File-New-Project, GLUT�M��, week06-3_glm_obj_model
///2. �K�J11�檺GLUT�{��
///3. �q�ҥ��d�Ҿǲ� source.zip ��3�ӵ{����: transformation.c glm.h glm.c �����Y
///4. �n�N�M�װ��]�w
///4.1. �� glm.h ��� �ୱ\week06-3_glm_obj_model �ؿ���
///4.2. �� glm.c ��� �ୱ\week06-3_glm_obj_model �ؿ���, ���ɦW glm.cpp
///4.3. �b�M�׸̫��k�� Add Files, �[�J glm.cpp
///4.4. �n�� data ��Ƨ�, ��� �ୱ\freeglut\bin �ؿ���

#include <GL/glut.h>
#include "glm.h" ///5.1.
GLMmodel* pmodel = NULL; ///5.2.
void
drawmodel(void) ///5.3.
{
    if (!pmodel) {
	pmodel = glmReadOBJ("data/Al.obj");
	if (!pmodel) exit(0);
	glmUnitize(pmodel);
	glmFacetNormals(pmodel);
	glmVertexNormals(pmodel, 90.0);
    }

    glmDraw(pmodel, GLM_SMOOTH | GLM_MATERIAL);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    drawmodel(); ///glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week06_glm_obj_model");
    glutDisplayFunc(display);
    glutMainLoop();
}

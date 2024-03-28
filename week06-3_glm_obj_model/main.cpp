///1. File-New-Project, GLUT專案, week06-3_glm_obj_model
///2. 貼入11行的GLUT程式
///3. 從課本範例學習 source.zip 有3個程式檔: transformation.c glm.h glm.c 解壓縮
///4. 要將專案做設定
///4.1. 把 glm.h 放到 桌面\week06-3_glm_obj_model 目錄裡
///4.2. 把 glm.c 放到 桌面\week06-3_glm_obj_model 目錄裡, 改檔名 glm.cpp
///4.3. 在專案裡按右鍵 Add Files, 加入 glm.cpp
///4.4. 要把 data 資料夾, 放到 桌面\freeglut\bin 目錄裡

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

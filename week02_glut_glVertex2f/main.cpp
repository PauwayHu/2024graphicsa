#include <GL/glut.h>///18留下來,使用glut外掛

void display()
{
    glBegin(GL_POLYGON);///開始畫
    ///glColor3f(r,g,b)色彩,頂點glVertex2f(x.y);
        glVertex2f((34-200)/200.0, -(76-200)/200.0);
        glVertex2f((48-200)/200.0, -(131-200)/200.0);
        glVertex2f((85-200)/200.0, -(59-200)/200.0);
    glEnd();///結束畫
    glBegin(GL_POLYGON);///開始畫
        glVertex2f((383-200)/200.0, -(79-200)/200.0);
        glVertex2f((348-200)/200.0, -(146-200)/200.0);
        glVertex2f((312-200)/200.0, -(55-200)/200.0);
    glEnd();///結束畫
    glutSwapBuffers();
}
int main(int argc, char *argv[])///138
{
    glutInit(&argc, argv);///第140行,開起glut功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///148,設定顯示模式
    glutCreateWindow("GLUT Shapes");///145行,開一個glut視窗
    glutDisplayFunc(display);///148,要用display()函示來畫圖

    glutMainLoop();///174,主要迴圈在這裡一直運作,不結束
}

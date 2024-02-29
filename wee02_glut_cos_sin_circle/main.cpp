#include <GL/glut.h>///18留下來,使用glut外掛
#include <math.h>
void display()
{
    glBegin(GL_POLYGON);
    for(float a=0; a<=3.1415*2; a+=0.1){
        glVertex2f( 0.2*cos(a)+0.5, 0.2*sin(a)+0.5 );
    }
    glEnd();
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

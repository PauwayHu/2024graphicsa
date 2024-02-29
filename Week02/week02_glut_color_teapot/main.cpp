#include <GL/glut.h>///18留下來,使用glut外掛

void display()
{
    glColor3f(247/255.0, 180/255.0, 171/255.0);
    glutSolidTeapot( 0.3 );

    glColor3f(251/255.0, 233/255.0, 219/255.0);
    glutSolidTeapot( 0.2 );

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

///程式從week03_mouse拿來用
#include <GL/glut.h>///18留下來,使用glut外掛
#include <stdio.h>
float teapotX = 0, teapotY = 0;
void mouse(int button,int state,int x,int y)
{
    teapotX = (x-150)/150.0;
    teapotY = -(y-150)/150.0;
}
void display()
///拿範例46,49,54
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///46
    glPushMatrix();///49
        glTranslatef(teapotX,teapotY,0);
        glutSolidTeapot( 0.3 );
    glPopMatrix();///54
    glutSwapBuffers();
}
int main(int argc, char *argv[])///138
{
    glutInit(&argc, argv);///第140行,開起glut功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///148,設定顯示模式
    glutCreateWindow("week03 mouse");///145行,開一個glut視窗
    glutDisplayFunc(display);///148,要用display()函示來畫圖
    glutMouseFunc(mouse);

    glutMainLoop();///174,主要迴圈在這裡一直運作,不結束
}

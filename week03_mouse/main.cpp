#include <GL/glut.h>///18留下來,使用glut外掛
#include <stdio.h>
void mouse(int button,int state,int x,int y)
{
    ///printf("Hellow Mouse!\n");
    ///printf("%d %d %d %d\n",button,state,x,y);///
    if(state==GLUT_DOWN)
        printf("glVertex2f((%d-150)/150.0,-(%d-150)/150.0);\n",x,y);
}
void display()
{
    glutSolidTeapot( 0.3 );
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

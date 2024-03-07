#include <GL/glut.h>///18留下來,使用glut外掛
#include <stdio.h>
float teapotX = 0, teapotY = 0;
float angle =0;
int method = 1;
int oldX = 0,oldY = 0;
void mouse(int button,int state,int x,int y)
{
    oldX = x;
    oldY = y;
}
void display()
///拿範例46,49,54
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///46
    glPushMatrix();///49
    glTranslatef(teapotX,teapotY,0);
        glRotatef(angle,0,0,1);
        glutSolidTeapot( 0.3 );
    glPopMatrix();///54
    glutSwapBuffers();
}
void motion(int x,int y)
{
    if(method==1){///轉動 angle
        angle += x - oldX;
    }else{
        teapotX += (x-oldX)/150.0;
        teapotY -= (y-oldY)/150.0;
    }
    oldX = x;
    oldY = y;
    display();
}
void keyboard(unsigned char key,int x,int y)
{
    if(key=='e') method=1;///轉動
    if(key=='w') method=2;///移動
}
int main(int argc, char *argv[])///138
{
    glutInit(&argc, argv);///第140行,開起glut功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///148,設定顯示模式
    glutCreateWindow("week03 mouse");///145行,開一個glut視窗
    glutDisplayFunc(display);///148,要用display()函示來畫圖
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);


    glutMainLoop();///174,主要迴圈在這裡一直運作,不結束
}

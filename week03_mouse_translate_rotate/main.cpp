#include <GL/glut.h>///18�d�U��,�ϥ�glut�~��
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
///���d��46,49,54
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
    if(method==1){///��� angle
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
    if(key=='e') method=1;///���
    if(key=='w') method=2;///����
}
int main(int argc, char *argv[])///138
{
    glutInit(&argc, argv);///��140��,�}�_glut�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///148,�]�w��ܼҦ�
    glutCreateWindow("week03 mouse");///145��,�}�@��glut����
    glutDisplayFunc(display);///148,�n��display()��ܨӵe��
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);


    glutMainLoop();///174,�D�n�j��b�o�̤@���B�@,������
}

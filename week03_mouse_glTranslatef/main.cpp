///�{���qweek03_mouse���ӥ�
#include <GL/glut.h>///18�d�U��,�ϥ�glut�~��
#include <stdio.h>
float teapotX = 0, teapotY = 0;
void mouse(int button,int state,int x,int y)
{
    teapotX = (x-150)/150.0;
    teapotY = -(y-150)/150.0;
}
void display()
///���d��46,49,54
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
    glutInit(&argc, argv);///��140��,�}�_glut�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///148,�]�w��ܼҦ�
    glutCreateWindow("week03 mouse");///145��,�}�@��glut����
    glutDisplayFunc(display);///148,�n��display()��ܨӵe��
    glutMouseFunc(mouse);

    glutMainLoop();///174,�D�n�j��b�o�̤@���B�@,������
}

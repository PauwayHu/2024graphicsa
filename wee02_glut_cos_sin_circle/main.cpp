#include <GL/glut.h>///18�d�U��,�ϥ�glut�~��
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
    glutInit(&argc, argv);///��140��,�}�_glut�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///148,�]�w��ܼҦ�
    glutCreateWindow("GLUT Shapes");///145��,�}�@��glut����
    glutDisplayFunc(display);///148,�n��display()��ܨӵe��

    glutMainLoop();///174,�D�n�j��b�o�̤@���B�@,������
}

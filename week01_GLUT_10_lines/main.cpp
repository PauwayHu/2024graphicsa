#include <GL/glut.h>///18�d�U��,�ϥ�glut�~��

void display()
{
    glutSolidTeapot( 0.3 );
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

#include <GL/glut.h>///18�d�U��,�ϥ�glut�~��

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
    glutInit(&argc, argv);///��140��,�}�_glut�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///148,�]�w��ܼҦ�
    glutCreateWindow("GLUT Shapes");///145��,�}�@��glut����
    glutDisplayFunc(display);///148,�n��display()��ܨӵe��

    glutMainLoop();///174,�D�n�j��b�o�̤@���B�@,������
}

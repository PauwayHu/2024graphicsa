#include <GL/glut.h>///18�d�U��,�ϥ�glut�~��

void display()
{
    glBegin(GL_POLYGON);///�}�l�e
    ///glColor3f(r,g,b)��m,���IglVertex2f(x.y);
        glVertex2f((34-200)/200.0, -(76-200)/200.0);
        glVertex2f((48-200)/200.0, -(131-200)/200.0);
        glVertex2f((85-200)/200.0, -(59-200)/200.0);
    glEnd();///�����e
    glBegin(GL_POLYGON);///�}�l�e
        glVertex2f((383-200)/200.0, -(79-200)/200.0);
        glVertex2f((348-200)/200.0, -(146-200)/200.0);
        glVertex2f((312-200)/200.0, -(55-200)/200.0);
    glEnd();///�����e
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

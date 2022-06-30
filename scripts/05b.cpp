#include <iostream>
#include <stdlib.h>
#include <GL/glut.h>

using namespace std;

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
		case 27: // ������ esc
			exit(0);
	}
}

void initRendering() {
	glEnable(GL_DEPTH_TEST);
}

void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 30.0f;
float _cameraAngle = 0.0f;

// �������� ������������� ������
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glMatrixMode(GL_MODELVIEW); //������� ���������� ���������
	glLoadIdentity(); //������������ ���������� ���������
	glRotatef(-_cameraAngle, 0.0f, 1.0f, 0.0f); //���������� ��� �������
	glTranslatef(0.0f, 0.0f, -5.0f); //���������� ������ ���� 5 �������
	
	glPushMatrix(); //���������� ��� ��� ���� ���������������
	glTranslatef(0.0f, -1.0f, 0.0f); //���������� ��� ������ ��� ���������
	glRotatef(_angle, 0.0f, 0.0f, 1.0f); //���������� ���� ��� ��� ����� z
	
	glBegin(GL_QUADS);
	
	//��������
	glColor3f(1,0,0);
	glVertex3f(-0.7f, -0.5f, 0.0f);
	glVertex3f(0.7f, -0.5f, 0.0f);
	glVertex3f(0.4f, 0.5f, 0.0f);
	glVertex3f(-0.4f, 0.5f, 0.0f);
	
	glEnd();
	
	glPopMatrix(); //������� ����������� ��� ������ ��� ���������
	glPushMatrix(); //���������� ��� ��������� ���������������
	glTranslatef(1.0f, 1.0f, 0.0f); //���������� ��� ������ ��� ����������
	glRotatef(_angle, 0.0f, 1.0f, 0.0f); //���������� ���� ��� ����� y
	glScalef(0.7f, 0.7f, 0.7f); //���������� ���� 0.7 ����� ������ x, y ��� z
	
	glBegin(GL_TRIANGLES);
	
	//���������
	glColor3f(0,1,0);
	glVertex3f(-0.5f, -0.5f, 0.0f);
	glVertex3f(0.5f, -0.5f, 0.0f);
	glVertex3f(-0.5f, 0.0f, 0.0f);
	
	glVertex3f(-0.5f, 0.0f, 0.0f);
	glVertex3f(0.5f, -0.5f, 0.0f);
	glVertex3f(0.5f, 0.0f, 0.0f);
	
	glVertex3f(-0.5f, 0.0f, 0.0f);
	glVertex3f(0.5f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.5f, 0.0f);
	
	glEnd();
	
	glPopMatrix(); //������� ����������� ��� ������ ��� ����������
	glPushMatrix(); //���������� ��� ��������� ���������� ���������������
	glTranslatef(-1.0f, 1.0f, 0.0f); //���������� ��� ������ ��� ��������
	glRotatef(_angle, 1.0f, 2.0f, 3.0f); //���������� ���� ��� ����� (1, 2, 3)
	
	glColor3f(0,0,1);
	glBegin(GL_TRIANGLES);
	
	//�������
	glVertex3f(0.5f, -0.5f, 0.0f);
	glVertex3f(0.0f, 0.5f, 0.0f);
	glVertex3f(-0.5f, -0.5f, 0.0f);
	
	glEnd();
	
	glPopMatrix(); //������� ����������� ��� ������ ��� ��������
	
	glutSwapBuffers();
}

void update(int value) {
	_angle += 2.0f;
	if (_angle > 360) {
		_angle -= 360;
	}
	
	glutPostRedisplay(); //������� ��� GLUT ��� � ���������� ���� �������
	
	//����� ��� GLUT ��� �������� ���� ��� 25msec
	glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv) {
	//������������ GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(400, 400);
	
	//���������� ���������
	glutCreateWindow("5b / �������� 5� - ��������������� ��� ����������");
	initRendering();
	
	//������� ��������� �����������
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);
	
	glutTimerFunc(25, update, 0); //�������� �����������
	
	glutMainLoop();
	return 0;
}


/* �� ��������� ��������� ��� ������ "Basic Shapes" lesson ��� ������������� ���
 * www.videotutorialsrock.com
 */









#include <iostream>
#include <stdlib.h> // ���������� ��� �� ��������� "exit" 
#include <GL/glut.h> // ���������� ��� �� ��������������� ������� ��� OpenGL

using namespace std;

// ��������� ��� �������� ���� �������� ��� ������
void handleKeypress(unsigned char key, //�� ������ ��� ��������
					int x, int y) {    //�� ��������� ������������� ��� ������
	switch (key) {
		case 27: //������� ��� ����������� ��� ������ esc
			exit(0); //������ ��� �� ���������
	}
}

//��������� ����������� 3D (3D rendering)
void initRendering() {
	//���������� ��� ������ ��� ��� �������
	glEnable(GL_DEPTH_TEST);
}

//��������� ��� �������� ���� ����� ������ ���� ���������� 
//��� ��������� �����������
void handleResize(int w, int h) {
	//��������� ��� ������������� �� ����� pixel ��� ��� OpenGL
	glViewport(0, 0, w, h);
	
	glMatrixMode(GL_PROJECTION); //����� ��� ������� ��� ���������� ��� �������
	
	//���������� ���������� ��� �������
	glLoadIdentity(); //������������ ��� �������
	gluPerspective(45.0,                  //� ����� ��� �������
				   (double)w / (double)h, //� �������� ������� ���� ����
				   1.0,                   //� ����������� ������������ z
				   200.0);                //H ��� ������������� ������������ z 
				   }

//���������� ��� ������������� ������
void drawScene() {
	//�������� ����������� ��� ��� ��������� ��������
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glMatrixMode(GL_MODELVIEW); //������� ���������� ���������
	glLoadIdentity(); //������������ ���������� ���������
	
	glBegin(GL_QUADS); 
		
	//��������
	glVertex3f(-0.7f, -1.5f, -5.0f);
	glVertex3f(0.7f, -1.5f, -5.0f);
	glVertex3f(0.4f, -0.5f, -5.0f);
	glVertex3f(-0.4f, -0.5f, -5.0f);
	
	glEnd(); 
	
	glBegin(GL_TRIANGLES); 
	
	glVertex3f(0.5f, 0.5f, -5.0f);
	glVertex3f(1.5f, 0.5f, -5.0f);
	glVertex3f(0.5f, 1.0f, -5.0f);
	
	glVertex3f(0.5f, 1.0f, -5.0f);
	glVertex3f(1.5f, 0.5f, -5.0f);
	glVertex3f(1.5f, 1.0f, -5.0f);
	
	glVertex3f(0.5f, 1.0f, -5.0f);
	glVertex3f(1.5f, 1.0f, -5.0f);
	glVertex3f(1.0f, 1.5f, -5.0f);
	
	//�������
	glVertex3f(-0.5f, 0.5f, -5.0f);
	glVertex3f(-1.0f, 1.5f, -5.0f);
	glVertex3f(-1.5f, 0.5f, -5.0f);
	
	glEnd(); //����� ������������� ��������
	
	glutSwapBuffers(); //�������� ��� ������ 3D ���� �����
}

int main(int argc, char** argv) {
	//�������� GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(400, 400); //������� �������� ���������
	
	//���������� ���������
	glutCreateWindow("5� / �������� 5� - ��������������� ��� ����������");
	initRendering(); //�������� rendering
	
	//�������� ������������ ����������� (handler functions)
	// ��� ��������, ����� �������� ��� ������ �������� ���������
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);
	
	glutMainLoop(); //�������� ��� ������ main. ��� ���������� ����
	return 0; //� ������ ���� ��� ���������� ����
}

/* �� ��������� ��������� ��� ������ "Basic Shapes" lesson ��� ������������� ���
 * www.videotutorialsrock.com
 */









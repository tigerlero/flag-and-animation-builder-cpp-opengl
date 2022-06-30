#include <Windows.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <time.h>

GLfloat xRotated, yRotated, zRotated, roloi, xb1, yb1, circle;
void init(void)
{
glClearColor(0,0,0,1);
 
}

	// ���������� "��������" ������
		void drawFilledSun(float x, float y, float radius, int num_segments){
    		float i;
		    double twicePi = 2.0 * 3.142;
    		glBegin(GL_TRIANGLE_FAN); // � ���� ��� ����������� ��� ������
    			glVertex2f(x, y); // ������ ��� ������
    			for (i = 0; i <= num_segments; i++)   {
        			glVertex3f (
            			(x + (radius * cos(i * twicePi / num_segments))), (y + (radius * sin(i * twicePi / num_segments)))
            		,1);
    			}
    		glEnd(); //�� ����� ��� ����������� ��� ������
		}

	// ���������� ��������
		void Cloud(float x, float y, float size, float roloi, float velocity){
    		drawFilledSun(x+7+(roloi*velocity),y+10,7*size,100);
    		drawFilledSun(x+10+(roloi*velocity),y+12,7*size,100);
    		drawFilledSun(x+10+(roloi*velocity),y+7,7*size,100);
    		drawFilledSun(x+14+(roloi*velocity),y+10,7*size,100);
		}

void DrawAnimation(void)
{
   	 glMatrixMode(GL_MODELVIEW);
	 glClear(GL_COLOR_BUFFER_BIT);
     glLoadIdentity();
	 glClearColor(0,0,0,0);

	//������� 1
	glColor3f(1, 0.96, 1);
	Cloud(-7,10,1,roloi,0.005);

	//������� 2
	glColor3f(0.8, 0.96, 0.8);
	Cloud(-10,14,2,roloi,0.001);

	//������� 3
	glColor3f(1, 0.5, 1);
	Cloud(-8,19,1,roloi,0.004);

	//������� 4
	glColor3f(0.2, 0.96, 1);
	Cloud(-15,12,3,roloi,0.002);

	//������� 5
	glColor3f(1, 0.96, 0.1);
	Cloud(-17,5,0.5,roloi,0.003);

	//������� 6
	glColor3f(1, 0.7, 1);
	Cloud(-32,20,2,roloi,0.001);

	//������� 7
	glColor3f(1, 0.86, 1);
	Cloud(-20,12,1,roloi,0.001);

	//������� 8
	glColor3f(0.5, 0.96, 0.8);
	Cloud(-25,10,0.7,roloi,0.002);

	
// ���������� ������ ����
		if ((roloi==1))
		{
		}
	
	
// ���������� �������� ����
		if ((roloi==2))
		{
		}

// ���������� ������ ����
		if ((roloi==3))
		{
		}

	
// ���������� �������� ����
		if ((roloi==4))
		{
		}
			
// ���������� ������� ����
		if ((roloi==5))
		{
		}

// ���������� ����� ����
		if ((roloi==6))
		{
		}
		
// �����
		if ((roloi>6))
		{
		}


glFlush();
}

		
void animation(void)
{
 	// ����� ������� ��������� ��� ����
 	roloi+=1;
	DrawAnimation();
}


void reshape(int x, int y)
{
    glMatrixMode(GL_PROJECTION);  
    glLoadIdentity();
    glOrtho(0, 100.0, 100.0, 00.0, -100.0,100.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv){

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(640,480);
glutInitWindowPosition(0, 0);
glMatrixMode(GL_PROJECTION);
glOrtho(0, 100.0, 100.0, 00.0, -100.0,100.0);
glutCreateWindow(argv[0]);
init();
glutDisplayFunc(DrawAnimation);
glutReshapeFunc(reshape);
glutIdleFunc(animation);
glutMainLoop();
return 0;
} 











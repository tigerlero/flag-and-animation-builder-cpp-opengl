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


void DrawAnimation(void)
{
   	 glMatrixMode(GL_MODELVIEW);
	 glClear(GL_COLOR_BUFFER_BIT);
     glLoadIdentity();
	 glClearColor(0,0,0,0);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(10.0+(roloi/100),20.0+(roloi/200));
		glVertex2f(20.0+(roloi/100),10.0+(roloi/200));
		glVertex2f(15.0+(roloi/100),20.0+(roloi/200));
		glVertex2f(15.0+(roloi/100),30.0+(roloi/200));
		glVertex2f(35.0+(roloi/100),15.0+(roloi/200));
		glVertex2f(25.0+(roloi/100),5.0+(roloi/200));
	glEnd();

	usleep(10000);	
	
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











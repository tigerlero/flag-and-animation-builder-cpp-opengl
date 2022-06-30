#include <Windows.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

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
        			glVertex2f (
            			(x + (radius * cos(i * twicePi / num_segments))), (y + (radius * sin(i * twicePi / num_segments)))
            		);
    			}
    		glEnd(); //�� ����� ��� ����������� ��� ������
		}

void DrawAnimation(void)
{
   	 glMatrixMode(GL_MODELVIEW);
	 glClear(GL_COLOR_BUFFER_BIT);
     glLoadIdentity();
	 glClearColor(0,0,0,0);

     
	
// ���������� ������ ����
		if ((roloi>0)&(roloi<1000))
		{
			// ������
			glColor3f(0.8,0,0);
			glRecti(9,20,13,25);
				
			//����
			glColor3f(0,0.5,0.4);
			glRecti(6,10,16,20);

			// ����
			glColor3f(0,0,0);
	    	glBegin(GL_LINE_STRIP);
    			glVertex2f(11-0,16);
    			glVertex2f(11-0,12);
    			glVertex2f(10-0,12);
    			glVertex2f(10,16);
			glEnd();
				
			// �����
			glColor3f(0,0.5,0.2);
			glRecti(10,5,12,10);
				
			// ����
			glColor3f(0,0,0);
	    	glBegin(GL_POLYGON);
    			glVertex2f(11,14);
    			glVertex2f(13,14);
    			glVertex2f(14,7);
    			glVertex2f(13,7);
    			glVertex2f(11,12);
			glEnd();
		}
	
	
// ���������� �������� ����
		if ((roloi>=1000)&(roloi<2000))
		{
			xb1=10;
			yb1=5;
			
			// ������
			glColor3f(0.8,0,0);
			glRecti(9-0+xb1,20-5+yb1,13-0+xb1,25-5+yb1);
				
			//����
			glColor3f(0,0.5,0.4);
			glRecti(6-0+xb1,10-5+yb1,16-0+xb1,20-5+yb1);

				// ����
				glColor3f(0,0,0);
	    		glBegin(GL_LINE_STRIP);
    				glVertex2f(11-0+xb1,16-5+yb1);
    				glVertex2f(15-0+xb1,15-5+yb1);
    				glVertex2f(14-0+xb1,13-5+yb1);
    				glVertex2f(10-0+xb1,15-5+yb1);
				glEnd();
				
				// �����
				glColor3f(0,0.5,0.2);
					// ����
	    		glBegin(GL_POLYGON);
    				glVertex2f(13-0+xb1,10-5+yb1);
    				glVertex2f(14-0+xb1,10-5+yb1);
    				glVertex2f(19-0+xb1,5-5+yb1);
    				glVertex2f(16-0+xb1,5-5+yb1);
				glEnd();
				
					//��������
	    		glBegin(GL_POLYGON);
    				glVertex2f(9-0+xb1,10-5+yb1);
    				glVertex2f(10-0+xb1,10-5+yb1);
    				glVertex2f(8-0+xb1,5-5+yb1);
    				glVertex2f(6-0+xb1,5-5+yb1);
				glEnd();
				
				// ����
				glColor3f(0,0,0);
	    		glBegin(GL_POLYGON);
    				glVertex2f(14-0+xb1,15-5+yb1);
    				glVertex2f(15-0+xb1,16-5+yb1);
    				glVertex2f(20-0+xb1,13-5+yb1);
    				glVertex2f(20-0+xb1,12-5+yb1);
    				glVertex2f(15-0+xb1,15-5+yb1);
				glEnd();
			}

// ���������� ������ ����
		if ((roloi>=2000)&(roloi<3000))
		{
			xb1=20;
			yb1=5;
			
			// ������
			glColor3f(0.8,0,0);
			glRecti(9-0+xb1,20-5+yb1,13-0+xb1,25-5+yb1);
				
			//����
			glColor3f(0,0.5,0.4);
			glRecti(6-0+xb1,10-5+yb1,16-0+xb1,20-5+yb1);
				
				// ����
				glColor3f(0,0,0);
	    		glBegin(GL_LINE_STRIP);
    				glVertex2f(11-0+xb1,16-5+yb1);
    				glVertex2f(11-0+xb1,12-5+yb1);
    				glVertex2f(10-0+xb1,12-5+yb1);
    				glVertex2f(10-0+xb1,16-5+yb1);
				glEnd();
				
				// �����
				glColor3f(0,0.5,0.2);
				glRecti(10-0+xb1,5-5+yb1,12-0+xb1,10-5+yb1);
				
				// ����
				glColor3f(0,0,0);
	    		glBegin(GL_POLYGON);
    				glVertex2f(11-0+xb1,14-5+yb1);
    				glVertex2f(13-0+xb1,14-5+yb1);
    				glVertex2f(14-0+xb1,7-5+yb1);
    				glVertex2f(13-0+xb1,7-5+yb1);
    				glVertex2f(11-0+xb1,12-5+yb1);
				glEnd();
				
		}

	
// ���������� �������� ����
		if ((roloi>=3000)&(roloi<4000))
		{
			xb1=30;
			yb1=5;
			
			// ������
			glColor3f(0.8,0,0);
			glRecti(9-0+xb1,20-5+yb1,13-0+xb1,25-5+yb1);
				
			//����
			glColor3f(0,0.5,0.4);
			glRecti(6-0+xb1,10-5+yb1,16-0+xb1,20-5+yb1);

				// ����
				glColor3f(0,0,0);
	    		glBegin(GL_LINE_STRIP);
    				glVertex2f(11-0+xb1,16-5+yb1);
    				glVertex2f(15-0+xb1,15-5+yb1);
    				glVertex2f(14-0+xb1,13-5+yb1);
    				glVertex2f(10-0+xb1,15-5+yb1);
				glEnd();
				
				// �����
				glColor3f(0,0.5,0.2);
					// ����
	    		glBegin(GL_POLYGON);
    				glVertex2f(13-0+xb1,10-5+yb1);
    				glVertex2f(14-0+xb1,10-5+yb1);
    				glVertex2f(19-0+xb1,5-5+yb1);
    				glVertex2f(16-0+xb1,5-5+yb1);
				glEnd();
				
					//��������
	    		glBegin(GL_POLYGON);
    				glVertex2f(9-0+xb1,10-5+yb1);
    				glVertex2f(10-0+xb1,10-5+yb1);
    				glVertex2f(8-0+xb1,5-5+yb1);
    				glVertex2f(6-0+xb1,5-5+yb1);
				glEnd();
				
				// ����
				glColor3f(0,0,0);
	    		glBegin(GL_POLYGON);
    				glVertex2f(14-0+xb1,15-5+yb1);
    				glVertex2f(15-0+xb1,16-5+yb1);
    				glVertex2f(20-0+xb1,13-5+yb1);
    				glVertex2f(20-0+xb1,12-5+yb1);
    				glVertex2f(15-0+xb1,15-5+yb1);
				glEnd();
			}
			
// ���������� ������� ����
		if ((roloi>=4000)&(roloi<5000))
		{
			xb1=40;
			yb1=5;
			
			// ������
			glColor3f(0.8,0,0);
			glRecti(9-0+xb1,20-5+yb1,13-0+xb1,25-5+yb1);
				
			//����
			glColor3f(0,0.5,0.4);
			glRecti(6-0+xb1,10-5+yb1,16-0+xb1,20-5+yb1);
				
				// ����
				glColor3f(0,0,0);
	    		glBegin(GL_LINE_STRIP);
    				glVertex2f(11-0+xb1,16-5+yb1);
    				glVertex2f(11-0+xb1,12-5+yb1);
    				glVertex2f(10-0+xb1,12-5+yb1);
    				glVertex2f(10-0+xb1,16-5+yb1);
				glEnd();
				
				// �����
				glColor3f(0,0.5,0.2);
				glRecti(10-0+xb1,5-5+yb1,12-0+xb1,10-5+yb1);
				
				// ����
				glColor3f(0,0,0);
	    		glBegin(GL_POLYGON);
    				glVertex2f(11-0+xb1,14-5+yb1);
    				glVertex2f(13-0+xb1,14-5+yb1);
    				glVertex2f(14-0+xb1,7-5+yb1);
    				glVertex2f(13-0+xb1,7-5+yb1);
    				glVertex2f(11-0+xb1,12-5+yb1);
				glEnd();
				
		}

// ���������� ���������� ����
		if ((roloi>=5000)&(roloi<5100))
		{
			
			// ���������� "��������" ������
			glColor3f(1, 0, 0);
			drawFilledSun(50,50,5*circle,500);
			usleep(100000);
			
		}
		
// �����
		if ((roloi>=5100))
		{
			glClearColor(0,0,0,1);}


glFlush();
}

		
void animation(void)
{
 	// ����� ������� ��������� ��� ����
 	roloi+=1;
 	if (roloi>=5000){
 		circle+=1;}
	DrawAnimation();
}


void reshape(int x, int y)
{
    glMatrixMode(GL_PROJECTION);  
    glLoadIdentity();
	gluOrtho2D(0,100,0,100);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv){

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(640,480);
glutInitWindowPosition(0, 0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,100,0,100);
glutCreateWindow(argv[0]);
init();
glutDisplayFunc(DrawAnimation);
glutReshapeFunc(reshape);
glutIdleFunc(animation);
glutMainLoop();
return 0;
} 











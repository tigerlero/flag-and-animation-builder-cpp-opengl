#include <Windows.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float angle=0.0f;

void DrawAxes()
{
  glColor3f(0.6, 0.6, 0.6);
  glBegin(GL_LINES);
    glVertex2f(0.0,0.0);
	glVertex2f(100.0,0.0);
	glVertex2f(0.0,0.0);
	glVertex2f(0.0,100.0);
  glEnd();
}

// ���������� ������
	// ���������� ������������� ������
		void DrawCircle(float cx, float cy, float r, int num_segments) {
    		float x, y;
			glBegin(GL_LINE_STRIP);
    			for (int ii = 0; ii < num_segments; ii++)   {
        			float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);// � �������� ������ 
        			float x = r * cosf(theta);//����������� ��� x
        			float y = r * sinf(theta);//����������� ��� y 
        			glVertex2f(x + cx, y + cy);//������ ��� ������
    			}
    		glEnd();
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


// ���������� �����
	// ���������� ������������� ����� ������
		void DrawArcCircle(float cx, float cy, float r, float theta_initial, float theta_final, int num_segments) {
    		glBegin(GL_LINE_STRIP);
    			for (int ii = 0; ii < num_segments; ii++)   {
    				float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);// � �������� ������ 
        			float x = r * cosf(theta);//����������� ��� x
        			float y = r * sinf(theta);//����������� ��� y 
        			if (theta>=theta_initial*(2.0f * 3.1415926f)/360){
        				if(theta<=theta_final*(2.0f * 3.1415926f)/360){
							glVertex2f(x + cx, y + cy);//������ ��� �����
						}}
    			}
    		glEnd();
		}

	// ���������� "��������" �����
		void drawFilledArcSun(float x, float y, float radius, float theta_initial, float theta_final, int num_segments){
    		float i;
		    double twicePi = 2.0 * 3.142;
    		glBegin(GL_TRIANGLE_FAN); // � ���� ��� ����������� ��� �����
    			glVertex2f(x, y); // ������ ��� �����
    			for (i = 0; i <= num_segments; i++)   {
        			float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);// � �������� ������ 
        			if (theta>=theta_initial*(2.0f * 3.1415926f)/360){
        				if(theta<=theta_final*(2.0f * 3.1415926f)/360){
		        			glVertex2f (
        		    			(x + (radius * cos(i * twicePi / num_segments))), (y + (radius * sin(i * twicePi / num_segments)))
            				);
            		}}
    			}
    		glEnd(); //�� ����� ��� ����������� ��� �����
		}


void Render()
{    
  
  glClear(GL_COLOR_BUFFER_BIT );  
  

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();

  // �������� ������
  	DrawAxes();

  // �������� ������
    // ���������� ������������� ������
		glColor3f(1, 0, 0);
		DrawCircle(-75, 75, 20, 1000);
	// ���������� "��������" ������
		glColor3f(1, 1, 0);
		drawFilledSun(-20,20,40,500);

  // �������� �����
    // ���������� ������������� ����� ������
		glColor3f(0, 1, 1);
		DrawArcCircle(20, -70, 30, 30, 160, 100);
	// ���������� "��������" �����
		glColor3f(1, 0, 1);
		drawFilledArcSun(65,-10,50,50, 200, 340);


 // ��������� ��������
	 for (int ii=0;ii<=9;ii++)
 	{
		for (int ij=0;ij<=2;ij++)
 		{
			glColor3f(1,1,1);
			drawFilledSun(-94+(ii*20),-70-(ij*10),5,500);
		}  
	}
 
  glutSwapBuffers();                      
}

//-----------------------------------------------------------


void Resize(int w, int h)
{ 
  // define the visible area of the window ( in pixels )
  if (h==0) h=1;
  glViewport(0,0,w,h); 

  // Setup viewing volume

  glMatrixMode(GL_PROJECTION); 
  glLoadIdentity();
 
  //         L	   R 	  B 	T	 N	   F
  glOrtho (-100.0, 100.0, -100.0, 100.0, 100.0,-100.0);
	
}


/////////////// Main Program ///////////////////////////

int main(int argc, char* argv[])
{ 
  // initialize GLUT library state
  glutInit(&argc, argv);
	
  glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE);
 
  
  // Define the main window size and initial position 
  // ( upper left corner, boundaries included )
  glutInitWindowSize(480,480);
  glutInitWindowPosition(50,50);
  
  // Create and label the main window
  glutCreateWindow("������, ���� ��� �����������");
  
  
  // Callbacks for the GL and GLUT events:

  // The rendering function 
  glutDisplayFunc(Render);
  glutReshapeFunc(Resize);
  
 
  //Enter main event handling loop
  glutMainLoop();
  return 0;
}  


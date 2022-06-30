#include <Windows.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <time.h>

#define MAX_PARTICLES 1000
float slowdown = 4.0;
float velocity = 0.0;
int loop;
int fall;

typedef struct {
  // ���
  bool alive;	// �� particle ����� �������;
  float life;	// ��� particle
  float fade;   //  ����������
  // �����
  float red;
  float green;
  float blue;
  // ����/����������
  float xpos;
  float ypos;
  // ��������/����������
  // ���� �������, ���� �� ������� ���� ���� �� ����
  float vel;
  // ��������
  float gravity;
}particles;

// Paticle System
particles par_sys[MAX_PARTICLES];

// ������������/Reset Particles 
void initParticles(int i) {
    par_sys[i].alive = true;
    par_sys[i].life = 40.0;
    par_sys[i].fade = float(rand()%100)/1000.0f+0.003f;

    //par_sys[i].xpos = (float) (rand() % 21) - 10;
    par_sys[i].xpos = (float) (rand() % 640) - 10;
    par_sys[i].ypos = 480.0;

    par_sys[i].red = 1.0;
    par_sys[i].green = 1.0;
    par_sys[i].blue = 1.0;

    par_sys[i].vel = velocity;
    par_sys[i].gravity = -0.2;//-0.8;

}

GLfloat xRotated, yRotated, zRotated, roloi, xb1, yb1, circle;
void init(void)
{
	glClearColor(0,0,0,1);
 
     // Initialize particles
    for (loop = 0; loop < MAX_PARTICLES; loop++) {
        initParticles(loop);
    }

}

// �����
void drawSnow() {
  float x, y, paxos;
      		    	

  for (loop = 0; loop < MAX_PARTICLES; loop=loop+2) {
    if (par_sys[loop].alive == true) {
      x = par_sys[loop].xpos;
      y = par_sys[loop].ypos;

      
	  
	  
	  // ���������� particles
      glColor3f(1.0, 1.0, 1.0);

		paxos=(float) (rand() % 10);
    	glColor3f(1, 1, 1);
    		glBegin(GL_POLYGON); // � ���� ��� ����������� ��� ������
    			glVertex3f(x, y,1); // ������ ��� ������
    			glVertex3f (x+paxos,y,1);
    			glVertex3f (x+paxos,y+paxos,1);
    			glVertex3f (x,y+paxos,1);
    		//	
    		glEnd(); //�� ����� ��� ����������� ��� ������
  
//	  glPushMatrix();
//      glTranslatef(x, y,0);
//      glutSolidSphere(0.2, 16, 16);
//      glPopMatrix();

      // �������� �����
      //������
      par_sys[loop].ypos += par_sys[loop].vel / (slowdown*1000);
      par_sys[loop].vel += par_sys[loop].gravity;
      
	  // ����������
      par_sys[loop].life -= par_sys[loop].fade;

      if (par_sys[loop].ypos <= -10) {
        int xi = x + 10;
        par_sys[loop].life = -1.0;
      }

      //����������
      if (par_sys[loop].life < 0.0) {
        initParticles(loop);
      }
    }
  }
}



void DrawAnimation(void)
{
	 glMatrixMode(GL_MODELVIEW);
	 glClear(GL_COLOR_BUFFER_BIT);
     glLoadIdentity();
	 glClearColor(0,0,0,1);

	int i, j;
  	float x, y;
	
	drawSnow();

     
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
    glOrtho(0, 640.0, 0.0, 480.0, -100.0,100.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv){

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(640,480);
glutInitWindowPosition(0, 0);
glMatrixMode(GL_PROJECTION);
glOrtho(0, 640.0, 0.0, 480.0, -100.0,100.0);
glutCreateWindow(argv[0]);
init();
glutDisplayFunc(DrawAnimation);
glutReshapeFunc(reshape);
glutIdleFunc(animation);
glutMainLoop();
return 0;
} 











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

	
// Δημιουργία Πρώτου Καρέ
		if ((roloi==1))
		{
		}
	
	
// Δημιουργία Δεύτερου Καρέ
		if ((roloi==2))
		{
		}

// Δημιουργία Τρίτου Καρέ
		if ((roloi==3))
		{
		}

	
// Δημιουργία Τέταρτου Καρέ
		if ((roloi==4))
		{
		}
			
// Δημιουργία Πέμπτου Καρέ
		if ((roloi==5))
		{
		}

// Δημιουργία Έκτου Καρέ
		if ((roloi==6))
		{
		}
		
// Τέλος
		if ((roloi>6))
		{
		}


glFlush();
}

		
void animation(void)
{
 	// Ρολόι Ελέγχου Εμφάνισης των Καρε
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











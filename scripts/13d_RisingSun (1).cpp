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

	// Δημιουργία "Γεμιστού" Κύκλου
		void drawFilledSun(float x, float y, float radius, int num_segments){
    		float i;
		    double twicePi = 2.0 * 3.142;
    		glBegin(GL_TRIANGLE_FAN); // Η Αρχή της Δημιουργίας του Κύκλου
    			glVertex2f(x, y); // Κέντρο του Κύκλου
    			for (i = 0; i <= num_segments; i++)   {
        			glVertex3f (
            			(x + (radius * cos(i * twicePi / num_segments))), (y + (radius * sin(i * twicePi / num_segments)))
            		,1);
    			}
    		glEnd(); //Το Τέλος της Δημιουργίας του Κύκλου
		}

	// Δημιουργία Ακτίνων Κύκλου
		void Rays(float x, float y, float radius, int num_segments){
    		float i;
		    double twicePi = 2.0 * 3.142;
    			for (i = 0; i <= num_segments; i++)   {
		    		glBegin(GL_POLYGON); 
    					glVertex3f((x+ (radius * cos(i * twicePi / num_segments))) 
						         ,(y + (radius * sin(i * twicePi / num_segments)))
            		              ,2); 
    					glVertex3f((x+ (radius * cos(0.2618+(i * twicePi / num_segments)))) 
						         ,(y + (radius * sin(0.2618+(i * twicePi / num_segments))))
            		              ,2); 
    					glVertex3f((x+ ((radius+10) * cos(i * twicePi / num_segments))) 
						         ,(y + ((radius+10) * sin(i * twicePi / num_segments)))
            		              ,2); 
    					glVertex3f((x+ (radius * cos(-0.2618+(i * twicePi / num_segments)))) 
						         ,(y + (radius * sin(-0.2618+(i * twicePi / num_segments))))
            		              ,2); 
    			    glEnd();
    			}
		}

void DrawAnimation(void)
{
   	 glMatrixMode(GL_MODELVIEW);
	 glClear(GL_COLOR_BUFFER_BIT);
     glLoadIdentity();
	 glClearColor(0,0,0,0);

	//Κίτρινος Ήλιος
	glColor3f(1, 0.96, 0);
	drawFilledSun(roloi/100,20+0.02*(roloi/100-25)*(roloi/100-25),10,1000);

	//Ακτίνες Ήλιου
	glColor3f(1, 0.96, 0);
	Rays(roloi/100,20+0.02*(roloi/100-25)*(roloi/100-25),12,12);
	
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











#include <Windows.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef enum {
   MODE_BITMAP,
   MODE_STROKE
} mode_type;
static mode_type mode;
static int font_index;
float angle=0.0f;
void DrawStar(float fX, float fY,float kfRadius) {
	float kfPi = 3.1415926535897932384626433832795;
	// Draw ten triangles
	float kfInnerRadius = kfRadius*(1.0/(sin((2.0*kfPi)/5.0)*2.0*cos(kfPi/10.0) + sin((3.0*kfPi)/10.0)));
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex3f(fX, fY, 0.0);
		for (int iVertIndex = 0; iVertIndex < 10; ++iVertIndex) {
			float fAngleStart	= kfPi/2.0 + (iVertIndex*2.0*kfPi)/10.0;
			float fAngleEnd		= fAngleStart + kfPi/5.0;
			if (iVertIndex % 2 == 0) {
				glVertex3f(fX + kfRadius*cos(fAngleStart)/1.9, fY + kfRadius*sin(fAngleStart), 0.0);
				glVertex3f(fX + kfInnerRadius*cos(fAngleEnd)/1.9, fY + kfInnerRadius*sin(fAngleEnd), 0.0);
			} else {
				glVertex3f(fX + kfInnerRadius*cos(fAngleStart)/1.9, fY + kfInnerRadius*sin(fAngleStart), 0.0);
				glVertex3f(fX + kfRadius*cos(fAngleEnd)/1.9, fY + kfRadius*sin(fAngleEnd), 0.0);
			}
		}
	glEnd();
}
void DrawC(){
	glColor3f(254.0/255.0,223.0/255.0,0.0/255.0);
	glBegin(GL_QUADS);
	  glVertex2f(62.0,252.0);
	  glVertex2f(360.0,62.0);
	  glVertex2f(658.0,252.0);
	  glVertex2f(360.0,443.0);
	glEnd();
}
		void drawFilledSun(float x, float y, float radius, int num_segments){
    		float i;
		    double twicePi = 2.0 * 3.142;
    		glBegin(GL_TRIANGLE_FAN);
    			glVertex2f(x, y);
    			for (i = 0; i <= num_segments; i++)   {
        			glVertex2f (
            			(x + (radius * cos(i * twicePi / num_segments))), (y + (radius * sin(i * twicePi / num_segments)))
            		);
    			}
    		glEnd(); 
		}

void drawFilledArcSun(float x, float y, float radius, float theta_initial, float theta_final, int num_segments){
float i;
double twicePi = 2.0 * 3.142;
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x, y);
for (i = 0; i <= num_segments; i++)   {
    float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
    if (theta>=theta_initial*(2.0f * 3.1415926f)/360){
        	if(theta<=theta_final*(2.0f * 3.1415926f)/360){
		        glVertex2f (
        		    (x + (radius * cos(i * twicePi / num_segments))), (y + (radius * sin(i * twicePi / num_segments)))
            	);
        	}}
	}
glEnd();
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(233.1,504-222);
glVertex2f(241,504-234.3);
glVertex2f(229.8,504-241);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(482.7, 504-295.0);
glVertex2f(470.0, 504-301.123);
glVertex2f(475.5, 504-311.5);
glEnd();
glColor3f(0,155.0/255.0,58.0/255.0);
glRasterPos3f( 237 , 504-232 ,0.0f );
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '0');
glColor3f(0,155.0/255.0,58.0/255.0);
glRasterPos3f( 249 , 504.0-225.1 ,0.2f );
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'R');
glColor3f(0,155.0/255.0,58.0/255.0);
glRasterPos3f( 264 , 504-220 ,0.2f );
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'D');
glColor3f(0,155.0/255.0,58.0/255.0);
glRasterPos3f( 279 , 504.0-215.5 ,0.2f );
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'E');
glColor3f(0,155.0/255.0,58.0/255.0);
glRasterPos3f( 292 , 504-213 ,0.2f );
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'M');
glColor3f(0,155.0/255.0,58.0/255.0);
glRasterPos3f( 330 , 504-212 ,0.2f );
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'E');
glColor3f(0,155.0/255.0,58.0/255.0);
glRasterPos3f( 358 , 504-216 ,0.2f );
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'P');
glColor3f(0,155.0/255.0,58.0/255.0);
glRasterPos3f( 371 , 504-219 ,0.2f );
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'R');
glColor3f(0,155.0/255.0,58.0/255.0);
glRasterPos3f( 385 , 504-224 ,0.2f );
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '0');
glColor3f(0,155.0/255.0,58.0/255.0);
glRasterPos3f( 396 , 504-231 ,0.2f );
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'G');
glColor3f(0,155.0/255.0,58.0/255.0);
glRasterPos3f( 413 , 504-240 ,0.2f );
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'R');
glColor3f(0,155.0/255.0,58.0/255.0);
glRasterPos3f( 428 , 504-251 ,0.2f );
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'E');
glColor3f(0,155.0/255.0,58.0/255.0);
glRasterPos3f( 439 , 504-262 ,0.2f );
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'S');
glColor3f(0,155.0/255.0,58.0/255.0);
glRasterPos3f( 450 , 504-273 ,0.2f );
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'S');
glColor3f(0,155.0/255.0,58.0/255.0);
glRasterPos3f( 460 , 504-285 ,0.2f );
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '0');

}
		
void DrawStars() {
DrawStar(253,211,5.0);
DrawStar(399,297,6.1);
DrawStar(257,267,5.8);
DrawStar(268,221,5.1);
DrawStar(281,230,4.3);
DrawStar(294,209,5.666);
DrawStar(291,197,4.6);
DrawStar(309,185,5.7);
DrawStar(409,178,4.5);
DrawStar(423,169,5.2);
DrawStar(424,157,5.0);
DrawStar(423,183,5.1);
DrawStar(436,180,5.3);
DrawStar(446,187,5.9);
DrawStar(453,197,5.3);
DrawStar(448,208,6.3);
DrawStar(466,206,5.2);
DrawStar(394,258,5.3);
DrawStar(360,232,5.5);
DrawStar(312,247,5.9);
DrawStar(347,221,5.6);
DrawStar(353,212,4.61);
DrawStar(360,195,6.5);
DrawStar(374,220,5.66);
DrawStar(360,153,4.95);
DrawStar(388,181,4.7);
DrawStar(397,167,5.9);
}


void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	DrawC();
	glColor3f(0.0/255.0, 39.0/255.0, 118.0/255.0);
	
		drawFilledSun(360,253,130,169);
		//drawFilledArcSun(0.5,0.5,0.175,0.0,360.0,1331);	
	glColor3f(1,1,1);
	//DrawArcCircle(298,50,246,41,105,366666);
//	DrawArcCircle(298,50,236,39.5,106.3,366666);
	drawFilledArcSun(324,128,179,26.5,121.5,400);
	glColor3f(0.0/255.0, 39.0/255.0, 118.0/255.0);
	drawFilledArcSun(324,128,164,26.5,121.5,400);
	glColor3f(1,1,1);
	DrawStars();
	glEnd();
	glFlush();glutSwapBuffers();
	 
}

void Initialize() {
	glClearColor(0.0/255.0, 155.0/255.0, 58.0/255.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 720, 0, 504, -1, 1);
	mode = MODE_BITMAP;
   font_index = 0;
	  
}

int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(720, 504);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("PangiotisEfstathiadis_p14042_VasileiosZografos_p14050");
	Initialize();
	glutDisplayFunc(Draw);
	//glutMouseFunc(onMouseClick);
	
	glutMainLoop();
	return 1;
}

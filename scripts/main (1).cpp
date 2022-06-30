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

void
print_bitmap_string(void* font, char* s)
{
   if (s && strlen(s)) {
      while (*s) {
         glutBitmapCharacter(font, *s);
         s++;
      }
   }
}

void
print_stroke_string(void* font, char* s)
{
   if (s && strlen(s)) {
      while (*s) {
         glutStrokeCharacter(font, *s);
         s++;
      }
   }
}
//void output(int x, int y, float r, float g, float b, int font, char *string)
//{
//  glColor3f( r, g, b );
//  glRasterPos2f(x, y);
//  int len, i;
//  len = (int)strlen(string);
//  for (i = 0; i < len; i++) {
//    glutBitmapCharacter(font, string[i]);
//  }
//}
//struct Point {
//	GLint x;
//	GLint y;
//};

//struct Color {
//	GLfloat r;
//	GLfloat g;
//	GLfloat b;
//};
//Color getPixelColor(GLint x, GLint y) {
//	Color color;
//	glReadPixels(x, y, 1, 1, GL_RGB, GL_FLOAT, &color);
//	return color;
//}

//void setPixelColor(GLint x, GLint y, Color color) {
//	glColor3f(color.r, color.g, color.b);
//	glBegin(GL_POINTS);
//	glVertex2i(x, y);
//	glEnd();
//	glFlush();

//}
//void draw_circle(Point pC, GLfloat radius) {
//	GLfloat step = 1/radius;
//	GLfloat x, y;

//	for(GLfloat theta = 0; theta <= 360; theta += step) {
//		x = pC.x + (radius * cos(theta));
//		y = pC.y + (radius * sin(theta));
//		glVertex2i(x, y);
//	}
//}
//void BoundaryFill(int x, int y, Color fillColor, Color boundaryColor) {
//	Color currentColor = getPixelColor(x, y);
//	if(currentColor.r != boundaryColor.r && currentColor.g != boundaryColor.g && currentColor.b != boundaryColor.b) {
//		setPixelColor(x, y, fillColor);
//		BoundaryFill(x+1, y, fillColor, boundaryColor);
//		BoundaryFill(x-1, y, fillColor, boundaryColor);
//		BoundaryFill(x, y+1, fillColor, boundaryColor);
//		BoundaryFill(x, y-1, fillColor, boundaryColor);
//	}
//}

//void onMouseClick(int button, int state, int x, int y)
//{
//	Color fillColor = {1.0f, 0.0f, 0.0f};		// red color will be filled
//	Color boundaryColor = {0.0f, 0.0f, 0.0f}; // black- boundary

//	Point p = {321, 241}; // a point inside the circle

//	BoundaryFill(p.x, p.y, fillColor, boundaryColor);
//}
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

		void DrawCircle(float cx, float cy, float r, int num_segments) {
    		float x, y;
			glBegin(GL_LINE_STRIP);
    			for (int ii = 0; ii < num_segments; ii++)   {
        			float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);
        			float x = r * cosf(theta);
        			float y = r * sinf(theta);
        			glVertex2f(x + cx, y + cy);
    			}
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

		void DrawArcCircle(float cx, float cy, float r, float theta_initial, float theta_final, int num_segments) {
    		glBegin(GL_LINE_STRIP);
    			for (int ii = 0; ii < num_segments; ii++)   {
    				float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);
        			float x = r * cosf(theta);
        			float y = r * sinf(theta);
        			if (theta>=theta_initial*(2.0f * 3.1415926f)/360){
        				if(theta<=theta_final*(2.0f * 3.1415926f)/360){
							glVertex2f(x + cx, y + cy);
							
						}}
					
    			}
    		glEnd();
    		//glBegin(GL_POLYGON);glVertex2f(245, 201);glVertex2f(238, 220);glVertex2f(480, 290);glVertex2f(485, 270);glEnd();
    		
		}
//ARC WITH TEXT
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
glVertex2f(233.1,504-223);
glVertex2f(240,504-230);
glVertex2f(230.233,504-237);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(482.0, 504-296.0);
glVertex2f(473.0, 504-298.0);
glVertex2f(477.0, 504-306.0);
glEnd();
glColor3f(1,0,0);
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,12131314);
}
		
void DrawStars() {
DrawStar(253,211,5.5);
DrawStar(399,297,6.1);
DrawStar(257,275,5.8);
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
	drawFilledArcSun(324,128,178,26.5,121.5,400);
	glColor3f(0.0/255.0, 39.0/255.0, 118.0/255.0);
	drawFilledArcSun(324,128,168,26.5,121.5,400);
	glColor3f(1,1,1);
	DrawStars();
std::string s = "Some text";
    void * font = GLUT_BITMAP_9_BY_15;

    for (std::string::iterator i = s.begin(); i != s.end(); ++i)
    {
        char c = *i;
        //this does nothing, color is fixed for Bitmaps when calling glRasterPos
        //glColor3f(1.0, 0.0, 1.0); 
        glutBitmapCharacter(font, c);
    }
    glMatrixMode(GL_MODELVIEW);
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glEnable(GL_TEXTURE_2D);
	glEnd();
	glFlush();glutSwapBuffers();
	 
}

void Initialize() {
	glClearColor(0.0/255.0, 155.0/255.0, 58.0/255.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 720, 0, 504, -1, 1);
	  
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
	return 0;
}

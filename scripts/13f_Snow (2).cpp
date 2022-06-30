#include <Windows.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <iostream>
#define MAX_PARTICLES 234
typedef enum {
   MODE_BITMAP,
   MODE_STROKE
} mode_type;
static mode_type mode;
static int font_index;
void output(GLfloat x, GLfloat y, char *text){
char *p;
glPushMatrix();
glTranslatef(x, y, 0);
for (p = text; *p; p++)
    glutStrokeCharacter(GLUT_STROKE_ROMAN, *p);
glPopMatrix();
}
using namespace std;
GLfloat xRotated, yRotated, zRotated, roloi, xb1, yb1, circle;
void omp_plus_Stuff(void){
//SKOURO KAFE ALLA PIO ANOIXTO APO TO KATW MALLON ouranos
glColor3f(60.0/255.0,45.0/255.0,35.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(0.0, 334, 1);
glVertex3f(269.0, 450, 1);
glVertex3f(550.0, 330, 1);
glVertex3f(720.0, 419, 1);
glVertex3f(720.0, 480, 1);
glVertex3f(0.0, 480, 1);
glEnd();

//OMPRELA  SKOURO MEROS
glColor3f(42.0/255.0,12.0/255.0,2.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(143.0/2.7+270, 174/2.7+300, 1);
glVertex3f(174.0/2.7+270, 203/2.7+300, 1);
glVertex3f(200.0/2.7+270, 223/2.7+300, 1);
glVertex3f(213.0/2.7+270, 229/2.7+300, 1);
glVertex3f(210.0/2.7+270, 217/2.7+300, 1);
glVertex3f(236.0/2.7+270, 233/2.7+300, 1);
glVertex3f(276.0/2.7+270, 241/2.7+300, 1);
glVertex3f(311.0/2.7+270, 245/2.7+300, 1);
glVertex3f(354.0/2.7+270, 247/2.7+300, 1);
glVertex3f(398.0/2.7+270, 243/2.7+300, 1);
glVertex3f(435.0/2.7+270, 235/2.7+300, 1);
glVertex3f(444.0/2.7+270, 229/2.7+300, 1);
glVertex3f(452.0/2.7+270, 216/2.7+300, 1);
glVertex3f(454.0/2.7+270, 229/2.7+300, 1);
glVertex3f(477.0/2.7+270, 226/2.7+300, 1);
glVertex3f(510.0/2.7+270, 213/2.7+300, 1);
glVertex3f(540.0/2.7+270, 193/2.7+300, 1);
glVertex3f(557.0/2.7+270, 172/2.7+300, 1);
glVertex3f(561.0/2.7+270, 172/2.7+300, 1);
glVertex3f(543.0/2.7+270, 214/2.7+300, 1);
glVertex3f(500.0/2.7+270, 248/2.7+300, 1);
glVertex3f(448.0/2.7+270, 250/2.7+300, 1);
glVertex3f(439.0/2.7+270, 271/2.7+300, 1);
glVertex3f(428.0/2.7+270, 291/2.7+300, 1);
glVertex3f(419.0/2.7+270, 295/2.7+300, 1);
glVertex3f(407.0/2.7+270, 289/2.7+300, 1);
glVertex3f(382.0/2.7+270, 272/2.7+300, 1);
glVertex3f(369.0/2.7+270, 268/2.7+300, 1);
glVertex3f(363.0/2.7+270, 275/2.7+300, 1);
glVertex3f(357.0/2.7+270, 276/2.7+300, 1);
glVertex3f(344.0/2.7+270, 273/2.7+300, 1);
glVertex3f(315.0/2.7+270, 279/2.7+300, 1);
glVertex3f(289.0/2.7+270, 291/2.7+300, 1);
glVertex3f(266.0/2.7+270, 301/2.7+300, 1);
glVertex3f(248.0/2.7+270, 298/2.7+300, 1);
glVertex3f(237.0/2.7+270, 287/2.7+300, 1);
glVertex3f(229.0/2.7+270, 274/2.7+300, 1);
glVertex3f(221.0/2.7+270, 263/2.7+300, 1);
glVertex3f(219.0/2.7+270, 257/2.7+300, 1);
glVertex3f(211.0/2.7+270, 252/2.7+300, 1);
glVertex3f(194.0/2.7+270, 244/2.7+300, 1);
glVertex3f(183.0/2.7+270, 243/2.7+300, 1);
glVertex3f(175.0/2.7+270, 236/2.7+300, 1);
glVertex3f(163.0/2.7+270, 225/2.7+300, 1);
glVertex3f(158.0/2.7+270, 217/2.7+300, 1);
glVertex3f(148.0/2.7+270, 194/2.7+300, 1);
glEnd();

//KATW MEROS OMPRELAS ANOIXTO KAFE
glColor3f(120.0/255.0,100.0/255.0,60.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(340.0/2.7+270, 134/2.7+300, 1);
glVertex3f(334.0/2.7+270, 134/2.7+300, 1);
glVertex3f(331.0/2.7+270, 133/2.7+300, 1);
glVertex3f(331.0/2.7+270, 133/2.7+300, 1);
glVertex3f(328.0/2.7+270, 132/2.7+300, 1);
glVertex3f(322.0/2.7+270, 129/2.7+300, 1);
glVertex3f(317.0/2.7+270, 128/2.7+300, 1);
glVertex3f(317.0/2.7+270, 128/2.7+300, 1);
glVertex3f(307.0/2.7+270, 126/2.7+300, 1);
glVertex3f(304.0/2.7+270, 124/2.7+300, 1);
glVertex3f(301.0/2.7+270, 124/2.7+300, 1);
glVertex3f(298.0/2.7+270, 123/2.7+300, 1);
glVertex3f(293.0/2.7+270, 121/2.7+300, 1);
glVertex3f(293.0/2.7+270, 115/2.7+300, 1);
glVertex3f(293.0/2.7+270, 114/2.7+300, 1);
glVertex3f(292.0/2.7+270, 113/2.7+300, 1);
glVertex3f(290.0/2.7+270, 109/2.7+300, 1);
glVertex3f(288.0/2.7+270, 110/2.7+300, 1);
glVertex3f(288.0/2.7+270, 110/2.7+300, 1);
glVertex3f(288.0/2.7+270, 113/2.7+300, 1);
glVertex3f(287.0/2.7+270, 115/2.7+300, 1);
glVertex3f(287.0/2.7+270, 117/2.7+300, 1);
glVertex3f(287.0/2.7+270, 119/2.7+300, 1);
glVertex3f(285.0/2.7+270, 121/2.7+300, 1);
glVertex3f(283.0/2.7+270, 122/2.7+300, 1);
glVertex3f(282.0/2.7+270, 123/2.7+300, 1);
glVertex3f(280.0/2.7+270, 124/2.7+300, 1);
glVertex3f(279.0/2.7+270, 125/2.7+300, 1);
glVertex3f(278.0/2.7+270, 126/2.7+300, 1);
glVertex3f(275.0/2.7+270, 128/2.7+300, 1);
glVertex3f(274.0/2.7+270, 129/2.7+300, 1);
glVertex3f(272.0/2.7+270, 133/2.7+300, 1);
glVertex3f(271.0/2.7+270, 133/2.7+300, 1);
glVertex3f(266.0/2.7+270, 136/2.7+300, 1);
glVertex3f(255.0/2.7+270, 139/2.7+300, 1);
glVertex3f(255.0/2.7+270, 139/2.7+300, 1);
glVertex3f(249.0/2.7+270, 143/2.7+300, 1);
glVertex3f(249.0/2.7+270, 144/2.7+300, 1);
glVertex3f(248.0/2.7+270, 145/2.7+300, 1);
glVertex3f(246.0/2.7+270, 146/2.7+300, 1);
glVertex3f(244.0/2.7+270, 148/2.7+300, 1);
glVertex3f(243.0/2.7+270, 148/2.7+300, 1);
glVertex3f(236.0/2.7+270, 149/2.7+300, 1);
glVertex3f(236.0/2.7+270, 150/2.7+300, 1);
glVertex3f(233.0/2.7+270, 150/2.7+300, 1);
glVertex3f(231.0/2.7+270, 151/2.7+300, 1);
glVertex3f(226.0/2.7+270, 153/2.7+300, 1);
glVertex3f(224.0/2.7+270, 154/2.7+300, 1);
glVertex3f(223.0/2.7+270, 155/2.7+300, 1);
glVertex3f(221.0/2.7+270, 156/2.7+300, 1);
glVertex3f(215.0/2.7+270, 160/2.7+300, 1);
glVertex3f(214.0/2.7+270, 160/2.7+300, 1);
glVertex3f(210.0/2.7+270, 162/2.7+300, 1);
glVertex3f(206.0/2.7+270, 163/2.7+300, 1);
glVertex3f(203.0/2.7+270, 165/2.7+300, 1);
glVertex3f(198.0/2.7+270, 168/2.7+300, 1);
glVertex3f(198.0/2.7+270, 168/2.7+300, 1);
glVertex3f(192.0/2.7+270, 170/2.7+300, 1);
glVertex3f(192.0/2.7+270, 170/2.7+300, 1);
glVertex3f(186.0/2.7+270, 171/2.7+300, 1);
glVertex3f(181.0/2.7+270, 171/2.7+300, 1);
glVertex3f(178.0/2.7+270, 172/2.7+300, 1);
glVertex3f(168.0/2.7+270, 174/2.7+300, 1);
glVertex3f(166.0/2.7+270, 174/2.7+300, 1);
glVertex3f(161.0/2.7+270, 176/2.7+300, 1);
glVertex3f(161.0/2.7+270, 176/2.7+300, 1);
glVertex3f(159.0/2.7+270, 176/2.7+300, 1);
glVertex3f(155.0/2.7+270, 177/2.7+300, 1);
glVertex3f(150.0/2.7+270, 176/2.7+300, 1);
glVertex3f(149.0/2.7+270, 175/2.7+300, 1);
glVertex3f(140.0/2.7+270, 165/2.7+300, 1);
glVertex3f(145.0/2.7+270, 171/2.7+300, 1);
glVertex3f(146.0/2.7+270, 173/2.7+300, 1);
glVertex3f(147.0/2.7+270, 179/2.7+300, 1);
glVertex3f(150.0/2.7+270, 181/2.7+300, 1);
glVertex3f(151.0/2.7+270, 181/2.7+300, 1);
glVertex3f(153.0/2.7+270, 184/2.7+300, 1);
glVertex3f(159.0/2.7+270, 188/2.7+300, 1);
glVertex3f(162.0/2.7+270, 192/2.7+300, 1);
glVertex3f(163.0/2.7+270, 194/2.7+300, 1);
glVertex3f(166.0/2.7+270, 196/2.7+300, 1);
glVertex3f(169.0/2.7+270, 197/2.7+300, 1);
glVertex3f(172.0/2.7+270, 201/2.7+300, 1);
glVertex3f(174.0/2.7+270, 203/2.7+300, 1);
glVertex3f(178.0/2.7+270, 205/2.7+300, 1);
glVertex3f(182.0/2.7+270, 207/2.7+300, 1);
glVertex3f(185.0/2.7+270, 209/2.7+300, 1);
glVertex3f(191.0/2.7+270, 211/2.7+300, 1);
glVertex3f(195.0/2.7+270, 216/2.7+300, 1);
glVertex3f(202.0/2.7+270, 219/2.7+300, 1);
glVertex3f(205.0/2.7+270, 220/2.7+300, 1);
glVertex3f(208.0/2.7+270, 222/2.7+300, 1);
glVertex3f(209.0/2.7+270, 225/2.7+300, 1);
glVertex3f(214.0/2.7+270, 227/2.7+300, 1);
glVertex3f(215.0/2.7+270, 227/2.7+300, 1);
glVertex3f(222.0/2.7+270, 230/2.7+300, 1);
glVertex3f(223.0/2.7+270, 231/2.7+300, 1);
glVertex3f(227.0/2.7+270, 233/2.7+300, 1);
glVertex3f(234.0/2.7+270, 236/2.7+300, 1);
glVertex3f(235.0/2.7+270, 236/2.7+300, 1);
glVertex3f(241.0/2.7+270, 239/2.7+300, 1);
glVertex3f(247.0/2.7+270, 240/2.7+300, 1);
glVertex3f(251.0/2.7+270, 241/2.7+300, 1);
glVertex3f(259.0/2.7+270, 241/2.7+300, 1);
glVertex3f(262.0/2.7+270, 242/2.7+300, 1);
glVertex3f(269.0/2.7+270, 243/2.7+300, 1);
glVertex3f(284.0/2.7+270, 244/2.7+300, 1);
glVertex3f(286.0/2.7+270, 245/2.7+300, 1);
glVertex3f(305.0/2.7+270, 245/2.7+300, 1);
glVertex3f(307.0/2.7+270, 245/2.7+300, 1);
glVertex3f(312.0/2.7+270, 245/2.7+300, 1);
glVertex3f(320.0/2.7+270, 246/2.7+300, 1);
glVertex3f(323.0/2.7+270, 246/2.7+300, 1);
glVertex3f(332.0/2.7+270, 246/2.7+300, 1);
glVertex3f(333.0/2.7+270, 246/2.7+300, 1);
glVertex3f(349.0/2.7+270, 248/2.7+300, 1);
glVertex3f(351.0/2.7+270, 248/2.7+300, 1);
glVertex3f(355.0/2.7+270, 248/2.7+300, 1);
glVertex3f(358.0/2.7+270, 247/2.7+300, 1);
glVertex3f(368.0/2.7+270, 247/2.7+300, 1);
glVertex3f(390.0/2.7+270, 244/2.7+300, 1);
glVertex3f(395.0/2.7+270, 243/2.7+300, 1);
glVertex3f(405.0/2.7+270, 243/2.7+300, 1);
glVertex3f(412.0/2.7+270, 241/2.7+300, 1);
glVertex3f(416.0/2.7+270, 241/2.7+300, 1);
glVertex3f(431.0/2.7+270, 238/2.7+300, 1);
glVertex3f(435.0/2.7+270, 237/2.7+300, 1);
glVertex3f(437.0/2.7+270, 236/2.7+300, 1);
glVertex3f(440.0/2.7+270, 233/2.7+300, 1);
glVertex3f(440.0/2.7+270, 233/2.7+300, 1);
glVertex3f(442.0/2.7+270, 231/2.7+300, 1);
glVertex3f(443.0/2.7+270, 231/2.7+300, 1);
glVertex3f(443.0/2.7+270, 228/2.7+300, 1);
glVertex3f(445.0/2.7+270, 226/2.7+300, 1);
glVertex3f(446.0/2.7+270, 226/2.7+300, 1);
glVertex3f(449.0/2.7+270, 226/2.7+300, 1);
glVertex3f(450.0/2.7+270, 226/2.7+300, 1);
glVertex3f(452.0/2.7+270, 227/2.7+300, 1);
glVertex3f(452.0/2.7+270, 227/2.7+300, 1);
glVertex3f(451.0/2.7+270, 234/2.7+300, 1);
glVertex3f(452.0/2.7+270, 234/2.7+300, 1);
glVertex3f(461.0/2.7+270, 230/2.7+300, 1);
glVertex3f(467.0/2.7+270, 228/2.7+300, 1);
glVertex3f(475.0/2.7+270, 226/2.7+300, 1);
glVertex3f(478.0/2.7+270, 226/2.7+300, 1);
glVertex3f(486.0/2.7+270, 223/2.7+300, 1);
glVertex3f(494.0/2.7+270, 220/2.7+300, 1);
glVertex3f(496.0/2.7+270, 220/2.7+300, 1);
glVertex3f(518.0/2.7+270, 209/2.7+300, 1);
glVertex3f(519.0/2.7+270, 209/2.7+300, 1);
glVertex3f(521.0/2.7+270, 208/2.7+300, 1);
glVertex3f(525.0/2.7+270, 207/2.7+300, 1);
glVertex3f(539.0/2.7+270, 197/2.7+300, 1);
glVertex3f(547.0/2.7+270, 191/2.7+300, 1);
glVertex3f(550.0/2.7+270, 187/2.7+300, 1);
glVertex3f(555.0/2.7+270, 181/2.7+300, 1);
glVertex3f(557.0/2.7+270, 179/2.7+300, 1);
glVertex3f(557.0/2.7+270, 178/2.7+300, 1);
glVertex3f(559.0/2.7+270, 173/2.7+300, 1);
glVertex3f(559.0/2.7+270, 173/2.7+300, 1);
glVertex3f(552.0/2.7+270, 177/2.7+300, 1);
glVertex3f(548.0/2.7+270, 180/2.7+300, 1);
glVertex3f(546.0/2.7+270, 180/2.7+300, 1);
glVertex3f(536.0/2.7+270, 183/2.7+300, 1);
glVertex3f(532.0/2.7+270, 182/2.7+300, 1);
glVertex3f(528.0/2.7+270, 181/2.7+300, 1);
glVertex3f(525.0/2.7+270, 179/2.7+300, 1);
glVertex3f(523.0/2.7+270, 178/2.7+300, 1);
glVertex3f(521.0/2.7+270, 177/2.7+300, 1);
glVertex3f(517.0/2.7+270, 175/2.7+300, 1);
glVertex3f(516.0/2.7+270, 174/2.7+300, 1);
glVertex3f(509.0/2.7+270, 173/2.7+300, 1);
glVertex3f(508.0/2.7+270, 172/2.7+300, 1);
glVertex3f(505.0/2.7+270, 171/2.7+300, 1);
glVertex3f(493.0/2.7+270, 163/2.7+300, 1);
glVertex3f(491.0/2.7+270, 162/2.7+300, 1);
glVertex3f(482.0/2.7+270, 159/2.7+300, 1);
glVertex3f(479.0/2.7+270, 158/2.7+300, 1);
glVertex3f(462.0/2.7+270, 144/2.7+300, 1);
glVertex3f(457.0/2.7+270, 135/2.7+300, 1);
glVertex3f(456.0/2.7+270, 133/2.7+300, 1);
glVertex3f(456.0/2.7+270, 126/2.7+300, 1);
glVertex3f(454.0/2.7+270, 123/2.7+300, 1);
glVertex3f(453.0/2.7+270, 121/2.7+300, 1);
glVertex3f(444.0/2.7+270, 129/2.7+300, 1);
glVertex3f(426.0/2.7+270, 132/2.7+300, 1);
glVertex3f(417.0/2.7+270, 132/2.7+300, 1);
glVertex3f(416.0/2.7+270, 132/2.7+300, 1);
glVertex3f(412.0/2.7+270, 133/2.7+300, 1);
glVertex3f(397.0/2.7+270, 134/2.7+300, 1);
glVertex3f(391.0/2.7+270, 134/2.7+300, 1);
glVertex3f(388.0/2.7+270, 135/2.7+300, 1);
glVertex3f(385.0/2.7+270, 136/2.7+300, 1);
glVertex3f(374.0/2.7+270, 136/2.7+300, 1);
glVertex3f(371.0/2.7+270, 136/2.7+300, 1);
glVertex3f(367.0/2.7+270, 136/2.7+300, 1);
glVertex3f(359.0/2.7+270, 136/2.7+300, 1);
glVertex3f(355.0/2.7+270, 135/2.7+300, 1);
glVertex3f(335.0/2.7+270, 132/2.7+300, 1);
glVertex3f(345.0/2.7+270, 134/2.7+300, 1);
glVertex3f(340.0/2.7+270, 134/2.7+300, 1);
glVertex3f(329.0/2.7+270, 131/2.7+300, 1);
glVertex3f(329.0/2.7+270, 131/2.7+300, 1);
glVertex3f(329.0/2.7+270, 131/2.7+300, 1);
glEnd();

//OMPRELA SKOURO MEROS
glColor3f(42.0/255.0,12.0/255.0,2.0/255.0);
glBegin(GL_POLYGON);
glVertex3f (312/2.7+270,(480-480)/2.7+300,1);
glVertex3f (363/2.7+270,(480-157)/2.7+300,1);
glVertex3f (368/2.7+270,(480-157)/2.7+300,1);
glVertex3f (341/2.7+270,(480-400)/2.7+300,1);
glVertex3f (354/2.7+270,(480-400)/2.7+300,1);
glVertex3f (342/2.7+270,(480-480)/2.7+300,1);
glEnd();

//grammes omprelas
glBegin(GL_LINES);
glVertex3f(290.0/2.7+270, 108/2.7+300, 1);
glVertex3f(317.0/2.7+270, 201/2.7+300, 1);
glVertex3f(317.0/2.7+270, 201/2.7+300, 1);
glVertex3f(357.0/2.7+270, 247/2.7+300, 1);
glVertex3f(452.0/2.7+270, 120/2.7+300, 1);
glVertex3f(420.0/2.7+270, 197/2.7+300, 1);
glVertex3f(420.0/2.7+270, 198/2.7+300, 1);
glVertex3f(364.0/2.7+270, 248/2.7+300, 1);
glVertex3f(347.0/2.7+270, 186/2.7+300, 1);
glVertex3f(392.0/2.7+270, 244/2.7+300, 1);
glVertex3f(349.0/2.7+270, 190/2.7+300, 1);
glVertex3f(444.0/2.7+270, 231/2.7+300, 1);
glVertex3f(348.0/2.7+270, 192/2.7+300, 1);
glVertex3f(310.0/2.7+270, 246/2.7+300, 1);
glVertex3f(348.0/2.7+270, 188/2.7+300, 1);
glVertex3f(234.0/2.7+270, 234/2.7+300, 1);
glVertex3f(378.0/2.7+270, 192/2.7+300, 1);
glVertex3f(359.0/2.7+270, 221/2.7+300, 1);
glVertex3f(354.0/2.7+270, 223/2.7+300, 1);
glVertex3f(318.0/2.7+270, 201/2.7+300, 1);
glVertex3f(347.0/2.7+270, 188/2.7+300, 1);
glVertex3f(315.0/2.7+270, 190/2.7+300, 1);
glVertex3f(212.0/2.7+270, 216/2.7+300, 1);
glVertex3f(215.0/2.7+270, 231/2.7+300, 1);
glVertex3f(141.0/2.7+270, 158/2.7+300, 1);
glVertex3f(146.0/2.7+270, 174/2.7+300, 1);
glVertex3f(556.0/2.7+270, 173/2.7+300, 1);
glVertex3f(543.0/2.7+270, 196/2.7+300, 1);
glVertex3f(421.0/2.7+270, 198/2.7+300, 1);
glVertex3f(347.0/2.7+270, 190/2.7+300, 1);
glEnd();

//pragmata katw apo touvlo
glColor3f(57.0/255.0,50.0/255.0,41.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(136.0, 261, 1);
glVertex3f(116.0, 232, 1);
glVertex3f(115.0, 177, 1);
glVertex3f(135.0, 165, 1);
glVertex3f(142.0, 143, 1);
glVertex3f(158.0, 129, 1);
glVertex3f(171.0, 118, 1);
glVertex3f(188.0, 119, 1);
glVertex3f(236.0, 146, 1);
glVertex3f(229.0, 224, 1);
glVertex3f(196.0, 248, 1);
glVertex3f(165.0, 257, 1);
glEnd();

//PLEVRIKES EPIFANIES TOIXWN
glColor3f(109.0/255.0,85.0/255.0,54.0/255.0);//PLEVRIKES EPIFANIES TOIXWN - XRWMA
glBegin(GL_POLYGON);
glVertex3f(0.0, 154, 1);
glVertex3f(98.0, 150, 1);
glVertex3f(96.0, 0, 1);
glVertex3f(0.0, 0, 1);
glEnd();glBegin(GL_POLYGON);
glVertex3f(92.0, 106, 1);
glVertex3f(190.0, 105, 1);
glVertex3f(192.0, 0, 1);
glVertex3f(91.0, 0, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(184.0, 3, 1);
glVertex3f(190.0, 179, 1);
glVertex3f(364.0, 182, 1);
glVertex3f(371.0, 0, 1);glEnd();
glBegin(GL_POLYGON);
glVertex3f(360.0, 193, 1);
glVertex3f(362.0, 0, 1);
glVertex3f(439.0, 0, 1);
glVertex3f(424.0, 197, 1);glEnd();
glBegin(GL_POLYGON);
glVertex3f(720.0, 250, 1);
glVertex3f(595.0, 247, 1);
glVertex3f(576.0, 235, 1);
glVertex3f(424.0, 227, 1);
glVertex3f(425.0, 0, 1);
glVertex3f(720.0, 0, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(98.0, 280, 1);
glVertex3f(0.0, 202, 1);
glVertex3f(0.0, 140, 1);
glVertex3f(41.0, 150, 1);
glVertex3f(103.0, 221, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(94.0, 285, 1);
glVertex3f(719.0, 299, 1);
glVertex3f(719.0, 259, 1);
glVertex3f(96.0, 221, 1);
glEnd();

//kouvas eksw meros
glColor3f(178.0/255.0,165.0/255.0,100.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(401.0, 214, 1);
glVertex3f(399.0, 260, 1);
glVertex3f(402.0, 244, 1);
glVertex3f(409.0, 240, 1);
glVertex3f(422.0, 239, 1);
glVertex3f(434.0, 243, 1);
glVertex3f(440.0, 253, 1);
glVertex3f(439.0, 209, 1);
glVertex3f(432.0, 208, 1);
glVertex3f(425.0, 208, 1);
glVertex3f(419.0, 207, 1);
glVertex3f(415.0, 207, 1);
glVertex3f(407.0, 207, 1);
glEnd();

//kouvas mesa meros
glColor3f(150.0/255.0,136.0/255.0,71.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(417.0, 234, 1);
glVertex3f(408.0, 237, 1);
glVertex3f(402.0, 244, 1);
glVertex3f(400.0, 252, 1);
glVertex3f(400.0, 261, 1);
glVertex3f(405.0, 266, 1);
glVertex3f(413.0, 269, 1);
glVertex3f(420.0, 271, 1);
glVertex3f(426.0, 271, 1);
glVertex3f(433.0, 266, 1);
glVertex3f(437.0, 263, 1);
glVertex3f(441.0, 256, 1);
glVertex3f(441.0, 250, 1);
glVertex3f(437.0, 245, 1);
glVertex3f(430.0, 243, 1);
glVertex3f(427.0, 238, 1);
glVertex3f(421.0, 235, 1);
glEnd();

//to antikeimeno dipla apo ton kouva
glColor3f(169.0/255.0,147.0/255.0,60.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(453.0, 257, 1);
glVertex3f(475.0, 260, 1);
glVertex3f(481.0, 255, 1);
glVertex3f(489.0, 259, 1);
glVertex3f(490.0, 262, 1);
glVertex3f(538.0, 259, 1);
glVertex3f(498.0, 246, 1);
glVertex3f(491.0, 247, 1);
glVertex3f(475.0, 248, 1);
glVertex3f(453.0, 242, 1);
glEnd();

//podia
glColor3f(10.0/255.0,80.0/255.0,100.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(247.0-roloi/22000, 179, 1);
glVertex3f(244.0-roloi/222000, 202, 1);
glVertex3f(248.0-roloi/222000, 213, 1);
glVertex3f(258.0-roloi/222000, 227, 1);
glVertex3f(266.0-roloi/22000, 241, 1);
glVertex3f(271.0-roloi/220200, 245, 1);
glVertex3f(273.0-roloi/220020, 244, 1);
glVertex3f(278.0-roloi/220002, 240, 1);
glVertex3f(285.0-roloi/220002, 234, 1);
glVertex3f(295.0-roloi/220002, 230, 1);
glVertex3f(305.0-roloi/220002, 227, 1);
glVertex3f(310.0-roloi/220020, 225, 1);
glVertex3f(311.0-roloi/220002, 212, 1);
glVertex3f(287.0-roloi/222000, 200, 1);
glVertex3f(289.0-roloi/220200, 182, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(332.0-roloi/202200, 228, 1);
glVertex3f(334.0-roloi/200220, 172, 1);
glVertex3f(367.0-roloi/200220, 168, 1);
glVertex3f(376.0-roloi/20020, 212, 1);
glVertex3f(372.0-roloi/200220, 250, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(301.0-roloi/22000, 207, 1);
glVertex3f(301.0-roloi/202020, 227, 1);
glVertex3f(348.0-roloi/200220, 231, 1);
glVertex3f(344.0-roloi/202002, 204, 1);
glEnd();
//TELOS PODIWN

//PANW EPIFANIWN TOIXWN
glColor3f(223.0/255.0,181.0/255.0,112.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(97.0, 289, 1);
glVertex3f(95.0, 281, 1);
glVertex3f(720.0, 296, 1);
glVertex3f(720.0, 304, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(97.0, 289, 1);
glVertex3f(95.0, 281, 1);
glVertex3f(720.0, 296, 1);
glVertex3f(720.0, 304, 1);
glVertex3f(97.0, 288, 1);
glVertex3f(0.0, 204, 1);
glVertex3f(0.0, 162, 1);
glVertex3f(98.0, 280, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(96.0, 151, 1);
glVertex3f(83.0, 136, 1);
glVertex3f(0.0, 135, 1);
glVertex3f(0.0, 155, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(82.0, 139, 1);
glVertex3f(98.0, 153, 1);
glVertex3f(102.0, 104, 1);
glVertex3f(87.0, 84, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(101.0, 106, 1);
glVertex3f(189.0, 107, 1);
glVertex3f(190.0, 84, 1);
glVertex3f(90.0, 88, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(181.0, 108, 1);
glVertex3f(184.0, 182, 1);
glVertex3f(207.0, 181, 1);
glVertex3f(199.0, 81, 1);
glVertex3f(184.0, 79, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(202.0, 182, 1);
glVertex3f(365.0, 182, 1);
glVertex3f(374.0, 170, 1);
glVertex3f(202.0, 164, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(360.0, 181, 1);
glVertex3f(359.0, 200, 1);
glVertex3f(429.0, 201, 1);
glVertex3f(436.0, 188, 1);
glVertex3f(372.0, 180, 1);
glVertex3f(372.0, 167, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(437.0, 185, 1);
glVertex3f(439.0, 211, 1);
glVertex3f(425.0, 233, 1);
glVertex3f(420.0, 201, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(420.0, 232, 1);
glVertex3f(720.0, 259, 1);
glVertex3f(720.0, 227, 1);
glVertex3f(430.0, 206, 1);
glEnd();

//SKALA
glColor3f(41.0/255.0,32.0/255.0,26.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(100.0, 113, 1);
glVertex3f(107.0, 112, 1);
glVertex3f(87.0, 4, 1);
glVertex3f(78.0, 4, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(102.0, 85, 1);
glVertex3f(177.0, 82, 1);
glVertex3f(177.0, 76, 1);
glVertex3f(100.0, 81, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(92.0, 56, 1);
glVertex3f(176.0, 51, 1);
glVertex3f(176.0, 44, 1);
glVertex3f(92.0, 49, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(89.0, 17, 1);
glVertex3f(172.0, 9, 1);
glVertex3f(173.0, 4, 1);
glVertex3f(83.0, 6, 1);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(178.0, 111, 1);
glVertex3f(187.0, 111, 1);
glVertex3f(179.0, 0, 1);
glVertex3f(173.0, 0, 1);
glEnd();

}



int initial_time=time(NULL), final_time,frame_count=0;
int fps=0;

float slowdown = 11.0;
float velocity = 0.0;
int loop;
int fall;

typedef struct {
  bool alive;	
  float life;	
  float fade;   
  float red;
  float green;
  float blue;
  float xpos;
  float ypos;
  float vel;
  float gravity;
}particles;

// Paticle System
particles par_sys[MAX_PARTICLES];

// Reset Particles 
void initParticles(int i) {
    par_sys[i].alive = true;
    par_sys[i].life = 40.0;
    par_sys[i].fade = float(rand()%100)/1000.0f+0.003f;
    par_sys[i].xpos = (float) (rand() % 720) - 10;
    par_sys[i].ypos = 480.0;
    par_sys[i].red = 1.0;
    par_sys[i].green = 1.0;
    par_sys[i].blue = 1.0;
    par_sys[i].vel = velocity;
    par_sys[i].gravity = -0.2;//-0.8;

}

void init(void){
	glClearColor(80.0/255.0,45.0/255.0,28.0/255.0,0);
 
     // Initialize particles
    for (loop = 0; loop < MAX_PARTICLES; loop++) {
        initParticles(loop);
    }
}
void drawRain() {
  float x, y, paxos;
  for (loop = 0; loop < MAX_PARTICLES; loop=loop+2) {
    if (par_sys[loop].alive == true) {
      x = par_sys[loop].xpos;
      y = par_sys[loop].ypos;
      glColor3f(1.0, 1.0, 1.0);
paxos=(float) (rand() % 15);
glColor3f(1, 1, 1);
    		glBegin(GL_LINE_STRIP);
    			glVertex3f (x+3.51,y+paxos*2.7,1);
    			glVertex3f (x+4.52,y+paxos*3.3,1);
    			glVertex3f (x+5.01,y+paxos*4.1,1);
    			glVertex3f (x+5.61,y+paxos*5.2,1);
  		glEnd();
glPushMatrix();
glTranslatef(x, y,44);
glPopMatrix();
      par_sys[loop].ypos += par_sys[loop].vel / (slowdown*1000);
      par_sys[loop].vel += par_sys[loop].gravity;
      par_sys[loop].life -= par_sys[loop].fade;
      if (par_sys[loop].ypos <= -10) {
        int xi = x + 10;
        par_sys[loop].life = -1.0;
      }
      if (par_sys[loop].life < 0.0) {
        initParticles(loop);
      }
    }
  }
}

void DrawAnimation2(void){
glMatrixMode(GL_PROJECTION);
glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
	int i, j;
  	float x, y;
  	
//omprela ktiria kai antikeimena
omp_plus_Stuff();

//touvlo
glColor3f(207.0/255.153,122.0/255.0,83.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(213.0, 197, 1);
glVertex3f(190.0, 194, 1);
glVertex3f(187.0, 210, 1);
glVertex3f(190.0, 222, 1);
glVertex3f(208.0, 222, 1);
glVertex3f(212.0, 210, 1);
glEnd();

//KOILIA
glColor3f(135.0/255.0,42.0/255.0,35.0/255.0);//XRWMA GIA KOILIA KAI MANIKIA
glBegin(GL_POLYGON);
glVertex3f(315.0-roloi/4900, 227-roloi/4900, 1);
glVertex3f(297.0-roloi/4900, 229-roloi/4900, 1);
glVertex3f(288.0-roloi/4900, 228-roloi/4900, 1);
glVertex3f(274.0-roloi/4900, 227-roloi/4900, 1);
glVertex3f(272.0-roloi/4900, 232-roloi/4900, 1);
glVertex3f(267.0-roloi/4900, 242-roloi/4900, 1);
glVertex3f(268.0-roloi/4900, 248-roloi/4900, 1);
glVertex3f(276.0-roloi/4900, 269-roloi/4900, 1);
glVertex3f(284.0-roloi/4900, 283-roloi/4900, 1);
glVertex3f(293.0-roloi/4900, 297-roloi/4900, 1);
glVertex3f(324.0-roloi/4900, 318-roloi/4900, 1);
glVertex3f(340.0-roloi/4900, 313-roloi/4900, 1);
glVertex3f(351.0-roloi/4900, 303-roloi/4900, 1);
glVertex3f(361.0-roloi/4900, 293-roloi/4900, 1);
glVertex3f(369.0-roloi/4900, 283-roloi/4900, 1);
glVertex3f(371.0-roloi/4900, 276-roloi/4900, 1);
glVertex3f(374.0-roloi/4900, 251-roloi/4900, 1);
glVertex3f(351.0-roloi/4900, 235-roloi/4900, 1);
glVertex3f(345.0-roloi/4900, 230-roloi/4900, 1);
glEnd();

//aristera xeri opote to deksi tou
glBegin(GL_POLYGON);
glVertex3f(241.0-roloi/5000, 236-roloi/5000, 1);
glVertex3f(249.0-roloi/5000, 266-roloi/5000, 1);
glVertex3f(271.0-roloi/5000, 286-roloi/5000, 1);
glVertex3f(312.0-roloi/5000, 311-roloi/5000, 1);
glVertex3f(285.0-roloi/5000, 275-roloi/5000, 1);
glVertex3f(257.0-roloi/5000, 260-roloi/5000, 1);
glVertex3f(249.0-roloi/5000, 239-roloi/5000, 1);
glEnd();

//PALAMI
glColor3f(223.0/255.0,181.0/255.0,112.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(248.0-roloi/5000, 242-roloi/5000, 1);
glVertex3f(251.0-roloi/5000, 238-roloi/5000, 1);
glVertex3f(250.0-roloi/5000, 228-roloi/5000, 1);
glVertex3f(248.0-roloi/5000, 222-roloi/5000, 1);
glVertex3f(246.0-roloi/5000, 219-roloi/5000, 1);
glVertex3f(241.0-roloi/5000, 221-roloi/5000, 1);
glVertex3f(238.0-roloi/5000, 226-roloi/5000, 1);
glVertex3f(240.0-roloi/5000, 236-roloi/5000, 1);
glVertex3f(243.0-roloi/5000, 241-roloi/5000, 1);
glEnd();

//palami allou xeriou
glBegin(GL_POLYGON);
glVertex3f(414.0-roloi/500, 276-roloi/300, 1);
glVertex3f(410.0-roloi/500, 263-roloi/300, 1);
glVertex3f(414.0-roloi/500, 260-roloi/300, 1);
glVertex3f(422.0-roloi/500, 267-roloi/300, 1);
glVertex3f(423.0-roloi/500, 277-roloi/300, 1);
glVertex3f(422.0-roloi/500, 280-roloi/300, 1);
glEnd();

//asvestis ?
glColor3f(252.0/255.0,252.0/255.0,255.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(409.0-roloi/500, 254-roloi/300, 1);
glVertex3f(404.0-roloi/500, 258-roloi/300, 1);
glVertex3f(402.0-roloi/500, 264-roloi/300, 1);
glVertex3f(407.0-roloi/500, 270-roloi/300, 1);
glVertex3f(412.0-roloi/500, 275-roloi/300, 1);
glVertex3f(415.0-roloi/500, 276-roloi/300, 1);
glVertex3f(417.0-roloi/500, 276-roloi/300, 1);
glVertex3f(422.0-roloi/500, 273-roloi/300, 1);
glVertex3f(422.0-roloi/500, 265-roloi/300, 1);
glVertex3f(418.0-roloi/500, 259-roloi/300, 1);
glVertex3f(414.0-roloi/500, 255-roloi/300, 1);
glEnd();

//GRAMMES GIA TO touvlo
glColor3f(2.0/255.0,2.0/255.0,2.0/255.0);
glBegin(GL_LINES);
glVertex3f(212.0, 196, 1);
glVertex3f(210.0, 212, 1);
glVertex3f(209.0, 211, 1);
glVertex3f(208.0, 223, 1);
glVertex3f(208.0, 223, 1);
glVertex3f(191.0, 223, 1);
glVertex3f(191.0, 223, 1);
glVertex3f(187.0, 209, 1);
glVertex3f(187.0, 209, 1);
glVertex3f(189.0, 194, 1);
glVertex3f(189.0, 194, 1);
glVertex3f(213.0, 196, 1);
glVertex3f(207.0, 212, 1);
glVertex3f(187.0, 210, 1);
glEnd();

//to allo
glColor3f(135.0/255.0,42.0/255.0,35.0/255.0);
//KATW MEROS
glBegin(GL_POLYGON);
glVertex3f(414.0-roloi/500, 277-roloi/300, 1);
glVertex3f(399.0-roloi/500, 293-roloi/300, 1);
glVertex3f(410.0-roloi/500, 301-roloi/300, 1);
glVertex3f(423.0-roloi/500, 280-roloi/300, 1);
glEnd();
//PANW MEROS
glBegin(GL_POLYGON);
glVertex3f(410.0-roloi/500, 302-roloi/300, 1);
glVertex3f(338.0-5-roloi/1500, 323-roloi/1300, 1);
glVertex3f(347.0-5-roloi/1500, 300-5-roloi/1300, 1);
glVertex3f(400.0-roloi/500, 293-roloi/300, 1);
glEnd();

//kefali
glColor3f(223.0/255.0,181.0/255.0,112.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(336.0-roloi/2000, 321-roloi/2000, 1);
glVertex3f(329.0-roloi/2000, 319-roloi/2000, 1);
glVertex3f(323.0-roloi/2000, 316-roloi/2000, 1);
glVertex3f(312.0-roloi/2000, 306-roloi/2000, 1);
glVertex3f(314.0-roloi/2000, 295-roloi/2000, 1);
glVertex3f(318.0-roloi/2000, 286-roloi/2000, 1);
glVertex3f(322.0-roloi/2000, 278-roloi/2000, 1);
glVertex3f(331.0-roloi/2000, 271-roloi/2000, 1);
glVertex3f(340.0-roloi/2000, 267-roloi/2000, 1);
glVertex3f(354.0-roloi/2000, 269-roloi/2000, 1);
glVertex3f(365.0-roloi/2000, 274-roloi/2000, 1);
glVertex3f(368.0-roloi/2000, 279-roloi/2000, 1);
glVertex3f(367.0-roloi/2000, 286-roloi/2000, 1);
glVertex3f(362.0-roloi/2000, 289-roloi/2000, 1);
glVertex3f(358.0-roloi/2000, 299-roloi/2000, 1);
glVertex3f(353.0-roloi/2000, 306-roloi/2000, 1);
glVertex3f(350.0-roloi/2000, 311-roloi/2000, 1);
glVertex3f(348.0-roloi/2000, 314-roloi/2000, 1);
glVertex3f(339.0-roloi/2000, 321-roloi/2000, 1);
glEnd();

//proswpo+mallia
glColor3f(2.0/255.0,2.0/255.0,2.0/255.0);
glBegin(GL_LINES);
glVertex3f(361.0-roloi/1100, 288-roloi/1100, 1);
glVertex3f(346.0-roloi/1100, 281-roloi/1100, 1);
glVertex3f(356.0-roloi/1100, 292-roloi/1100, 1);
glVertex3f(346.0-roloi/1100, 292-roloi/1100, 1);
glVertex3f(347.0-roloi/1100, 303-roloi/1100, 1);
glVertex3f(346.0-roloi/1100, 292-roloi/1100, 1);
glVertex3f(350.0-roloi/1100, 303-roloi/1100, 1);
glVertex3f(356.0-roloi/1100, 293-roloi/1100, 1);
glVertex3f(341.0-roloi/1100, 300-roloi/1100, 1);
glVertex3f(345.0-roloi/1100, 302-roloi/1100, 1);
glVertex3f(348.0-roloi/1100, 304-roloi/1100, 1);
glVertex3f(353.0-roloi/1100, 305-roloi/1100, 1);
glVertex3f(322.0-roloi/1100, 315-roloi/1100, 1);
glVertex3f(315.0-roloi/1100, 320-roloi/1100, 1);
glVertex3f(321.0-roloi/1100, 313-roloi/1100, 1);
glVertex3f(320.0-roloi/1100, 321-roloi/1100, 1);
glEnd();

//afto p kapnizei
glBegin(GL_POLYGON);
glVertex3f(333.0-roloi/1100, 272-roloi/1100, 1);
glVertex3f(333.0-roloi/1100, 278-roloi/1100, 1);
glVertex3f(339.0-roloi/1100, 278-roloi/1100, 1);
glVertex3f(347.0-roloi/1100, 281-roloi/1100, 1);
glVertex3f(343.0-roloi/1100, 275-roloi/1100, 1);
glVertex3f(339.0-roloi/1100, 272-roloi/1100, 1);
glEnd();

//EXTRA MALLIA
glColor3f(211.0/255.0,62.0/255.0,21.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(338.0-roloi/1100, 308-roloi/1100, 1);
glVertex3f(334.0-roloi/1100, 312-roloi/1100, 1);
glVertex3f(332.0-roloi/1100, 315-roloi/1100, 1);
glVertex3f(332.0-roloi/1100, 317-roloi/1100, 1);
glVertex3f(332.0-roloi/1100, 321-roloi/1100, 1);
glVertex3f(335.0-roloi/1100, 324-roloi/1100, 1);
glVertex3f(338.0-roloi/1100, 325-roloi/1100, 1);
glVertex3f(345.0-roloi/1100, 322-roloi/1100, 1);
glVertex3f(350.0-roloi/1100, 320-roloi/1100, 1);
glVertex3f(347.0-roloi/1100, 315-roloi/1100, 1);
glVertex3f(343.0-roloi/1100, 312-roloi/1100, 1);
glVertex3f(341.0-roloi/1100, 310-roloi/1100, 1);
glEnd();
char str[6];
for(int i=0;i<roloi/3600;i++){
	glColor3f(255.0/255.0,255.0/255.0,255.0/255.0);
	glutSwapBuffers();
	frame_count++;snprintf(str, 5, "%d", frame_count);
}output(450, 350, str);
}

void DrawAnimation3(void){
glMatrixMode(GL_PROJECTION);
   glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	int i, j;
  	float x, y;
//omprela ktiria kai antikeimena
omp_plus_Stuff();

//touvlo
glColor3f(207.0/255.153,122.0/255.0,83.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(213.0, 197, 1);
glVertex3f(190.0, 194, 1);
glVertex3f(187.0, 210, 1);
glVertex3f(190.0, 222, 1);
glVertex3f(208.0, 222, 1);
glVertex3f(212.0, 210, 1);
glEnd();

//KOILIA
glColor3f(135.0/255.0,42.0/255.0,35.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(376.0-roloi/2000, 255-roloi/4000, 1);
glVertex3f(369.0-roloi/2000, 290-roloi/4000, 1);
glVertex3f(349.0-roloi/2000, 315-roloi/4000, 1);
glVertex3f(317.0-roloi/2000, 316-roloi/4000, 1);
glVertex3f(286.0-roloi/2000, 300-roloi/4000, 1);
glVertex3f(278.0-roloi/2000, 265-roloi/4000, 1);
glVertex3f(272.0-roloi/2000, 246-roloi/4000, 1);
glVertex3f(294.0-roloi/2000, 231-roloi/4000, 1);
glVertex3f(326.0-roloi/2000, 228-roloi/4000, 1);
glVertex3f(355.0-roloi/2000, 238-roloi/4000, 1);
glVertex3f(365.0-roloi/2000, 242-roloi/4000, 1);
glEnd();

//aristera xeri opote to deksi tou
glBegin(GL_POLYGON);
glVertex3f(241.0-roloi/5000, 236-roloi/5000, 1);
glVertex3f(249.0-roloi/5000, 266-roloi/5000, 1);
glVertex3f(271.0-roloi/5000, 286-roloi/5000, 1);
glVertex3f(312.0-roloi/5000, 311-roloi/5000, 1);
glVertex3f(285.0-roloi/5000, 275-roloi/5000, 1);
glVertex3f(257.0-roloi/5000, 260-roloi/5000, 1);
glVertex3f(249.0-roloi/5000, 239-roloi/5000, 1);
glEnd();

//PALAMI
glColor3f(223.0/255.0,181.0/255.0,112.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(248.0-roloi/5000, 242-roloi/5000, 1);
glVertex3f(251.0-roloi/5000, 238-roloi/5000, 1);
glVertex3f(250.0-roloi/5000, 228-roloi/5000, 1);
glVertex3f(248.0-roloi/5000, 222-roloi/5000, 1);
glVertex3f(246.0-roloi/5000, 219-roloi/5000, 1);
glVertex3f(241.0-roloi/5000, 221-roloi/5000, 1);
glVertex3f(238.0-roloi/5000, 226-roloi/5000, 1);
glVertex3f(240.0-roloi/5000, 236-roloi/5000, 1);
glVertex3f(243.0-roloi/5000, 241-roloi/5000, 1);
glEnd();

//asvestis ?
glColor3f(252.0/255.0,252.0/255.0,255.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(373.0-roloi/1400, 206-roloi/800, 1);
glVertex3f(365.0-roloi/1400, 216-roloi/800, 1);
glVertex3f(367.0-roloi/1400, 224-roloi/800, 1);
glVertex3f(379.0-roloi/1400, 229-roloi/800, 1);
glVertex3f(390.0-roloi/1400, 229-roloi/800, 1);
glVertex3f(394.0-roloi/1400, 226-roloi/800, 1);
glVertex3f(392.0-roloi/1400, 215-roloi/800, 1);
glEnd();

//GRAMMES GIA TO touvlo
glColor3f(2.0/255.0,2.0/255.0,2.0/255.0);
glBegin(GL_LINES);
glVertex3f(212.0, 196, 1);
glVertex3f(210.0, 212, 1);
glVertex3f(209.0, 211, 1);
glVertex3f(208.0, 223, 1);
glVertex3f(208.0, 223, 1);
glVertex3f(191.0, 223, 1);
glVertex3f(191.0, 223, 1);
glVertex3f(187.0, 209, 1);
glVertex3f(187.0, 209, 1);
glVertex3f(189.0, 194, 1);
glVertex3f(189.0, 194, 1);
glVertex3f(213.0, 196, 1);
glVertex3f(207.0, 212, 1);
glVertex3f(187.0, 210, 1);
glEnd();

//to allo
glColor3f(135.0/255.0,42.0/255.0,35.0/255.0);
//KATW MEROS
glBegin(GL_POLYGON);
glVertex3f(386.0-roloi/1400, 228-roloi/800, 1);
glVertex3f(385.0-roloi/1400, 265-roloi/800, 1);
glVertex3f(394.0-roloi/1400, 275-roloi/800, 1);
glVertex3f(394.0-roloi/1400, 226-roloi/800, 1);
glEnd();
//PANW MEROS
glBegin(GL_POLYGON);
glVertex3f(390.0-roloi/1400, 256-roloi/800, 1);
glVertex3f(354.0-roloi/1400, 291-roloi/800, 1);
glVertex3f(351.0-roloi/1400, 312-roloi/800, 1);
glVertex3f(397.0-roloi/1400, 264-roloi/800, 1);
glEnd();

//kefali
glColor3f(223.0/255.0,181.0/255.0,112.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(329.0-roloi/2000, 254-roloi/2000, 1);
glVertex3f(324.0-roloi/2000, 257-roloi/2000, 1);
glVertex3f(319.0-roloi/2000, 259-roloi/2000, 1);
glVertex3f(315.0-roloi/2000, 267-roloi/2000, 1);
glVertex3f(313.0-roloi/2000, 270-roloi/2000, 1);
glVertex3f(311.0-roloi/2000, 281-roloi/2000, 1);
glVertex3f(311.0-roloi/2000, 290-roloi/2000, 1);
glVertex3f(315.0-roloi/2000, 304-roloi/2000, 1);
glVertex3f(320.0-roloi/2000, 310-roloi/2000, 1);
glVertex3f(329.0-roloi/2000, 315-roloi/2000, 1);
glVertex3f(339.0-roloi/2000, 312-roloi/2000, 1);
glVertex3f(347.0-roloi/2000, 299-roloi/2000, 1);
glVertex3f(351.0-roloi/2000, 286-roloi/2000, 1);
glVertex3f(356.0-roloi/2000, 274-roloi/2000, 1);
glVertex3f(357.0-roloi/2000, 264-roloi/2000, 1);
glVertex3f(349.0-roloi/2000, 256-roloi/2000, 1);
glEnd();

//proswpo+mallia
glColor3f(2.0/255.0,2.0/255.0,2.0/255.0);
glBegin(GL_LINES);
glVertex3f(334.0-roloi/2000, 264-roloi/2000, 1);
glVertex3f(352.0-roloi/2000, 271-roloi/2000, 1);
glVertex3f(331.0-roloi/2000, 271-roloi/2000, 1);
glVertex3f(331.0-roloi/2000, 277-roloi/2000, 1);
glVertex3f(331.0-roloi/2000, 270-roloi/2000, 1);
glVertex3f(339.0-roloi/2000, 273-roloi/2000, 1);
glVertex3f(342.0-roloi/2000, 275-roloi/2000, 1);
glVertex3f(339.0-roloi/2000, 279-roloi/2000, 1);
glVertex3f(337.0-roloi/2000, 282-roloi/2000, 1);
glVertex3f(338.0-roloi/2000, 283-roloi/2000, 1);
glVertex3f(338.0-roloi/2000, 283-roloi/2000, 1);
glVertex3f(337.0-roloi/2000, 285-roloi/2000, 1);
glVertex3f(337.0-roloi/2000, 285-roloi/2000, 1);
glVertex3f(335.0-roloi/2000, 284-roloi/2000, 1);
glVertex3f(337.0-roloi/2000, 283-roloi/2000, 1);
glVertex3f(337.0-roloi/2000, 282-roloi/2000, 1);
glVertex3f(331.0-roloi/2000, 283-roloi/2000, 1);
glVertex3f(327.0-roloi/2000, 283-roloi/2000, 1);
glVertex3f(322.0-roloi/2000, 313-roloi/2000, 1);
glVertex3f(320.0-roloi/2000, 318-roloi/2000, 1);
glVertex3f(323.0-roloi/2000, 314-roloi/2000, 1);
glVertex3f(324.0-roloi/2000, 321-roloi/2000, 1);
glEnd();

//afto p kapnizei
glBegin(GL_POLYGON);
glVertex3f(318.0-roloi/2000, 254-roloi/2000, 1);
glVertex3f(318.0-roloi/2000, 258-roloi/2000, 1);
glVertex3f(322.0-roloi/2000, 258-roloi/2000, 1);
glVertex3f(326.0-roloi/2000, 260-roloi/2000, 1);
glVertex3f(330.0-roloi/2000, 265-roloi/2000, 1);
glVertex3f(328.0-roloi/2000, 256-roloi/2000, 1);
glVertex3f(323.0-roloi/2000, 252-roloi/2000, 1);
glEnd();

//EXTRA MALLIA
glColor3f(211.0/255.0,62.0/255.0,21.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(336.0-roloi/2000, 293-roloi/2000, 1);
glVertex3f(328.0-roloi/2000, 296-roloi/2000, 1);
glVertex3f(325.0-roloi/2000, 301-roloi/2000, 1);
glVertex3f(328.0-roloi/2000, 307-roloi/2000, 1);
glVertex3f(331.0-roloi/2000, 310-roloi/2000, 1);
glVertex3f(334.0-roloi/2000, 313-roloi/2000, 1);
glVertex3f(340.0-roloi/2000, 296-roloi/2000, 1);
glEnd();
char str[6];
for(int i=0;i<roloi/3600;i++){
	glColor3f(255.0/255.0,255.0/255.0,255.0/255.0);
	glutSwapBuffers();
	frame_count++;snprintf(str, 5, "%d", frame_count);

}output(450, 350, str);
}

void DrawAnimation4(void){
glMatrixMode(GL_PROJECTION);
glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
	int i, j;
  	float x, y;
//omprela ktiria kai antikeimena
omp_plus_Stuff();
//touvlo
glColor3f(207.0/255.153,122.0/255.0,83.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(213.0, 197, 1);
glVertex3f(190.0, 194, 1);
glVertex3f(187.0, 210, 1);
glVertex3f(190.0, 222, 1);
glVertex3f(208.0, 222, 1);
glVertex3f(212.0, 210, 1);
glEnd();

//KOILIA
glColor3f(135.0/255.0,42.0/255.0,35.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(315.0, 227, 1);
glVertex3f(297.0, 229, 1);
glVertex3f(288.0, 228, 1);
glVertex3f(274.0, 227, 1);
glVertex3f(272.0, 232, 1);
glVertex3f(267.0, 242, 1);
glVertex3f(268.0, 248, 1);
glVertex3f(276.0, 269, 1);
glVertex3f(284.0, 283, 1);
glVertex3f(293.0, 297, 1);
glVertex3f(324.0, 318, 1);
glVertex3f(340.0, 313, 1);
glVertex3f(351.0, 303, 1);
glVertex3f(361.0, 293, 1);
glVertex3f(369.0, 283, 1);
glVertex3f(371.0, 276, 1);
glVertex3f(374.0, 251, 1);
glVertex3f(351.0, 235, 1);
glVertex3f(345.0, 230, 1);
glEnd();

//aristera xeri opote to deksi tou
glBegin(GL_POLYGON);
glVertex3f(241.0-roloi/15000, 236, 1);
glVertex3f(249.0-roloi/15000, 266, 1);
glVertex3f(271.0-roloi/15000, 286, 1);
glVertex3f(312.0-roloi/15000, 311, 1);
glVertex3f(285.0-roloi/15000, 275, 1);
glVertex3f(257.0-roloi/15000, 260, 1);
glVertex3f(249.0-roloi/15000, 239, 1);
glEnd();

//PALAMI
glColor3f(223.0/255.0,181.0/255.0,112.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(248.0-roloi/15000, 242, 1);
glVertex3f(251.0-roloi/15000, 238, 1);
glVertex3f(250.0-roloi/15000, 228, 1);
glVertex3f(248.0-roloi/15000, 222, 1);
glVertex3f(246.0-roloi/15000, 219, 1);
glVertex3f(241.0-roloi/15000, 221, 1);
glVertex3f(238.0-roloi/15000, 226, 1);
glVertex3f(240.0-roloi/15000, 236, 1);
glVertex3f(243.0-roloi/15000, 241, 1);
glEnd();


glColor3f(252.0/255.0,252.0/255.0,255.0/255.0);
//asvestis ?
glBegin(GL_POLYGON);
glVertex3f(359.0+roloi/12600, 180+roloi/6600, 1);
glVertex3f(359.0+roloi/12600, 177+roloi/6600, 1);
glVertex3f(359.0+roloi/12600, 171-roloi/6600, 1);
glVertex3f(355.0+roloi/12600, 168-roloi/6600, 1);
glVertex3f(328.0-roloi/12600, 172-roloi/6600, 1);
glVertex3f(324.0-roloi/12600, 170-roloi/6600, 1);
glVertex3f(322.0-roloi/12600, 185+roloi/6600, 1);
glVertex3f(323.0-roloi/12600, 187+roloi/6600, 1);
glEnd();


//GRAMMES GIA TO touvlo
glColor3f(2.0/255.0,2.0/255.0,2.0/255.0);
glBegin(GL_LINES);
glVertex3f(212.0, 196, 1);
glVertex3f(210.0, 212, 1);
glVertex3f(209.0, 211, 1);
glVertex3f(208.0, 223, 1);
glVertex3f(208.0, 223, 1);
glVertex3f(191.0, 223, 1);
glVertex3f(191.0, 223, 1);
glVertex3f(187.0, 209, 1);
glVertex3f(187.0, 209, 1);
glVertex3f(189.0, 194, 1);
glVertex3f(189.0, 194, 1);
glVertex3f(213.0, 196, 1);
glVertex3f(207.0, 212, 1);
glVertex3f(187.0, 210, 1);
glEnd();

//to allo
glColor3f(135.0/255.0,42.0/255.0,35.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(347.0+20-roloi/1000, 200, 1);
glVertex3f(349.0+15-roloi/1000, 270, 1);
glVertex3f(364.0+15-roloi/1000, 283, 1);
glVertex3f(365.0+15-roloi/1000, 237, 1);
glVertex3f(354.0+20-roloi/1000, 208, 1);
glVertex3f(352.0+20-roloi/1000, 200, 1);
glEnd();

//palami allou
glColor3f(223.0/255.0,181.0/255.0,112.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(346.0+20-roloi/1000, 203, 1);
glVertex3f(339.0+20-roloi/1000, 187, 1);
glVertex3f(343.0+20-roloi/1000, 178, 1);
glVertex3f(352.0+20-roloi/1000, 179, 1);
glVertex3f(351.0+20-roloi/1000, 201, 1);
glEnd();

//kefali
glBegin(GL_POLYGON);
glVertex3f(312.0-roloi/5000, 249+roloi/15000, 1);
glVertex3f(301.0-roloi/5000, 251+roloi/15000, 1);
glVertex3f(297.0-roloi/5000, 254+roloi/15000, 1);
glVertex3f(296.0-roloi/5000, 258+roloi/15000, 1);
glVertex3f(299.0-roloi/5000, 260+roloi/15000, 1);
glVertex3f(302.0-roloi/5000, 267+roloi/15000, 1);
glVertex3f(304.0-roloi/5000, 273+roloi/15000, 1);
glVertex3f(305.0-roloi/5000, 283+roloi/15000, 1);
glVertex3f(306.0-roloi/5000, 289+roloi/15000, 1);
glVertex3f(308.0-roloi/5000, 298+roloi/15000, 1);
glVertex3f(311.0-roloi/5000, 303+roloi/15000, 1);
glVertex3f(316.0-roloi/5000, 307+roloi/15000, 1);
glVertex3f(320.0-roloi/5000, 309+roloi/15000, 1);
glVertex3f(323.0-roloi/5000, 310+roloi/15000, 1);
glVertex3f(326.0-roloi/5000, 309+roloi/15000, 1);
glVertex3f(332.0-roloi/5000, 306+roloi/15000, 1);
glVertex3f(339.0-roloi/5000, 296+roloi/15000, 1);
glVertex3f(341.0-roloi/5000, 274+roloi/15000, 1);
glVertex3f(339.0-roloi/5000, 261+roloi/15000, 1);
glVertex3f(331.0-roloi/5000, 253+roloi/15000, 1);
glVertex3f(325.0-roloi/5000, 251+roloi/15000, 1);
glEnd();

//proswpo+mallia
glColor3f(2.0/255.0,2.0/255.0,2.0/255.0);
glBegin(GL_LINES);
glVertex3f(312.0-roloi/5000, 279+roloi/15000, 1);
glVertex3f(321.0-roloi/5000, 281+roloi/15000, 1);
glVertex3f(316.0-roloi/5000, 281+roloi/15000, 1);
glVertex3f(315.0-roloi/5000, 269+roloi/15000, 1);
glVertex3f(314.0-roloi/5000, 269+roloi/15000, 1);
glVertex3f(325.0-roloi/5000, 271+roloi/15000, 1);
glVertex3f(324.0-roloi/5000, 265+roloi/15000, 1);
glVertex3f(327.0-roloi/5000, 257+roloi/15000, 1);
glVertex3f(327.0-roloi/5000, 257+roloi/15000, 1);
glVertex3f(311.0-roloi/5000, 264+roloi/15000, 1);
glVertex3f(311.0-roloi/5000, 264+roloi/15000, 1);
glVertex3f(302.0-roloi/5000, 263+roloi/15000, 1);
glVertex3f(323.0-roloi/5000, 310+roloi/15000, 1);
glVertex3f(322.0-roloi/5000, 317+roloi/15000, 1);
glVertex3f(323.0-roloi/5000, 309+roloi/15000, 1);
glVertex3f(326.0-roloi/5000, 318+roloi/15000, 1);
glEnd();

//afto p kapnizei
glBegin(GL_POLYGON);
glVertex3f(320.0-roloi/5000, 282+roloi/15000, 1);
glVertex3f(319.0-roloi/5000, 280+roloi/15000, 1);
glVertex3f(320.0-roloi/5000, 279+roloi/15000, 1);
glVertex3f(323.0-roloi/5000, 281+roloi/15000, 1);
glVertex3f(324.0-roloi/5000, 282+roloi/15000, 1);
glEnd();


//megalo mati
glBegin(GL_POLYGON);
glVertex3f(300.0-roloi/5000, 263+roloi/15000, 1);
glVertex3f(294.0-roloi/5000, 264+roloi/15000, 1);
glVertex3f(288.0-roloi/5000, 264+roloi/15000, 1);
glVertex3f(288.0-roloi/5000, 258+roloi/15000, 1);
glVertex3f(291.0-roloi/5000, 255+roloi/15000, 1);
glVertex3f(294.0-roloi/5000, 255+roloi/15000, 1);
glVertex3f(296.0-roloi/5000, 258+roloi/15000, 1);
glEnd();

//EXTRA MALLIA
glColor3f(211.0/255.0,62.0/255.0,21.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(315.0-roloi/5000, 285+roloi/15000, 1);
glVertex3f(309.0-roloi/5000, 287+roloi/15000, 1);
glVertex3f(310.0-roloi/5000, 292+roloi/15000, 1);
glVertex3f(308.0-roloi/5000, 297+roloi/15000, 1);
glVertex3f(310.0-roloi/5000, 301+roloi/15000, 1);
glVertex3f(316.0-roloi/5000, 304+roloi/15000, 1);
glVertex3f(319.0-roloi/5000, 304+roloi/15000, 1);
glVertex3f(321.0-roloi/5000, 303+roloi/15000, 1);
glVertex3f(324.0-roloi/5000, 300+roloi/15000, 1);
glVertex3f(322.0-roloi/5000, 293+roloi/15000, 1);
glVertex3f(318.0-roloi/5000, 289+roloi/15000, 1);
glEnd();
char str[6];
for(int i=0;i<roloi/3600;i++){
	glColor3f(255.0/255.0,255.0/255.0,255.0/255.0);
	glutSwapBuffers();
	frame_count++;snprintf(str, 5, "%d", frame_count);

}output(450, 350, str);
}

void DrawAnimation45(void){
glMatrixMode(GL_PROJECTION);
glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
	int i, j;
  	float x, y;
//omprela ktiria kai antikeimena
omp_plus_Stuff();

//touvlo
glColor3f(207.0/255.153,122.0/255.0,83.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(213.0, 197, 1);
glVertex3f(190.0, 194, 1);
glVertex3f(187.0, 210, 1);
glVertex3f(190.0, 222, 1);
glVertex3f(208.0, 222, 1);
glVertex3f(212.0, 210, 1);
glEnd();

//KOILIA
glColor3f(135.0/255.0,42.0/255.0,35.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(315.0, 227, 1);
glVertex3f(297.0, 229, 1);
glVertex3f(288.0, 228, 1);
glVertex3f(274.0, 227, 1);
glVertex3f(272.0, 232, 1);
glVertex3f(267.0, 242, 1);
glVertex3f(268.0, 248, 1);
glVertex3f(276.0, 269, 1);
glVertex3f(284.0, 283, 1);
glVertex3f(293.0, 297, 1);
glVertex3f(324.0, 318, 1);
glVertex3f(340.0, 313, 1);
glVertex3f(351.0, 303, 1);
glVertex3f(361.0, 293, 1);
glVertex3f(369.0, 283, 1);
glVertex3f(371.0, 276, 1);
glVertex3f(374.0, 251, 1);
glVertex3f(351.0, 235, 1);
glVertex3f(345.0, 230, 1);
glEnd();

//aristera xeri opote to deksi tou
glBegin(GL_POLYGON);
glVertex3f(241.0-roloi/15000, 236, 1);
glVertex3f(249.0-roloi/15000, 266, 1);
glVertex3f(271.0-roloi/15000, 286, 1);
glVertex3f(312.0-roloi/15000, 311, 1);
glVertex3f(285.0-roloi/15000, 275, 1);
glVertex3f(257.0-roloi/15000, 260, 1);
glVertex3f(249.0-roloi/15000, 239, 1);
glEnd();

//PALAMI
glColor3f(223.0/255.0,181.0/255.0,112.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(248.0-roloi/15000, 242, 1);
glVertex3f(251.0-roloi/15000, 238, 1);
glVertex3f(250.0-roloi/15000, 228, 1);
glVertex3f(248.0-roloi/15000, 222, 1);
glVertex3f(246.0-roloi/15000, 219, 1);
glVertex3f(241.0-roloi/15000, 221, 1);
glVertex3f(238.0-roloi/15000, 226, 1);
glVertex3f(240.0-roloi/15000, 236, 1);
glVertex3f(243.0-roloi/15000, 241, 1);
glEnd();
glColor3f(252.0/255.0,252.0/255.0,255.0/255.0);

//asvestis ?
glBegin(GL_POLYGON);
glVertex3f(359.0+roloi/12600, 180+roloi/6600, 1);
glVertex3f(359.0+roloi/12600, 177+roloi/6600, 1);
glVertex3f(359.0+roloi/12600, 171-roloi/6600, 1);
glVertex3f(355.0+roloi/12600, 168-roloi/6600, 1);
glVertex3f(328.0-roloi/12600, 172-roloi/6600, 1);
glVertex3f(324.0-roloi/12600, 170-roloi/6600, 1);
glVertex3f(322.0-roloi/12600, 185+roloi/6600, 1);
glVertex3f(323.0-roloi/12600, 187+roloi/6600, 1);
glEnd();


//GRAMMES GIA TO touvlo
glColor3f(2.0/255.0,2.0/255.0,2.0/255.0);
glBegin(GL_LINES);
glVertex3f(212.0, 196, 1);
glVertex3f(210.0, 212, 1);
glVertex3f(209.0, 211, 1);
glVertex3f(208.0, 223, 1);
glVertex3f(208.0, 223, 1);
glVertex3f(191.0, 223, 1);
glVertex3f(191.0, 223, 1);
glVertex3f(187.0, 209, 1);
glVertex3f(187.0, 209, 1);
glVertex3f(189.0, 194, 1);
glVertex3f(189.0, 194, 1);
glVertex3f(213.0, 196, 1);
glVertex3f(207.0, 212, 1);
glVertex3f(187.0, 210, 1);
glEnd();

//to allo
glColor3f(135.0/255.0,42.0/255.0,35.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(347.0+20-roloi/1000, 200, 1);
glVertex3f(349.0+15-roloi/1000, 270, 1);
glVertex3f(364.0+15-roloi/1000, 283, 1);
glVertex3f(365.0+15-roloi/1000, 237, 1);
glVertex3f(354.0+20-roloi/1000, 208, 1);
glVertex3f(352.0+20-roloi/1000, 200, 1);
glEnd();

//palami allou
glColor3f(223.0/255.0,181.0/255.0,112.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(346.0+20-roloi/1000, 203, 1);
glVertex3f(339.0+20-roloi/1000, 187, 1);
glVertex3f(343.0+20-roloi/1000, 178, 1);
glVertex3f(352.0+20-roloi/1000, 179, 1);
glVertex3f(351.0+20-roloi/1000, 201, 1);
glEnd();

//kefali
glBegin(GL_POLYGON);
glVertex3f(312.0-roloi/5000, 249+roloi/15000, 1);
glVertex3f(301.0-roloi/5000, 251+roloi/15000, 1);
glVertex3f(297.0-roloi/5000, 254+roloi/15000, 1);
glVertex3f(296.0-roloi/5000, 258+roloi/15000, 1);
glVertex3f(299.0-roloi/5000, 260+roloi/15000, 1);
glVertex3f(302.0-roloi/5000, 267+roloi/15000, 1);
glVertex3f(304.0-roloi/5000, 273+roloi/15000, 1);
glVertex3f(305.0-roloi/5000, 283+roloi/15000, 1);
glVertex3f(306.0-roloi/5000, 289+roloi/15000, 1);
glVertex3f(308.0-roloi/5000, 298+roloi/15000, 1);
glVertex3f(311.0-roloi/5000, 303+roloi/15000, 1);
glVertex3f(316.0-roloi/5000, 307+roloi/15000, 1);
glVertex3f(320.0-roloi/5000, 309+roloi/15000, 1);
glVertex3f(323.0-roloi/5000, 310+roloi/15000, 1);
glVertex3f(326.0-roloi/5000, 309+roloi/15000, 1);
glVertex3f(332.0-roloi/5000, 306+roloi/15000, 1);
glVertex3f(339.0-roloi/5000, 296+roloi/15000, 1);
glVertex3f(341.0-roloi/5000, 274+roloi/15000, 1);
glVertex3f(339.0-roloi/5000, 261+roloi/15000, 1);
glVertex3f(331.0-roloi/5000, 253+roloi/15000, 1);
glVertex3f(325.0-roloi/5000, 251+roloi/15000, 1);
glEnd();

//proswpo+mallia
glColor3f(2.0/255.0,2.0/255.0,2.0/255.0);
glBegin(GL_LINES);
glVertex3f(312.0-roloi/5000, 279+roloi/15000, 1);
glVertex3f(321.0-roloi/5000, 281+roloi/15000, 1);
glVertex3f(316.0-roloi/5000, 281+roloi/15000, 1);
glVertex3f(315.0-roloi/5000, 269+roloi/15000, 1);
glVertex3f(314.0-roloi/5000, 269+roloi/15000, 1);
glVertex3f(325.0-roloi/5000, 271+roloi/15000, 1);
glVertex3f(324.0-roloi/5000, 265+roloi/15000, 1);
glVertex3f(327.0-roloi/5000, 257+roloi/15000, 1);
glVertex3f(327.0-roloi/5000, 257+roloi/15000, 1);
glVertex3f(311.0-roloi/5000, 264+roloi/15000, 1);
glVertex3f(311.0-roloi/5000, 264+roloi/15000, 1);
glVertex3f(302.0-roloi/5000, 263+roloi/15000, 1);
glVertex3f(323.0-roloi/5000, 310+roloi/15000, 1);
glVertex3f(322.0-roloi/5000, 317+roloi/15000, 1);
glVertex3f(323.0-roloi/5000, 309+roloi/15000, 1);
glVertex3f(326.0-roloi/5000, 318+roloi/15000, 1);
glEnd();

//afto p kapnizei
glBegin(GL_POLYGON);
glVertex3f(320.0-roloi/5000, 282+roloi/15000, 1);
glVertex3f(319.0-roloi/5000, 280+roloi/15000, 1);
glVertex3f(320.0-roloi/5000, 279+roloi/15000, 1);
glVertex3f(323.0-roloi/5000, 281+roloi/15000, 1);
glVertex3f(324.0-roloi/5000, 282+roloi/15000, 1);
glEnd();


//megalo mati
glBegin(GL_POLYGON);
glVertex3f(300.0-roloi/5000, 263+roloi/15000, 1);
glVertex3f(294.0-roloi/5000, 264+roloi/15000, 1);
glVertex3f(288.0-roloi/5000, 264+roloi/15000, 1);
glVertex3f(288.0-roloi/5000, 258+roloi/15000, 1);
glVertex3f(291.0-roloi/5000, 255+roloi/15000, 1);
glVertex3f(294.0-roloi/5000, 255+roloi/15000, 1);
glVertex3f(296.0-roloi/5000, 258+roloi/15000, 1);
glEnd();

//EXTRA MALLIA
glColor3f(211.0/255.0,62.0/255.0,21.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(315.0-roloi/5000, 285+roloi/15000, 1);
glVertex3f(309.0-roloi/5000, 287+roloi/15000, 1);
glVertex3f(310.0-roloi/5000, 292+roloi/15000, 1);
glVertex3f(308.0-roloi/5000, 297+roloi/15000, 1);
glVertex3f(310.0-roloi/5000, 301+roloi/15000, 1);
glVertex3f(316.0-roloi/5000, 304+roloi/15000, 1);
glVertex3f(319.0-roloi/5000, 304+roloi/15000, 1);
glVertex3f(321.0-roloi/5000, 303+roloi/15000, 1);
glVertex3f(324.0-roloi/5000, 300+roloi/15000, 1);
glVertex3f(322.0-roloi/5000, 293+roloi/15000, 1);
glVertex3f(318.0-roloi/5000, 289+roloi/15000, 1);
glEnd();
char str[6];
for(int i=0;i<roloi/3600;i++){
	glColor3f(255.0/255.0,255.0/255.0,255.0/255.0);
	glutSwapBuffers();
	frame_count++;snprintf(str, 5, "%d", frame_count);

}output(450, 350, str);
}

void DrawAnimation5(void){
glMatrixMode(GL_PROJECTION);
glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();  
	int i, j;
  	float x, y;
//omprela ktiria kai antikeimena
omp_plus_Stuff();

//touvlo
glColor3f(207.0/255.153,122.0/255.0,83.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(213.0, 197, 1);
glVertex3f(190.0, 194, 1);
glVertex3f(187.0, 210, 1);
glVertex3f(190.0, 222, 1);
glVertex3f(208.0, 222, 1);
glVertex3f(212.0, 210, 1);
glEnd();

//KOILIA
glColor3f(135.0/255.0,42.0/255.0,35.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(315.0, 227, 1);
glVertex3f(297.0, 229, 1);
glVertex3f(288.0, 228, 1);
glVertex3f(274.0, 227, 1);
glVertex3f(272.0, 232, 1);
glVertex3f(267.0, 242, 1);
glVertex3f(268.0, 248, 1);
glVertex3f(276.0, 269, 1);
glVertex3f(284.0, 283, 1);
glVertex3f(293.0, 297, 1);
glVertex3f(324.0, 318, 1);
glVertex3f(340.0, 313, 1);
glVertex3f(351.0, 303, 1);
glVertex3f(361.0, 293, 1);
glVertex3f(369.0, 283, 1);
glVertex3f(371.0, 276, 1);
glVertex3f(374.0, 251, 1);
glVertex3f(351.0, 235, 1);
glVertex3f(345.0, 230, 1);
glEnd();

//aristera xeri opote to deksi tou
glBegin(GL_POLYGON);
glVertex3f(241.0-roloi/15000, 236, 1);
glVertex3f(249.0-roloi/15000, 266, 1);
glVertex3f(271.0-roloi/15000, 286, 1);
glVertex3f(312.0-roloi/15000, 311, 1);
glVertex3f(285.0-roloi/15000, 275, 1);
glVertex3f(257.0-roloi/15000, 260, 1);
glVertex3f(249.0-roloi/15000, 239, 1);
glEnd();

//PALAMI
glColor3f(223.0/255.0,181.0/255.0,112.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(248.0-roloi/15000, 242, 1);
glVertex3f(251.0-roloi/15000, 238, 1);
glVertex3f(250.0-roloi/15000, 228, 1);
glVertex3f(248.0-roloi/15000, 222, 1);
glVertex3f(246.0-roloi/15000, 219, 1);
glVertex3f(241.0-roloi/15000, 221, 1);
glVertex3f(238.0-roloi/15000, 226, 1);
glVertex3f(240.0-roloi/15000, 236, 1);
glVertex3f(243.0-roloi/15000, 241, 1);
glEnd();
glColor3f(252.0/255.0,252.0/255.0,255.0/255.0);

//asvestis ?
glBegin(GL_POLYGON);
glVertex3f(359.0+roloi/18600, 180+roloi/8600, 1);
glVertex3f(359.0+roloi/18600, 177+roloi/8600, 1);
glVertex3f(359.0+roloi/18600, 171-roloi/8600, 1);
glVertex3f(355.0+roloi/18600, 168-roloi/8600, 1);
glVertex3f(328.0-roloi/18600, 172-roloi/8600, 1);
glVertex3f(324.0-roloi/18600, 170-roloi/8600, 1);
glVertex3f(322.0-roloi/18600, 185+roloi/8600, 1);
glVertex3f(323.0-roloi/18600, 187+roloi/8600, 1);
glEnd();


//GRAMMES GIA TO touvlo
glColor3f(2.0/255.0,2.0/255.0,2.0/255.0);
glBegin(GL_LINES);
glVertex3f(212.0, 196, 1);
glVertex3f(210.0, 212, 1);
glVertex3f(209.0, 211, 1);
glVertex3f(208.0, 223, 1);
glVertex3f(208.0, 223, 1);
glVertex3f(191.0, 223, 1);
glVertex3f(191.0, 223, 1);
glVertex3f(187.0, 209, 1);
glVertex3f(187.0, 209, 1);
glVertex3f(189.0, 194, 1);
glVertex3f(189.0, 194, 1);
glVertex3f(213.0, 196, 1);
glVertex3f(207.0, 212, 1);
glVertex3f(187.0, 210, 1);
glEnd();

//to allo
glColor3f(135.0/255.0,42.0/255.0,35.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(347.0-roloi/1800, 200, 1);
glVertex3f(349.0-roloi/1800, 270, 1);
glVertex3f(364.0-roloi/1800, 283, 1);
glVertex3f(365.0-roloi/1800, 237, 1);
glVertex3f(354.0-roloi/1800, 208, 1);
glVertex3f(352.0-roloi/1800, 200, 1);
glEnd();

//palami
glColor3f(223.0/255.0,181.0/255.0,112.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(346.0-roloi/1800, 203, 1);
glVertex3f(339.0-roloi/1800, 187, 1);
glVertex3f(343.0-roloi/1800, 178, 1);
glVertex3f(352.0-roloi/1800, 179, 1);
glVertex3f(351.0-roloi/1800, 201, 1);
glEnd();

//kefali
glBegin(GL_POLYGON);
glVertex3f(312.0-roloi/5000, 249+roloi/15000, 1);
glVertex3f(301.0-roloi/5000, 251+roloi/15000, 1);
glVertex3f(297.0-roloi/5000, 254+roloi/15000, 1);
glVertex3f(296.0-roloi/5000, 258+roloi/15000, 1);
glVertex3f(299.0-roloi/5000, 260+roloi/15000, 1);
glVertex3f(302.0-roloi/5000, 267+roloi/15000, 1);
glVertex3f(304.0-roloi/5000, 273+roloi/15000, 1);
glVertex3f(305.0-roloi/5000, 283+roloi/15000, 1);
glVertex3f(306.0-roloi/5000, 289+roloi/15000, 1);
glVertex3f(308.0-roloi/5000, 298+roloi/15000, 1);
glVertex3f(311.0-roloi/5000, 303+roloi/15000, 1);
glVertex3f(316.0-roloi/5000, 307+roloi/15000, 1);
glVertex3f(320.0-roloi/5000, 309+roloi/15000, 1);
glVertex3f(323.0-roloi/5000, 310+roloi/15000, 1);
glVertex3f(326.0-roloi/5000, 309+roloi/15000, 1);
glVertex3f(332.0-roloi/5000, 306+roloi/15000, 1);
glVertex3f(339.0-roloi/5000, 296+roloi/15000, 1);
glVertex3f(341.0-roloi/5000, 274+roloi/15000, 1);
glVertex3f(339.0-roloi/5000, 261+roloi/15000, 1);
glVertex3f(331.0-roloi/5000, 253+roloi/15000, 1);
glVertex3f(325.0-roloi/5000, 251+roloi/15000, 1);
glEnd();

//proswpo+mallia
glColor3f(2.0/255.0,2.0/255.0,2.0/255.0);
glBegin(GL_LINES);
glVertex3f(312.0-roloi/5000, 279+roloi/15000, 1);
glVertex3f(321.0-roloi/5000, 281+roloi/15000, 1);
glVertex3f(316.0-roloi/5000, 281+roloi/15000, 1);
glVertex3f(315.0-roloi/5000, 269+roloi/15000, 1);
glVertex3f(314.0-roloi/5000, 269+roloi/15000, 1);
glVertex3f(325.0-roloi/5000, 271+roloi/15000, 1);
glVertex3f(324.0-roloi/5000, 265+roloi/15000, 1);
glVertex3f(327.0-roloi/5000, 257+roloi/15000, 1);
glVertex3f(327.0-roloi/5000, 257+roloi/15000, 1);
glVertex3f(311.0-roloi/5000, 264+roloi/15000, 1);
glVertex3f(311.0-roloi/5000, 264+roloi/15000, 1);
glVertex3f(302.0-roloi/5000, 263+roloi/15000, 1);
glVertex3f(323.0-roloi/5000, 310+roloi/15000, 1);
glVertex3f(322.0-roloi/5000, 317+roloi/15000, 1);
glVertex3f(323.0-roloi/5000, 309+roloi/15000, 1);
glVertex3f(326.0-roloi/5000, 318+roloi/15000, 1);
glEnd();

//afto p kapnizei
glBegin(GL_POLYGON);
glVertex3f(320.0-roloi/5000, 282+roloi/15000, 1);
glVertex3f(319.0-roloi/5000, 280+roloi/15000, 1);
glVertex3f(320.0-roloi/5000, 279+roloi/15000, 1);
glVertex3f(323.0-roloi/5000, 281+roloi/15000, 1);
glVertex3f(324.0-roloi/5000, 282+roloi/15000, 1);
glEnd();

//megalo mati
glBegin(GL_POLYGON);
glVertex3f(300.0-roloi/5000, 263+roloi/15000, 1);
glVertex3f(294.0-roloi/5000, 264+roloi/15000, 1);
glVertex3f(288.0-roloi/5000, 264+roloi/15000, 1);
glVertex3f(288.0-roloi/5000, 258+roloi/15000, 1);
glVertex3f(291.0-roloi/5000, 255+roloi/15000, 1);
glVertex3f(294.0-roloi/5000, 255+roloi/15000, 1);
glVertex3f(296.0-roloi/5000, 258+roloi/15000, 1);
glEnd();

//EXTRA MALLIA
glColor3f(211.0/255.0,62.0/255.0,21.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(315.0-roloi/5000, 285+roloi/15000, 1);
glVertex3f(309.0-roloi/5000, 287+roloi/15000, 1);
glVertex3f(310.0-roloi/5000, 292+roloi/15000, 1);
glVertex3f(308.0-roloi/5000, 297+roloi/15000, 1);
glVertex3f(310.0-roloi/5000, 301+roloi/15000, 1);
glVertex3f(316.0-roloi/5000, 304+roloi/15000, 1);
glVertex3f(319.0-roloi/5000, 304+roloi/15000, 1);
glVertex3f(321.0-roloi/5000, 303+roloi/15000, 1);
glVertex3f(324.0-roloi/5000, 300+roloi/15000, 1);
glVertex3f(322.0-roloi/5000, 293+roloi/15000, 1);
glVertex3f(318.0-roloi/5000, 289+roloi/15000, 1);
glEnd();
char str[6];
for(int i=0;i<roloi/3600;i++){
	glColor3f(255.0/255.0,255.0/255.0,255.0/255.0);
	glutSwapBuffers();
	frame_count++;snprintf(str, 5, "%d", frame_count);

}output(480, 350, str);
}
//omprela kai vroxi mono
void DrawAnimation0(void){
glClearColor(145.0/255.0,125.0/255.0,60.0/255.0,0);
	 glMatrixMode(GL_MODELVIEW);
	 glClear(GL_COLOR_BUFFER_BIT);
     glLoadIdentity();
	int i, j;
  	float x, y;

glColor3f(42.0/255.0,12.0/255.0,2.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(143.0, 174, 1);
glVertex3f(174.0, 203, 1);
glVertex3f(200.0, 223, 1);
glVertex3f(213.0, 229, 1);
glVertex3f(210.0, 217, 1);
glVertex3f(236.0, 233, 1);
glVertex3f(276.0, 241, 1);
glVertex3f(311.0, 245, 1);
glVertex3f(354.0, 247, 1);
glVertex3f(398.0, 243, 1);
glVertex3f(435.0, 235, 1);
glVertex3f(444.0, 229, 1);
glVertex3f(452.0, 216, 1);
glVertex3f(454.0, 229, 1);
glVertex3f(477.0, 226, 1);
glVertex3f(510.0, 213, 1);
glVertex3f(540.0, 193, 1);
glVertex3f(557.0, 172, 1);
glVertex3f(561.0, 172, 1);
glVertex3f(543.0, 214, 1);
glVertex3f(529.0, 234, 1);
glVertex3f(500.0, 248, 1);
glVertex3f(466.0, 249, 1);
glVertex3f(448.0, 250, 1);
glVertex3f(439.0, 271, 1);
glVertex3f(428.0, 291, 1);
glVertex3f(419.0, 295, 1);
glVertex3f(407.0, 289, 1);
glVertex3f(382.0, 272, 1);
glVertex3f(369.0, 268, 1);
glVertex3f(363.0, 275, 1);
glVertex3f(357.0, 276, 1);
glVertex3f(344.0, 273, 1);
glVertex3f(315.0, 279, 1);
glVertex3f(289.0, 291, 1);
glVertex3f(266.0, 301, 1);
glVertex3f(248.0, 298, 1);
glVertex3f(237.0, 287, 1);
glVertex3f(229.0, 274, 1);
glVertex3f(221.0, 263, 1);
glVertex3f(219.0, 257, 1);
glVertex3f(211.0, 252, 1);
glVertex3f(194.0, 244, 1);
glVertex3f(183.0, 243, 1);
glVertex3f(175.0, 236, 1);
glVertex3f(163.0, 225, 1);
glVertex3f(158.0, 217, 1);
glVertex3f(148.0, 194, 1);
glEnd();
glColor3f(120.0/255.0,100.0/255.0,60.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(340.0, 134, 1);
glVertex3f(334.0, 134, 1);
glVertex3f(331.0, 133, 1);
glVertex3f(331.0, 133, 1);
glVertex3f(328.0, 132, 1);
glVertex3f(322.0, 129, 1);
glVertex3f(317.0, 128, 1);
glVertex3f(317.0, 128, 1);
glVertex3f(307.0, 126, 1);
glVertex3f(304.0, 124, 1);
glVertex3f(301.0, 124, 1);
glVertex3f(298.0, 123, 1);
glVertex3f(293.0, 121, 1);
glVertex3f(293.0, 115, 1);
glVertex3f(293.0, 114, 1);
glVertex3f(292.0, 113, 1);
glVertex3f(290.0, 109, 1);
glVertex3f(288.0, 110, 1);
glVertex3f(288.0, 110, 1);
glVertex3f(288.0, 113, 1);
glVertex3f(287.0, 115, 1);
glVertex3f(287.0, 117, 1);
glVertex3f(287.0, 119, 1);
glVertex3f(285.0, 121, 1);
glVertex3f(283.0, 122, 1);
glVertex3f(282.0, 123, 1);
glVertex3f(280.0, 124, 1);
glVertex3f(279.0, 125, 1);
glVertex3f(278.0, 126, 1);
glVertex3f(275.0, 128, 1);
glVertex3f(274.0, 129, 1);
glVertex3f(272.0, 133, 1);
glVertex3f(271.0, 133, 1);
glVertex3f(266.0, 136, 1);
glVertex3f(255.0, 139, 1);
glVertex3f(255.0, 139, 1);
glVertex3f(249.0, 143, 1);
glVertex3f(249.0, 144, 1);
glVertex3f(248.0, 145, 1);
glVertex3f(246.0, 146, 1);
glVertex3f(244.0, 148, 1);
glVertex3f(243.0, 148, 1);
glVertex3f(236.0, 149, 1);
glVertex3f(236.0, 150, 1);
glVertex3f(233.0, 150, 1);
glVertex3f(231.0, 151, 1);
glVertex3f(226.0, 153, 1);
glVertex3f(224.0, 154, 1);
glVertex3f(223.0, 155, 1);
glVertex3f(221.0, 156, 1);
glVertex3f(215.0, 160, 1);
glVertex3f(214.0, 160, 1);
glVertex3f(210.0, 162, 1);
glVertex3f(206.0, 163, 1);
glVertex3f(203.0, 165, 1);
glVertex3f(198.0, 168, 1);
glVertex3f(198.0, 168, 1);
glVertex3f(192.0, 170, 1);
glVertex3f(192.0, 170, 1);
glVertex3f(186.0, 171, 1);
glVertex3f(181.0, 171, 1);
glVertex3f(178.0, 172, 1);
glVertex3f(168.0, 174, 1);
glVertex3f(166.0, 174, 1);
glVertex3f(161.0, 176, 1);
glVertex3f(161.0, 176, 1);
glVertex3f(159.0, 176, 1);
glVertex3f(155.0, 177, 1);
glVertex3f(150.0, 176, 1);
glVertex3f(149.0, 175, 1);
glVertex3f(140.0, 165, 1);
glVertex3f(145.0, 171, 1);
glVertex3f(146.0, 173, 1);
glVertex3f(147.0, 179, 1);
glVertex3f(150.0, 181, 1);
glVertex3f(151.0, 181, 1);
glVertex3f(153.0, 184, 1);
glVertex3f(159.0, 188, 1);
glVertex3f(162.0, 192, 1);
glVertex3f(163.0, 194, 1);
glVertex3f(166.0, 196, 1);
glVertex3f(169.0, 197, 1);
glVertex3f(172.0, 201, 1);
glVertex3f(174.0, 203, 1);
glVertex3f(178.0, 205, 1);
glVertex3f(182.0, 207, 1);
glVertex3f(185.0, 209, 1);
glVertex3f(191.0, 211, 1);
glVertex3f(195.0, 216, 1);
glVertex3f(202.0, 219, 1);
glVertex3f(205.0, 220, 1);
glVertex3f(208.0, 222, 1);
glVertex3f(209.0, 225, 1);
glVertex3f(214.0, 227, 1);
glVertex3f(215.0, 227, 1);
glVertex3f(222.0, 230, 1);
glVertex3f(223.0, 231, 1);
glVertex3f(227.0, 233, 1);
glVertex3f(234.0, 236, 1);
glVertex3f(235.0, 236, 1);
glVertex3f(241.0, 239, 1);
glVertex3f(247.0, 240, 1);
glVertex3f(251.0, 241, 1);
glVertex3f(259.0, 241, 1);
glVertex3f(262.0, 242, 1);
glVertex3f(269.0, 243, 1);
glVertex3f(284.0, 244, 1);
glVertex3f(286.0, 245, 1);
glVertex3f(305.0, 245, 1);
glVertex3f(307.0, 245, 1);
glVertex3f(312.0, 245, 1);
glVertex3f(320.0, 246, 1);
glVertex3f(323.0, 246, 1);
glVertex3f(332.0, 246, 1);
glVertex3f(333.0, 246, 1);
glVertex3f(349.0, 248, 1);
glVertex3f(351.0, 248, 1);
glVertex3f(355.0, 248, 1);
glVertex3f(358.0, 247, 1);
glVertex3f(368.0, 247, 1);
glVertex3f(390.0, 244, 1);
glVertex3f(395.0, 243, 1);
glVertex3f(405.0, 243, 1);
glVertex3f(412.0, 241, 1);
glVertex3f(416.0, 241, 1);
glVertex3f(431.0, 238, 1);
glVertex3f(435.0, 237, 1);
glVertex3f(437.0, 236, 1);
glVertex3f(440.0, 233, 1);
glVertex3f(440.0, 233, 1);
glVertex3f(442.0, 231, 1);
glVertex3f(443.0, 231, 1);
glVertex3f(443.0, 228, 1);
glVertex3f(445.0, 226, 1);
glVertex3f(446.0, 226, 1);
glVertex3f(449.0, 226, 1);
glVertex3f(450.0, 226, 1);
glVertex3f(452.0, 227, 1);
glVertex3f(452.0, 227, 1);
glVertex3f(451.0, 234, 1);
glVertex3f(452.0, 234, 1);
glVertex3f(461.0, 230, 1);
glVertex3f(467.0, 228, 1);
glVertex3f(475.0, 226, 1);
glVertex3f(478.0, 226, 1);
glVertex3f(486.0, 223, 1);
glVertex3f(494.0, 220, 1);
glVertex3f(496.0, 220, 1);
glVertex3f(518.0, 209, 1);
glVertex3f(519.0, 209, 1);
glVertex3f(521.0, 208, 1);
glVertex3f(525.0, 207, 1);
glVertex3f(539.0, 197, 1);
glVertex3f(547.0, 191, 1);
glVertex3f(550.0, 187, 1);
glVertex3f(555.0, 181, 1);
glVertex3f(557.0, 179, 1);
glVertex3f(557.0, 178, 1);
glVertex3f(559.0, 173, 1);
glVertex3f(559.0, 173, 1);
glVertex3f(552.0, 177, 1);
glVertex3f(548.0, 180, 1);
glVertex3f(546.0, 180, 1);
glVertex3f(536.0, 183, 1);
glVertex3f(532.0, 182, 1);
glVertex3f(528.0, 181, 1);
glVertex3f(525.0, 179, 1);
glVertex3f(523.0, 178, 1);
glVertex3f(521.0, 177, 1);
glVertex3f(517.0, 175, 1);
glVertex3f(516.0, 174, 1);
glVertex3f(509.0, 173, 1);
glVertex3f(508.0, 172, 1);
glVertex3f(505.0, 171, 1);
glVertex3f(493.0, 163, 1);
glVertex3f(491.0, 162, 1);
glVertex3f(482.0, 159, 1);
glVertex3f(479.0, 158, 1);
glVertex3f(462.0, 144, 1);
glVertex3f(457.0, 135, 1);
glVertex3f(456.0, 133, 1);
glVertex3f(456.0, 126, 1);
glVertex3f(454.0, 123, 1);
glVertex3f(453.0, 121, 1);
glVertex3f(444.0, 129, 1);
glVertex3f(426.0, 132, 1);
glVertex3f(417.0, 132, 1);
glVertex3f(416.0, 132, 1);
glVertex3f(412.0, 133, 1);
glVertex3f(397.0, 134, 1);
glVertex3f(391.0, 134, 1);
glVertex3f(388.0, 135, 1);
glVertex3f(385.0, 136, 1);
glVertex3f(374.0, 136, 1);
glVertex3f(371.0, 136, 1);
glVertex3f(367.0, 136, 1);
glVertex3f(359.0, 136, 1);
glVertex3f(355.0, 135, 1);
glVertex3f(335.0, 132, 1);
glVertex3f(345.0, 134, 1);
glVertex3f(340.0, 134, 1);
glVertex3f(329.0, 131, 1);
glVertex3f(329.0, 131, 1);
glVertex3f(329.0, 131, 1);
glEnd();
glColor3f(42.0/255.0,12.0/255.0,2.0/255.0);
glBegin(GL_POLYGON);
glVertex3f (312,480-480,1);
glVertex3f (363,480-157,1);
glVertex3f (368,480-157,1);
glVertex3f (341,480-400,1);
glVertex3f (354,480-400,1);
glVertex3f (342,480-480,1);
glEnd();
glBegin(GL_LINES);
glVertex3f(290.0, 108, 1);
glVertex3f(317.0, 201, 1);
glVertex3f(317.0, 201, 1);
glVertex3f(357.0, 247, 1);
glVertex3f(452.0, 120, 1);
glVertex3f(420.0, 197, 1);
glVertex3f(420.0, 198, 1);
glVertex3f(364.0, 248, 1);
glVertex3f(347.0, 186, 1);
glVertex3f(392.0, 244, 1);
glVertex3f(349.0, 190, 1);
glVertex3f(444.0, 231, 1);
glVertex3f(348.0, 192, 1);
glVertex3f(310.0, 246, 1);
glVertex3f(348.0, 188, 1);
glVertex3f(234.0, 234, 1);
glVertex3f(378.0, 192, 1);
glVertex3f(359.0, 221, 1);
glVertex3f(354.0, 223, 1);
glVertex3f(318.0, 201, 1);
glVertex3f(347.0, 188, 1);
glVertex3f(315.0, 190, 1);
glVertex3f(212.0, 216, 1);
glVertex3f(215.0, 231, 1);
glVertex3f(141.0, 158, 1);
glVertex3f(146.0, 174, 1);
glVertex3f(556.0, 173, 1);
glVertex3f(543.0, 196, 1);
glVertex3f(421.0, 198, 1);
glVertex3f(347.0, 190, 1);
glEnd();
char str[6];
for(int i=0;i<roloi/3600;i++){
	glColor3f(255.0/255.0,255.0/255.0,255.0/255.0);
	glutSwapBuffers();
	frame_count++;snprintf(str, 5, "%d", frame_count);

}output(480, 350, str);
}
void DrawAnimation6(void){
glMatrixMode(GL_PROJECTION);
glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
	int i, j;
  	float x, y;
  	
//omprela ktiria kai antikeimena
omp_plus_Stuff();

//touvlo
glColor3f(207.0/255.153,122.0/255.0,83.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(213.0, 197, 1);
glVertex3f(190.0, 194, 1);
glVertex3f(187.0, 210, 1);
glVertex3f(190.0, 222, 1);
glVertex3f(208.0, 222, 1);
glVertex3f(212.0, 210, 1);
glEnd();

//KOILIA
glColor3f(135.0/255.0,42.0/255.0,35.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(315.0, 227, 1);
glVertex3f(297.0, 229, 1);
glVertex3f(288.0, 228, 1);
glVertex3f(274.0, 227, 1);
glVertex3f(272.0, 232, 1);
glVertex3f(267.0, 242, 1);
glVertex3f(268.0, 248, 1);
glVertex3f(276.0, 269, 1);
glVertex3f(284.0, 283, 1);
glVertex3f(293.0, 297, 1);
glVertex3f(324.0, 318, 1);
glVertex3f(340.0, 313, 1);
glVertex3f(351.0, 303, 1);
glVertex3f(361.0, 293, 1);
glVertex3f(369.0, 283, 1);
glVertex3f(371.0, 276, 1);
glVertex3f(374.0, 251, 1);
glVertex3f(351.0, 235, 1);
glVertex3f(345.0, 230, 1);
glEnd();

//aristera xeri opote to deksi tou
glBegin(GL_POLYGON);
glVertex3f(236.0-roloi/1500, 234, 1);
glVertex3f(255.0-roloi/1500, 280, 1);
glVertex3f(307.0+roloi/5000, 299, 1);
glVertex3f(285.0+roloi/5000, 270, 1);
glVertex3f(252.0-roloi/1500, 254, 1);
glVertex3f(245.0-roloi/1500, 232, 1);
glEnd();

//PALAMI
glColor3f(223.0/255.0,181.0/255.0,112.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(248.0-roloi/1500, 242, 1);
glVertex3f(251.0-roloi/1500, 238, 1);
glVertex3f(250.0-roloi/1500, 228, 1);
glVertex3f(248.0-roloi/1500, 222, 1);
glVertex3f(246.0-roloi/1500, 219, 1);
glVertex3f(241.0-roloi/1500, 221, 1);
glVertex3f(238.0-roloi/1500, 226, 1);
glVertex3f(240.0-roloi/1500, 236, 1);
glVertex3f(243.0-roloi/1500, 241, 1);
glEnd();
glColor3f(252.0/255.0,252.0/255.0,255.0/255.0);

//asvestis ?
glBegin(GL_POLYGON);
glVertex3f(331.0, 194, 1);
glVertex3f(316.0, 194, 1);
glVertex3f(309.0, 190, 1);
glVertex3f(306.0, 181, 1);
glVertex3f(311.0, 172, 1);
glVertex3f(321.0, 167, 1);
glVertex3f(336.0, 165, 1);
glVertex3f(349.0, 165, 1);
glVertex3f(356.0, 167, 1);
glVertex3f(358.0, 171, 1);
glVertex3f(358.0, 179, 1);
glVertex3f(354.0, 184, 1);
glVertex3f(345.0, 188, 1);
glVertex3f(339.0, 190, 1);
glEnd();

//GRAMMES GIA TO touvlo
glColor3f(2.0/255.0,2.0/255.0,2.0/255.0);
glBegin(GL_LINES);
glVertex3f(212.0, 196, 1);
glVertex3f(210.0, 212, 1);
glVertex3f(209.0, 211, 1);
glVertex3f(208.0, 223, 1);
glVertex3f(208.0, 223, 1);
glVertex3f(191.0, 223, 1);
glVertex3f(191.0, 223, 1);
glVertex3f(187.0, 209, 1);
glVertex3f(187.0, 209, 1);
glVertex3f(189.0, 194, 1);
glVertex3f(189.0, 194, 1);
glVertex3f(213.0, 196, 1);
glVertex3f(207.0, 212, 1);
glVertex3f(187.0, 210, 1);
glEnd();


//to allo
glColor3f(135.0/255.0,42.0/255.0,35.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(347.0-roloi/1800, 200, 1);
glVertex3f(349.0-roloi/1800, 270, 1);
glVertex3f(364.0-roloi/1800, 283, 1);
glVertex3f(365.0-roloi/1800, 237, 1);
glVertex3f(354.0-roloi/1800, 208, 1);
glVertex3f(352.0-roloi/1800, 200, 1);
glEnd();

//palami
glColor3f(223.0/255.0,181.0/255.0,112.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(346.0-roloi/1800, 203, 1);
glVertex3f(339.0-roloi/1800, 187, 1);
glVertex3f(343.0-roloi/1800, 178, 1);
glVertex3f(352.0-roloi/1800, 179, 1);
glVertex3f(351.0-roloi/1800, 201, 1);
glEnd();

//kefali
glBegin(GL_POLYGON);
glVertex3f(327.0, 259, 1);
glVertex3f(316.0, 252, 1);
glVertex3f(301.0, 249, 1);
glVertex3f(283.0, 250, 1);
glVertex3f(281.0, 257, 1);
glVertex3f(292.0, 271, 1);
glVertex3f(297.0, 292, 1);
glVertex3f(309.0, 305, 1);
glVertex3f(319.0, 308, 1);
glVertex3f(330.0, 300, 1);
glVertex3f(333.0, 287, 1);
glVertex3f(334.0, 280, 1);
glVertex3f(335.0, 274, 1);
glVertex3f(332.0, 272, 1);
glEnd();

//proswpo+mallia
glColor3f(2.0/255.0,2.0/255.0,2.0/255.0);
glBegin(GL_LINES);
glVertex3f(312.0-roloi/15000, 279+roloi/15000, 1);
glVertex3f(321.0-roloi/15000, 281+roloi/15000, 1);
glVertex3f(316.0-roloi/15000, 281+roloi/15000, 1);
glVertex3f(315.0-roloi/15000, 269+roloi/15000, 1);
glVertex3f(314.0-roloi/15000, 269+roloi/15000, 1);
glVertex3f(325.0-roloi/15000, 271+roloi/15000, 1);
glVertex3f(324.0-roloi/15000, 265+roloi/15000, 1);
glVertex3f(327.0-roloi/15000, 257+roloi/15000, 1);
glVertex3f(327.0-roloi/15000, 257+roloi/15000, 1);
glVertex3f(311.0-roloi/15000, 264+roloi/15000, 1);
glVertex3f(311.0-roloi/15000, 264+roloi/15000, 1);
glVertex3f(302.0-roloi/15000, 263+roloi/15000, 1);
glVertex3f(323.0-roloi/15000, 310+roloi/15000, 1);
glVertex3f(322.0-roloi/15000, 317+roloi/15000, 1);
glVertex3f(323.0-roloi/15000, 309+roloi/15000, 1);
glVertex3f(326.0-roloi/15000, 318+roloi/15000, 1);
glEnd();

//afto p kapnizei
glBegin(GL_POLYGON);
glVertex3f(294.0, 263, 1);
glVertex3f(286.0, 260, 1);
glVertex3f(280.0, 259, 1);
glVertex3f(276.0, 262, 1);
glVertex3f(277.0, 267, 1);
glVertex3f(280.0, 270, 1);
glVertex3f(289.0, 266, 1);
glEnd();

//megalo mati
glBegin(GL_POLYGON);
glVertex3f(300.0-roloi/15000, 263+roloi/15000, 1);
glVertex3f(294.0-roloi/15000, 264+roloi/15000, 1);
glVertex3f(288.0-roloi/15000, 264+roloi/15000, 1);
glVertex3f(288.0-roloi/15000, 258+roloi/15000, 1);
glVertex3f(291.0-roloi/15000, 255+roloi/15000, 1);
glVertex3f(294.0-roloi/15000, 255+roloi/15000, 1);
glVertex3f(296.0-roloi/15000, 258+roloi/15000, 1);
glEnd();

//EXTRA MALLIA
glColor3f(211.0/255.0,62.0/255.0,21.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(315.0-roloi/15000, 285+roloi/15000, 1);
glVertex3f(309.0-roloi/15000, 287+roloi/15000, 1);
glVertex3f(310.0-roloi/15000, 292+roloi/15000, 1);
glVertex3f(308.0-roloi/15000, 297+roloi/15000, 1);
glVertex3f(310.0-roloi/15000, 301+roloi/15000, 1);
glVertex3f(316.0-roloi/15000, 304+roloi/15000, 1);
glVertex3f(319.0-roloi/15000, 304+roloi/15000, 1);
glVertex3f(321.0-roloi/15000, 303+roloi/15000, 1);
glVertex3f(324.0-roloi/15000, 300+roloi/15000, 1);
glVertex3f(322.0-roloi/15000, 293+roloi/15000, 1);
glVertex3f(318.0-roloi/15000, 289+roloi/15000, 1);
glEnd();
char str[6];
for(int i=0;i<roloi/3600;i++){
	glColor3f(255.0/255.0,255.0/255.0,255.0/255.0);
	glutSwapBuffers();
	frame_count++;snprintf(str, 5, "%d", frame_count);

}output(480, 350, str);
}

void DrawAnimation7(void){
glMatrixMode(GL_PROJECTION);
glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
	int i, j;
  	float x, y;

//omprela ktiria kai antikeimena
omp_plus_Stuff();



//KOILIA
glColor3f(135.0/255.0,42.0/255.0,35.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(315.0, 227, 1);
glVertex3f(297.0, 229, 1);
glVertex3f(288.0, 228, 1);
glVertex3f(274.0, 227, 1);
glVertex3f(272.0, 232, 1);
glVertex3f(267.0, 242, 1);
glVertex3f(268.0, 248, 1);
glVertex3f(276.0, 269, 1);
glVertex3f(284.0, 283, 1);
glVertex3f(293.0, 297, 1);
glVertex3f(324.0, 318, 1);
glVertex3f(340.0, 313, 1);
glVertex3f(351.0, 303, 1);
glVertex3f(361.0, 293, 1);
glVertex3f(369.0, 283, 1);
glVertex3f(371.0, 276, 1);
glVertex3f(374.0, 251, 1);
glVertex3f(351.0, 235, 1);
glVertex3f(345.0, 230, 1);
glEnd();

//aristera xeri opote to deksi tou
glBegin(GL_POLYGON);
glVertex3f(236.0-20+roloi/6000, 234-roloi/5000, 1);
glVertex3f(255.0-20+roloi/20000, 280-roloi/5000, 1);
glVertex3f(307.0-20+roloi/6000, 299-roloi/7700, 1);
glVertex3f(285.0-20+roloi/6000, 270-roloi/7700, 1);
glVertex3f(252.0-20+roloi/20000, 254-roloi/5000, 1);
glVertex3f(245.0-20+roloi/6000, 232-roloi/5000, 1);
glEnd();

//PALAMI
glColor3f(223.0/255.0,181.0/255.0,112.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(248.0-30+roloi/6000, 242-10-roloi/7000, 1);
glVertex3f(251.0-30+roloi/6000, 238-10-roloi/5000, 1);
glVertex3f(250.0-30+roloi/6000, 228-10-roloi/5000, 1);
glVertex3f(248.0-30+roloi/6000, 222-10-roloi/5000, 1);
glVertex3f(246.0-30+roloi/6000, 219-10-roloi/5000, 1);
glVertex3f(241.0-30+roloi/6000, 221-10-roloi/5000, 1);
glVertex3f(238.0-30+roloi/6000, 226-10-roloi/5000, 1);
glVertex3f(240.0-30+roloi/6000, 236-10-roloi/5000, 1);
glVertex3f(243.0-30+roloi/6000, 241-10-roloi/5000, 1);
glEnd();


//asvestis ?
glColor3f(252.0/255.0,252.0/255.0,255.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(331.0, 194, 1);
glVertex3f(316.0, 194, 1);
glVertex3f(309.0, 190, 1);
glVertex3f(306.0, 181, 1);
glVertex3f(311.0, 172, 1);
glVertex3f(321.0, 167, 1);
glVertex3f(336.0, 165, 1);
glVertex3f(349.0, 165, 1);
glVertex3f(356.0, 167, 1);
glVertex3f(358.0, 171, 1);
glVertex3f(358.0, 179, 1);
glVertex3f(354.0, 184, 1);
glVertex3f(345.0, 188, 1);
glVertex3f(339.0, 190, 1);
glEnd();
//touvlo
glColor3f(207.0/255.153,122.0/255.0,83.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(245.0+roloi/4000, 203-roloi/10000, 1);
glVertex3f(238.0+roloi/4000, 186-roloi/10000, 1);
glVertex3f(201.0+roloi/4000, 195-roloi/10000, 1);
glVertex3f(201.0+roloi/4000, 201-roloi/10000, 1);
glVertex3f(207.0+roloi/4000, 218-roloi/10000, 1);
glVertex3f(239.0+roloi/4000, 209-roloi/10000, 1);
glEnd();
//GRAMMES GIA TO touvlo
glColor3f(2.0/255.0,2.0/255.0,2.0/255.0);
glBegin(GL_LINES);
glVertex2f(208.0+roloi/4000, 219-roloi/10000);
glVertex2f(199.0+roloi/4000, 200-roloi/10000);
glVertex2f(200.0+roloi/4000, 199-roloi/10000);
glVertex2f(232.0+roloi/4000, 189-roloi/10000);
glVertex2f(232.0+roloi/4000, 189-roloi/10000);
glVertex2f(237.0+roloi/4000, 185-roloi/10000);
glVertex2f(237.0+roloi/4000, 185-roloi/10000);
glVertex2f(246.0+roloi/4000, 202-roloi/10000);
glVertex2f(246.0+roloi/4000, 202-roloi/10000);
glVertex2f(239.0+roloi/4000, 210-roloi/10000);
glVertex2f(239.0+roloi/4000, 210-roloi/10000);
glVertex2f(232.0+roloi/4000, 191-roloi/10000);
glVertex2f(199.0+roloi/4000, 199-roloi/10000);
glVertex2f(204.0+roloi/4000, 193-roloi/10000);
glVertex2f(204.0+roloi/4000, 193-roloi/10000);
glVertex2f(236.0+roloi/4000, 184-roloi/10000);
glVertex2f(240.0+roloi/4000, 209-roloi/10000);
glVertex2f(208.0+roloi/4000, 219-roloi/10000);
glEnd();


//to allo
glColor3f(135.0/255.0,42.0/255.0,35.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(347.0, 200, 1);
glVertex3f(349.0, 270, 1);
glVertex3f(364.0, 283, 1);
glVertex3f(365.0, 237, 1);
glVertex3f(354.0, 208, 1);
glVertex3f(352.0, 200, 1);
glEnd();

//palami
glColor3f(223.0/255.0,181.0/255.0,112.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(346.0, 203, 1);
glVertex3f(339.0, 187, 1);
glVertex3f(343.0, 178, 1);
glVertex3f(352.0, 179, 1);
glVertex3f(351.0, 201, 1);
glEnd();

//kefali
glBegin(GL_POLYGON);
glVertex3f(327.0+roloi/15000, 259, 1);
glVertex3f(316.0+roloi/15000, 252, 1);
glVertex3f(301.0+roloi/15000, 249, 1);
glVertex3f(283.0+roloi/15000, 250, 1);
glVertex3f(281.0+roloi/15000, 257, 1);
glVertex3f(292.0+roloi/15000, 271, 1);
glVertex3f(297.0+roloi/15000, 292, 1);
glVertex3f(309.0+roloi/15000, 305, 1);
glVertex3f(319.0+roloi/15000, 308, 1);
glVertex3f(330.0+roloi/15000, 300, 1);
glVertex3f(333.0+roloi/15000, 287, 1);
glVertex3f(334.0+roloi/15000, 280, 1);
glVertex3f(335.0+roloi/15000, 274, 1);
glVertex3f(332.0+roloi/15000, 272, 1);
glEnd();

//proswpo+mallia
glColor3f(2.0/255.0,2.0/255.0,2.0/255.0);
glBegin(GL_LINES);
glVertex3f(312.0+roloi/15000, 279-roloi/15000, 1);
glVertex3f(321.0+roloi/15000, 281-roloi/15000, 1);
glVertex3f(316.0+roloi/15000, 281-roloi/15000, 1);
glVertex3f(315.0+roloi/15000, 269-roloi/15000, 1);
glVertex3f(314.0+roloi/15000, 269-roloi/15000, 1);
glVertex3f(325.0+roloi/15000, 271-roloi/15000, 1);
glVertex3f(324.0+roloi/15000, 265-roloi/15000, 1);
glVertex3f(327.0+roloi/15000, 257-roloi/15000, 1);
glVertex3f(327.0+roloi/15000, 257-roloi/15000, 1);
glVertex3f(311.0+roloi/15000, 264-roloi/15000, 1);
glVertex3f(311.0+roloi/15000, 264-roloi/15000, 1);
glVertex3f(302.0+roloi/15000, 263-roloi/15000, 1);
glVertex3f(323.0+roloi/15000, 310-roloi/15000, 1);
glVertex3f(322.0+roloi/15000, 317-roloi/15000, 1);
glVertex3f(323.0+roloi/15000, 309-roloi/15000, 1);
glVertex3f(326.0+roloi/15000, 318-roloi/15000, 1);
glEnd();

//afto p kapnizei
glBegin(GL_POLYGON);
glVertex3f(294.0+roloi/15000, 263, 1);
glVertex3f(286.0+roloi/15000, 260, 1);
glVertex3f(280.0+roloi/15000, 259, 1);
glVertex3f(276.0+roloi/15000, 262, 1);
glVertex3f(277.0+roloi/15000, 267, 1);
glVertex3f(280.0+roloi/15000, 270, 1);
glVertex3f(289.0+roloi/15000, 266, 1);
glEnd();

//megalo mati
glBegin(GL_POLYGON);
glVertex3f(300.0+roloi/15000, 263+roloi/15000, 1);
glVertex3f(294.0+roloi/15000, 264+roloi/15000, 1);
glVertex3f(288.0+roloi/15000, 264+roloi/15000, 1);
glVertex3f(288.0+roloi/15000, 258+roloi/15000, 1);
glVertex3f(291.0+roloi/15000, 255+roloi/15000, 1);
glVertex3f(294.0+roloi/15000, 255+roloi/15000, 1);
glVertex3f(296.0+roloi/15000, 258+roloi/15000, 1);
glEnd();

//EXTRA MALLIA
glColor3f(211.0/255.0,62.0/255.0,21.0/255.0);
glBegin(GL_POLYGON);
glVertex3f(315.0+roloi/15000, 285+roloi/15000, 1);
glVertex3f(309.0+roloi/15000, 287+roloi/15000, 1);
glVertex3f(310.0+roloi/15000, 292+roloi/15000, 1);
glVertex3f(308.0+roloi/15000, 297+roloi/15000, 1);
glVertex3f(310.0+roloi/15000, 301+roloi/15000, 1);
glVertex3f(316.0+roloi/15000, 304+roloi/15000, 1);
glVertex3f(319.0+roloi/15000, 304+roloi/15000, 1);
glVertex3f(321.0+roloi/15000, 303+roloi/15000, 1);
glVertex3f(324.0+roloi/15000, 300+roloi/15000, 1);
glVertex3f(322.0+roloi/15000, 293+roloi/15000, 1);
glVertex3f(318.0+roloi/15000, 289+roloi/15000, 1);
glEnd();
char str[6];
for(int i=0;i<roloi/3600;i++){
	glColor3f(255.0/255.0,255.0/255.0,255.0/255.0);
	glutSwapBuffers();
	frame_count++;snprintf(str, 5, "%d", frame_count);

}output(480, 350, str);
}

void DrawAnimation(void){
	
if (roloi>0*3600){
DrawAnimation0();drawRain();
}
	if (roloi>1*3600){
DrawAnimation2();drawRain();
}

if (roloi>2*3600){
DrawAnimation3();drawRain();
}

	if (roloi>3*3600){
DrawAnimation4();drawRain();
}
	if (roloi>4*3600){
DrawAnimation45();drawRain();
}
	if (roloi>5*3600){
DrawAnimation5();drawRain();
}
if (roloi>6*3600){
DrawAnimation6();drawRain();
}
if (roloi>7*3600){
DrawAnimation7();drawRain();
}
glFlush();
frame_count=0;
}


void animation(void){
 	roloi+=1;
	DrawAnimation();
	glutPostRedisplay();

}

void reshape(int x, int y){
    glMatrixMode(GL_PROJECTION);  
    glLoadIdentity();
    glOrtho(0, 720.0, 0.0, 480.0, -1.0,1.0);
    glMatrixMode(GL_MODELVIEW);
    mode = MODE_STROKE;
   font_index = 0;
}

int main(int argc, char** argv){
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(720,480);
glutInitWindowPosition(0, 0);
glMatrixMode(GL_PROJECTION);
glOrtho(0, 720.0, 0.0, 480.0, -1.0,1.0);
glutCreateWindow(argv[0]);
init();
glutDisplayFunc(DrawAnimation);
glutReshapeFunc(reshape);
glutIdleFunc(animation);
glutMainLoop();
return 0;
} 











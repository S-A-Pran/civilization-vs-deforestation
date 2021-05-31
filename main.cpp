#include<windows.h>
#include <GL/glut.h>
#include<stdio.h>
#include<GL/gl.h>
#include<math.h>

//Sabbir Alam Pran
//171-15-9267
void init(void){
    glClearColor(0.3,0.3,0.3,0.0);//background color clear
    glMatrixMode(GL_PROJECTION);//project matrix
    glLoadIdentity();//load matrix
    gluOrtho2D(0.0, 400.0, 0.0, 400.0);//resolution
}


void circle(int x, int y, float r)
{
    float theta;
    int i;
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x+r*cos(theta),y+r*sin(theta));
	}
	glEnd();
}

void halfCircle(int x, int y, float r)
{
    float theta;
    int i;
	glBegin(GL_POLYGON);
	for(i=0;i<180;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x+r*cos(theta),y+r*sin(theta));
	}
	glEnd();
}

void building(void)
{
//first building
	glColor3f(0.627, 0.322, 0.176);

	glBegin(GL_POLYGON);

        glVertex2i(0, 220);
		glVertex2i(30, 220);
		glVertex2i(30, 280);
		glVertex2i(0, 280);

	glEnd();

    glColor3f(0.0, 0.0, 0.0);//3rd floor first window
	glBegin(GL_POLYGON);

        glVertex2i(5, 265);
		glVertex2i(10, 265);
		glVertex2i(10, 272);
        glVertex2i(5, 272);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//3rd floor 2nd window
	glBegin(GL_POLYGON);

        glVertex2i(20, 265);
		glVertex2i(25, 265);
		glVertex2i(25, 272);
        glVertex2i(20, 272);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//2nd floor 1st window
	glBegin(GL_POLYGON);

        glVertex2i(5, 250);
		glVertex2i(10, 250);
		glVertex2i(10, 257);
        glVertex2i(5, 257);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//2nd floor 2nd window
	glBegin(GL_POLYGON);

        glVertex2i(20, 250);
		glVertex2i(25, 250);
		glVertex2i(25, 257);
        glVertex2i(20, 257);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//1st floor 1st window
	glBegin(GL_POLYGON);

        glVertex2i(5, 235);
		glVertex2i(10, 235);
		glVertex2i(10, 242);
        glVertex2i(5, 242);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//1st floor 2nd window
	glBegin(GL_POLYGON);

        glVertex2i(20, 235);
		glVertex2i(25, 235);
		glVertex2i(25, 242);
        glVertex2i(20, 242);

	glEnd();
//1st middle line

    glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE);

        glVertex3f(30.5, 220.0,0.0);
		glVertex3f(30.5, 280.0,0.0);

	glEnd();

//2nd building
    glColor3f(0.627, 0.322, 0.176);

	glBegin(GL_POLYGON);

        glVertex2f(30.6, 220);
		glVertex2f(66, 220);
		glVertex2f(66, 290);
		glVertex2f(30.6, 290);

	glEnd();

    glColor3f(0.0, 0.0, 0.0);//3rd floor first window
	glBegin(GL_POLYGON);

        glVertex2i(5, 265);
		glVertex2i(10, 265);
		glVertex2i(10, 272);
        glVertex2i(5, 272);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//3rd floor 2nd window
	glBegin(GL_POLYGON);

        glVertex2i(20, 265);
		glVertex2i(25, 265);
		glVertex2i(25, 272);
        glVertex2i(20, 272);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//2nd floor 1st window
	glBegin(GL_POLYGON);

        glVertex2i(5, 250);
		glVertex2i(10, 250);
		glVertex2i(10, 257);
        glVertex2i(5, 257);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//2nd floor 2nd window
	glBegin(GL_POLYGON);

        glVertex2i(20, 250);
		glVertex2i(25, 250);
		glVertex2i(25, 257);
        glVertex2i(20, 257);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//1st floor 1st window
	glBegin(GL_POLYGON);

        glVertex2i(5, 235);
		glVertex2i(10, 235);
		glVertex2i(10, 242);
        glVertex2i(5, 242);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//1st floor 2nd window
	glBegin(GL_POLYGON);

        glVertex2i(20, 235);
		glVertex2i(25, 235);
		glVertex2i(25, 242);
        glVertex2i(20, 242);

	glEnd();


//middle line
    glColor3f(1.0, 1.0, 1.0);//
	glBegin(GL_LINE);

        glVertex3f(66.5, 220.0,0.0);
		glVertex3f(66.5, 245.0,0.0);

	glEnd();
//3rd building
    glColor3f(0.627, 0.322, 0.176);

	glBegin(GL_POLYGON);

        glVertex2f(66.6, 220);
		glVertex2f(96, 220);
		glVertex2f(96, 245);
		glVertex2f(66.6, 245);

	glEnd();
	//roof middle line
	glColor3f(1.0, 1.0, 1.0);//
	glBegin(GL_LINE);

        glVertex3f(66.6, 245.5,0.0);
		glVertex3f(96, 245.5,0.0);

	glEnd();
	//roof
	glColor3f(0.627, 0.322, 0.176);

	glBegin(GL_POLYGON);

        glVertex2f(66.6, 245.6 );
		glVertex2f(96, 245.6);
		glVertex2f(105, 260 );
		glVertex2f(75, 260);

	glEnd();
	//front-left middle line
	glColor3f(1.0, 1.0, 1.0);//
	glBegin(GL_LINE);

        glVertex3f(96.5, 245,0.0);
		glVertex3f(96.5, 245,0.0);

	glEnd();
	//front
	glColor3f(0.627, 0.322, 0.176);

	glBegin(GL_POLYGON);

        glVertex2f(96.6, 220 );
		glVertex2f(116.6, 220);
		glVertex2f(116.6, 245 );
		glVertex2f(105, 260);
		glVertex2f(96.6,245);

	glEnd();

    //front door
    glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_POLYGON);

        glVertex2f(98, 221);
		glVertex2f(115.4, 221);
		glVertex2f(115.4, 245 );
		glVertex2f(98, 245);


	glEnd();

//middle line
    glColor3f(1.0, 1.0, 1.0);//
	glBegin(GL_LINE);

        glVertex3f(116.7, 220.0,0.0);
		glVertex3f(116.7, 245.0,0.0);

	glEnd();


//4th building
glColor3f(0.627, 0.322, 0.176);

	glBegin(GL_POLYGON);

        glVertex2f(117, 220);
		glVertex2f(142, 220);
		glVertex2f(142, 240);
		glVertex2f(117, 240);

	glEnd();
//roof middle line
	glColor3f(1.0, 1.0, 1.0);//
	glBegin(GL_LINE);

        glVertex3f(117, 240.5,0.0);
		glVertex3f(142, 240.5,0.0);

	glEnd();

//roof
    glColor3f(0.627, 0.322, 0.176);

	glBegin(GL_POLYGON);

        glVertex2f(117, 240.6 );
		glVertex2f(142, 240.6);
		glVertex2f(150.1, 251 );
		glVertex2f(125, 251);

	glEnd();

//front-left middle line
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE);

        glVertex3f(142.5, 220,0.0);
		glVertex3f(142.5, 220,0.0);

	glEnd();
//front
    glColor3f(0.627, 0.322, 0.176);

	glBegin(GL_POLYGON);

        glVertex2f(142.6, 220 );
		glVertex2f(160, 220);
		glVertex2f(160, 240 );
		glVertex2f(150.1, 251);
		glVertex2f(142.6,240);

	glEnd();
//front door
    glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_POLYGON);

        glVertex2f(143.2, 221);
		glVertex2f(159.4, 221);
		glVertex2f(159.4, 240 );
		glVertex2f(143.2, 240);

    glEnd();
//middle line
    glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE);

        glVertex3f(160.5, 240,0.0);
		glVertex3f(160.5, 240,0.0);

	glEnd();


//5th building

    glColor3f(0.627, 0.322, 0.176);

	glBegin(GL_POLYGON);

        glVertex2f(160.6, 220 );
		glVertex2f(275, 220);
		glVertex2f(275, 265 );
		glVertex2f(160.6, 265);

	glEnd();
	//1st window
	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_POLYGON);

        glVertex2f(170, 230);
		glVertex2f(180, 230);
		glVertex2f(180, 255 );
		glVertex2f(170, 255);

	glEnd();
	//2nd window
	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_POLYGON);

        glVertex2f(190, 230);
		glVertex2f(200, 230);
		glVertex2f(200, 255 );
		glVertex2f(190, 255);

	glEnd();
//3rd window
	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_POLYGON);

        glVertex2f(210, 230);
		glVertex2f(220, 230);
		glVertex2f(220, 255 );
		glVertex2f(210, 255);

	glEnd();
	//4th window
	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_POLYGON);

        glVertex2f(230, 230);
		glVertex2f(240, 230);
		glVertex2f(240, 255 );
		glVertex2f(230, 255);

	glEnd();
	//5th window
	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_POLYGON);

        glVertex2f(250, 230);
		glVertex2f(260, 230);
		glVertex2f(260, 255 );
		glVertex2f(250, 255);

	glEnd();
//middle line

    glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE);

        glVertex3f(275.5, 220.0,0.0);
		glVertex3f(275.5, 265.0,0.0);

	glEnd();


//6th building
	glColor3f(0.627, 0.322, 0.176);

	glBegin(GL_POLYGON);

        glVertex2i(276, 220);
		glVertex2i(306, 220);
		glVertex2i(306, 280);
		glVertex2i(276, 280);

	glEnd();

    glColor3f(0.0, 0.0, 0.0);//3rd floor first window
	glBegin(GL_POLYGON);

        glVertex2i(281, 265);
		glVertex2i(286, 265);
		glVertex2i(286, 272);
        glVertex2i(281, 272);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//3rd floor 2nd window
	glBegin(GL_POLYGON);

        glVertex2i(296, 265);
		glVertex2i(301, 265);
		glVertex2i(301, 272);
        glVertex2i(296, 272);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//2nd floor 1st window
	glBegin(GL_POLYGON);

        glVertex2i(281, 250);
		glVertex2i(286, 250);
		glVertex2i(286, 257);
        glVertex2i(281, 257);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//2nd floor 2nd window
	glBegin(GL_POLYGON);

        glVertex2i(296, 250);
		glVertex2i(301, 250);
		glVertex2i(301, 257);
        glVertex2i(296, 257);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//1st floor 1st window
	glBegin(GL_POLYGON);

        glVertex2i(281, 235);
		glVertex2i(286, 235);
		glVertex2i(286, 242);
        glVertex2i(281, 242);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//1st floor 2nd window
	glBegin(GL_POLYGON);

        glVertex2i(296, 235);
		glVertex2i(301, 235);
		glVertex2i(301, 242);
        glVertex2i(296, 242);

	glEnd();
//middle line
glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE);

        glVertex3f(306.5, 220.0,0.0);
		glVertex3f(306.5, 280.0,0.0);

	glEnd();
//7th building

    glColor3f(0.627, 0.322, 0.176);

	glBegin(GL_POLYGON);

        glVertex2f(306.6, 220);
		glVertex2f(342, 220);
		glVertex2f(342, 290);
		glVertex2f(306.6, 290);

	glEnd();

    glColor3f(0.0, 0.0, 0.0);//3rd floor first window
	glBegin(GL_POLYGON);

        glVertex2i(5, 265);
		glVertex2i(10, 265);
		glVertex2i(10, 272);
        glVertex2i(5, 272);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//3rd floor 2nd window
	glBegin(GL_POLYGON);

        glVertex2i(20, 265);
		glVertex2i(25, 265);
		glVertex2i(25, 272);
        glVertex2i(20, 272);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//2nd floor 1st window
	glBegin(GL_POLYGON);

        glVertex2i(5, 250);
		glVertex2i(10, 250);
		glVertex2i(10, 257);
        glVertex2i(5, 257);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//2nd floor 2nd window
	glBegin(GL_POLYGON);

        glVertex2i(20, 250);
		glVertex2i(25, 250);
		glVertex2i(25, 257);
        glVertex2i(20, 257);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//1st floor 1st window
	glBegin(GL_POLYGON);

        glVertex2i(5, 235);
		glVertex2i(10, 235);
		glVertex2i(10, 242);
        glVertex2i(5, 242);

	glEnd();

	glColor3f(0.0, 0.0, 0.0);//1st floor 2nd window
	glBegin(GL_POLYGON);

        glVertex2i(20, 235);
		glVertex2i(25, 235);
		glVertex2i(25, 242);
        glVertex2i(20, 242);

	glEnd();
//middle line
    glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE);

        glVertex3f(342.5, 290.0,0.0);
		glVertex3f(342.5, 290.0,0.0);

	glEnd();
//8th building
    glColor3f(0.627, 0.322, 0.176);

	glBegin(GL_POLYGON);

        glVertex2f(342.6, 220);
		glVertex2f(400, 220);
		glVertex2f(400, 275);
		glVertex2f(342.6, 275);

	glEnd();
//gate

    glColor3f(0, 0, 0);

	glBegin(GL_POLYGON);

        glVertex2f(375, 221);
		glVertex2f(400, 221);
		glVertex2f(400, 250);
		glVertex2f(375, 250);

	glEnd();


}
void fume(void){
//fume
    glColor3f(0, 0, 0);

	glBegin(GL_POLYGON);

        glVertex2f(375, 275);
		glVertex2f(395, 275);
		glVertex2f(390, 290);
		glVertex2f(380, 290);


	glEnd();
    glColor3f(0, 0, 0);

	glBegin(GL_POLYGON);

        glVertex2f(380, 290);
		glVertex2f(390, 290);
		glVertex2f(390, 300);
		glVertex2f(380, 300);


	glEnd();
//fume
glColor3f(0, 0, 0);

	glBegin(GL_POLYGON);

        glVertex2f(350, 275);
		glVertex2f(370, 275);
		glVertex2f(370, 290);
		glVertex2f(350, 290);


	glEnd();
    glColor3f(0, 0, 0);

	glBegin(GL_POLYGON);

        glVertex2f(355, 290);
		glVertex2f(365, 290);
		glVertex2f(365, 300);
		glVertex2f(355, 300);


	glEnd();
//fume
glColor3f(0, 0, 0);

	glBegin(GL_POLYGON);

        glVertex2f(240, 265);
		glVertex2f(250, 265);
		glVertex2f(250, 285);
		glVertex2f(240, 285);


	glEnd();
    glColor3f(0, 0, 0);

	glBegin(GL_POLYGON);

        glVertex2f(225, 265);
		glVertex2f(235, 265);
		glVertex2f(235, 300);
		glVertex2f(225, 300);


	glEnd();
//fume
glBegin(GL_POLYGON);

        glVertex2f(130, 251);
		glVertex2f(145, 251);
		glVertex2f(140, 260);
		glVertex2f(135, 260);


	glEnd();
    glColor3f(0, 0, 0);

	glBegin(GL_POLYGON);

        glVertex2f(135, 260);
		glVertex2f(140, 260);
		glVertex2f(140, 265);
		glVertex2f(135, 265);


	glEnd();
//fume
glBegin(GL_POLYGON);

        glVertex2f(80, 260);
		glVertex2f(100, 260);
		glVertex2f(95, 270);
		glVertex2f(85, 270);


	glEnd();
    glColor3f(0, 0, 0);

	glBegin(GL_POLYGON);

        glVertex2f(85, 270);
		glVertex2f(95, 270);
		glVertex2f(95, 280);
		glVertex2f(85, 280);


	glEnd();




}



void run_fume(void)
{
    //first
    glColor3f(.8, .8, .8);
    circle(90,285,5);

    glColor3f(.8, .8, .8);
    circle(90,290,7);

    glColor3f(.7, .7, .7);
    circle(90,295,8);

    glColor3f(.8, .8, .8);
    circle(90,300,9);

    glColor3f(.6, .6, .6);
    circle(90,305,10);

    glColor3f(.8, .8, .8);
    circle(90,310,11);

    glColor3f(.8, .8, .8);
    circle(90,315,12);

    glColor3f(.5, .5, .5);
    circle(90,320,13);

    glColor3f(.8, .8, .8);
    circle(90,325,14);

    //second

    glColor3f(.8, .8, .8);
    circle(137.5,270,5);

    glColor3f(.8, .8, .8);
    circle(137.5,275,7);

    glColor3f(.7, .7, .7);
    circle(137.5,280,8);

    glColor3f(.8, .8, .8);
    circle(137.5,285,9);

    glColor3f(.6, .6, .6);
    circle(137.5,290,10);

    glColor3f(.8, .8, .8);
    circle(137.5,295,11);

    glColor3f(.8, .8, .8);
    circle(137.5,300,12);

    glColor3f(.5, .5, .5);
    circle(137.5,305,13);

    glColor3f(.8, .8, .8);
    circle(137.5,310,14);

//3rd

    glColor3f(.8, .8, .8);
    circle(230,305,5);

    glColor3f(.8, .8, .8);
    circle(230,310,7);

    glColor3f(.7, .7, .7);
    circle(230,315,8);

    glColor3f(.8, .8, .8);
    circle(230,315,9);

    glColor3f(.6, .6, .6);
    circle(230,320,10);

    glColor3f(.8, .8, .8);
    circle(230,325,11);

    glColor3f(.8, .8, .8);
    circle(230,330,12);

    glColor3f(.5, .5, .5);
    circle(230,335,13);

    glColor3f(.8, .8, .8);
    circle(230,320,14);

//4th

    glColor3f(.8, .8, .8);
    circle(245,295,5);

    glColor3f(.8, .8, .8);
    circle(245,300,7);

    glColor3f(.7, .7, .7);
    circle(245,305,8);

    glColor3f(.8, .8, .8);
    circle(245,310,9);

    glColor3f(.6, .6, .6);
    circle(245,315,10);

//5th

    glColor3f(.8, .8, .8);
    circle(360,305,5);

    glColor3f(.8, .8, .8);
    circle(360,310,7);

    glColor3f(.7, .7, .7);
    circle(360,315,8);

    glColor3f(.8, .8, .8);
    circle(360,320,9);

    glColor3f(.6, .6, .6);
    circle(360,325,10);

    glColor3f(.8, .8, .8);
    circle(360,330,11);

    glColor3f(.8, .8, .8);
    circle(360,335,12);

    glColor3f(.5, .5, .5);
    circle(360,340,13);

    glColor3f(.8, .8, .8);
    circle(360,345,14);

//6th

    glColor3f(.8, .8, .8);
    circle(385,300,5);

    glColor3f(.8, .8, .8);
    circle(385,305,7);

    glColor3f(.7, .7, .7);
    circle(385,310,8);

    glColor3f(.8, .8, .8);
    circle(385,315,9);

    glColor3f(.6, .6, .6);
    circle(385,320,10);

    glColor3f(.8, .8, .8);
    circle(385,325,11);

    glColor3f(.8, .8, .8);
    circle(385,330,12);

    glColor3f(.5, .5, .5);
    circle(385,335,13);

    glColor3f(.8, .8, .8);
    circle(385,340,14);

     glColor3f(.8, .8, .8);
    circle(385,345,15);

}

void car(void)
{
    glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_POLYGON);

        glVertex2f(365, 190);
		glVertex2f(395, 190);
		glVertex2f(395, 200);
		glVertex2f(365, 200);


	glEnd();
	glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_POLYGON);

        glVertex2f(370, 200);
		glVertex2f(390, 200);
		glVertex2f(385, 215);
		glVertex2f(375, 215);


	glEnd();

	glColor3f(.5,.5,.5);
	circle(373,190,5);

	glColor3f(.5,.5,.5);
	circle(385,190,5);





}



void road(){
    //border
    glColor3f(0.1, 0.1, 0.1);

	glBegin(GL_POLYGON);

        glVertex2f(0, 215);
		glVertex2f(400, 215);
		glVertex2f(400, 220);
		glVertex2f(0, 220);


	glEnd();
	//road
	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_POLYGON);

        glVertex2f(0, 180);
		glVertex2f(400, 180);
		glVertex2f(400, 215);
		glVertex2f(0, 215);


	glEnd();
	//white sign
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

        glVertex2f(5, 195.8);
		glVertex2f(20, 195.8);
		glVertex2f(25, 200.2);
		glVertex2f(10, 200.2);


	glEnd();
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

        glVertex2f(35, 195.8);
		glVertex2f(50, 195.8);
		glVertex2f(55, 200.2);
		glVertex2f(40, 200.2);


	glEnd();

    glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

        glVertex2f(65, 195.8);
		glVertex2f(80, 195.8);
		glVertex2f(85, 200.2);
		glVertex2f(70, 200.2);


	glEnd();
    glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

        glVertex2f(95, 195.8);
		glVertex2f(110, 195.8);
		glVertex2f(115, 200.2);
		glVertex2f(100, 200.2);


	glEnd();
    glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

        glVertex2f(125, 195.8);
		glVertex2f(140, 195.8);
		glVertex2f(145, 200.2);
		glVertex2f(130, 200.2);


	glEnd();
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

        glVertex2f(155, 195.8);
		glVertex2f(170, 195.8);
		glVertex2f(175, 200.2);
		glVertex2f(160, 200.2);


	glEnd();
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

        glVertex2f(185, 195.8);
		glVertex2f(200, 195.8);
		glVertex2f(205, 200.2);
		glVertex2f(190, 200.2);


	glEnd();
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

        glVertex2f(215, 195.8);
		glVertex2f(230, 195.8);
		glVertex2f(235, 200.2);
		glVertex2f(220, 200.2);


	glEnd();
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

        glVertex2f(245, 195.8);
		glVertex2f(260, 195.8);
		glVertex2f(265, 200.2);
		glVertex2f(250, 200.2);


	glEnd();
    glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

        glVertex2f(275, 195.8);
		glVertex2f(290, 195.8);
		glVertex2f(295, 200.2);
		glVertex2f(280, 200.2);


	glEnd();
    glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

        glVertex2f(305, 195.8);
		glVertex2f(320, 195.8);
		glVertex2f(325, 200.2);
		glVertex2f(310, 200.2);


	glEnd();
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

        glVertex2f(335, 195.8);
		glVertex2f(350, 195.8);
		glVertex2f(355, 200.2);
		glVertex2f(340, 200.2);


	glEnd();
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

        glVertex2f(365, 195.8);
		glVertex2f(380, 195.8);
		glVertex2f(385, 200.2);
		glVertex2f(370, 200.2);


	glEnd();
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

        glVertex2f(395, 195.8);
		glVertex2f(410, 195.8);
		glVertex2f(415, 200.2);
		glVertex2f(400, 200.2);


	glEnd();





}
void cannel(void){
    glColor3f(.5, .5, .5);
//border
	glBegin(GL_POLYGON);

        glVertex2f(0, 155);
		glVertex2f(400, 155);
		glVertex2f(400, 180);
		glVertex2f(0, 180);


	glEnd();
	//water
	glColor3f(0.0, 0.7, 0.9);

	glBegin(GL_POLYGON);

        glVertex2f(0, 75);
		glVertex2f(400, 75);
		glVertex2f(400, 155);
		glVertex2f(0, 155);


	glEnd();

	//dust

	glColor3f(0.5, 0.5, 0.5);

	glBegin(GL_POLYGON);

        glVertex2f(125, 125);
		glVertex2f(130, 125);
		glVertex2f(130, 130);
		glVertex2f(125, 130);


	glEnd();

	glBegin(GL_POLYGON);

        glVertex2f(120.5, 120);
		glVertex2f(130.5, 120);
		glVertex2f(130.5, 125);
		glVertex2f(120.5, 125);


	glEnd();

	glColor3f(.2, .2, 0.2);
	circle(140,120,7);

	glColor3f(.2, .2, 0.2);
	circle(145,120,7);

	glColor3f(.2, .2, 0.2);
	circle(140,125,7);

	glColor3f(.2, .2, 0.2);
	circle(137,120,7);

	//dust 2

	glBegin(GL_POLYGON);

glColor3f(0.5, 0.5, 0.5);
        glVertex2f(160.5, 120);
		glVertex2f(155.5, 120);
		glVertex2f(155.5, 125);
		glVertex2f(160.5, 125);


	glEnd();


	glColor3f(.2, .2, 0.2);
	circle(0,120,7);

	glColor3f(.2, .2, 0.2);
	circle(10,120,7);

	glColor3f(.2, .2, 0.2);
	circle(10,125,7);

	glColor3f(.2, .2, 0.2);
	circle(0,120,7);

	glColor3f(.2, .2, 0.2);
	circle(0,125,7);

	glColor3f(.2, .2, 0.2);
	circle(10,115,7);

	glColor3f(.2, .2, 0.2);
	circle(10,130,7);

	glColor3f(.2, .2, 0.2);
	circle(15,110,7);

	glColor3f(.2, .2, 0.2);
	circle(10,125,7);

	glColor3f(.2, .2, 0.2);
	circle(15,115,7);

	glColor3f(.2, .2, 0.2);
	circle(10,130,7);

	glColor3f(.2, .2, 0.2);
	circle(20,110,7);



	glColor3f(.2, .2, 0.2);
	circle(400,125,7);

	glColor3f(.2, .2, 0.2);
	circle(395,115,7);

	glColor3f(.2, .2, 0.2);
	circle(395,130,7);

	glColor3f(.2, .2, 0.2);
	circle(400,110,7);




	glColor3f(.2, .2, 0.2);
	circle(355,125,7);

	glColor3f(.2, .2, 0.2);
	circle(360,115,7);

	glColor3f(.2, .2, 0.2);
	circle(355,130,7);

	glColor3f(.2, .2, 0.2);
	circle(360,110,7);



	glColor3f(.2, .2, 0.2);
	circle(380,125,7);

	glColor3f(.2, .2, 0.2);
	circle(385,115,7);

	glColor3f(.2, .2, 0.2);
	circle(380,130,7);

	glColor3f(.2, .2, 0.2);
	circle(385,110,7);


	glColor3f(0.5, 0.5, 0.5);

	glBegin(GL_POLYGON);

        glVertex2f(225, 125);
		glVertex2f(230, 125);
		glVertex2f(230, 130);
		glVertex2f(225, 130);


	glEnd();

	glBegin(GL_POLYGON);

        glVertex2f(220.5, 120);
		glVertex2f(230.5, 120);
		glVertex2f(230.5, 125);
		glVertex2f(220.5, 125);


	glEnd();

	glColor3f(.2, .2, 0.2);
	circle(240,120,7);

	glColor3f(.2, .2, 0.2);
	circle(245,120,7);

	glColor3f(.2, .2, 0.2);
	circle(240,125,7);

	glColor3f(.2, .2, 0.2);
	circle(237,120,7);



}

void field(void)
{
    glColor3f(0.0, 0.7, 0.0);

	glBegin(GL_POLYGON);

        glVertex2f(0, 0);
		glVertex2f(400, 0);
		glVertex2f(400, 75);
		glVertex2f(0, 75);


	glEnd();

    glColor3f(0.627, 0.322, 0.176);

	glBegin(GL_POLYGON);

        glVertex2f(60, 28);
		glVertex2f(100, 35);
		glVertex2f(100, 50);
		glVertex2f(60, 45);


	glEnd();
    glColor3f(0.627, 0.322, 0.176);

	glBegin(GL_POLYGON);

        glVertex2f(130, 30);
		glVertex2f(140, 30);
		glVertex2f(140, 50);
		glVertex2f(130, 50);


	glEnd();
	glColor3f(0.627, 0.322, 0.176);
	glBegin(GL_POLYGON);

        glVertex2f(140, 50);
		glVertex2f(185, 45);
		glVertex2f(190, 50);
		glVertex2f(145, 60.5);


	glEnd();
	glColor3f(0.0, 0.3, 0.0);
    glBegin(GL_POLYGON);

        glVertex2f(180, 30.9);
		glVertex2f(200, 45);
		glVertex2f(195, 65);
	glEnd();
	glColor3f(0.0, 0.3, 0.0);
    glBegin(GL_POLYGON);

        glVertex2f(190, 35.5);
		glVertex2f(210, 40);
		glVertex2f(200.5, 55.5);
	glEnd();
	glColor3f(0.0, 0.3, 0.0);
    glBegin(GL_POLYGON);

        glVertex2f(170, 35);
		glVertex2f(195, 45);
		glVertex2f(190, 70);
	glEnd();

	glColor3f(0.627, 0.322, 0.176);
    glBegin(GL_POLYGON);

        glVertex2f(245, 45);
		glVertex2f(290, 45);
		glVertex2f(290, 55);
		glVertex2f(245, 55);
	glEnd();

	glColor3f(0.627, 0.322, 0.176);
    glBegin(GL_POLYGON);

        glVertex2f(305, 45);
		glVertex2f(313, 45);
		glVertex2f(313, 60);
		glVertex2f(305, 60);
	glEnd();

	glColor3f(0.627, 0.322, 0.176);
    glBegin(GL_POLYGON);

        glVertex2f(350, 40);
		glVertex2f(358.8, 40);
		glVertex2f(358.8, 75);
		glVertex2f(350, 75);
	glEnd();


	glColor3f(0.0, 0.3, 0.0);
    glBegin(GL_POLYGON);

        glVertex2f(335, 70);
		glVertex2f(375, 70);
		glVertex2f(355, 95);
	glEnd();

	glColor3f(0.0, 0.3, 0.0);
    glBegin(GL_POLYGON);

        glVertex2f(340, 85);
		glVertex2f(370, 85);
		glVertex2f(355, 110);
	glEnd();

	glColor3f(0.0, 0.3, 0.0);
	glBegin(GL_POLYGON);

        glVertex2f(345, 100);
		glVertex2f(365, 100);
		glVertex2f(355, 120);
	glEnd();


}

float man_move = 0.0f;
float y=0.0f;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    building();
    fume();
    road();
    cannel();
    field();
    run_fume();
    //car();

     ///
    glPushMatrix();
    glTranslatef(man_move,y,0.0);
    car();
    glPopMatrix();
    man_move -=0.4;
    y +=0.001;
    if(man_move < -400)
    {
        man_move = 0;
        y =0;


    }



    glutSwapBuffers();
}

void update(int value)
{
    glutPostRedisplay();
    glutTimerFunc(25, update, 0);
}


int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(1000, 600);					// Set window size
	glutCreateWindow("Computer Graphics Project:");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(display);		// Send graphics to display window
	glutTimerFunc(25,update,0);
	glutMainLoop();					// Display everything and wait

	return 0;
}

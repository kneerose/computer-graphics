#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <iostream>
using namespace std;
float x_position = -20;
float y_position = -20;
float x_position1 = -10;
float y_position1 = -10;
float x_position2 = -5;
float y_position2 = -5;
int state =1;
int countr=0,countg=0,countb=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(x_position,y_position);
    glVertex2f(x_position+2,y_position);
    glVertex2f(x_position+2,y_position+2);
    glVertex2f(x_position,y_position+2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(x_position1,y_position1);
    glVertex2f(x_position1+2,y_position1);
    glVertex2f(x_position1+2,y_position1+2);
    glVertex2f(x_position1,y_position1+2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(x_position2,y_position2);
    glVertex2f(x_position2+2,y_position2);
    glVertex2f(x_position2+2,y_position2+2);
    glVertex2f(x_position2,y_position2+2);
    glEnd();
    glutSwapBuffers();
}
void init()
{
    glClearColor(0.0,0.0,0.0,1.0);
}
void reshape(int w,int h)
{
   glViewport(0,0,w,h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(-20,20,-20,20);
   glMatrixMode(GL_MODELVIEW);

}
void timer (int)
{
    glutPostRedisplay();
    glutTimerFunc(10,timer,0);
    switch(state)
    {
    case 1:
        //for blue square
           if (x_position2<=3 && y_position2==-5)
                x_position2+=0.25;
            else if (x_position2>=3 && y_position2<=3)
                y_position2+=0.25;
            else if (x_position2>=-5 && y_position2>=3)
                x_position2-=0.25;
            else if(int(x_position2)==-5 && int(y_position2)==-4)
                {
                    state = 4;
                }
            else if (x_position2<=-5 && y_position2>=-5)
                {y_position2-=0.25;}

        //for green
            if (x_position1<=8 && y_position1==-10)
                x_position1+=0.25;
            else if (x_position1>=8 && y_position1<=8)
                y_position1+=0.25;
            else if (x_position1>=-10 && y_position1>=8)
                x_position1-=0.25;
            else if(int(x_position1)==-10 && int(y_position1)==-9)
            {
                state = 3;
            }
            else if (x_position1<=-10 && y_position1>=-10)
                y_position1-=0.25;
        //for red square
            if(x_position<=18 && y_position==-20)
                {x_position +=0.25;
                //cout<<x_position<<"\t"<<y_position<<endl;
                }
            else if(y_position<=18 && x_position>=18)
                {y_position+=0.25;
                //cout<<x_position<<"\t"<<y_position<<endl;
                }
            else if(x_position>=-20 && y_position>=18)
                {x_position-=0.25;
                //cout<<x_position<<"\t"<<y_position<<endl;
                }
            else if(int(x_position)==-20 && int(y_position)==-19)
                {state=2;
                }
            else if(x_position<=-20 && y_position>=-20)
                {y_position-=0.25;
                //cout<<x_position<<"\t"<<y_position<<endl;
                }
            break;

    case 2 :
            if(x_position<=-20 && y_position>=-20)
                {y_position-=0.5;}
            state--;
            countr++;
            cout<<"red complete "<<countr<<" rotation\t\t";
            cout<<"green complete "<<countg<<" rotation\t";
            cout<<"blue complete "<<countb<<" rotation"<<endl;
            break;

    case 3:
        if(x_position1<=-10 && y_position1>=-10)
                {y_position1-=0.5;}
            state-=2;
            countg++;
            cout<<"red complete "<<countr<<" rotation\t\t";
            cout<<"green complete "<<countg<<" rotation\t";
            cout<<"blue complete "<<countb<<" rotation"<<endl;
        break;
    case 4:
        if(x_position2<=-5 && y_position2>=-5)
                {y_position2-=0.5;}
            state-=3;
            countb++;
            cout<<"red complete "<<countr<<" rotation\t\t";
            cout<<"green complete"<<countg<<" rotation\t";
            cout<<"blue complete "<<countb<<" rotation"<<endl;
        break;
    }
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(200,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("Shape");
    cout<<"\tRed"<<"\t\t\t\t";
    cout<<"Green"<<"\t\t\t\t";
    cout<<"Blue"<<endl;
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0,timer,0);
    init();
    glutMainLoop();

}

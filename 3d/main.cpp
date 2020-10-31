#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <iostream>
using namespace std;
float angle=60.0;
int state=1;
int ch;
float x_position = -5;
void displayCube()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslated(0.0,0.0,x_position);
    glRotatef(angle,1.0,1.0,1.0);
    glBegin(GL_QUADS);
    //front
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-1.0,1.0,1.0);
    glVertex3f(-1.0,-1.0,1.0);
    glVertex3f(1.0,-1.0,1.0);
    glVertex3f(1.0,1.0,1.0);
    //back
    glColor3f(0.0,1.0,0.0);
    glVertex3f(1.0,1.0,-1.0);
    glVertex3f(1.0,-1.0,-1.0);
    glVertex3f(-1.0,-1.0,-1.0);
    glVertex3f(-1.0,1.0,-1.0);
    //right
    glColor3f(0.0,0.0,1.0);
    glVertex3f(1.0,1.0,1.0);
    glVertex3f(1.0,-1.0,1.0);
    glVertex3f(1.0,-1.0,-1.0);
    glVertex3f(1.0,1.0,-1.0);
    //left
    glColor3f(1.0,1.0,0.0);
    glVertex3f(-1.0,1.0,-1.0);
    glVertex3f(-1.0,-1.0,-1.0);
    glVertex3f(-1.0,-1.0,1.0);
    glVertex3f(-1.0,1.0,1.0);
    //top
    glColor3f(0.0,1.0,1.0);
    glVertex3f(-1.0,1.0,-1.0);
    glVertex3f(-1.0,1.0,1.0);
    glVertex3f(1.0,1.0,1.0);
    glVertex3f(1.0,1.0,-1.0);
    //bottom
    glColor3f(1.0,0.0,1.0);
    glVertex3f(-1.0,-1.0,-1.0);
    glVertex3f(-1.0,-1.0,1.0);
    glVertex3f(1.0,-1.0,1.0);
    glVertex3f(1.0,-1.0,-1.0);
    glEnd();
    glutSwapBuffers();
}
void displayprism()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslated(0.0,0.0,x_position);
    glRotatef(angle,1.0,1.0,1.0);
    glBegin(GL_QUADS);
    //front
    glColor3f(1.0,0.0,0.0);
    glVertex3f(0.0,1.0,1.0);
    glVertex3f(0.0,0.0,1.0);
    glVertex3f(2.0,0.0,1.0);
    glVertex3f(2.0,1.0,1.0);
    //back
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.0,1.0,0.0);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(2.0,0.0,0.0);
    glVertex3f(2.0,1.0,0.0);
    //right
    glColor3f(0.0,0.0,1.0);
    glVertex3f(2.0,1.0,1.0);
    glVertex3f(2.0,0.0,1.0);
    glVertex3f(2.0,0.0,0.0);
    glVertex3f(2.0,1.0,0.0);
    //left
    glColor3f(1.0,1.0,0.0);
    glVertex3f(0.0,1.0,1.0);
    glVertex3f(0.0,0.0,1.0);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(0.0,1.0,0.0);
    //top
    glColor3f(0.0,1.0,1.0);
    glVertex3f(0.0,1.0,1.0);
    glVertex3f(2.0,1.0,1.0);
    glVertex3f(2.0,1.0,0.0);
    glVertex3f(0.0,1.0,0.0);
    //bottom
    glColor3f(1.0,0.0,1.0);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(0.0,0.0,1.0);
    glVertex3f(2.0,1.0,0.0);
    glVertex3f(2.0,0.0,0.0);
    glEnd();
    glutSwapBuffers();
}
void displayCuboid()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslated(0.0,0.0,x_position);
    glRotatef(angle,1.0,1.0,1.0);
    glBegin(GL_QUADS);
    //front
    glColor3f(1.0,0.0,0.0);
    glVertex3f(0.0,1.0,1.0);
    glVertex3f(0.0,0.0,1.0);
    glVertex3f(1.2,0.0,1.0);
    glVertex3f(1.2,1.0,1.0);
    //back
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.0,1.0,0.0);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(1.2,0.0,0.0);
    glVertex3f(1.2,1.0,0.0);
    //right
    glColor3f(0.0,0.0,1.0);
    glVertex3f(1.2,1.0,1.0);
    glVertex3f(1.2,0.0,1.0);
    glVertex3f(1.2,0.0,0.0);
    glVertex3f(1.2,1.0,0.0);
    //left
    glColor3f(1.0,1.0,0.0);
    glVertex3f(0.0,1.0,1.0);
    glVertex3f(0.0,0.0,1.0);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(0.0,1.0,0.0);
    //top
    glColor3f(0.0,1.0,1.0);
    glVertex3f(0.0,1.0,1.0);
    glVertex3f(1.2,1.0,1.0);
    glVertex3f(1.2,1.0,0.0);
    glVertex3f(0.0,1.0,0.0);
    //bottom
    glColor3f(1.0,0.0,1.0);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(0.0,0.0,1.0);
    glVertex3f(1.2,1.0,0.0);
    glVertex3f(1.2,0.0,0.0);
    glEnd();
    glutSwapBuffers();
}
void init()
{
    glClearColor(0.0,0.0,0.0,1.0);
    glEnable(GL_DEPTH_TEST);
}
void reshape(int w,int h)
{
   glViewport(0,0,w,h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluPerspective(angle,1,2.0,50.0);
   glMatrixMode(GL_MODELVIEW);

}
void displayTprism()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslated(0.0,0.0,x_position);
    glRotatef(angle,1.0,1.0,1.0);
    glBegin(GL_QUADS);
    //front
    glColor3f(1.0,0.0,0.0);
    glVertex3f(0.0,0.0,1.0);
    glVertex3f(1.0,0.0,1.0);
    glVertex3f(0.5,1.0,0.5);
    //back
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(1.0,0.0,0.0);
    glVertex3f(0.5,1.0,0.5);
    //right
    glColor3f(0.0,0.0,1.0);
    glVertex3f(1.0,0.0,0.0);
    glVertex3f(1.0,0.0,1.0);
    glVertex3f(0.5,1.0,0.5);
    //left
    glColor3f(1.0,1.0,0.0);
    glVertex3f(0.0,0.0,1.0);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(0.5,1.0,0.5);
    //bottom
    glColor3f(1.0,0.0,1.0);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(1.0,0.0,0.0);
    glVertex3f(1.0,0.0,1.0);
    glVertex3f(0.0,0.0,1.0);
    glEnd();
    glutSwapBuffers();
}

void timer (int)
{
    glutPostRedisplay();
    glutTimerFunc(100,timer,0);
    angle+=4;
    if(angle > 360.0)
        angle-=360.0;
    switch(state)
    {
        case 1: if(x_position<-5)
                    x_position+=0.18;
                else
                    state=-1;
                break;
        case -1:if(x_position>-15)
                    x_position-=0.18;
                else
                    state=1;
                break;
    }

}
void key(unsigned char key, int x, int y)
{
    switch(key){
    case GLUT_KEY_LEFT: x_position-=1;
                             break;
    case GLUT_KEY_RIGHT: x_position+=1;
                             break;
    }
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowPosition(200,100);
    glutInitWindowSize(500,500);
    do
    {
    cout<<"***************3d geometry display****************"<<endl;
    cout<<"1.Cube"<<endl;
    cout<<"2.Cuboid"<<endl;
    cout<<"3.Rectangular prism"<<endl;
    cout<<"4.Triangular prism"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"choose the option"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
                glutCreateWindow("\t\t\t\t\t\tCube");
                glutDisplayFunc(displayCube);
                glutKeyboardFunc(key);
                glutReshapeFunc(reshape);
                glutTimerFunc(0,timer,0);
                init();
                glutMainLoop();
                break;
        case 2:
                glutCreateWindow("Shape");
                glutDisplayFunc(displayCuboid);
                glutKeyboardFunc(key);
                glutReshapeFunc(reshape);
                glutTimerFunc(0,timer,0);
                init();
                glutMainLoop();
                break;
        case 3:
                glutCreateWindow("Shape");
                glutDisplayFunc(displayprism);
                glutKeyboardFunc(key);
                glutReshapeFunc(reshape);
                glutTimerFunc(0,timer,0);
                init();
                glutMainLoop();
                break;
        case 4:
                glutCreateWindow("Shape");
                glutDisplayFunc(displayTprism);
                glutReshapeFunc(reshape);
                glutTimerFunc(0,timer,0);
                init();
                glutMainLoop();
                break;
        case 5:
                break;
        default:
                cout<<"invalid input"<<endl;
                break;
    }
    }while(ch!=5);
}

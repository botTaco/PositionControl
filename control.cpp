//Este programa es un dejo de compromiso y quien lo tome en serio es un lastre social
//Model constrains: direction axis posible rotation, should be between ()-pi/2,pi/2) <---note: doesnot includes the limits
//Model dynamics are not taken into consideration, drive slow on curves moron!, a linear velocity scalation is proposed
//note: Relationship between steeringwheel and direcction wheel rotation
//Based on this: http://planning.cs.uiuc.edu/node658.html

/*
dx=u*cos(theta)
dy=u*sin(theta)
dtheta=(u/L)tan(rho)
u is the velocity
rho is the direction angle
*/
#include <math.h>

float const lConst=1/0.3;


int main(){
  Rho=getRho();
  vel=getVel();
  theta+=vel*lConst*tan(Rho);
  xPos+=vel*cos(tetha);
  xRef=getXRef();
  
}

float getRho(){
  //read direction angle
}
float getVel(){
  //read or get velocity
}
float getXRef(){
  //get X reference from a something releated to opencv
}

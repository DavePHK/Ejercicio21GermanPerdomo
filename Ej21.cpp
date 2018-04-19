#include <iostream>

using std::cout;
using std::endl;


int main(){
  double* u;
  double c = 1.0;
  double T = 0.5;
  double dx = 0.1;
  double dt = 0.01;
  double x_min =0.0 , x_max =2.0;
  int Nt = T/dt;
  int Nx = (x_max-x_min)/dx +1;
  u = new double[Nx];
  double* u_new = new double[Nx];

  double x = 0.0; 
  for(int i=0;i<Nx;i++){
    x=  i*dx;
    if(x>0.75 && x<=1.25){
      u[i] = 1.0;
    }else{
      u[i] = 0.0;
    }
  }
  x=0.0;
  for(int j = 0 ; j<Nt;j++){
    x = x+dx;
    u_new[j] = u[j]- c*(dt/dx)*(u[j+1]-u[j]);
    cout<<u_new[j]<< " " << x<<endl;
  }
  return 0;
}

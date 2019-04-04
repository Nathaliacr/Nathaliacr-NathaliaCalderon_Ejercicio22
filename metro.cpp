#include <iostream>

#include <cstdlib>

#include <cmath>


using std::cout;
using std::endl;


void metropolis(int N);
float f(float x);


int main(){

  int N;

  srand48(20);

  N=50000;  
  
  metropolis(N);
      
  return 0;
    
  }


 
void metropolis(int N){

      float r;

      float a;
    
        int i;

      float alpha;
    
    a = drand48(); 
    
    float propuesta;

  for(i=0;i<N;i++){

    propuesta = a + ((drand48()*2)-1);
      
    if(f(propuesta)/f(a)<1){
      
        r=f(propuesta)/f(a);   
    }
      
     else{ 
       r=1;
     }

    alpha = drand48();

    if(alpha<r){

    a = propuesta;

    }
   
    else{

    a = a;
        
    cout << a << endl;

    }

  }

}

float f(float x){

    return exp(-x*x/2);

    }  
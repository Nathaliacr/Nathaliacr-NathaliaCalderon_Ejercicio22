#include <iostream>
#include <cstdlib>



void metropolis();

int main(){
  int i;
  float f;
  int N;
  
    
  srand48(20);
  
    
  for(i=0;i<100;i++){
    apuesta(100, &maximo, &tiempo, i);
    cout << maximo << " " << tiempo << endl;
  }
  return 0;
}


void metropolis(int N){
    
for(i=0;i<100;i++){
    
    propuesta = drand48() +
    


    
void f(float x){
    
    f = exp(-x*x/2)
    
    
        
        
        

    n_puntos=1000
    x = np.linspace(0, np.pi)
    def f(x):
        y = 0.5 * np.sin(x)
        if(np.isscalar(x)):# esto va a funcionar si entra un numero
            if (x>np.pi) | (x<0):
                y = 0
        else: #esto va a funcionar si entra un array
            ii = (x>np.pi) | (x<0)
            y[ii] = 0.0
        return y



    lista = [np.random.random()*np.pi]
    sigma_delta = 0.001

    for i in range(1,N):
        propuesta  = lista[i-1] + np.random.normal(loc=0.0, scale=sigma_delta)
        r = min(1,f(propuesta)/f(lista[i-1]))
        alpha = np.random.random()
        if(alpha<r):
            lista.append(propuesta)
        else:
            lista.append(lista[i-1])
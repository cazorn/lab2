#include <iostream>

using namespace std;

int main (){
  int N=100;			//Iterationsteps
  double r=0.0;			//Controlparameter r
  for (r=0.0;r<=4;r+=0.01)
  {
    double x=0.1;		//Startingpoint
    for (int i=1; i<=19; i++)	//Function series, first 20 shoudn't be counted
    {
      x=x*r*(1-x);
    }
  
    for (int i=20; i<=N;i++)	//Funtion series with x_20 to x_100. Those data is going to saved in file data
    {				// Console input: ./logmap > data
      x=x*r*(1-x);
      cout << r << "\t" << x << endl; 
    }
  }
  return 0;
}
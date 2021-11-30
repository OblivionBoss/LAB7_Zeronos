#include<iostream>
#include<cmath>

using namespace std;
int adiff(int a, int b){
  if(abs((a-b)%360) <= 180){
    return abs((a-b)%360);
  }
  else{
    return abs(360-abs((a-b)%360));
  }
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}

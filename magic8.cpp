#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  cout << "MAGIC 8-BALL\n";
  srand(time(NULL));
  int answer = rand() % 10;
  if(answer==0){
    cout << "It is certain.";
  }
  else if (answer==1){
    cout << "It is decidedly so.";
  }
  else if (answer ==2){
    cout << "without a doubt.";
  }
  else if (answer ==3){
    cout << "Yes.";
  }
  else if(answer==4){
    cout << "outlook good.";
  }
  else if(answer==5){
    cout << "Reply hazy, try again.";
  }
  else if (answer==6){
    cout << "signs point to yes.";
  }
  else if(answer==7){
    cout << "Don't count on it.";
  }
  else if(answer==8){
    cout << "Ask again later.";
  }
  else{
    cout << "Better not tell you now.";
  }
}

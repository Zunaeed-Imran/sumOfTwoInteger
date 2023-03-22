#include <iostream>
using namespace std;

int sum(int a, int b){
  int c;
  c = a + b;
  return c;
}

int main(){
  int s;
  s = sum(5, 12);
  cout<<"The result is :"<<s;
}
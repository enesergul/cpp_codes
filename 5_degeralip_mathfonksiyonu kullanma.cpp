#include <iostream>
#include <string>
using namespace std;



int main(void) {
int num,result;
    cin >> num;
    result=num;
 
 while(num!=1){
result=result*(num-1);
num=num-1;

}
  
cout << result << '\n';
  return 0;
    

}

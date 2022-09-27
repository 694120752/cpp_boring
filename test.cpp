//
//  test.cpp
//  
//
//  Created by 张精申 on 2022/9/14.
//

#include "test.hpp"
#include <iostream>
#include <string>
using namespace std;
// 变量声明
extern int a, b;
extern int c;
extern float f;
int xxx = 20;

int main() {
    
   int  var[3] = {10, 100, 200};
 
   for (int i = 0; i < 3; i++)
   {
      *var = i;    // 这是正确的语法
      var++;       // 这是不正确的
   }
   return 0;
}




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
    
    int a,b;
    a = 20;
    a = 33;
    b = 30;
    std::cout << a << b << std::endl;
    
    
    string greeting = "hello, runoob";
        cout << greeting;
        cout << "\n";     // 换行符
        string greeting2 = "hello, \
runoob";
        cout << greeting2 << endl;
    
    
    cout << xxx << endl;
    
    return 0;
    
}




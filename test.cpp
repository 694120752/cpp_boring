//
//  test.cpp
//  
//
//  Created by 张精申 on 2022/9/14.
//

#include "test.hpp"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
// 变量声明
extern int a, b;
extern int c;
extern float f;
int xxx = 20;

void ptArray();
void getTimeValue(unsigned long *str);

void getReference();
void errorLog();

void structFunc();

struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int main() {
    
   // // int  var[3] = {10, 100, 200};
 
   // // for (int i = 0; i < 3; i++)
   // // {
   // //    *var = i;    // 这是正确的语法
   // //    // var++;       // 这是不正确的
   // // }


   // ptArray();

   // unsigned long temp = 0;
   // getTimeValue(&temp);

   // cout << temp << endl;

   // 传递指针的函数

   // getReference();
   // errorLog();

   structFunc();
   
   return 0;
}


void ptArray() {
   int var[3] = {10,10,10};
   int *ptr[3];


   for (int i = 0; i < 3; i++)
   {
      ptr[i] = &var[i];
   }

   for (int i = 0; i < 3; i++)
   {
      cout << ptr[i] << endl;
   }
   
   // const int *names[3] = {
   //    {10,10,22},{111},
   // };

   // cout << "开始喽" << endl;

   // for (int i = 0; i < 3; i++)
   // {
   //    cout << names[i] << endl;
   // }
   
   
}


void getTimeValue (unsigned long *str){

   *str = time(NULL);
   return;
}

void getReference() {
   int i = 19;
   int& e = i;


   cout << "B" << endl;
   cout << i << e << endl;
   cout << "E" << endl;
}

void errorLog() {
   char str[] = "Unable to read....";
 
   cerr << "Error message : " << str << endl;
}

void printBook( struct Books *book )
{
   Books tempbook = *book;
   // cout << "书标题  : " << book->title <<endl;
   // cout << "书作者 : " << book->author <<endl;
   // cout << "书类目 : " << book->subject <<endl;
   // cout << "书 ID : " << book->book_id <<endl;
   // cout << "书标题  : " << *book.title <<endl;
}

void structFunc() {
   Books Book1;        // 定义结构体类型 Books 的变量 Book1
   Books Book2;        // 定义结构体类型 Books 的变量 Book2
 
    // Book1 详述
   strcpy( Book1.title, "C++ 教程");
   strcpy( Book1.author, "Runoob"); 
   strcpy( Book1.subject, "编程语言");
   Book1.book_id = 12345;
 
   // Book2 详述
   strcpy( Book2.title, "CSS 教程");
   strcpy( Book2.author, "Runoob");
   strcpy( Book2.subject, "前端技术");
   Book2.book_id = 12346;

   printBook( &Book1 );
   printBook( &Book2 );
}




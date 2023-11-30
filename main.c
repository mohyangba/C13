#include <stdio.h>
#include <stdlib.h>

//형식 선언  
struct student     {
       int ID; //학번
       char name[100]; //이름
       float score;//학점
};
 
int main(int argc, char *argv[])
{
  //instance 선언
  struct student s1 = {123, "JUYEOP", 4.3};
  
   // 값 초기화 및 다른 값 변경
   s1.ID = 123456;
   s1.name[0] = 'c';
   s1.score = 0.7;
   // 출력
   printf("ID = %d", s1.ID);
   printf("NAME = %s\n", s1.name);
   printf("grade = %f\n", s1.score);
   
   strcpy(s1.name, "bongjun");
   printf("name2 = %s\n");
   
  system("PAUSE");	
  return 0;
}

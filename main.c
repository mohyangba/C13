#include <stdio.h>
#include <stdlib.h>

//���� ����  
struct student     {
       int ID; //�й�
       char name[100]; //�̸�
       float score;//����
};
 
int main(int argc, char *argv[])
{
  //instance ����
  struct student s1 = {123, "JUYEOP", 4.3};
  
   // �� �ʱ�ȭ �� �ٸ� �� ����
   s1.ID = 123456;
   s1.name[0] = 'c';
   s1.score = 0.7;
   // ���
   printf("ID = %d", s1.ID);
   printf("NAME = %s\n", s1.name);
   printf("grade = %f\n", s1.score);
   
   strcpy(s1.name, "bongjun");
   printf("name2 = %s\n");
   
  system("PAUSE");	
  return 0;
}

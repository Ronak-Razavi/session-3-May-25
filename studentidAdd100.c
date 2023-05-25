#include <stdio.h>
# include <Stdlib.h>

struct student
  {
      int id;
      char * firstName;
      char * lastName;
      float gpa;

  };

int main()
{
  struct student stu1;
  stu1.id=101;
  stu1.firstName="Roy";
  stu1.lastName="Green";
  stu1.gpa=3.78;

  struct student stu2={102,"Lili","Brown",3.25};
  DisplayStudent (stu1);
  DisplayStudent(stu2);
    return 0;
}
void DisplayStudent (struct student stu)
{
    printf("student id:%d\n",stu.id );
    printf("First Name:%s\n",stu.firstName);
    printf("Last Name:%s\n",stu.lastName);
    printf("GPA :%f\n",stu.gpa);
    stu.id+=1000;
    printf("New Id : %d\n",stu.id);
    printf("\n\n");


}
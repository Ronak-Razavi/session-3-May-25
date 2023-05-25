#include <stdio.h>
# include <Stdlib.h>



int main()
{

struct student
  {
      int id;
      char * firstName;
      char * lastName;
      float gpa;

  };
  struct student stu1;
  stu1.id=101;
  stu1.firstName="Roy";
  stu1.lastName="Green";
  stu1.gpa=3.78;
    return 0;
}
void DisplayStudent (struct student stu)
{

}
#include <stdio.h>
#include <string.h>

struct Person
{
  char name[50];
  int citNo;
  float salary;
} person1;

int main()
{
  strcpy(person1.name, "George Orwell");
  person1.salary = 100.000;
  person1.citNo = 1984;

  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.citNo);
  printf("Salary: %.2f", person1.salary);

  return 0;
}

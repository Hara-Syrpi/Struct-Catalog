#include <stdio.h>
#include <string.h>

struct catalog
{
 char surname[40];
 char name[40];
 int age;
 char phone[15];
};

int main(void)
{
 struct catalog mycatalog; 

 strcpy(mycatalog.name,"Babis"); 
 strcpy(mycatalog.surname,"Kourtis");
 mycatalog.age = 48; 
 strcpy(mycatalog.phone,"28210-45455");

 printf("Surname\t: %s\n",mycatalog.surname); 
 printf("Name\t: %s\n",mycatalog.name);
 printf("Age\t: %d\n",mycatalog.age);
 printf("Phone\t: %s\n",mycatalog.phone);

 return 0;
}

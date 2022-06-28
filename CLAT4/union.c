#include <stdio.h>
 union empAdd
{ char *ename;
char stname[20];
int pincode;
}; 
int main()
{ union empAdd employee,*pt;
 employee.ename="Jhon Mc\0Donald"; //assign the string up to null character i.e. '\0'
pt=&employee;
 printf(" %s %s\n\n",pt->ename,(*pt).ename);
return 0;
}
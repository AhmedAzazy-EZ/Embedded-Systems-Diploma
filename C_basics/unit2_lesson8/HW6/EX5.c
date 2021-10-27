/*
 *	HomeWork6 Pointers >> EX5
 *
 *  Created on: Oct 27, 2021
 *      Author: Ahmed Azazy
 */



#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

typedef struct employee
{
    int roll;
    int salary;
    char name[50];
}employee_t;


void print_employees(employee_t * (*PP_emp)[] , int len )
{
    int i = 0;
    for( i = 0 ; i < len ; i++)
    {
        printf("employee roll %d , name %s , Salary %d\n" ,
                (*PP_emp)[i]->roll ,
                (*PP_emp)[i]->name ,
               (*PP_emp)[i]->salary);
    }
}

int main()
{
    int i = 0;
    employee_t employees[10];
    employee_t * P_emp[10];
    //initializing the arrays
    for( i = 0 ; i < len ;i++)
    {
        P_emp[i] = &employees[i];
        strcpy(P_emp[i]->name , "UNKNOWN");
        P_emp[i]->roll = i+1;
        P_emp[i]->salary = 100 + 100*i;
    }
    employee_t * (*PP_emp)[] = &P_emp;

    print_employees(PP_emp , 10);


	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/










/*fflush(stdout) ; fflush(stdin);*/

#include <stdio.h>

struct Employee {
    char first_name[20];
    char last_name[20];
    int employee_id;
    int ssn;
    char title[32];
};

struct Employees {
    struct Employee employees[2];
};

void print_employee(struct Employee emp) {
    printf("First Name: %s\n", emp.first_name);
    printf("Last Name: %s\n", emp.last_name);
    printf("Employee ID: %d\n", emp.employee_id);
    printf("SSN: %d\n", emp.ssn);
    printf("Title: %s\n", emp.title);
}

int main() {
    const struct Employee employee1;
    const struct Employee employee2;
    printf("Enter two employees:\n");
    printf("Enter the first employee's first name: ");
    scanf("%s", &employee1.first_name);
    printf("Enter the first employee's last name: ");
    scanf("%s", &employee1.last_name);
    printf("Enter the first employee's employee ID: ");
    scanf("%d", &employee1.employee_id);
    printf("Enter the first employee's SSN: ");
    scanf("%d", &employee1.ssn);
    printf("Enter the first employee's title: ");
    scanf("%s", &employee1.title);

    printf("Enter two employees:\n");
    printf("Enter the second employee's first name: ");
    scanf("%s", &employee2.first_name);
    printf("Enter the second employee's last name: ");
    scanf("%s", &employee2.last_name);
    printf("Enter the second employee's employee ID: ");
    scanf("%d", &employee2.employee_id);
    printf("Enter the second employee's SSN: ");
    scanf("%d", &employee2.ssn);
    printf("Enter the second employee's title: ");
    scanf("%s", &employee2.title);

    struct Employees employees = { { employee1, employee2 } };

    print_employee(employee1);
    print_employee(employee2);
}
#include <iostream>
using namespace std;
struct Employee
{
    string firstname;
    string lastname;
    double monthlysalary;
};
void emp_init(struct Employee *e)
{
    cout << "Enter employee's first name:" << endl;
    cin >> e->firstname;
    cout << "Enter employee's last name:" << endl;
    cin >> e->lastname;
}
void set_salary(struct Employee *e, double sal)
{
    e->monthlysalary = sal;
}
void set_name(struct Employee *e, double sal)
{
    e->monthlysalary = sal;
}
void emp_display(struct Employee *e)
{
    cout << "Name: " << e->firstname << " " << e->lastname << endl;
    cout << "Salary: " << e->monthlysalary << endl;
}
void salary_increment(struct Employee *e)
{
    e->monthlysalary = 1.1 * (e->monthlysalary);
}
int main()
{
    double sal;
    struct Employee e;
    cout << "Enter details for Employee 1:" << endl;
    emp_init(&e);
    cout << "Enter monthly salary: ";
    cin >> sal;
    set_salary(&e, sal);
    emp_display(&e);
    cout << "\nDisplay Employee :" << endl;
    emp_display(&e);
    salary_increment(&e);
    cout << "Employee salary after increment: " << endl;
    emp_display(&e);

    return 0;
}
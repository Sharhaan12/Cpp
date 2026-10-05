#include <iostream>
using namespace std;

class Person
{
    char name[64];
    int age;
    char address[64];
    float salary;

    float basic, hra, da, allowance, gross;

public:

    // Default constructor
    Person()
    {
        basic = hra = da = allowance = gross = 0;
    }

    // Parameterized constructor
    Person(char n[], int a, char addr[], float sal)
    {
        int i;

        for (i = 0; n[i] != '\0'; i++)
            name[i] = n[i];
        name[i] = '\0';

        age = a;

        for (i = 0; addr[i] != '\0'; i++)
            address[i] = addr[i];
        address[i] = '\0';

        salary = sal;

        // Salary calculation
        basic = salary * 0.50;
        hra = salary * 0.20;
        da = salary * 0.10;
        allowance = salary * 0.20;

        gross = basic + hra + da + allowance;
    }

    void input()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter address: ";
        cin >> address;

        cout << "Enter salary: ";
        cin >> salary;

        // Calculate salary components
        basic = salary * 0.50;
        hra = salary * 0.20;
        da = salary * 0.10;
        allowance = salary * 0.20;
        gross = basic + hra + da + allowance;
    }

    // Inline function
    inline static void findYoungestEldest(Person p[], int n)
    {
        int youngest = 0;
        int eldest = 0;

        for (int i = 1; i < n; i++)
        {
            if (p[i].age < p[youngest].age)
                youngest = i;

            if (p[i].age > p[eldest].age)
                eldest = i;
        }

        cout << "\n==============================";
        cout << "\n       YOUNGEST PERSON";
        cout << "\n==============================";
        cout << "\nName : " << p[youngest].name;
        cout << "\nAge  : " << p[youngest].age;

        cout << "\n\n==============================";
        cout << "\n        ELDEST PERSON";
        cout << "\n==============================";
        cout << "\nName : " << p[eldest].name;
        cout << "\nAge  : " << p[eldest].age;
    }

    void salarySlip()
    {
        cout << "\n\n==============================";
        cout << "\n         SALARY SLIP";
        cout << "\n==============================";
        cout << "\nName          : " << name;
        cout << "\nAge           : " << age;
        cout << "\nAddress       : " << address;

        cout << "\n------------------------------";
        cout << "\nBasic Salary  : " << basic;
        cout << "\nHRA           : " << hra;
        cout << "\nDA            : " << da;
        cout << "\nAllowance     : " << allowance;
        cout << "\n------------------------------";
        cout << "\nGross Salary  : " << gross;
        cout << "\n==============================";
    }
};

int main()
{
    int n;

    cout << "Enter number of persons: ";
    cin >> n;

    Person p[100];

    // Input
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Person " << i + 1 << ":\n";
        p[i].input();
    }

    // Youngest and eldest
    Person::findYoungestEldest(p, n);

    // Salary slips
    cout << "\n\n******** SALARY SLIPS ********";

    for (int i = 0; i < n; i++)
    {
        p[i].salarySlip();
    }

    return 0;
}
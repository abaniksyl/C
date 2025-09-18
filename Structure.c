#include <stdio.h>

// Global structure
struct person
{
    int age;
    float salary;
};

// struct person person1, person2; //Global vriable

int main()
{
    /*struct person
    {
        int age;
        float salary;
    };*/
    // Local Structure

    struct person person1, person2; // Local Variable

    // struct person person1 = {27,25550.50}; //Directly Initialisation
    //  person1.age = 27; //Directly Initialisation
    //  person1.salary = 12245.52; //Directly Initialisation

    printf("Enter Information for Person 1\n");
    printf("Enter Age : ");
    scanf("%d", &person1.age);

    printf("Enter Salary : ");
    scanf("%f", &person1.salary);

    printf("person1 : \n");
    printf("Age = %d\n", person1.age);
    printf("Salary = %.2f\n", person1.salary);

    // element wise assignment
    //  person2.age = 29;
    //  person2.salary = 12555.52;


    //structure variable assignment
    //person2 = person1

    printf("\n\nEnter Information for Person 2\n");
    printf("Enter Age : ");
    scanf("%d", &person2.age);

    printf("Enter Salary : ");
    scanf("%f", &person2.salary);

    printf("person2 : \n");
    printf("Age = %d\n", person2.age);
    printf("Salary = %.2f\n", person2.salary);

    return 0;
}

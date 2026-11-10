// Academic Management System: student registration using struct, typedef (Class 12),
// report generation, and multi-file persistent storage (Class 13)
#include <stdio.h>

#define MAX 100

struct STUDENT
{
    char name[50];
    int id;
};

// Define STUDENT as an alias for 'struct STUDENT'
typedef struct STUDENT STUDENT;

int main(void)
{
    int option = 0, total_students = 0;
    char continue_adding;
    STUDENT students[MAX];
    FILE *pointer;

    // 1. Load saved data when the program starts (Class 13: Persistent Storage - Read)
    pointer = fopen("total.txt", "rt");
    if (pointer != NULL)
    {
        fscanf(pointer, "%i", &total_students);
        fclose(pointer);
    }

    pointer = fopen("ids.txt", "rt");
    if (pointer != NULL)
    {
        for (int i = 0; i < total_students; i++)
        {
            fscanf(pointer, "%i", &students[i].id);
        }
        fclose(pointer);
    }

    pointer = fopen("names.txt", "rt");
    if (pointer != NULL)
    {
        for (int i = 0; i < total_students; i++)
        {
            fscanf(pointer, "%s", students[i].name);
        }
        fclose(pointer);
    }

    if (total_students > 0)
    {
        printf("Loaded %i student(s) from files.\n\n", total_students);
    }

    // Main Menu (Class 12: Options 1-2 | Class 13: Option 3 & Persistent Exit on Option 4)
    do
    {
        printf("==========================\n");
        printf("Academic Management System\n");
        printf("1) Register students\n");
        printf("2) Show all students\n");
        printf("3) Save and read report\n");
        printf("4) Exit\n");
        printf("==========================\n");
        printf("Select an option: ");
        scanf("%i", &option);

        if (option == 1)
        {
            if (total_students >= MAX)
            {
                printf("\nCapacity reached (%i students).\n\n", MAX);
                continue;
            }

            while (total_students < MAX)
            {
                printf("\n============================");
                printf("\nStudent %i\n", total_students + 1);
                printf("ID: ");
                scanf("%i", &students[total_students].id);
                printf("Name: ");
                scanf("%s", students[total_students].name);
                printf("\n============================\n");

                total_students++;

                if (total_students >= MAX)
                {
                    printf("Capacity reached (%i students).\n\n", MAX);
                    break;
                }

                printf("Do you want to continue adding students? (y/n): ");
                scanf(" %c", &continue_adding);
                if (continue_adding == 'n' || continue_adding == 'N')
                {
                    printf("Going back to the menu...\n\n");
                    break;
                }
            }
        }
        else if (option == 2)
        {
            printf("\n");
            if (total_students == 0)
            {
                printf("No students registered yet.\n\n");
                continue;
            }

            printf("===============================\n");
            for (int i = 0; i < total_students; i++)
            {
                printf("Student %i: ID = %i; Name = %s\n", i + 1, students[i].id, students[i].name);
            }
            printf("===============================\n\n");
        }
        else if (option == 3)
        {
            // 'continue' skips the rest of option 3 and goes back to the menu
            // ('break' here would exit the outer do-while loop and close the program)
            if (total_students == 0)
            {
                printf("\nNo students registered yet.\n\n");
                continue;
            }

            char string[100] = "";

            // Write formatted report (one student per line: "ID Name")
            pointer = fopen("report.txt", "wt");

            if (pointer == NULL)
            {
                printf("No memory available!\n\n");
                continue;
            }
            else
            {
                for (int i = 0; i < total_students; i++)
                {
                    fprintf(pointer, "%i %s\n", students[i].id, students[i].name);
                }
                fclose(pointer);
            }

            // Read and print each line of the report
            pointer = fopen("report.txt", "rt");

            if (pointer == NULL)
            {
                printf("No memory available!\n\n");
                continue;
            }
            else
            {
                printf("\n===============================\n");
                for (int i = 0; i < total_students; i++)
                {
                    // The space before "%[^\n]" skips the newline from the previous line
                    if (fscanf(pointer, " %[^\n]", string) == 1)
                    {
                        printf("%s\n", string);
                    }
                }
                printf("===============================\n\n");
                fclose(pointer);
            }
        }
        else if (option != 4)
        {
            printf("\nInvalid option!\n\n");
        }
    } while (option != 4);

    // 2. Save all data before exiting the program (Class 13: Persistent Storage - Write)
    pointer = fopen("total.txt", "wt");
    if (pointer == NULL)
    {
        printf("No memory available!\n");
    }
    else
    {
        fprintf(pointer, "%i\n", total_students);
        fclose(pointer);
    }

    pointer = fopen("ids.txt", "wt");
    if (pointer == NULL)
    {
        printf("No memory available!\n");
    }
    else
    {
        for (int i = 0; i < total_students; i++)
        {
            fprintf(pointer, "%i\n", students[i].id);
        }
        fclose(pointer);
    }

    pointer = fopen("names.txt", "wt");
    if (pointer == NULL)
    {
        printf("No memory available!\n");
    }
    else
    {
        for (int i = 0; i < total_students; i++)
        {
            fprintf(pointer, "%s\n", students[i].name);
        }
        fclose(pointer);
    }

    printf("\nAll data saved successfully. Program closed.\n");

    return 0;
}

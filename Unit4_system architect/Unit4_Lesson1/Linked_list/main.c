/*
 * main.c
 *
 *  Created on: ٢٧‏/٠٩‏/٢٠٢٣
 *      Author: محمود
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

struct Sdata
{
	unsigned int id;
	char name [20];
	float height;
};

// Node definition (Data,next)

struct Sstudent
{
	struct Sdata student; // effective Data
	struct Sstudent* P_next_student; // Pointer to next node
};

void fill_new( struct Sstudent* P_student )
{
	printf("**************************************\n\n");
	printf("\nEnter the id : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&(P_student->student.id));
	printf("\nEnter the name : ");
	fflush(stdin);fflush(stdout);
	gets(P_student->student.name);
	printf("\nEnter the height : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&(P_student->student.height));
	printf("\n**************************************\n");
}

void print_student(struct Sstudent* P_student)
{
	printf("**************************************\n\n");
	printf("Name : %s \n",P_student->student.name);
	printf("ID : %d\n",P_student->student.id);
	printf("Height : %.2f \n\n",P_student->student.height);
	printf("***************************************\n");
}

// Global variable to first student.

struct Sstudent* GP_first_student ;

void Add_Student()
{
	struct Sstudent* P_new_student;
	struct Sstudent* P_last_student;
	// check if list is empty
	if (GP_first_student == NULL)
	{
		// Create new record
		P_new_student =(struct Sstudent*) malloc(sizeof(struct Sstudent));
		// Assign it to gpfirst
		GP_first_student = P_new_student;
	}
	else // if list contains records
	{
		// Navigate until the last record
		P_last_student = GP_first_student;
		while (P_last_student->P_next_student)
			P_last_student = P_last_student->P_next_student;
		P_new_student =(struct Sstudent*) malloc(sizeof(struct Sstudent));
		P_last_student->P_next_student = P_new_student;
	}

	// Fill the new record
	fill_new(P_new_student);
	// Next pointer to the last node to null
	P_new_student->P_next_student = NULL;
}

void view_student()
{
	unsigned int i,count = 1;
	printf("Enter the index of the student. (1,2,3,...) \n");
	fflush(stdin);fflush(stdout);
	scanf("%u",&i);
	if (GP_first_student == NULL)
	{
		printf("**************************************\n\n");
		printf("Empty list\n\n");
		printf("**************************************\n");
	}
	struct Sstudent* P_temp = GP_first_student;
	while(P_temp)
	{
		if (i == count)
		{
			print_student(P_temp);
			break;
		}
		count++;
		P_temp = P_temp->P_next_student;
		if (P_temp == NULL)
			printf("The index exceeds the number of students.\n");
	}
}

int Delete_student()
{
	unsigned int selected_id;
	// Get selected id from the user.
	printf("Enter student ID to be deleted.\n");
	fflush(stdin);fflush(stdout);
	scanf("%u",&selected_id);

	if (GP_first_student)
	{
		struct Sstudent* P_previous_student = NULL;
		struct Sstudent* P_selected_student = GP_first_student;
		// loop on all records starting from gpfirst
		while(P_selected_student)
		{
			// Compare the recorded ID with the selected ID
			if(P_selected_student->student.id == selected_id)
			{
				if(P_previous_student)
					P_previous_student->P_next_student = P_selected_student->P_next_student;
				else
					GP_first_student = P_selected_student->P_next_student;
				free(P_selected_student);
				return 1;
			}
			// Store previous record pointer
			P_previous_student = P_selected_student;
			P_selected_student = P_selected_student->P_next_student;
		}
	}
	printf("Cannot find student ID.\n");
	return 0;
}

void View_all()
{
	// Check if list is empty
	if (GP_first_student == NULL){
		printf("**************************************\n\n");
		printf("Empty list\n\n");
		printf("**************************************\n");
	}
	else
	{
		struct Sstudent* P_temp = GP_first_student;
		while(P_temp)
		{
			print_student(P_temp);
			P_temp = P_temp->P_next_student;
		}
	}

}

void Delete_all()
{
	struct Sstudent* P_current = GP_first_student;
	if (GP_first_student == NULL){
		printf("**************************************\n\n");
		printf("Empty list\n\n");
		printf("**************************************\n");
	}
	else
	{
		while(P_current)
		{
			struct Sstudent* P_temp = P_current;
			P_current = P_current->P_next_student;
			free(P_temp);
		}
	}
}
void No_choice()
{
	printf("**************************************\n\n");
	printf("You didn't choose correctly.\n\n");
	printf("**************************************\n");
}

int Find_length()
{
	unsigned int count = 0;
	if (GP_first_student == NULL){
		printf("**************************************\n\n");
		printf("Empty list\n\n");
		printf("**************************************\n");
	}
	else
	{
		struct Sstudent* P_temp = GP_first_student;
		while(P_temp)
		{
			count++;
			P_temp = P_temp->P_next_student;
		}
	}
	return count;
}

void view_student_reversed()
{
	unsigned int i,count = 0;
	printf("Enter the reverse index of the student. (...,3,2,1) \n");
	fflush(stdin);fflush(stdout);
	scanf("%u",&i);
	if (GP_first_student == NULL){
		printf("**************************************\n\n");
		printf("Empty list\n\n");
		printf("**************************************\n");
	}
	struct Sstudent* P_temp = GP_first_student;
	while(P_temp)
	{
		count++;
		P_temp = P_temp->P_next_student;
	}
	P_temp = GP_first_student;
	while(P_temp)
	{
		if (i == count)
		{
			print_student(P_temp);
			break;
		}
		count--;
		P_temp = P_temp->P_next_student;
		if (P_temp == NULL)
			printf("The index exceeds the number of students.\n");
	}
}

void Find_middle()
{
	int len = Find_length();
	int count = 1 ;
	struct Sstudent* P_temp = GP_first_student;
	if (len % 2 == 1)
	{
		while(P_temp)
		{
			if ((len/2 + 1) == count)
			{
				print_student(P_temp);
				break;
			}
			count++;
			P_temp = P_temp->P_next_student;
		}
	}
	else
	{
		while(P_temp)
		{
			if ((len/2 + 1) == count)
			{
				print_student(P_temp);
				break;
			}
			count++;
			P_temp = P_temp->P_next_student;
		}
	}
}

void Reverse()
{
	if (GP_first_student == NULL)
	{
		printf("**************************************\n\n");
		printf("Empty list\n\n");
		printf("**************************************\n");
	}
	struct Sstudent* P_previous = NULL;
	struct Sstudent* P_current = GP_first_student;
	struct Sstudent* P_next;
	while (P_current)
	{
		P_next = P_current->P_next_student;
		P_current->P_next_student = P_previous;
		P_previous = P_current;
		P_current = P_next;
	}
	GP_first_student = P_previous;
	printf("Reverse done.\n");
}

int main()
{
	int n;
	while(1){
		printf("Choose one of the following options.\n");
		printf("1 : Add a student. \n");
		printf("2 : View a student. \n");
		printf("3 : Delete a student. \n");
		printf("4 : View all students. \n");
		printf("5 : Delete all students. \n");
		printf("6 : Number of students. \n");
		printf("7 : View a student reversed. \n");
		printf("8 : Middle of the list. \n");
		printf("9 : Reverse the list. \n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&n);

		switch (n)
		{
		case 1:
			Add_Student();
			break;
		case 2:
			view_student();
			break;
		case 3:
			Delete_student();
			break;
		case 4:
			View_all();
			break;
		case 5:
			Delete_all();
			break;
		case 6:
			printf("The number of students is : %d.\n",Find_length());
			break;
		case 7:
			view_student_reversed();
			break;
		case 8:
			Find_middle();
			break;
		case 9:
			Reverse();
			break;
		default:
			No_choice();
			break;
		}}
	return 0;
}

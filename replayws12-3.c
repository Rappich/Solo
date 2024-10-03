#include <stdio.h>

typedef struct student
{
    int roll_no;
    char name[40];
} Student;

int main ()

{
    Student s1;
    s1.roll_no;
    s1.name;

    Student s2;
    s2.roll_no;
    s2.name;

    printf("Name of first candidate\n");
    fgets(s1.name,sizeof(s1.name),stdin);

    printf("number of first student\n");
    scanf("%d", s1.roll_no);
 
    printf("Name of second candidate\n");
    fgets(s2.name,sizeof(s2.name),stdin);

    printf("number of first student\n");
    scanf("%d", s2.roll_no);


    printf("First student: %d", s1.roll_no);
    printf("First student: %s", s1.name);

    printf("First student: %d", s2.roll_no);
    printf("First student: %s", s2.name);

    return 0;
}

/*Uppgift 3
Återanvända strukturen student och skapa en array (lista) av studenter, som tilldelas värden
och skrivs ut från listan.
Att göra:
• Skapa och testkör programmet beskrivet nedan med C-kod i en ny fil kallad
workshop12-3.c
Använd strukturen från workshop12-2.c och skapa ett program som
• I huvudprogrammet
o Initierar en array med tre studenter:
roll_no name
123 Kim
213 Abdul
321 Charles
Workshop
V4_D5.1-Workshop_12-Structs.docx 4 (6) 2024-09-27
• Kan genererar en utskrift enligt följande bild:*/
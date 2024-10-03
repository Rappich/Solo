
Uppgift 3
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
• Kan genererar en utskrift enligt följande bild:
Uppgift 4
Återanvända strukturen student och skapa en godtyckligt stor array (lista) av studenter, som
tilldelas värden och skrivs ut från listan.
Att göra:
• Skapa och testkör programmet beskrivet nedan med C-kod i en ny fil kallad
workshop12-4.c
Använd strukturen från workshop12-2.c och skapa ett program som
• I huvudprogrammet
o Frågar efter antal studenter att mata in.
o Skapar en struct-array med plats för antalet studenter.
o Låter användaren mata in uppgifterna för en student i taget.
o Skriver ut innehållet i listan på samma sätt som i workshop12-3.c.
• Exempel på data att testa med:
roll_no name
123 Kim
124 Abdul
125 Charles
126 Anya
127 Jenny
Workshop
V4_D5.1-Workshop_12-Structs.docx 5 (6) 2024-09-27
Exempel på en programkörning med tre studenter:
Workshop
V4_D5.1-Workshop_12-Structs.docx 6 (6) 2024-09-27
Uppgift 5
Skapa en struct student, tilldela värden och skriv ut innehållet i strukturen.
Att göra:
• Skapa och testkör programmet beskrivet nedan med C-kod i en ny fil kallad
workshop12-1.c
Skapa ett program som
• Deklarerar en struct date med tre heltalsvariabler: dd, mm, yyyy.
• Deklarerar en struct emp med tre variabler:
o no som heltal
o name med plats för 30 tecken.
o join_date med strukturen date.
• I huvudprogrammet
o Frågar efter uppgifterna för en anställd:
number, name, samt join_date i formatet (DD MM YYYY)
o Skriver ut de inmatade värdena från strukturen.
• Exempel på en programkörning:
Extra: Flytta in definitionen av strukturen date inuti strukturen emp som ett aggregat.
• Fungerar det på samma sätt som tidigare?
• Finns det något av sätten att föredra: med eller utan aggregat?*/
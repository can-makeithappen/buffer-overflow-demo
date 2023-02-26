#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void connect_to_server() {
    system("start cmd");
}

int main(void)
{
    // Buffer zum Speichern des Passworts
    char buff[15];

    // Variable zum Speichern der Korrektheit des Passworts
    int pass = 0;

    printf("\n Enter the password : \n");
    
    // Passwort vom Benutzer einlesen und in 'buff' speichern
    gets(buff);

    if(strcmp(buff, "katze123"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
        // printf("pass: %d", pass);        

        printf ("\n Access granted \n");

        connect_to_server();

    }

    return 0;
}
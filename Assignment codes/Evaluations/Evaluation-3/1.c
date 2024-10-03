#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct AirlineReservation
{
    int ticketID;
    char source[20];
    char destination[25];
    int ticket_amount;
    int day;
    int month;
    int year;
};

int details_of_tickets(int a, struct AirlineReservation *s)
{
    for (int i = 0; i < a; i++)
    {
        printf("\nThe details of the tickets of person %d are \n", i + 1);
        printf("\n\nTicketId: %d\nSource : %s\nDestination : %s\nDate : %d:%d:%d\n", s[i].ticketID, s[i].source, s[i].destination, s[i].day, s[i].month, s[i].year);
    }
}

int availability(int a, int b, struct AirlineReservation *s)
{
    int d, m, y;
    char des[25];
    int c = 0;

    if (b > a)
        printf("Tickets are not aviable\n");

    else
    {
        printf("Enter the date in numbers\n");
        scanf("%d%d%d", &d, &m, &y);

        printf("Enter the destination : ");
        scanf("%s", des);

        for (int i = 0; i < a; i++)
        {
            if ((strcmp(des, s[i].destination) == 0 && (d == s[i].day && m == s[i].month && y == s[i].year)))
            {
                c++;
            }
        }

        if (c == 0)
            printf("Tickets are avaiable\n");

        else
            printf("Tickets are not available\n");
    }
}
int book_tickets(int a, struct AirlineReservation *s)
{
    char name[a][20];

    for (int i = 0; i < a; i++)
    {
        printf("Enter the name of person %d : ", i + 1);
        scanf("%s", name[i]);

        printf("Enter the destination : ");
        scanf("%s", (s + i)->destination);

        printf("Enter the date in numbers\n");
        scanf("%d%d%d", &(s + i)->day, &(s + i)->month, &(s + i)->year);

        printf("Enter the source : ");
        scanf("%s", (s + i)->source);

        printf("Enter the ticket ID : ");
        scanf("%d", &(s + i)->ticketID);

        printf("Enter the amount : ");
        scanf("%d", &(s + i)->ticket_amount);
    }
    printf("\n\n");
    for (int i = 0; i < a; i++)
    {
        printf("Name : %s\nTicketId: %d \nSource : %s\nDestination : %s\nDate : %d:%d:%d\nAmount : %d\n\n\n", name[i], (s + i)->ticketID, (s + i)->source, (s + i)->destination, (s + i)->day, (s + i)->month, (s + i)->year, s[i].ticket_amount);
    }
}

int main()
{
    int opt, n, p;

    printf("Enter the number of tickets : ");
    scanf("%d", &n);

    struct AirlineReservation *s;
    s = (struct AirlineReservation *)malloc(n * sizeof(struct AirlineReservation));

    do
    {
        printf("Enter an option\n1.Display the details of tickets\n2.Search for the availability of ticket based on Date and destination\n3.Book tickets for 2 people\n");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            for (int i = 0; i < n; i++)
            {
                printf("Enter the destination of person %d : ", i + 1);
                scanf("%s", (s + i)->destination);

                printf("Enter the date in numbers\n");
                scanf("%d%d%d", &(s + i)->day, &(s + i)->month, &(s + i)->year);

                printf("Enter the source : ");
                scanf("%s", (s + i)->source);

                printf("Enter the ticket ID : ");
                scanf("%d", &(s + i)->ticketID);

                printf("Enter the amount of the ticket : ");
                scanf("%d", &(s + i)->ticket_amount);

                printf("\n\n");
            }
            details_of_tickets(n, s);
            break;
        case 2:
            printf("Enter the number of passengers : ");
            scanf("%d", &p);
            availability(n, p, s);
            break;
        case 3:
            book_tickets(2, s);
            break;
        default:
            printf("Incorrect option\n");
        }

        printf("Enter the option 4 to exit or 0 to continue\n");
        scanf("%d", &opt);

    } while (opt != 4);
}
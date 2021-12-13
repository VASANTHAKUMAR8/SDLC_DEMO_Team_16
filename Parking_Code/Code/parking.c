#include<stdio.h>
#include<conio.h>
int no4=0, no2=0, tamount=0, tcount=0;

// no4- Number of 4 wheelers 
// no2- Number of 2 wheelers
// tamount- Total cash collected
// tcount- Total no of vehicles

void car()
{
    printf ("\n Vehicle Entered Successfully") ;
    no4++ ;
    tamount = tamount + 20 ;

    // 4 wheeler charge 20rs per entry
    
    tcount++ ;
}
void bike()
{
    printf ("\n Vehicle Entered Successfully ") ;
    no2++ ;
    tamount = tamount + 10 ;

    // 2 wheeler charge 10rs per entry

    tcount++ ;
}
void status()
{
    printf ("\n Total number of Car's = %d ", no4) ;
    printf ("\n Total number of Bike's = %d ", no2) ;
    printf ("\n Total number of Vehicles = %d", tcount);
    printf ("\n Total amount of cash collected = %d", tamount);

}
void clear()
{
    no4=0;
    no2=0;
    tcount=0;
    tamount=0;
    printf ("\n All Entries Cleared Successfully");
}
int provision()
{
    int check;
    printf ("\n 1. Enter 4 Wheeler");
    printf ("\n 2. Enter 2 Wheeler");
    printf ("\n 3. Check Position");
    printf ("\n 4. Clear Data");
    printf ("\n 5. EXIT");
    printf ("\n Enter Your Choice :  ");
    scanf ("%d", &check) ;
    return (check) ;
}
void main()
{
   
    while(1)
    {
        switch(provision())
        {
            case 1:
                car() ;
                break ;
            case 2:
                bike() ;
                break ;
            case 3:
                status() ;
                break ;
            case 4:
                clear() ;
                break ;
            case 5:
                exit(0) ;
            default:
                printf ("\n Enter Corrrect Option") ;
        }
    
    } 
    getch() ;
}

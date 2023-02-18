#include<stdio.h>
#include<string.h>

float array ();
int numbers();
char cars();

int main ()
{
   array ();
   numbers();
   cars();
    return 0;
}

float array ()
{
   float prices[] = {50.0,100.0,150.0};
   for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
   {
    printf("\n%.2f",prices[i]);
    printf("\n");
   }
   
    return 0.0;
}
int numbers()
{
  int number[2][4] ={{1,2,3,4},{5,6,7,8}};
    for (int i = 0; i < 2; i++)
    {

       for (int j = 0; j < 4; j++)
       {
        printf("\t%d",number[i][j]);

       }
       printf("\n");
    }
     return 0;
}

char cars()
{
  char vehicles[][10]={"toyota","lexus","subaru"};
  
  strcpy(vehicles[1],"tx");

  for (int i = 0; i < 3; i++)
  {
     printf("\n%s",vehicles[i]);

  }
  


    return cars;
}
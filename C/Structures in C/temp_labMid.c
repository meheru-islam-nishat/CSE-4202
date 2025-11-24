#include<stdio.h>

int main()
{
    int row, col=4, time;
    printf("How many values: ");
    scanf("%d", &row);

    int para[row][col];

    // Time input
    printf("Enter current time: ");
    scanf("%d", &time);

    for(int i=0; i< row; i++)
    {
        para[i][0]= time+i;
        printf("\nTime= %d", para[i][0]);
    }


    // Airspeed input
    printf("\nAirspeed input:\n ");
    for(int i=0; i<row; i++)
    {
        printf("\nAirspeed (knots) at time %d= ", para[i][0]);
        scanf("%d", &para[i][1]);
    }

    // Altitude input
    printf("\nAltitude input:\n ");
    for(int i=0; i<row; i++)
    {
        printf("\nAltitude (feet) at time %d= ", para[i][0]);
        scanf("%d", &para[i][2]);
    }

    //Temperature input
    printf("\nTemperature input:\n ");
    for(int i=0; i<row; i++)
    {
        printf("\nTemperature (Celcius) at time %d= ", para[i][0]);
        scanf("%d", &para[i][3]);
    }

    printf("\n");

    //Print the table
    printf("Time    |Airspeed |Altitude |Temp    |\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d       |", para[i][j]);
        }
        printf("\n");
    }

int sum1=0, sum2=0, sum3=0;
float avg1=0, avg2=0, avg3=0;

// avg air
for(int i=0; i<row; i++)
{
    sum1+= para[i][1];
}
avg1= (float)sum1/row;
printf("\nAverage Airspeed= %.2f Knots", avg1);

// avg Alt
for(int i=0; i<row; i++)
{
    sum2+= para[i][2];
}
avg2= (float)sum2/row;
printf("\nAverage Altitude= %.2f feet", avg2);

// avg temp
for(int i=0; i<row; i++)
{
    sum3+= para[i][3];
}
avg3= (float)sum3/row;
printf("\nAverage Temperature= %.2f Celceus", avg3);

printf("\n");

// Find maximums for airspeed, altitude and temperature
int max_airspeed = para[0][1];
int max_altitude = para[0][2];
int max_temp = para[0][3];
int max_airspeed_time = para[0][0];
int max_altitude_time = para[0][0];
int max_temp_time = para[0][0];

for(int i = 1; i < row; i++) {
    // Check airspeed
    if(para[i][1] > max_airspeed) {
        max_airspeed = para[i][1];
        max_airspeed_time = para[i][0];
    }
    // Check altitude
    if(para[i][2] > max_altitude) {
        max_altitude = para[i][2];
        max_altitude_time = para[i][0];
    }
    // Check temperature
    if(para[i][3] > max_temp) {
        max_temp = para[i][3];
        max_temp_time = para[i][0];
    }
}

printf("\nMaximum Airspeed = %d Knots at time = %d", max_airspeed, max_airspeed_time);
printf("\nMaximum Altitude = %d feet at time = %d", max_altitude, max_altitude_time);
printf("\nMaximum Temperature = %d Celsius at time = %d\n", max_temp, max_temp_time);

return 0;
}

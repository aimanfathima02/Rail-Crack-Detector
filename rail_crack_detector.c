#include <stdio.h>

int main()
{
    int crackSensor;
    int obstacleSensor;
    float latitude, longitude;

    printf("=====================================\n");
    printf(" SMART RAIL DETECTION ROBOT SIMULATOR\n");
    printf("=====================================\n\n");

    printf("Enter GPS Latitude : ");
    scanf("%f", &latitude);

    printf("Enter GPS Longitude: ");
    scanf("%f", &longitude);

    printf("\n");

    while(1)
    {
        printf("\n----------------------------------\n");

        printf("Crack Detected? (1=YES 0=NO): ");
        scanf("%d", &crackSensor);

        printf("Obstacle Detected? (1=YES 0=NO): ");
        scanf("%d", &obstacleSensor);

        if(crackSensor==1)
        {
            printf("\n***** ALERT *****\n");
            printf("Rail Crack Detected!\n");
            printf("Robot Stopped\n");
            printf("Buzzer ON\n");
            printf("Sending GSM Alert...\n");

            printf("GPS Location:\n");
            printf("Latitude : %.6f\n", latitude);
            printf("Longitude: %.6f\n", longitude);

            printf("Maintenance Team Notified.\n");

            break;
        }

        else if(obstacleSensor==1)
        {
            printf("\nObstacle Ahead!\n");
            printf("Robot Stopped.\n");
            printf("Buzzer ON\n");
        }

        else
        {
            printf("\nTrack Normal\n");
            printf("Robot Moving Forward...\n");
        }
    }

    printf("\nProgram Ended.\n");

    return 0;
}
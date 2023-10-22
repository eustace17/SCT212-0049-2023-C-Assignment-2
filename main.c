#include <stdio.h>


int main()

{

//Try changing the Fahrenheit-to-Celsius program so that it uses scanf to accept the starting, ending and increment value for the table from the user.
    //Add a heading line to the table that is produced
    int start, end, increment;
    printf("Enter your First Fahrenheit Value : ");
    scanf("%d", &start);
    printf("Enter your end Fahrenheit Value : ");
    scanf("%d", &end);
    printf("Enter the increment : ");
    scanf("%d", &increment);

    printf("\nFahrenheit to Celsius Conversion:\n");
    printf("Fahrenheit   Celsius\n");

    int fahrenheit = start;

    while (fahrenheit<=end) {
        double celsius = (fahrenheit - 32) * 5.0 / 9.0;
        printf("%9d   %8.2f\n", fahrenheit, celsius);
        fahrenheit += increment;
    }

    //Converting miles to Kilometres

    printf("Enter the lowest number of miles: ");
    scanf("%d", &start);
    printf("Enter the highest number of miles: ");
    scanf("%d", &end);
    printf("Enter the Increment Value: ");
    scanf("%d", &increment);


    printf("\nMiles to Kilometers Conversion\n");
    printf("Miles   Kilometres\n");

    int miles = start;
    while (miles <= end) {
        int kilometers = miles * 1.609344;
        printf("%d = %d\n", miles, kilometers);
        miles += increment;
    }




    printf("Enter the lowest number of pounds: ");
    scanf("%d", &start);
    printf("Enter the highest number of pounds: ");
    scanf("%d", &end);
    printf("Enter the Increment Value: ");
    scanf("%d", &increment);

    printf("\nPounds to Kilograms Conversion\n");
    printf("Pounds   Kilograms\n");

    float pounds = start;
    while (pounds <= end) {
        float kilograms = pounds * 0.45359237;
        printf("%.2f   %.2f\n", pounds, kilograms);
        pounds += increment;
    }



    return 0;
}

#include <stdio.h>
int celciusToFarenheit(int celcius){
    return (celcius * 9 /5) + 32;
}
int farenheitToCelcius(int farenheit){
    return (farenheit - 32) + 5 / 9;
}
int kelvinToFarenheit(int kelvin){
    return (kelvin - 273.15) * 9 / 5 + 32;
}
int kelvinToCelsius(int k){
    return (k - 273.15);
}
int main(){
    int choose, c_value, f_value, k_value1, k_value2, result1, result2, result_3, result_4; 

    printf("  Temprature Converter by Gourav Talukdar\n ");
    printf(" Choose from below which you want to convert:\n ");
    printf(" 1. Celsius To Farenheit\n ");
    printf(" 2. Farenheit To Celsius\n ");
    printf(" 3. Kelvin To Farenheit\n ");
    printf(" 4. Kelvin To Celsius\n ");
    printf(" 5. Use Again \n");
    printf("  User Choose: ");
    scanf("%d", &choose); 

    switch(choose){
        case 1:
        printf(" Enter Celsius Value: ");
        scanf("%d", &c_value); 
        result1 = celciusToFarenheit(c_value); 
        printf(" The value of celsius is: %d C\n", c_value);
        printf(" The value of conversion in celcius to farenheit is : %d F", result1);
        
        break; 

        case 2:
        printf(" Enter Farenheit Value: ");
        scanf("%d", &f_value); 
        result2 = farenheitToCelcius(f_value); 
        printf(" The value of farenheit is: %d F\n", f_value);
        printf(" The value of conversion in farenheit to celsius is : %d C", result2);
        
        break;

        case 3:
        printf(" Enter Kelvin Value: ");
        scanf("%d", &k_value1); 
        result_3 = kelvinToFarenheit(k_value1); 
        printf(" The value of kelvin is: %d K\n", k_value1);
        printf(" The value of conversion in kelvin to farenheit is : %d F", result_3);
        
        break;

        case 4:
        printf(" Enter Kelvin Value: ");
        scanf("%d", &k_value2); 
        result_4 = kelvinToCelsius(k_value2); 
        printf(" The value of kelvin is: %d K\n", k_value2);
        printf(" The value of conversion in kelvin to celcius is : %d C", result_4);
        
        break;

        case 5:
        main();

        break;

        default: 
        printf("  Invalid Choice ");

    }


    return 0; 
}

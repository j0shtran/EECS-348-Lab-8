#include <stdio.h>
int main() {
  float init_temp, conv_temp; //declares temperature values
  printf("Enter the temperature: "); 
  scanf("%f", &init_temp); //takes temperature input from user as a float 
  char init_val, conv_val;
  printf("Enter the original scale (C, F, K): ");
  scanf(" %c", &init_val); //takes original scale input as a character 
  printf("Enter the conversion scale (C, F, K): ");
  scanf(" %c", &conv_val); //takes conversion scale input as a character 
  if (init_val == 'C') { // if the original scale is celsius..
    if (conv_val == 'F') { // if the conversion if farenheit, uses the conversion formula to output conv_temp 
      conv_temp = (init_temp * (1.8)) + 32;
      printf("Converted temperature: %f \n", conv_temp);
    }
    else if (conv_val == 'K') { //same thing but with kelvin...
      conv_temp = init_temp + 273.15;
      printf("Converted temperature: %f \n", conv_temp);
    }
    else if (conv_val == 'C') { //if trying to convert celsius to celsius, just prints the initial temperature 
        printf("Converted temperature: %f \n", init_temp);
      }
 }
  else if (init_val == 'F') { //functions the same as the loop above ...
    if (conv_val == 'C') {
     conv_temp = (init_temp - 32) / (1.8); 
     printf("Converted temperature: %f \n", conv_temp);
    }
    else if (conv_val == 'K') {
      conv_temp = (init_temp +459.67) / (1.8);
      printf("Converted temperature: %f \n", conv_temp);
      } 
    else if (conv_val == 'F') {
      printf("Converted temperature: %f \n", init_temp);
      }
  }
  else if (init_val == 'K') { //same with this one..
    if (conv_val == 'C') {
      conv_temp = init_temp - 273.15;
      printf("Converted temperature: %f \n", conv_temp);
    }
    else if (conv_val == 'F') {
      conv_temp = (init_temp * (1.8)) - 459.67;
      printf("Converted temperature: %f \n", conv_temp);
    }
    else if (conv_val == 'K') {
      printf("Converted temperature: %f \n", init_temp);
    }
  }
  float cel; //declares temperature in celsius as a float 
  if (init_val != 'C') { //if the intiial temperature wasn't given as celsius...
      if (init_val == 'K') { //if it was kelvin, transfers it from kelvin to celsius 
        cel = init_temp - 273.15;
      }
      else if (init_val == 'F') { //if it was farenheit, transfers it from farenheit to celsius 
        cel = (init_temp * (1.8)) + 32;
      }
    }
  else if (init_val == 'C') { //otherwise if it was already celsius...
    cel = init_temp; //cel is just the initial temp given 
    }
  if (cel < 0) { //prints the temperature category and the advisory message based on the range that the temperature in celsius is
        printf("Temperature Category: Freezing! \n");
        printf("Stay inside! \n");
    }
  else if (0<cel && cel<10) {
        printf("Temperature Category: Cold \n");
        printf("Put on a coat! \n");
    }
  else if (10<cel && cel<25) {
      printf("Temperature Category: Comfortable \n");
      printf("Consider a light jacket! \n");
    }
  else if (25<cel && cel<35) {
      printf("Temperature Category: Hot \n");
      printf("Maybe choose shorts over pants! \n");
    }
  else if (cel>35) {
      printf("Temperature Category: Extreme Hot \n");
      printf("STAY AWAY FROM THE SUN! \n");
    }
  }


#include <stdio.h>
int main() {
  float init_temp, conv_temp;
  printf("Enter the temperature: ");
  scanf("%f", &init_temp);
  char init_val, conv_val;
  printf("Enter the original scale (C, F, K): ");
  scanf(" %c", &init_val);
  printf("Enter the conversion scale (C, F, K): ");
  scanf(" %c", &conv_val);
  if (init_val == 'C') {
    if (conv_val == 'F') {
      conv_temp = (init_temp * (1.8)) + 32;
      printf("Converted temperature: %f \n", conv_temp);
    }
    else if (conv_val == 'K') {
      conv_temp = init_temp + 273.15;
      printf("Converted temperature: %f \n", conv_temp);
    }
    else if (conv_val == 'C') {
        printf("Converted temperature: %f \n", init_temp);
      }
 }
  else if (init_val == 'F') {
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
  else if (init_val == 'K') {
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
  float cel;
  if (init_val != 'C') {
      if (init_val == 'K') {
        cel = init_temp - 273.15;
      }
      else if (init_val == 'F') {
        cel = (init_temp * (1.8)) + 32;
      }
    }
  else if (init_val == 'C') {
    cel = init_temp;
    }
  if (cel < 0) {
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


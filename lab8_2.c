#include <stdio.h>
int main() {
  float init_temp, conv_temp;
  printf("Enter the temperature: ");
  scanf("%f", &init_temp);
  char init_val, conv_val;
  printf("Enter the original scale (C, F, K): ");
  scanf("%c", &init_val);
  printf("Enter the conversion scale (C, F, K): ");
  scanf("%c", &conv_val);
  if (init_val == 'C') {
    if (conv_val == 'F') {
      conv_temp = (init_temp * (9/5)) + 32;
      printf("Converted temperature: %f", conv_temp);
    }
    else if (conv_val == 'K') {
      conv_temp = init_temp + 273.15;
      printf("Converted temperature: %f", conv_temp);
    }
    else if (conv_val == 'C') {
        printf("Converted temperature: %f", init_temp);
      }
 }
  else if (init_val == 'F') {
    if (conv_val == 'C') {
     conv_temp = (init_temp - 32) * (5/9); 
     printf("Converted temperature: %f", conv_temp);
    }
    else if (conv_val == 'K') {
      conv_temp = (init_temp +459.67) * (5/9);
      printf("Converted temperature: %f", conv_temp);
      }        
    else if (conv_val == 'F') {
      printf("Converted temperature: %f", init_temp);
      }
  
  }
  else if (init_val == 'K') {
    if (conv_val == 'C') {
      conv_temp = init_temp - 273.15;
      printf("Converted temperature: %f", conv_temp);
    }
    else if (conv_val == 'F') {
      conv_temp = (init_temp * (9/5)) - 459.67;
      printf("Converted temperature: %f", conv_temp);
    }
    else if (conv_val == 'K') {
      printf("Converted temperature: %f", init_temp);
    }
  }
}

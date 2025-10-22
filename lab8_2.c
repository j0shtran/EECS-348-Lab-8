#include <stdio.h>
int main() {
  float init_temp, conv_temp;
  printf("Enter the temperature: ");
  scanf("%d", &temp);
  char init_val, conv_val;
  printf("Enter the original scale (C, F, K): ");
  scanf("%d", &init_val);
  printf("Enter the conversion scale (C, F, K): ");
  scanf("%d", &conv_val);
  if (init_val == "C") {
    if (conv_val == "F") {
      conv_temp = (init_temp * (9/5)) + 32;
      printf("Converted temperature: %d", conv_temp);
    }
    elif (conv_val == "K") {
      conv_temp = init_temp + 273.15;
      printf("Converted temperature: %d", conv_temp);
    }
    elif (conv_val == "C") {
        printf("Converted temperature: %d", init_temp);
      }
  }
  elif (init_val == "F") {
    if (conv_val == "C") {
     conv_temp = (init_temp - 32) * (5/9); 
     printf("Converted temperature: %d", conv_temp);
    }
    elif (conv_val == "K") {
      conv_temp = (init_temp +459.67) * (5/9);
      printf("Converted temperature: %d", conv_temp);
      }        
    elif (conv_val == "F") {
      printf("Converted temperature: %d", init_temp);
      }
  
  }
  elif (init_val == "K") {
    if (conv_val == "C") {
      conv_temp = init_val - 273.15;
      printf("Converted temperature: %d", conv_temp);
    }
    elif (conv_val == "F") {
      conv_temp == (init_val * (9/5)) - 459.67
      printf("Converted temperature: %d", conv_temp);
    }
    elif (conv_val == "K") {
      printf("Converted temperature: %d", init_temp);
    }
  }
}

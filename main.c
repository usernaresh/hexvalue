#include <stdio.h>
#include <stdint.h> 

#define MASK 0xF0000000 

void print_hex(int value) {
  putchar('0');
  putchar('x');
  int temp = 0;
  int tempvalue = value;
  //printf("size of int: %d \n", sizeof(int));
  for(int i=0; i<=7; i++){
     temp = MASK & tempvalue;
     temp >>= 28;      
     putchar(((int8_t)temp)+0x30); 
     tempvalue <<= 4;
   }
}

int main()
{
    print_hex(0x34500467);
    return 0;
}

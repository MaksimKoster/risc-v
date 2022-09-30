
volatile unsigned int * const UART0DR = (unsigned int *)0x10000000;

void print_uart0(const char *s) {
 while(*s != '\0') { 
 *UART0DR = (unsigned int)(*s); 
 s++; 
 }
}

int main() {

    print_uart0("memory is filled correctly\n");

    print_uart0("memory is filled incorrectly\n");
    
    return 0;
}

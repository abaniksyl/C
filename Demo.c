#include <stdio.h> 
int main(void) 
{ 
 int x; 
 x = 10; 
 if(x == 10) { 
 int x; /* this x hides the outer x */ 
 x = 99; 
 printf("Inner x: %d\n", x); 
 }
 printf("Outer x: %d\n", x); 
 return 0; 
} 
#include <stdio.h> 
int count; /* count is global */ 
void func1(void); 
void func2(void); 
int main(void) 
{ 
 count = 100; 
 func1(); 
 return 0; 
} 
void func1(void) 
{ 
 int temp; 
 temp = count; 
 func2(); 
 printf("count is % d", count); /* will print 100 */ 
} 
void func2(void)
{ 
 int count; 
 for(count=l; count<10; count++) 
 putchar('.'); 
}

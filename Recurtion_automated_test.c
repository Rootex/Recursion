/*
copyright  © Sotaya Yakubu
Contact: sotayamy@yahoo.co.uk
*/
/*
This code is free software, distributed under the 
GNU Public license Version 3 http://www.gnu.org/licenses/gpl.html
*/

#include <stdio.h>

/*Function declarations*/
int factorial(int number);
int fibonacci(int number);
int linearSearch(const int array[], int length, int value);
int sum(int number);



/*Main method, automated test*/
int main(){
 
  int array[] = {1, 2, 3, 4};
  
  printf("Start of Automated test\n\n");
  
  /*Test for factorial*/
  printf("Factorial Test Start\n");
  
  if(factorial(0) == 1) printf("Passed\n");
  else printf("Failed\n");
  
  if(factorial(1) == 1) printf("Passed\n");
  else printf("Failed\n");
  
  if(factorial(6) == 720) printf("Passed\n\n");
  else printf("Failed\n\n");
  
  /*Test for Fibonacci*/
  printf("Fibonacci Test Start\n\n");
  
  if(fibonacci(0) == 0) printf("Passed\n");
  else printf("Failed\n");
  
  if(fibonacci(1) == 1) printf("Passed\n");
  else printf("Failed\n");
  
  if(fibonacci(6) == 8) printf("Passed\n\n");
  else printf("Failed\n\n");
  
  /*Test for linearSearch*/
  printf("Linear Search Test Start\n\n");
  
  if(linearSearch(array, 4, 3) == 2) printf("Passed\n");
  else printf("Failed\n");
  
  if(linearSearch(array, 4, 1) == 0) printf("Passed\n");
  else printf("Failed\n");
  
  if(linearSearch(array, 4, 4) == 3) printf("Passed\n\n");
  else printf("Failed\n\n");
  
  /*Test for Sumation*/
  printf("Sumation Test Start\n\n");
  
  if(sum(0) == 0) printf("Passed\n");
  else printf("Failed\n");
  
  if(sum(1) == 1) printf("Passed\n");
  else printf("Failed\n");
  
  if(sum(5) == 15) printf("Passed\n\n");
  else printf("Failed\n\n");
  
  printf("End of Automated test\n");
  
  return 0;

}



/*Function implementation*/
/*Calculating the factorial of a number*/
int factorial(int number){
  
  //termination code
  if(number == 1 || number == 0){
    return 1;
  }
  
  //Recursion
  if(number > 1){
    return number * factorial(number - 1);
  }
  
  //catch the cases when negative numbers are passed
  return 0;
}



/*Calculating fibonacci numbers*/
int fibonacci(int number){
  
  //termination code, in fibonacci sequence, the first and 
  //second terms result in the same fibonacci number
  if(number < 2){
    return number;
  
  }else{
  
  // a fibonacci number of an integer is calculated the the sum of the previous two numbers
    return (fibonacci(number - 1) + fibonacci(number - 2));
  }

}



/*Linear Search with recursion*/
int linearSearch(const int array[], int length, int value) {
  
  //searching backwards from the size to 0 (Termination code) 
  if(length==0){
    return -1;
  }
  
  //if the element if found we return the position 
  else if (array[length-1]==value) {
    return length-1;
  }
  
  //else we keep searching (recursive code) 
  else{ 
    return linearSearch( array, length-1, value); 
  }
} 



/*Sumation with recursion*/
int sum(int number){
  
  if(number > 0){
    return number + sum(number - 1);
  }else{
    return 0;
  }
}

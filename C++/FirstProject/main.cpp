#include <iostream>

int main() {
  float n;
  float m;
  float First;
  float Second;
  float answer;
  int x;
  bool continueYN = true;
  std::cout <<"Welcome to the J.A.CALC!";
  n = First;
  m = Second;

  while(continueYN){
  std::cout <<"\n\nWhat operation do you want to do? \n1. Addition 2. Subtraction 3. Multiplication 4. Division: ";
  std::cin >>x;

    if(x==1) {
        std::cout <<"\nInput the first number: ";
        std::cin >>First;
        std::cout <<"\nInput the second number: ";
        std::cin >>Second;
        answer = First + Second;
        std::cout <<"The answer is:\n" <<answer;
    }

     if(x==2) {
        std::cout <<"\nInput the first number: ";
        std::cin >>First;
        std::cout <<"\nInput the second number: ";
        std::cin >>Second;
        answer = First - Second;
        std::cout <<"The answer is: " <<answer;
    }
      if(x==3) {
        std::cout <<"\nInput the first number: ";
        std::cin >>First;
        std::cout <<"\nInput the second number: ";
        std::cin >>Second;
        answer = First * Second;
        std::cout <<"The answer is: " <<answer;
    }
       if(x==4) {
        std::cout <<"\nInput the first number: ";
        std::cin >>First;
        std::cout <<"\nInput the second number: ";
        std::cin >>Second;
        answer = First / Second;
        std::cout <<"The answer is: " <<answer;
    }

     else{
        std::cout <<"\nPlease pick an operation";
    }

  }
}

#include<csignal>
#include<iostream>
#include<cstdlib>
#include<ctime>


void panic(uint32_t code) {
  std::cout << "This program just broke so badly we'll play some russian roulette!" << std::endl;

  //if unlucky, cause a segmentation fault
  std::srand(std::time(NULL));
  if(std::rand() % 6 <= 4) *(volatile int*)0 = 0;

  //if lucky, print out the error code
  std::cout << "Error code: " << "[0x" << std::hex << code << "]" << ". Please contact this app's developper." << std::endl;
  exit(1);
}

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <ctime>
int main() {

    char startYN = ' ';
    char agreeYN = ' ';
    std::cout <<"Would you like to play a game my friend? HEHEH";
    std::cout <<"\nEnter your response (y/n):";
    std::cin >> startYN;

    if(startYN == 'y'){
        std::cout <<"Okay here are the rules:";
        std::cout <<"\n1. If you win you do not have to pay and I will give you"
        <<" 5 gold coins";
        std::cout <<"\n2. If you lose you owe me 20 gold coins";
        std::cout <<"\n3. If you try to cheat I will kill you";

        std::cout <<"\nDo you agree to these terms? (y/n):";
        std::cin >>agreeYN;

        if(agreeYN == 'y') {
            std::cout <<"\nOK! Let's begin!";
            std::cout <<"\nTo win this coin has to land on heads";
            Sleep(3000);
            std::cout <<"\nHere I go!";
            Sleep(3000);

             srand (time(NULL));

             int coin = rand() % 2;

             if (coin == 0) {
                std::cout << "\nHeads\n";
                Sleep(1000);
                std::cout <<"\nCONGRATS! Heres 5 gold coins";
                Sleep(30000);
            }
             else {

                std::cout << "\nTails\n";
                Sleep(1000);
                std::cout <<"\nYou lose. Now give me 20 gold coins or die!";
                Sleep(30000);
             }


        }

        else {
            std::cout <<"\nGET OUT OF HERE THEN!";
            Sleep(30000);
        }



    }

    else {
        std::cout <<"\nGET OUT OF HERE THEN!";
        Sleep(30000);
        return 0;
    }



}

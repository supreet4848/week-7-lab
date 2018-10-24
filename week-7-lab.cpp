#include <iostream>
// Library needed to get a random seed
#include <time.h>

int main() {
    // Gets a random seed for our rand() function
    // ONLY RUN ONCE
    srand( time(NULL) );
    int guess,bet, balance;
    balance = 500;
    std::cout <<"----LETS PLAY SOME GAMBLE---"<<std::endl;
    
   
    while (balance>0)
    {
        std::cout << "MONEY AVAILABLE TO PLAY GAMBLE IS "<< balance <<std::endl;
         // Picks either 0 or 1 randomly with equal probablilty	
        // CAN BE RUN AS MANY TIMES AS NEEDED
        int random = rand() % 2;
        std::cout << random;
        
        std::cout <<"CHOOSE EITHER THE NUMBER 1 OR 0"<<std::endl;
        std::cin >>guess;
        if (guess != 0 && guess !=1){
            std::cout <<"YOU ARE CASHING OUT"<<std::endl;
            break;
        }

        std::cout <<"ENTER HOW MUCH AMOUNT YOU WANT TO BET: "<<std::endl;
        std::cin >>bet;

        balance = balance - bet;
        
     
     
        if (guess==random)
        {
            std::cout <<"YOU WON"<<std::endl;
            balance=bet*2+balance;
        }

        else
        {
            std::cout <<"YOU LOOSE"<<std::endl;

        }

    }
    std::cout <<"YOU QUIT"<<std::endl;
    

    return 0;
}

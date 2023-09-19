#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <string>
#include <vector>
using namespace std;

const vector<string> propertyNames = {"Bastau","Kokshetau","Chance", "Aktau","Salyk toleu","Taraz","Turkistan", "Chance","Semey", "Uralsk", "Turme","Zhezqazghan", "Ust'-Kamenogorsk", "Aktobe", "Atyrau", "Ekibastuz", "Taldykorgan", "Chance", "Shymkent", "Esik", "Tegin Parking","Zaisan", "Chance", "Merki", "Kurshim", "Burabai", "Ridder", "Rudnyi", "Talgar", "Karatal", "Arys", "Ayagoz", "Urzhar", "Chance", "Arkalyk", "Pavlodar", "Chance", "Almaty", "Luxury Tax", "Astana"};
  
 const  vector<int> propertyPrice = {0, 6000000, 0, 6000000, 0, 20000000, 1000000, 0, 10000000, 12000000, 0, 14000000, 15000000, 14000000, 16000000, 20000000, 18000000, 0, 18000000, 20000000, 0,22000000, 0, 22000000, 24000000, 20000000, 26000000, 26000000, 15000000, 28000000, 5000000, 30000000, 30000000, 0, 32000000, 20000000, 0, 35000000, 0, 40000000};

const vector<int>propertyPosition = {1 , 2 , 3, 4, 5, 6, 7, 8, 9, 10,11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};

vector<string>propertyOwner = {"No owner", "No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner","No owner"};

const  vector<int>propertyRent = {0, 500000, 0, 400000, 0, 250000, 600000, 0, 600000, 800000, 0, 100000, 280000, 100000, 120000, 250000, 140000, 0, 140000, 160000, 0, 180000, 0, 180000, 200000, 250000, 220000, 220000, 280000, 240000, 200000, 260000, 260000, 0, 280000, 250000, 0, 350000, 0, 500000};

vector<string> propertyColor = {"No color", "Brown", "No color", "Brown", "No color", "Brown", "Blue", "No color", "Blue", "Blue","No Color", "Pink", "Pink","Pink","Orange","Orange", "Orange",""};
  

class player {
public:
    string name;
    int money ;
    int position;
    bool game_on = true;
    int turn = 0;

  void player_has_money(){
     if (money < 0) {
        cout << "You are broke, the game has ended for you" << endl;
        game_on = false;
    } else {
        cout << "You have now " << money << " tg available" << endl;
    }
  }
 // Card that gives 500 000tg when it passes Bastau
void one() {
    cout << "You advance directly to Bastau and collect 500 000 tg" << endl;
    position = 0;
    money+= 500000;
    player_has_money();
}

void two() {
    cout << "You inherit 1 000 000 tg" << endl;
    money += 1000000;
    player_has_money();
}

void three() {
    player playerObject;
    cout << "You receive 250 000 tg for winning the competition" << endl;
    money += 250000;
    player_has_money();
  }

void four() {
    cout << "You go directly to Turme without passing Bastau and without collecting 500 000 tg" << endl;
    position = 10;
    player_has_money();
}

void five() {
  cout<< "Nauryz is coming, you receive 100 000 tg";
  money +=100000;
  player_has_money();
}

void six() {
  cout<<"You now have a card to get out of Turme for free, you can use it whenever you want or sell";
  player_has_money();
}

void seven() {
  cout<<"You have won 2nd place in a hakathon, collect 1000000 tg";
  money += 1000000;
  player_has_money();
  }
void eight() {
  cout<<"Korimdik for your new car 4500000 tg";
  money +=4500000;
  player_has_money();
}
void nine() {
  cout<<"Pay 1000000 tg for hospital expenses";
  money -=1000000;
  player_has_money();
}

void ten() {
  cout<<"You told happy news to your mom, and got suyinshі (сүйінші) 2000000 tg";
  money+=2000000;
  player_has_money();
}

void eleven() {
  cout<<" Mektepte shtorga aksha zhinau 150000 tg";
  money -=150000;
  player_has_money();
}

void twelve() {
  cout<<"Go back three spaces";
  position -=3;
  player_has_money();
}
void thirteen() {
  cout<<"Korimdik for your new car 4500000 tg";
  money +=4500000;
  player_has_money();
}

void fourteen() {
 cout<<"You go directly to Turme without passing Bastau and without collecting 500 000 tg ";
 position = 10;
 player_has_money();
}

void fifteen() {
  cout<< " You advance directly to Bastau and collect 500 000 tg";
  position = 0;
  money += 500000;
  player_has_money();
}
    void card_chooser(int x, player plr) {
        int number = turn;

        if (x == 1) {
            plr.one();
        }
        else if (x == 2) {
            plr.two();
        }
        else if (x == 3) {
            plr.three();
        }
        else if (x == 4) {
            plr.four();
        }
        else if (x == 5) {
            plr.five();
        }
        else if (x==6) {
          plr.six();
        }
        else if (x==7) {
           plr.seven();
        }
        else if (x==8) {
          plr.eight();
        }
       else if (x==9) {
         plr.nine();
       }
       else if (x==10) {
         plr.ten();
       }
       else if (x==11) {
         plr.eleven();
       }
       else if (x==12) {
         plr.twelve();
       }
       else if (x==13) {
         plr.thirteen();
       }
       else if (x==14) {
         plr.fourteen();
       }
       else if (x==15) {
         plr.fifteen();
       }
    }
  
};

int roll_dice() {
  srand(time(0));
  return rand() % 6 + 1 + rand() % 6 + 1;
}

int main() {
  int turn = 0;
  int money_in_free_parking = 0;
  
  player *players;
  int size;

  cout << "Ойыншылар саны: ";
  cin >> size;

  
  players = new player[size];

  for (int i = 0; i < size; i++) {
    cout << i + 1 <<" ойыншы "<< ": ";
    cin >> players[i].name;

 
    players[i].money = 2000000000;
    players[i].position = 0;
  }

  // Print the entered information for each player
  for (int i = 0; i < size; i++) {
    cout << i + 1 << " ойыншы: " << players[i].name << ", money:" << players[i].money<<" tg" <<", position:"<< players[i].position << endl;
  }

  
  cout<< "_______________________________\n";
  
  player playerObject;
  


  while (playerObject.game_on == true){
    for (int i=0; i< size;i++){
      cout<<players[i].name<<" is in "<< propertyNames[players[i].position]<<"\n";
      sleep(2);
      cout<<"Rolling the dice...\n";
      sleep(2);
      int b = roll_dice();
      cout<< "The dice turned " << b <<"\n";
      if (players[i].position + b > 39 ) {
          players[i].money += 500000;
          cout<<"You completed another ainalym and got 500 000 tg. You now have" <<                           players[i].money<<" tg \n";
          players[i].position = players[i].position + b - 40;
      }
      else {
        players[i].position = players[i].position + b;
        cout<<"Your position is "<<propertyNames[players[i].position]<<". \n ";
        if (players[i].position == 2 || players[i].position == 17 || players[i].position == 33||               players[i].position == 7 || players[i].position == 22 || players[i].position == 36) {
           int cardNumber = rand()%15 +1 ;
           playerObject.card_chooser(cardNumber,players[i]);
          
      }
        else if (players[i].position == 0 || players[i].position == 4 || players[i].position == 10 || players[i].position== 20 || players[i].position == 38) {
  if (players[i].position == 0) {
    cout << "Your position is now " << players[i].position << endl;
      }  else if (players[i].position == 4) {
         cout << "You have to pay income tax of 2 000 000 tg or 10% of your total money (the highest)" << endl;
        float income_tax_10 = 0.1 * players[i].money;
        if (income_tax_10 > 2000000) {
          players[i].money -= income_tax_10;
          money_in_free_parking += income_tax_10;
          cout << "You paid $" << income_tax_10 << " of income tax \n" << endl;
          cout << "This money you paid will go to Free Parking.\n" << endl;
          cout << "The total money in Free Parking is " << money_in_free_parking <<" tg \n"<< endl;
          playerObject.player_has_money();
        } else {
          players[i].money -= 2000000;
          cout << "You paid 2 000 000 tg of income tax \n" << endl;
          money_in_free_parking += 2000000;
          cout << "This money you paid will go to Free Parking. \n" << endl;
          cout << "The total money in Free Parking is " << money_in_free_parking <<" tg \n"<< endl;
          playerObject.player_has_money();
        }
      } else if (players[i].position == 10) {
        cout << "You are in the prison" <<players[i].position << ", but you are just visiting \n" << endl;
      } else if (players[i].position == 20) {
        cout << "Your position is now " << players[i].position<<"\n" << endl;
        cout << "Congratulations! You earn $" << money_in_free_parking << " that was saved here \n" << endl;
        players[i].money += money_in_free_parking;
        money_in_free_parking = 0;
      } else if (players[i].position== 30) {
        cout << " You will not collect 500 000 tg and will go back straight to Turme." << endl;
        players[i].position = 10;
      } else if (players[i].position== 38) {
        cout << "Luxury tax: you have to pay 750 000 tg" << endl;
        players[i].money -= 75000;
        money_in_free_parking += 75000;
        cout << "This money you paid will go to Free Parking. \n" << endl;
        cout << "The total money in Free Parking is " << money_in_free_parking<<" tg \n" << endl;
        playerObject.player_has_money();
      }

      }
        else {
          if (propertyOwner[players[i].position] == "No owner"){
           cout<<propertyNames[players[i].position] << " has no owner! You can buy it for " << propertyPrice[players[i].position]<< " tg and get a rent of "<< propertyRent[players[i].position]<<" tg. \n";
           cout<<" You have "<< players[i].money << " available\n";
           cout<<" Choose 1 to buy it or 2 to not buy it:";
           int playerChoice;
           cin>> playerChoice;
            if (playerChoice == 1) {
             if (players[i].money>= propertyPrice[players[i].position]) {
              cout<<"You are now the owner of "<< propertyNames[players[i].position]<<". Kuttyktaimyz!\n";
              propertyOwner[players[i].position] = players[i].name;
              players[i].money -= propertyPrice[players[i].position];
              cout<< "Remained money: "<< players[i].money<<"\n";
            }
             else {
              cout<<" You do not have enough money to buy it\n";
              }
          }
            else {
             cout<<"You did not buy"<< propertyNames[players[i].position]<<"\n";
          }
        }
          else if (propertyOwner[players[i].position] == players[i].name){
           cout<<"You are the owner of  "<< "   "<<propertyNames[players[i].position]<<"\n";
        }
          else {
           cout<<"This place is owned by "<< propertyOwner[players[i].position]<<" and you have to pay to the owner"<< propertyRent[players[i].position]<<" tg for staying \n";
           players[i].money -= propertyRent[players[i].position];
           int b;
           for (int i = 0; i < players[i].name.size(); i++) {
            if (propertyOwner[players[i].position] == players[i].name) {
             b = i;
            }
           players[b].money += propertyRent[players[i].position];
           playerObject.player_has_money();
           }
          
          }
        }
        cout<< "It is now turn for the next player\n";
          cout<<"_____________________________________\n";
          sleep(3);
        if (turn < size-1) {
            turn += 1;
        } else {
            turn = 0;
        }
      }
    }
  }
}

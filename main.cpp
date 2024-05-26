#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>
#include <vector>

using namespace std;

struct patient {
string firstName, lastName;
};
string treatment;
string conditionName;
vector<string> prn;
string diseaseName;
string genericChoice;
string freeTimeOptions;
int firstNameGenerator;
int lastNameGenerator;
int waterMutiplier = 1;
int condition;
int strikes;
int bucks = 150;
int x = 3;
int day = 0;
int k = 4;
int y;
int waterLevels;
int medicationMutiplier = 1;

void NameGenerator() {
        firstNameGenerator = 1 + (rand() % 21);
        lastNameGenerator = 1 + (rand () % 9);
        condition = 1 + (rand () % k);
}
void shop(int waterMutiplierPriceMutiplier) {
    cout << "Welcome to the shop! \n Here's your options: \n waterMutiplier (" << 20*waterMutiplierPriceMutiplier << " bucks)"  << "\n what will you buy?: ";
    cin >> genericChoice;
    if (genericChoice == "waterMutiplier") {
        if (bucks >= 20*waterMutiplierPriceMutiplier) {
            waterMutiplier = waterMutiplier + 1;
            bucks = bucks - 20*waterMutiplierPriceMutiplier;
            cout << "You now have " << bucks << " bucks!\n";
        }
        else {
            cout << "Sorry you can't afford that! :( \n";
        }
    }
}

int main()
{

patient n;

srand ( time(NULL) );
int waterMutiplierPriceMutiplier = 1;

while (y < 100) {
if (day == 2) {
    cout << "ATTENTION TO ALL MEDICAL STAFF" << endl << "An epidemic have been declare! Some unname sickness is spreading!" << endl;
    k = 6;
    cout << "Do you understand?" << endl;
    cin >> genericChoice;
    if (genericChoice == "no") {
        cout << "YOU'RE FIRED FOR INCOMPETENCE" << endl;
        break;
    }
    else if (genericChoice == "yes") {
        cout << "Good!" << endl;
    }
    else {
        cout << "YOU'RE FIRED!" << endl;
        break;
    }
}
if (day == 3) {
    cout << "CONGRATULATIONS YOU GET TO NAME THE DISEASE!" << endl;
    cin >> diseaseName;
    if (diseaseName == "butt") {
       cout << "Stupid name! SO STUPID THAT I GOT TO FIRE YOU" << endl;
       break;
    }
}
if (day == 5) {
    cout << "ATENTION ALL MEDICAL STAFF" << endl << "A popular interntet trend have appear involving people setting their hair on fire for 'cancer awareness' there may be more burn victims";
    k = 12;
}
cout << "start of day " << day << endl;
cout << "REMEMBER THERE'S A STRIKE SYSTEM\n" << "Here's the chart:\n 0 strikes - Clean record\n1 strike - Warning\n2 strikes - redunt pay\n3 strikes - redunt pay even more\n4 strikes = redunt pay even more\n5 strikes - Fired\n" << "YOU HAVE " << strikes << " STRIKES\n";
waterLevels = 150*waterMutiplier;
cout << "Water levels is at " << waterLevels << endl;
cout << "You have " << bucks << "$\n";
cout << "There's " << x - 1 << " " << "patients" << endl;
if (strikes >= 5) {
        cout << "YOU'RE FIRED" << endl;
        break;
       }

for (int a = 1; a < x; a++) {
    
      NameGenerator();
      
             if (firstNameGenerator == 1) {
                 n.firstName = "John";
                 }
             if (firstNameGenerator == 2) {
                 n.firstName = "Jane";
                 }
             if (firstNameGenerator == 3) {
                 n.firstName = "Mike";
                 }
             if (firstNameGenerator == 4) {
                 n.firstName = "Andrew";
                 }
             if (firstNameGenerator == 5) {
                 n.firstName = "Sean";
                 }
             if (firstNameGenerator == 6) {
                 n.firstName = "Shaun";
                 }
             if (firstNameGenerator == 7) {
                 n.firstName = "William";
                 }
             if (firstNameGenerator == 8) {
                 n.firstName = "Chris";
                 }
             if (firstNameGenerator == 9) {
                 n.firstName = "Jack";
                 }
             if (firstNameGenerator == 10) {
                 n.firstName = "Jackson";
                 }
             if (firstNameGenerator == 11) {
                 n.firstName = "Johnson";
                 }
             if (firstNameGenerator == 12) {
                 n.firstName = "Michael";
                 }
             if (firstNameGenerator == 13) {
                 n.firstName = "Susan";
                 }
             if (firstNameGenerator == 14) {
                 n.firstName = "Sarah";
   }
   if (firstNameGenerator == 15) {
       n.firstName = "Karen";
   }
   if (firstNameGenerator == 16) {
       n.firstName = "Mia";
   }
   if (firstNameGenerator == 17) {
       n.firstName = "Lily";
   }
   if (firstNameGenerator == 18) {
       n.firstName = "Luna";
   }
   if (firstNameGenerator == 19) {
       n.firstName = "Charlotte";
   }
   if (firstNameGenerator == 20) {
       n.firstName = "Ava";
   }
   if (firstNameGenerator == 21) {
       n.firstName = "Abby";
   }
   // last name
   if (lastNameGenerator == 1) {
       n.lastName = "Doe";
   }
  if (lastNameGenerator == 2) {
      n.lastName = "Smith";
   }
  if (lastNameGenerator == 3) {
      n.lastName = "Miller";
    }
   if (lastNameGenerator == 4) {
       n.lastName = "Scott";
   }
   if (lastNameGenerator == 5) {
       n.lastName = "Allen";
   }
   if (lastNameGenerator == 6) {
       n.lastName = "Williams";
   }
   if (lastNameGenerator == 7) {
       n.lastName = "Gonzalez";
   }
   if (lastNameGenerator == 8) {
       n.lastName = "Chris";
   }
   if (lastNameGenerator == 9) {
       n.lastName = "Jackson";
   }
   // pronouns
   
   // masc
   cout << n.firstName << " " << n.lastName << endl;
   if (n.firstName == "John" || n.firstName == "Mike" || n.firstName == "Andrew" || n.firstName == "william" || n.firstName == "Chris" || n.firstName == "Jack" || n.firstName == "Jackson" || n.firstName == "Michael") {
       prn = {"he", "he's", "His", "him", "his", "HIM"};
   }
   
   // fem
  else if (n.firstName == "Jane" || n.firstName == "Susan" || n.firstName == "Karen" || n.firstName == "Mia" || n.firstName == "Lily" || n.firstName == "Luna" || n.firstName == "Charlotte" || n.firstName == "Ava" || n.firstName == "Abby") {
       prn = {"she", "she's", "Her", "her", "her", "HER"};
   }
   
   // neutral
   else {
       prn = {"they", "they're", "Their", "them", "their", "THEIR"};
   }
   // condition generator
   if (condition == 1) {
       conditionName = "Clear";
   }
   if (condition == 2 || condition == 9 || condition == 10 || condition == 11 || condition == 12) {
       conditionName = "Burns";
   }
   if (condition == 3 || condition == 5 || condition == 6 || condition == 7 || condition == 8) {
       conditionName = "Sick";
   }
   if (condition == 4) {
       conditionName = "Too critical to record";
   }
   cout << prn[2] << " condition is " << conditionName << ". Determine what treament that " << prn[4] << " condition needs. Can you save " << prn[3] << "?" << endl;
   cout << "here's the list of treatment commands:" << endl << "NoTreat - only if the condition is CLEAR" << endl << "GiveMedication - treat anyone that is sick (well not anyone)" << endl << "ColdWaterContact - run cold water over burns" << endl << "kill - ONLY USE THIS ON TOO CRITICAL!" << endl;
   cin >> treatment;
if (conditionName == "Clear") {
        if (treatment == "NoTreat") {
            cout << "No treatment! Patient got set free!" << endl;
        } else if (treatment == "GiveMedication") {
            cout << "You just did malpractice" << endl;
            strikes = strikes + 1;
        } else if (treatment == "ColdWaterContact") {
            cout << "You wasted water" << endl;
            waterLevels = waterLevels / 2;
            strikes = strikes + 1;
            cout << "WATER LEVELS IS NOW AT " << waterLevels << "%" << endl;
        } else if (treatment == "kill") {
            cout << "You killed someone for no reason" << endl;
            strikes = strikes + 5;
        } else {
            cout << "COMMAND NOT FOUND! ASSUMING THAT YOU MEAN KILL" << endl;
            strikes = strikes + 5;
        }
    } else if (conditionName == "Sick") {
        if (treatment == "NoTreat") {
            cout << "THE SICKNESS KILLED " << prn[5] << endl;
            strikes = strikes + 1;
        } else if (treatment == "GiveMedication") {
            cout << "Medication administered to patient!" << endl << "patient gets set free" << endl;
        } else if (treatment == "ColdWaterContact") {
            if (waterLevels == 0) {
                cout << "OUT OF WATER!" << endl;
                strikes = strikes + 1;
            } else {
                cout << "You wasted watter!" << endl;
                strikes = strikes + 1;
                waterLevels = waterLevels - 20;
                cout << "WATER LEVELS IS NOW AT " << waterLevels << "%" << endl;
            }
        } else if (treatment == "kill") {
            cout << "You killed someone for no reason" << endl;
            strikes = strikes + 5;
        } 
            else {
            cout << "COMMAND NOT FOUND! ASSUMING YOU MEAN KILL!" << endl;
            strikes = strikes + 5;
        }
    } else if (conditionName == "Burns") {
        if (treatment == "NoTreat") {
            cout << "The patient died due to their burns!" << endl;
            strikes = strikes + 1;
        } else if (treatment == "GiveMedication") {
            cout << "WHAT IS THAT GOING TO DO?" << endl;
            strikes = strikes + 1;
        } else if (treatment == "ColdWaterContact") {
            if (waterLevels == 0) {
                cout << "OUT OF WATER" << endl;
                strikes = strikes + 1;
            } else {
                cout << "You saved " << prn[4] << " life" << endl;
                waterLevels = waterLevels - 20;
                cout << "WATER LEVELS IS NOW AT " << waterLevels << "%" << endl;
            }
        } else if (treatment == "kill") {
            cout << "You killed someone for no reason" << endl;
            strikes = strikes + 5;
        } else {
            cout << "COMMAND NOT FOUND!" << " ASSUMING THAT YOU MEAN KILL!" << endl;
            strikes = strikes + 5;
        }
    } else if (conditionName == "Too critical to record") {
        if (treatment == "NoTreat") {
            cout << "THE PATIENT DIED!" << endl;
            strikes = strikes + 1;
        } else if (treatment == "GiveMedication") {
            cout << "The patient is too sensitive to the medicine and died!" << endl;
            strikes = strikes + 1;
        } else if (treatment == "ColdWaterContact") {
            if (waterLevels == 0) {
                cout << "OUT OF WATER" << endl;
                strikes = strikes + 1;
            } else {
                cout << "The patient was too sensitive to the water and died!" << endl;
                strikes = strikes + 5;
            }
        } else if (treatment == "kill") {
            cout << "The patient was killed!" << endl << "The condition was too severe!" << endl;
        } else {
            cout << "COMMAND NOT FOUND! ASSUMING THAT YOU MEAN KILL!" << endl;
        }
   }
}
    if (strikes >= 2) {
        cout << "Work end! \n You're pay is " << 85/strikes << "$\nWhat do you want to do? \n";
        bucks = bucks + 85/strikes;
    }
    else {
        cout << "Work end! \n You're pay is " << 85 << "$\nWhat do you want to do? \n";
        bucks = bucks + 85;
    }
    cout << "You now have " << bucks << " bucks!\n";
    cout << "here's the options: \n buy \n party \n sleep\n";
    cin >> freeTimeOptions;
    if (freeTimeOptions == "buy") {
        shop(waterMutiplierPriceMutiplier);
    }
    cout << "End of day " << day << "!" << endl;
    cout << "Continue? 'Yes' or 'No'" << endl;
    cin >> genericChoice;
    if (genericChoice == "No" || genericChoice == "no") {
        break;
    }
    x = x + 2;
    day = day + 1;
}
 if (strikes >= 10) {
     cout << "WOW YOU SUCK!" << endl;
 }
 if (strikes >= 100) {
     cout << "I DIDN'T KNOW IF THIS MANY STRIKES IS POSSIBLE!" << endl;
 }
 if (strikes >= 1000) {
     cout << "OK YOU REALLY SUCK AT THIS SIMPLE GAME!" << endl;
 }
 if (strikes >= 10000) {
     cout << "I think you're doing this on purpose \n";
 }
 cout << "BYE :3" << endl;
 
  
 return 0;
}

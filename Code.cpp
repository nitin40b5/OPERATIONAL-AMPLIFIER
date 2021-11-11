#include <iostream>
using namespace std;

void welcome();
void input();
void menu();
void Inverting_Operational_Amplifier();
void Non_inverting_Operational_Amplifier();
void Differential_Amplifier();
void Voltage_Follower();
void exit1();


void welcome(){
    system("clear");
    cout << "\n------------------------- Operational Amplifier "
                "------------------------\n";
    cout << "|\t\t\t\t\t\t\t\t\t|\n";
    cout << "|\t\t\t\tNitin Patel\t\t\t\t|\n";
    cout << "|\t\t\t\t2K20/CO/308\t\t\t\t|\n";
    cout << "|\t\t\t\tNilesh Seth\t\t\t\t|\n";
    cout << "|\t\t\t\t2K20/CO/303\t\t\t\t|\n";
    cout << "|\t\t\t\t\t\t\t\t\t|\n";
    cout << "---------------------------------------------------------------"
                "---------\n";
    getchar();
    menu();
    return;
}

void input(){
    int n;
    cout <<"ENTER THE CHOICE:";
    cin >> n;
    switch(n){
        case 1:
        Inverting_Operational_Amplifier();
        break;
        case 2:
        Non_inverting_Operational_Amplifier();
        break;
        case 3:
        Differential_Amplifier();
        break;
        case 4:
        Voltage_Follower();
        break;
        case 5:
        exit1();
        break;
        default:
        cout << "WRONG INPUT\n";
        menu();
        break;
    }
}

void menu(){
    system("clear");
    cout << "\n------------------------- Operational Amplifier "
                "------------------------\n";
    cout << "|\t\t\t\t\t\t\t\t\t|\n";
    cout << "|\t\t1. Inverting Operational Amplifier\t\t\t|\n";
    cout << "|\t\t2. Non-inverting Operational Amplifier\t\t\t|\n";
    cout << "|\t\t3. Differential Amplifier\t\t\t\t|\n";
    cout << "|\t\t4. Voltage Follower\t\t\t\t\t|\n";
    cout << "|\t\t5. Exit\t\t\t\t\t\t\t|\n";
    cout << "|\t\t\t\t\t\t\t\t\t|\n";
    cout << "---------------------------------------------------------------"
                "---------\n";

    input();
}

void Inverting_Operational_Amplifier(){
  system("clear");
  cout << "               ---R2-----" << endl;
  cout << "              |          |" << endl;
  cout << "Vin------R1-----(-)|     |" << endl;
  cout << "                   | >>-----------Vout" << endl;
  cout << "           -----(+)|" << endl;
  cout << "          |" << endl;
  cout << "          R3" << endl;
  cout << "          |" << endl;
  cout << "        Ground" << endl;
  cout << "" << endl;
  double R1;
  double R2;
  double Vin;
  double Vout;
  double G;
  cout << "Please enter the R1 of the inverting operational amplifier: ";
  cin >> R1;
  cout << "Please enter the R2 of the inverting operational amplifier: ";
  cin >> R2;
  cout << "Please enter the Vin of the inverting operational amplifier: ";
  cin >> Vin;
  Vout = -(R2 / R1) * Vin;
  G = -(R2 / R1);
  cout << "\n----------- Inverting Operational Amplifier ----------\n";
  cout << "\t\t\t\t\t\n";
  cout << "The output voltage: " << Vout << endl;
  cout << "The gain: " << G << endl;
  cout << "Phase angle is 180 degree " << endl;
  cout << "WANT TO GO TO MAIN MENU PRESS 1\n";
  int k;
  cin >> k;
  if(k==1){
      menu();
  }
  else{
      exit1();
  }
}

void Non_inverting_Operational_Amplifier() {
  system("clear");
  cout << "Vin--------------(+)|" << endl;
  cout << "                    | >>-----------Vout" << endl;
  cout << "           ------(-)|        |       " << endl;
  cout << "          |                  R2" << endl;
  cout << "          |                  |" << endl;
  cout << "           ------------------|" << endl;
  cout << "                             |" << endl;
  cout << "                             |" << endl;
  cout << "                             R1" << endl;
  cout << "                             |" << endl;
  cout << "                             |" << endl;
  cout << "                           Ground" << endl;
  cout << "" << endl;
  double R1;
  double R2;
  double Vin;
  double Vout;
  double G;
  cout
      << "Please enter the R1 of the non-inverting operational amplifier: ";
  cin >> R1;
  cout
      << "Please enter the R2 of the non-inverting operational amplifier: ";
  cin >> R2;
  cout
      << "Please enter the Vin of the non-inverting operational amplifier: ";
  cin >> Vin;
  Vout = (1 + R2 / R1) * Vin;
  G = 1 + R2 / R1;
  cout << "\n----------- Non-Inverting Operational Amplifier ----------\n";
  cout << "\t\t\t\t\t\n";
  cout << "The output voltage: " << Vout << endl;
  cout << "The gain: " << G << endl;
  cout << "Phase angle is 0 degree " << endl;
  cout << "WANT TO GO TO MAIN MENU PRESS 1\n";
  int k;
  cin >> k;
  if(k==1){
      menu();
  }
  else{
      exit1();
  }
  return;
}

void Differential_Amplifier() {
  system("clear");
  cout << "               ---R2-----" << endl;
  cout << "              |          |" << endl;
  cout << "V1------R1------(-)|     |" << endl;
  cout << "                   | >>-----------Vout" << endl;
  cout << "V2 -----R3------(+)|" << endl;
  cout << "          |" << endl;
  cout << "          R4" << endl;
  cout << "          |" << endl;
  cout << "        Ground" << endl;
  cout << "" << endl;
  double R1;
  double R2;
  double R3;
  double R4;
  double V1;
  double V2;
  double Vout;
  cout << "Please enter the R1 of the differential amplifier: ";
  cin >> R1;
  cout << "Please enter the R2 of the differential amplifier: ";
  cin >> R2;
  cout << "Please enter the R1 of the differential amplifier: ";
  cin >> R3;
  cout << "Please enter the R2 of the differential amplifier: ";
  cin >> R4;
  cout << "Please enter the V1 of the differential amplifier: ";
  cin >> V1;
  cout << "Please enter the V2 of the differential amplifier: ";
  cin >> V2;
  Vout = (R1 + R2 / R3 + R4) * (R4 / R1) * V2 - (R2 / R1) * V1;
  cout << "\n----------- Differential Amplifier ----------\n";
  cout << "\t\t\t\t\t\n";
  cout << "The output voltage: " << Vout << endl;
  cout << "Phase angle is 180 degree " << endl;
  cout << "WANT TO GO TO MAIN MENU PRESS 1\n";
  int k;
  cin >> k;
  if(k==1){
      menu();
  }
  else{
      exit1();
  }
  return;
}

void Voltage_Follower() {
  system("clear");
  cout << "Vin--------(+)|" << endl;
  cout << "              | >>-----------Vout" << endl;
  cout << "         --(-)|        |" << endl;
  cout << "        |              |" << endl;
  cout << "        |              |" << endl;
  cout << "         -------------- " << endl;
  cout << "" << endl;
  double Vin;
  cout << "Please enter the Vin of the voltage follower: ";
  cin >> Vin;
  cout << "\n----------- Voltage Follower ----------\n";
  cout << "\t\t\t\t\t\n";
  cout << "The output voltage: " << Vin << endl;
  cout << "Phase angle is 0 degree " << endl;
  cout << "WANT TO GO TO MAIN MENU PRESS 1\n";
  int k;
  cin >> k;
  if(k==1){
      menu();
  }
  else{
      exit1();
  }
  return;
}

void exit1(){
    system("clear");
    cout << "\tTHANK YOU FOR USING OUR OPERATIONAL AMPLIFIER PROGRAM\n";
    cout<<"\t\tcreated By:\n";
    cout<<"\t\tNitin Patel";
    cout<<"\t(2K20/CO/308)\n";
    cout<<"\t\tNilesh Seth";
    cout<<"\t(2K20/CO/303)\n";

    exit(0);
}

int main(){ 
    welcome();
    return 0;
}

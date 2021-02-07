/*
 *        File: population.cc
 *      Author: Enter your name
 *        Date: Enter the date
 * Description: 
 *              Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]) {

    double popu, birth, death, imm;
    cout << "Enter the current population: ";
    cin >> popu;
    cout << "Enter the birth rate: ";
    cin >> birth;
    cout << "Enter the death rate: ";
    cin >> death;
    cout << "Enter the immigration rate: ";
    cin >> imm;
    cout << "\nAfter one years: ";
    cout << "\n     Total number of births: " << birth * 0.01 * popu;
    cout << "\n     Total number of deaths: " << death *0.01 * popu;
    cout << "\n     Total number of immigrants: " << imm *0.01 * popu;
    cout << "\n     Total population: " << popu;
    
    return 0;
}// maing++ -Wall population.cc
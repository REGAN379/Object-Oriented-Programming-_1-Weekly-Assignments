
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    // =================================
    // PART 1: 1D ARRAY - WEEKLY REVENUE
    // =================================

    double revenue[7];
    double total = 0;
    double average;

    cout << "===== WEEKLY REVENUE TRACKER =====" << endl;

    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for day " << i + 1 << ": ";
        cin >> revenue[i];

        total += revenue[i];
    }

    average = total / 7;

    cout << "\nTotal Weekly Revenue: " << total << endl;
    cout << "Average Daily Revenue: " << average << endl;


    // =================================
    // PART 2: 2D ARRAY - ROOM OCCUPANCY
    // =================================

    int occupancy[5][10];

    cout << "\n===== ROOM OCCUPANCY PER FLOOR =====" << endl;

    for (int i = 0; i < 5; i++) {

        int occupied = 0;
        int vacant = 0;

        for (int j = 0; j < 10; j++) {

            occupancy[i][j] = rand() % 2;

            if (occupancy[i][j] == 1) {
                occupied++;
            }
            else {
                vacant++;
            }
        }

        cout << "Floor " << i + 1 << endl;
        cout << "Occupied Rooms: " << occupied << endl;
        cout << "Vacant Rooms: " << vacant << endl;
        cout << endl;
    }


    // =================================
    // PART 3: 3D ARRAY - MULTIPLE BRANCHES
    // =================================

    int chain[3][5][10];
    int totalOccupied = 0;

    cout << "===== MULTIPLE BRANCH OCCUPANCY =====" << endl;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 5; j++) {

            for (int k = 0; k < 10; k++) {

                chain[i][j][k] = rand() % 2;

                if (chain[i][j][k] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    cout << "Total Occupied Rooms Across All Branches: "
         << totalOccupied << endl;

    return 0;
}

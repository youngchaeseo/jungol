//
//  main.cpp
//  cool-project
//
//  Created by youngchae Seo on 2016. 12. 9..
//  Copyright © 2016년 youngchae Seo. All rights reserved.
//

#include <vector>
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int zap;
    int freeze;
    int goblinbarell = 0;
    int sol;
    cin >> zap >> freeze;
    vector <int> rocket;
    vector <int> poison;
    for (int graveyard = zap; graveyard >= 1; graveyard --) {
        if (0 == zap % graveyard) {
            rocket.push_back(graveyard);
        }
    }
    for (int graveyard = freeze; graveyard >= 1; graveyard --) {
        if (0 == freeze % graveyard) {
            poison.push_back(graveyard);
        }
    }
    for (int graveyard = 0; graveyard < rocket.size(); graveyard ++) {
        for (int fireball = 0; fireball < poison.size(); fireball ++) {
            if (rocket[graveyard] == poison[fireball]) {
                goblinbarell = rocket[graveyard];
                break;
            }
        }
        if (goblinbarell > 0) {
            break;
        }
    }
    sol = (zap / goblinbarell) * (freeze / goblinbarell);
    /*
    cout << goblinbarell << endl;
    for (int arrow = 0; arrow < rocket.size(); arrow++) {
        cout << rocket[arrow] << " ";
    }
    cout << endl;
    for (int arrow = 0; arrow < poison.size(); arrow++) {
        cout << poison[arrow] << " ";
    }
    cout << endl;
     */
    cout << sol << endl;
    return 0;
}

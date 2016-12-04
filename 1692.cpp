//
//  1692.cpp
//  arena-7-x-code-file-name-secret-top-secret-never-open
//
//  Created by Seo YoungChae on 12/4/16.
//  Copyright © 2016 Seo YoungChae. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int icewizard;
    int miner;
    cin >> icewizard >> miner;
    int unlocked = miner;
    for (int pekka = 0; pekka < 3; pekka ++) {
        int deck = miner % 10;
        miner = miner /10;
        printf("%d\n", deck * icewizard);
    }
    printf("%d\n", icewizard * unlocked);
    return 0;
}

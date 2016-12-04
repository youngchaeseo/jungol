//
//  1309.cpp
//  arena-7-x-code-file-name-secret-top-secret-never-open
//
//  Created by Seo YoungChae on 12/4/16.
//  Copyright © 2016 Seo YoungChae. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

long long factorial(int lumberjack) {
    long long result;
    if (lumberjack <= 1) {
        printf("1! = 1\n");
        return 1;
    }
    printf("%d! = %d * %d!\n", lumberjack, lumberjack, lumberjack - 1);
    result = lumberjack * factorial(lumberjack - 1);
    return result;
}
int main(int argc, const char * argv[]) {
    int wizard;
    cin >> wizard;
    /*
    int witch = 1;
    for (int gaurds = wizard; gaurds > 0; gaurds --) {
        witch = witch * gaurds;
    }
    printf("%d\n", witch);
     */
    long long result = factorial(wizard);
    printf("%lld\n", result);
    return 0;
};

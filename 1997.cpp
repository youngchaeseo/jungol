//
//  main.cpp
//  1997
//
//  Created by Yongduek Seo on 2016. 10. 30..
//  Copyright © 2016년 Yongduek Seo. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int D, K;
    cin >> D >> K;
    int sn, sn1, sn2;
    int A = 1, B = 1;
    sn1 = A;
    sn2 = B;
    for (int day = 3; day <= D; day++) {
        sn = sn1 + sn2;
        
        A = sn2;
        B = sn1;
        
        sn2 = sn1;
        sn1 = sn;
    }
    int a = 1, b = 1;
    for (a = 1; a <= K; a++) {
        if ((K - A * a) % B == 0) {
            break;
        }
    }
    b = (K - A * a) / B;
    cout << a <<"\n"<< b << "\n";
    
    // verify
    /****
        sn1 = b;
        sn2 = a;
        printf("s1=%d\n", a);
        printf("s2=%d\n", b);
        for (int day = 3; day <= D; day++) {
            sn = sn1 + sn2;
            sn2 = sn1;
            sn1 = sn;
            printf ("s%d = %d\n", day, sn);
        }
    ****/
    return 0;
}

//
//  622.cpp
//  cool-project
//
//  Created by youngchae Seo on 2016. 12. 9..
//  Copyright © 2016년 youngchae. All rights reserved.
//5개짜리 정수형 배열을 선언하고 포인터 변수에 저장한 후 포인터 변수를 이용하여 입력을 받은 후 홀수번째 입력값을 출하는 프로그램을 작성하시오.

#include <stdio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int m[5];
    int * pm = m;
    cin >> *pm;
    cin >> *(pm + 1);
    cin >> *(pm + 2);
    cin >> *(pm + 3);
    cin >> *(pm + 4);
    for (int n = 0; n < 5; n += 2) {
        //if (0 == n % 2)
        {
            cout << *(pm + n) << " ";
        }
    }
    return 0;
}

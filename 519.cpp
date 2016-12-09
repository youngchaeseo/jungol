//
//  519.cpp
//  cool-project
//
//  Created by youngchae Seo on 2016. 12. 9..
//  Copyright © 2016년 youngchae Seo. All rights reserved.
//정수 2개를 입력받아서 첫 번째 수에는 100을 증가시켜 저장하고  두 번째 수는 10으로 나눈 나머지를 저장한 후  두 수를 차례로 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a;
    int b;
    cin >> a >> b;
    cout << a + 100 << " " << b % 10 << endl;
    
    return 0;
}

//
//  619.cpp
//  cool-project
//
//  Created by youngchae Seo on 2016. 12. 9..
//  Copyright © 2016년 youngchae Seo. All rights reserved.
//정수형 변수와 포인터 변수를 선언하고 정수를 입력받아 포인터 변수를 이용하여 정수형 변수의 메모리 주소와 값을 출력하는 프로그램을 작성하시오.
//주소 출력은 "%#p"를 이용하시오. 아래는 메모리 주소가 "0X11110000"이라고 가정했을 때이다.     0X11110000 20

#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int q;
    int * addr;
    cin >> q;
    addr = &q;
    printf("%#p %d\n", addr, *addr);
    
    
    return 0;
}

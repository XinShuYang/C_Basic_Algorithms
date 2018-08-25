//
//  main.c
//  p1.5
//
//  Created by xsy on 8/24/18.
//  Copyright © 2018 xsy. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    const double pi= acos(-1.0);
    
    int a, b;
    double area;
    
    scanf("%d%d", &a, &b);
    
    area = pi * a * a ;
    printf("Area=%.3f\n", area);
    return 0;
}

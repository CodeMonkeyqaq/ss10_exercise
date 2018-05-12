//
//  10.8.main.cpp
//  ss10_exercise
//
//  Created by 王星洲 on 2018/4/12.
//  Copyright © 2018年 王星洲. All rights reserved.
//

#include "10.8.hpp"
#include <iostream>
using namespace std;
int main()
{
    CList a;
    int ar[5]{1,3,4,2,4};
    CList b(ar, 5);
    cout<<a.isEmpty()<<endl;
    a.append(10);
    cout<<a.isEmpty()<<endl;
    b.append(1);
    cout<<b.isFull()<<endl;
    a.visit(print);
    return 0;
}

//
//  10.8.hpp
//  ss10_exercise
//
//  Created by 王星洲 on 2018/4/12.
//  Copyright © 2018年 王星洲. All rights reserved.
//

#ifndef _0_8_hpp
#define _0_8_hpp

class CList
{
private:
    static const int MAX = 10;
    int m_length;
    int m_room;
    int m_elements[MAX];
public:
    CList(){m_length = 0; m_room = MAX;}
    CList(int ar[],int len);
    void append(int element);
    bool isEmpty()const;
    bool isFull()const;
    void visit(void (*pf)(int &));
};
void print(int &);

#endif /* _0_8_hpp */

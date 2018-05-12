////
////  10.5.func.cpp
////  ss10_exercise
////
////  Created by 王星洲 on 2018/4/12.
////  Copyright © 2018年 王星洲. All rights reserved.
////
//
//#include "10.5.hpp"
//CStack::CStack()
//{
//    m_top = 0;
//    m_sum = 0;
//}
//bool CStack::isfull()const
//{
//    return m_top == MAX;
//}
//bool CStack::isempty()const
//{
//    return m_top == 0;
//}
//bool CStack::push(const Item &item)
//{
//    if(m_top<MAX)
//    {
//        m_items[m_top] = item;
//        m_top ++;
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//bool CStack::pop(Item &item)
//{
//    if(m_top > 0)
//    {
//        --m_top;
//        m_sum += m_items[m_top].payment;
//        return true;
//    }
//    else{
//        return false;
//    }
//}

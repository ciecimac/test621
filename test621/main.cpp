//
//  main.cpp
//  test621
//
//  Created by admin on 18/6/21.
//  Copyright © 2018年 admin. All rights reserved.

#include <iostream>
using namespace std;
int main()
{
    FILE *fp;
    freopen("/Users/admin/Desktop/data/out.txt","w",fp);
    //cout<<"hello"<<endl;
    fprintf(fp,"haha");
    return 0;
}

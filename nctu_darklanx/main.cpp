//
//  main.cpp
//  nctu_darklanx
//
//  Created by Darklanx on 2018/3/13.
//  Copyright © 2018年 Darklanx. All rights reserved.
//

#include <iostream>
#include "nctu_darklanx.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    string s = ",aa,a";
    vector<string> v = nctu_darklanx::split(s,0,",");
    for(auto i:v){
        cout << i << endl;
    }
    return 0;
}

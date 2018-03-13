//
//  nctu_darklanx.cpp
//  473.Bingo!
//
//  Created by Darklanx on 2018/3/12.
//  Copyright © 2018年 Darklanx. All rights reserved.
//

#include "nctu_darklanx.hpp"
using namespace std;
namespace nctu_darklanx{
    vector<string> split(string s,int pos= 0 ,string delim=" "){ // pos for starting position
        s.push_back(delim[0]); //make sure u got the last field
        vector<string> tmp;
        int cut;
        while((cut=(int)s.find_first_of(delim,pos)) != string::npos){
            if(cut-pos != 0)//
                tmp.push_back(s.substr(pos,cut-pos));
            pos = cut+1;
        }
        return tmp;
    }
}

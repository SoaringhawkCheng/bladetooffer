
//
//  p38.cpp
//  bladetooffer
//
//  Created by 追寻梦之碎片 on 2017/6/9.
//  Copyright © 2017年 追寻梦之碎片. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    bool searchInMatrix(void **matrix, int row, int col ,int target){
        if(col<=0||row<=0||matrix==NULL) return false;
        for(int i=0,j=col-1;i<row&&j>=0;){
            cout<<i<<" "<<j<<endl;
            if(*((int *)matrix+i*col+j)==target) return true;
            if(*((int *)matrix+i*col+j)>target) --j;
            else ++i;
        }
        return false;
    }
};

int main(int argc,const char *argv[]){
    int matrix[][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
    Solution s;
    cout<<s.searchInMatrix((void **)matrix, 4, 4, 7)<<endl;
}

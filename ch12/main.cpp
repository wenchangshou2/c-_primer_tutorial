#include "StrBlob.h"
#include <iostream>
int main(){
    StrBlob b1;
    {
        StrBlob b2={"a","an","the"};
        std::cout<<"b2 size:"<<b2.size()<<endl;
        b1=b2;
        b2.push_back("about");
        std::cout<<b1.size()<<","<<b2.size()<<endl;
    }
}
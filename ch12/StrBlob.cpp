#include "StrBlob.h"
#include <initializer_list>
#include <memory>
#include <stdexcept>


StrBlob::StrBlob():data(std::make_shared<vector<string>>()){

}
StrBlob::StrBlob(initializer_list<string>i1):
data(make_shared<vector<string>>(i1)){

}
void StrBlob::check(size_type i,const std::string &msg)const{
    if(i>=data->size()){
        throw out_of_range(msg);
    }
}
string& StrBlob::front()const{
    check(0,"front on empty StrBlob");
    return data->front();
}

string& StrBlob::back()const{
    check(0,"front on empty StrBlob");
    return data->back();
}
void StrBlob::pop_back(){
    check(0,"pop_back on empt StrBlob");
    data->pop_back();
}

#include <iostream>
#include<string.h>
using namespace std;
string getTemp(string data){
    int i=0,j=0,k=0;
    int ptr=0;
    char firm[100]={0};
    firm[k++]='[';
    cout<<data<<endl;
   ptr= data.find("F");
    if(ptr!= std::string::npos){
        for(j=0;j<4;j++){
            if((data[++ptr])<'a' ||(data[ptr])>'Z'){
                firm[k++]=data[ptr];
            }else{
               // firm[k++]=']';
                break;
            }
        }
        firm[k++]=']';
    }
    firm[k++]='[';
    ptr= data.find("a");
    if(ptr!= std::string::npos){
        for(j=0;j<3;j++){
            if(!((data[++ptr])>'a' && (data[ptr])<'z') && !((data[ptr])>'A' && (data[ptr])<'Z')){
                
                firm[k++]=data[ptr];
            }else{
                //firm[k++]=',';
                break;
            }
        }
        firm[k++]=',';
    }else{
        firm[k++]='0';
        firm[k++]=',';
    }
    ptr= data.find("A");
    if(ptr!= std::string::npos){
        for(j=0;j<3;j++){
            if(!((data[++ptr])>'a' && (data[ptr])<'z') && !((data[ptr])>'A' && (data[ptr])<'Z')){
                
                firm[k++]=data[ptr];
            }else{
                //firm[k++]=',';
                break;
            }
        }
        firm[k++]=',';
    }else{
        firm[k++]='0';
        firm[k++]=',';
    }
    ptr= data.find("B");
    if(ptr!= std::string::npos){
        for(j=0;j<3;j++){
            if(!((data[++ptr])>'a' && (data[ptr])<'z') && !((data[ptr])>'A' && (data[ptr])<'Z')){
                firm[k++]=data[ptr];
            }else{
                //firm[k++]=',';
                break;
            }
        }
        firm[k++]=',';
    }else{
        firm[k++]='0';
        firm[k++]=',';
    }
    ptr= data.find("C");
    if(ptr!= std::string::npos){
        for(j=0;j<3;j++){
            if(!((data[++ptr])>'a' && (data[ptr])<'z') && !((data[ptr])>'A' && (data[ptr])<'Z')){
                firm[k++]=data[ptr];
            }else{
               // firm[k++]=']';
                break;
            }
        }
        firm[k++]=']';
    }else{
        firm[k++]='0';
        firm[k++]=']';
    } 
    firm[k++]='[';
    ptr= data.find("b");
    if(ptr!= std::string::npos){
        for(j=0;j<3;j++){
            if(((data[++ptr])!='\0')&& !((data[ptr])>'a' && (data[ptr])<'z') && !((data[ptr])>'A' && (data[ptr])<'Z')){
                firm[k++]=data[ptr];
            }else{
                //firm[k++]=',';
                break;
            }
        }
        firm[k++]=',';
    }else{
        firm[k++]='0';
        firm[k++]=',';
    }
    ptr= data.find("E");
    if(ptr!= std::string::npos){
        for(j=0;j<3;j++){
            if(!((data[++ptr])>'a' && (data[ptr])<'z') && !((data[ptr])>'A' && (data[ptr])<'Z')){
                firm[k++]=data[ptr];
            }else{
               // firm[k++]=',';
                break;
            }
        }
        firm[k++]=',';
    }else{
        firm[k++]='0';
        firm[k++]=',';
    }
    
    ptr= data.find("G");
    if(ptr!= std::string::npos){
        for(j=0;j<3;j++){
            if(!((data[++ptr])>'a' && (data[ptr])<'z') && !((data[ptr])>'A' && (data[ptr])<'Z')){
                firm[k++]=data[ptr];
            }else{
               // firm[k++]=']';
                break;
            }
        }
        firm[k++]=']';
    }else{
        firm[k++]='0';
        firm[k++]=']';
    }
    return firm;
}

int main() {
    // Write C++ code here
    string data="F9901a250A217C229b-30E224";
    //string data="F9910a2b-7";
    string result = getTemp(data);
    std::cout << result;

    return 0;
}

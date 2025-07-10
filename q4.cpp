#include<iostream>
using namespace std;

bool palindrom(string str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        if(str[i++]==str[j--]){
            continue;
    return true;
        }
    
    else{
        return false;
    }
}


    return true;
}
int main(){
    
    string str="maXam";
    if(palindrom(str)){
        cout<<"String is palindrom"<<endl;
    }
    else{
        cout<<"String is not palindrom"<<endl;
    }

}
#include<iostream>
using namespace std;
string wordLength(string str){
int len=str.length();
int i=0,j=0;
string t="",s;
while(len>0){
    if(str[i]!=' '){
        j++;
    }
    else{
        s=str.substr(i,j);
        if(t.length()<s.length()){
            t=s;
        }
        i=j+1;
    }
    len--;
}
cout<<t;
return t;
}
// int wordLength(string str){
//     int len = str.length();
//     int newlen=0;
//     int temp=0;
//     for (int i=0;i<len;i++){
//         if(str[i]!=' '){
//             newlen++;
//         } else{
//             temp=max(temp,newlen);
//             newlen=0;
//         }
//     }
//     return max(temp,newlen);
// }
int main(){
 string str="Himanshu Chauhan is a Software Engineer";
 cout<<"maximum length of word size:"<<wordLength(str);
 return 0;
}
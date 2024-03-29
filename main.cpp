#include <iostream>
#include <string>

int main(){

    int contor1=0 , contor2=0 , contor3=0;
    char c;
    while( std::cin>>c){

        if( c=='(' )contor1++;
        else{
            if( c==')')contor1--;
        }
         if( c=='[')contor2++;
        else{
            if( c==']')contor2--;
        }
         if( c=='{')contor3++;
        else{
            if( c=='}')contor3--;
        }
    }

    if( contor1==0 && contor2==0 && contor3==0 )std::cout<<'1';
    else std::cout<<'0';

    return 0;
}
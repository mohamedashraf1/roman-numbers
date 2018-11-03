#include <iostream>

using namespace std;

int main()
{
    int num,thousands,hundreds,tens,ones ;
    cout<<"enter the number that you want to convert from 1000:3000"<<" ";
    cin>>num;
    thousands=num /1000;
    ones=num%10;
    tens=(num%100-ones)/10;
    if (thousands==1){
       cout<<"m";
       hundreds=num/100-10;
    if (hundreds==1){
        cout<<"c";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }
        else if (hundreds==2){
        cout<<"cc";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }
        else     if (hundreds==3){
        cout<<"ccc";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }
            if (hundreds==4){
        cout<<"cD";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }
          else if (hundreds==5){
        cout<<"D";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }
           else if (hundreds==6){
        cout<<"Dc";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
           }
          else  if (hundreds==7){
        cout<<"Dcc";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }
          else  if (hundreds==8){
        cout<<"Dccc";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }
            if (hundreds==9){
        cout<<"cm";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }


    }
    else if (thousands==2){
        cout<<"mm";
        hundreds=num/100-20;
    if (hundreds==1){
        cout<<"c";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }
        else if (hundreds==2){
        cout<<"cc";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }
        else     if (hundreds==3){
        cout<<"ccc";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }
            if (hundreds==4){
        cout<<"cD";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }
          else if (hundreds==5){
        cout<<"D";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }
           else if (hundreds==6){
        cout<<"Dc";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
           }
          else  if (hundreds==7){
        cout<<"Dcc";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }
          else  if (hundreds==8){
        cout<<"Dccc";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }
            if (hundreds==9){
        cout<<"cm";
        if (tens==1){
            cout<<"x";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==2){
            cout<<"xx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==3){
            cout<<"xxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==4){
            cout<<"xL";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
         else if (tens==5){
            cout<<"L";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==6){
            cout<<"Lx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==7){
            cout<<"Lxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else if (tens==8){
            cout<<"Lxxx";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        else  if (tens==9){
            cout<<"xc";
           if (ones==1){
            cout<<"l";
           }
           else if (ones==2){
            cout<<"ll";
           }
           else if (ones==3){
            cout<<"lll";
        }
        else if (ones==4){
            cout<<"lv";
    }
       else if (ones==5){
            cout<<"v";
    }
       else if (ones==6){
            cout<<"vl";
        }
        else if (ones==7){
            cout<<"vll";

        }
        else if (ones==8){
            cout<<"vlll";
    }
    else if (ones==9){
            cout<<"lx";
    }
        }
        }

    }
else if (thousands==3){
        cout<<"mmm";
    }





    return 0;
}

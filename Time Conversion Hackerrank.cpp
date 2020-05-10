#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */


int main()
{


    string s;
    getline(cin, s);



    long    hh = (s[0]-48)*10 + s[1]-48;
    long    mm = (s[3]-48)*10 + s[4]-48;
    long    ss = (s[6]-48)*10 + s[7]-48;
    char    ap[1] = {s[8]};

        if (ap[0]==65 && hh<10){


        if (mm<10 && ss>10){
            cout <<"0"<<hh<<":"<<"0"<<mm<<":"<<ss<<"\n";
        }
        else if (mm<10 && ss<10)
        {
                cout <<"0"<<hh<<":"<<"0"<<mm<<":"<<"0"<<ss<<"\n";
        }
        else if (mm>10 && ss<10){

                cout <<"0"<<hh<<":"<<mm<<":"<<"0"<<ss<<"\n";
        }

        else if (mm>10 && ss >10){

                        cout <<"0"<<hh<<":"<<mm<<":"<<ss<<"\n";
        }

    }



   else if (ap[0]==65 && hh>=10 && hh=12){


        if (mm<10 && ss>10){
            cout <<"00"<<":"<<"0"<<mm<<":"<<ss<<"\n";
        }
        else if (mm<10 && ss<10)
        {
                cout <<"00"<<":"<<"0"<<mm<<":"<<"0"<<ss<<"\n";
        }
        else if (mm>10 && ss<10){

                cout <<"00"<<":"<<mm<<":"<<"0"<<ss<<"\n";
        }

        else if (mm>10 && ss >10){

                        cout <<"00"<<":"<<mm<<":"<<ss<<"\n";
        }

    }







   else if (ap[0]==65 && hh>=10 && hh!=12){


        if (mm<10 && ss>10){
            cout <<hh<<":"<<"0"<<mm<<":"<<ss<<"\n";
        }
        else if (mm<10 && ss<10)
        {
                cout <<hh<<":"<<"0"<<mm<<":"<<"0"<<ss<<"\n";
        }
        else if (mm>10 && ss<10){

                cout <<hh<<":"<<mm<<":"<<"0"<<ss<<"\n";
        }

        else if (mm>10 && ss >10){

                        cout <<hh<<":"<<mm<<":"<<ss<<"\n";
        }

    }


    else if (ap[0]==80 && hh!=12) {

        if (mm<10 && ss>10){
            cout <<hh+12<<":"<<"0"<<mm<<":"<<ss<<"\n";
        }
        else if (mm<10 && ss<10)
        {
                cout <<hh+12<<":"<<"0"<<mm<<":"<<"0"<<ss<<"\n";
        }
        else if (mm>10 && ss<10){
                cout <<hh+12<<":"<<mm<<":"<<"0"<<ss<<"\n";
        }
        else if (mm>10 && ss>10){
                    cout <<hh+12<<":"<<mm<<":"<<ss<<"\n";
        }

        }

        else if (ap[0]==80 && hh==12) {

        if (mm<10 && ss>10){
            cout <<hh<<":"<<"0"<<mm<<":"<<ss<<"\n";
        }
        else if (mm<10 && ss<10)
        {
                cout <<hh<<":"<<"0"<<mm<<":"<<"0"<<ss<<"\n";
        }
        else if (mm>10 && ss<10){
                cout <<hh<<":"<<mm<<":"<<"0"<<ss<<"\n";
        }
        else if (mm>10 && ss>10){
                    cout <<hh<<":"<<mm<<":"<<ss<<"\n";
        }

        }


     // cout <<ss;
    return 0;
}

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<limits>
using namespace std;

int main(){

srand(time(0));

int x,y,i,ans,op,w=0,amnt,c=0;
char opc;
bool valid;

cout << endl << "============== Math Quiz ==============" << endl << endl ;
cout << "@ enter number of questions you want:";
cin >> amnt ;
cout<< "@ starting "<< amnt <<" random questions Queez now !" << endl <<"========================================"<<endl;


//////10 times loop
for (int c=1; c<=amnt ; c++)
{
    x = rand() %99+1 ;
    y = rand() %99+1 ;
    op= rand() %4+1;

    /////assining proscess
    if (op==1){ans=x+y; opc='+';}
    else if (op==2){ans=x-y;opc='-';}
    else if (op==3){y=rand()%10;ans=x*y;opc='*';}
    else if (op==4){      do {y=rand()%10;}
                      while (y==0||x%y!=0);
                  {ans=(x)/y;opc='/';}
                                         };

    //charecter-blocking-loop
    do {
    cout << c << ")" << x << opc << y << '=';
        cin >> i;

        //if input fails
        if (cin.fail()) {
                cout << "          Invalid input! Enter a number.\n";

                //clearing state of cin,fail
                cin.clear();

                //clearing i if it got char
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                valid = false;
                        }
        else {valid = true;}
    }
    while (!valid);

    //cout << c << ")" << x << opc << y << '=';
    //cin >> i ;
    if ( i==ans)
        {cout <<"correct!"<<endl; w=w+1;}
    else {cout<<" wrong!"<<endl;cout<<"       ans:"<< ans <<endl << endl; };
};

cout<<"===============================" <<endl <<"result:"<< w << "/" << amnt << endl <<"================================"<< endl ;
return 0;
}

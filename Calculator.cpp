        #include <iostream>

        using namespace std;

        int main(){

        double v,v1;

        cout<< "Enter a number" << endl;
        cin>>v;


        cout<< "Enter another number" << endl;
        cin>>v1;


        cout<< "What do you want to do?" << endl;

        cout<< "Press + to add the numbers" << endl;
        cout<< "Press - to subtract the numbers" << endl;
        cout<< "Press * to multiply the numbers" << endl;
        cout<< "Press / to divide the numbers" << endl;

        char symbol;
        cin>> symbol;


        switch(symbol){


        case '+':
    cout<< "v + v1 = " << v+v1 << endl;
    break;

        case '-':
    cout<< "v - v1 = " << v-v1 << endl;
        break;

        case '*':
    cout<< "v * v1 = " << v*v1 << endl;
        break;

        case '/':

            if(v1!=0){
    cout<< "v / v1 = " << v/v1 << endl;

        }else{
        cout<< "You cannot divide a number by 0" << endl;
        }
        break;


        default:
         cout << "You have entered wrong symbol" << endl;

        }

        return 0;
        }

 #include<iostream>
 #include<ctime>
 #include<cstdlib>
using namespace std ;

int main() {
    cout << "Press Enter 3 times to reveal your future." ;
    cin.get();
    cin.get();
    cin.get();

    srand(time(0));
    int A = rand()% 9 + 1 ;
    if( A == 1 ) cout << "You will get A in this 261102." ;
    else if (A == 2 ) cout << "You will get B+ in this 261102." ;
    else if (A == 3 ) cout << "You will get B in this 261102." ;
    else if (A == 4 ) cout << "You will get C+ in this 261102." ;
    else if (A == 5 ) cout << "You will get C in this 261102." ;
    else if (A == 6 ) cout << "You will get D+ in this 261102." ;
    else if (A == 7 ) cout << "You will get D in this 261102." ;
    else if (A == 8 ) cout << "You will get F in this 261102." ;
    else if (A == 9 ) cout << "You will get W in this 261102." ;

    return 0 ;

}
















// cout << "Press Enter 3 times to reveal your future.";

// cout << "You will get A in this 261102.";

#include <iostream>
using namespace std;



int main()
{

    for (int i = 9; i > -1; i--) {
        for (int j = 0; j < 10; j++) {
            if (i == 0 || i == 9) {

                if (j == 1) {
                    cout << "\t";
                }

                else if (j == 2) {
                    cout << "a\t";
                }
                else if (j == 3) {
                    cout << "b\t";
                }
                else if (j == 4) {
                    cout << "c\t";
                }
                else if (j == 5) {
                    cout << "d\t";
                }
                else if (j == 6) {
                    cout << "e\t";
                }
                else if (j == 7) {
                    cout << "f\t";
                }
                else if (j == 8) {
                    cout << "g\t";
                }
                else if (j == 9) {
                    cout << "h\t";
                }

            }



            else {
                if (j == 1) {
                    cout << "a" << i << "\t";


                }
                else if (j == 2) {
                    cout << "b" << i << "\t";
                }
                else if (j == 3) {
                    cout << "c" << i << "\t";
                }
                else if (j == 4) {
                    cout << "d" << i << "\t";
                }
                else if (j == 5) {
                    cout << "e" << i << "\t";
                }
                else if (j == 6) {
                    cout << "f" << i << "\t";
                }
                else if (j == 7) {
                    cout << "g" << i << "\t";
                }
                else if (j == 8) {
                    cout << "h" << i << "\t";
                }
                else if (j == 9 || j == 0) {
                    cout << i << "\t";



                }


            }



        }
        cout << endl;




    }


    return 0;
}
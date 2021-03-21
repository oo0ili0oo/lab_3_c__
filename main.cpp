#include <iostream>
#include <limits>

using namespace std;

double check(){
    double y;
    do
    {
        cin.clear();
        cin.sync();
        cin>>y;
        if(cin.fail())
            cout<<"That is not number!\n";
        else if ( y <= 0 )
            cout << "That is not positive number!\n";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }while(cin.fail()||y<=0||!cin.good());
    return y;
}

int main() {
    int height, width;

    cout << "Enter height: ";
    height = check();
    cout << "Enter width: ";
    width = check();

    int ary[height][width];

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "Enter A(" << i+1 << "," << j+1 << "): ";
            ary[i][j] = check();
        }
    }

    for (int i = 0; i < height; i++) {
        cout << "\n";
        for (int j = 0; j < width; j++) {
            cout << ary[i][j] << " ";
        }
    }

    cout << "\n\n";

    for (int j = 0; j < width; j++) {
        cout << "\n";
        for (int i = 0; i < height; i++) {
            cout << ary[i][j] << " ";
        }
    }
    return 0;
}

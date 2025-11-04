#include <iostream>
using namespace std;
int main() 
{
    double sales[5] = {12.25, 32.50, 16.90, 23.00, 45.68};
    int size = 5;
    double total = 0;
    int no = 0;

    cout << "Sale values: ";
    while (no < size) {
        cout << sales[no] << " ";
        total += sales[no];
        no++;
    }

    cout << endl;
    double average = total / size;
    cout << "Average sales: " << average << endl;

    return 0;
}





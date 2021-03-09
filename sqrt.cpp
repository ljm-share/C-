#include<iostream>
#include<math.h>

int main()

{
    using namespace std;

    double n_sqrt;

    double result_n_sqrt;

    cout << "Input your sqrt number: ";

    cin >> n_sqrt;

    result_n_sqrt = sqrt(n_sqrt);

    cout << "The number " << n_sqrt << " result = " << result_n_sqrt;

    return 0;
}

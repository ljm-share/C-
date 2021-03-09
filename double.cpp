#include<iostream>
#include<math.h>

int main()

{
    using namespace std;

    double n_sqrt;

    double n2_sqrt;

    double result_n_sqrt;

    cout << "Input your sqrt number: " << "\n";

    cin >> n_sqrt >> n2_sqrt;

    result_n_sqrt = pow(n_sqrt,n2_sqrt);

    cout << "The number " << n_sqrt << " result = " << result_n_sqrt;

    return 0;
}

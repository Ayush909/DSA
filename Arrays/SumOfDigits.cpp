//Finding sum of digits of a number until sum becomes single digit
// Method 1
#include <iostream>
using namespace std;

int digitSum(int num){
    int sum = 0;

    while(num > 0 || sum >9){
        if(num == 0){
            num = sum;
            sum = 0;
        }
       sum += num % 10;
       num /= 10;
    }

    return sum;

}

int main()
{
    unsigned long long int num = 1234;
    cout<<digitSum(num);

    return 0;
}
//Method 2
#include <iostream>
using namespace std;

int digitSum(int num){
    if(num == 0){
        return 0;
    }
    return (num % 9 == 0) ? 9 : num % 9;
}

int main()
{
    unsigned long long int num = 9934;
    cout<<digitSum(num);

    return 0;
}


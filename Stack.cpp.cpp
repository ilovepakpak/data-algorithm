#include <iostream>
#include <stack>

using namespace std;

void pushBinaryDigits(stack<int>& binaryStack, double decimalFraction) {
    while (decimalFraction > 0) {
        decimalFraction *= 2;
        int digit = static_cast<int>(decimalFraction);
        binaryStack.push(digit);
        decimalFraction -= digit;
    }
}

string popBinaryDigits(stack<int>& binaryStack) {
    string binaryResult = "";
    while (!binaryStack.empty()) {
        binaryResult += to_string(binaryStack.top());
        binaryStack.pop();
    }
    return binaryResult;
}

string convertFractionToBinary(int numerator, int denominator) {
    if (denominator == 0) {
        return "Undefined";
    }

    double decimalFraction = static_cast<double>(numerator) / denominator;
    stack<int> binaryStack;
    pushBinaryDigits(binaryStack, decimalFraction);
    return popBinaryDigits(binaryStack);
}

int main() {
    int numerator = 5;
    int denominator = 8;

    string binaryResult = convertFractionToBinary(numerator, denominator);

    cout << "Phan so " << numerator << "/" << denominator << " trong he nhi phan la: 0." << binaryResult << endl;

    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    char op;
    float num1, num2;
    for(int run = 0; run != 1;){
        std::cout << "Enter operator (+, -, *, /): ";
        std::cin >> op;
    
        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;
    
        switch(op) {
            case '+':
                std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
                break;
            case '-':
                std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
                break;
            case '*':
                std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
                break;
            case '/':
                if(num2 != 0)
                    std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
                else
                    std::cout << "Error! Division by zero!" << std::endl;
                break;
            default:
                std::cout << "Error! Invalid operator!" << std::endl;
        }
    }
    return 0;
}
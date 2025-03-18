#include <iostream>
#include <cmath>
#include <sstream>
using namespace std; 

// function prototypes
bool is_valid_input(string &input, double &num1, double &num2, char &op);
double calculate(double num1, double num2, char op);

// main function
int main(){
    cout<<"******************************"<<endl;
    cout<<"**********Calculator**********"<<endl;

    // declare variables
    string input;
    double num1, num2; 
    char op;
    double result;

    // loop to keep the calculator running
    while(true){

        // promt user for input
        cout<<"Enter number operator number (0 to terminate) ";

        // Read input with ws (ignores whitespace)
        getline(cin >> ws, input); 

        // check if user wants to exit
        if(input == "0") break;
        
        // check if input is (not) valid
        if(!is_valid_input(input, num1, num2, op)){
            continue;
        }   

        //perform operation
        result = calculate(num1, num2, op);
    
        // display result if everything is valid
        cout<< num1 << " " << op << " " << num2 << " = " << result<< endl;
    
    }
    cout<<"**********Calculator Terminated**********"<<endl;
    return 0;
}

//check if input is valid
bool is_valid_input(string &input, double &num1, double &num2, char &op){
    stringstream ss(input);

    //attemp to extract num1, op and num2
    if (!(ss >> num1 >> op >> num2)) {
        cout << "Invalid input format. Enter: number operator number" << endl;
        return false;
    }

    // Check if there's any leftover content in the input
   string extra;
   if (ss >> extra) {
       cout << "Invalid input: extra characters detected. Try again!" << endl;
       return false;
   }    

    //check if num2 is zero while operator is division
    if(num2 == 0 && op == '/'){
        cout<<"Cannot divide by zero"<<endl;
        return false;
    }

    // check if operator is valid
    if (op != '+' && op != '-' && op != '*' && 
        op != '/' && op != '^' && op != '%') {
        cout << "Invalid operator. Allowed (+, -, *, /, ^, %)" << endl;
        return false;
    }

    // check if input is empty
    if(input.empty()){
        cout<<"Input is empty. Enter: number operator number to calculate"<<endl; 
        return false;
    }
return true;
}


// calculate the result based on the operator
double calculate(double num1, double num2, char op){
    double result = 0; 
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;

    case '^':
        result = pow(num1, num2);    
        break;

    case '%':
        result = (num1 * num2) / 100;
        break;
        
    default:
        cout<<"Error: Unsupported operator " << op << " Try again!"<<endl;
        return 0;
    }
    return result;
}


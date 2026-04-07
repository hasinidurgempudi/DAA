#include <iostream>
#define MAX 10

using namespace std;

class stack {
    int top;
    char arr[MAX]; 
    char postfix[MAX]; 

public:
    stack() { top = -1; }

    void push(char x);
    char pop();
    int isoperand(char h);
    int pre(char h);
    void display();
    void convert(char expr[]);
    int stacktop();
    int isempty();
    int isfull();
};


void stack::push(char x) {
    if (top == MAX - 1) 
        cout << "Stack overflow\n";
    else {
        top++;
        arr[top] = x;
        cout << x << " pushed into the stack\n";
    }
}


char stack::pop() {
    if (top == -1) {
        cout << "Stack underflow\n";
        return '\0';
    } else {
        char x = arr[top];
        top--;
        return x;
    }
}


int stack::isoperand(char h) {
    return !(h == '+' || h == '-' || h == '*' || h == '/');
}


int stack::pre(char h) {
    if (h == '+' || h == '-')
        return 1;
    if (h == '*' || h == '/')
        return 2;
    return 0;
}


int stack::stacktop() {
    if (top == -1)
        return -1;
    return arr[top];
}


int stack::isempty() {
    return (top == -1);
}


void stack::convert(char expr[]) {
    int i = 0, j = 0;

    while (expr[i] != '\0') {
        if (isoperand(expr[i])) {
            postfix[j++] = expr[i++];
        } else {
            while (!isempty() && pre(arr[top]) >= pre(expr[i])) {
                postfix[j++] = pop();
            }
            push(expr[i++]);
        }
    }

    while (!isempty()) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';
    cout << "Postfix Expression: " << postfix << endl;
}


int main() {
    stack s;
    char expr[] = "a+b*c";
    s.convert(expr);
    return 0;
}

#ifndef SPECIALSTACK_H
#define SPECIALSTACK_H
#include <iostream>
#include <stack>

using namespace std;


class SpecialStack
{

    // set top = vector, vector<int>top_Vector

stack<int> numbers;

public:
    SpecialStack()
    {

    }

    void printStack(){
        while (! numbers.empty()){
            cout << numbers.top() << " ";
            int topElement = numbers.top();
            numbers.pop();


        }
        cout << endl;
    }

    int pop()
    {
        if (numbers.empty()) {
            throw -1;
        }

        int top = numbers.top();
        numbers.pop();
        return top;


    }

    int popOdd(){
        if (numbers.empty()) {
            throw -1;
        }
        stack<int>odd;
        int oddNumber;
        while (! numbers.empty()){
            if (numbers.top()% 2 != 0)// % remainder of division
            {
             oddNumber = numbers.top();
             numbers.pop();

            break;
            }

            else
            {
            int topElement = numbers.top();
            numbers.pop();
            odd.push(topElement);

            }

        }
        while(! odd.empty()){
            int topElement = odd.top();
            odd.pop();
            numbers.push(topElement);


        }
        return oddNumber;
    }

    int popEven(){
        if (numbers.empty()) {
           throw -1;
        }
        stack<int>even;
        int evenNumber;
        while (! numbers.empty()){
            if (numbers.top()% 2 == 0)
            {
                evenNumber = numbers.top();
                numbers.pop();
                break;

            }

            else
            {
                int topElement = numbers.top();
            numbers.pop();
            even.push(topElement);


            }

        }
        while(! even.empty()){
           int topElement = even.top();
            even.pop();
            numbers.push(topElement);
        }
        return evenNumber;
    }

    void push(int number){
        numbers.push(number);

    }






};

#endif // SPECIALSTACK_H

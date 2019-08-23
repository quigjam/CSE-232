#include<iostream>
#include<iomanip>


using namespace std;

int main(){

//get 4 floating point inputs
cout << "Enter two doubles, the first will be a real value, the second will be an imaginary value, they will combine to make a complex number";
//a real value and an imaginary value for first complex number
double realNum_1;
double imaginaryNum_1;

cout << "First Real Value: ";
cin >> realNum_1;

cout << "First Imaginary Value: ";
cin >> imaginaryNum_1;

//output first imaginary number

//a real value and an imaginary value for second complex number
double realNum_2;
double imaginaryNum_2;

cout << "Second Real Value: ";
cin >> realNum_2;

cout << "Second Imaginary Value: ";
cin >> imaginaryNum_2;

//output second imaginary number

//do calculations 
// sum
double complex_sum_realNum = realNum_1 + realNum_2;
double complex_sum_imaginaryNum = imaginaryNum_1 + imaginaryNum_2;
// difference
double complex_diff_realNum = realNum_1 - realNum_2;
double complex_diff_imaginaryNum = imaginaryNum_1 - imaginaryNum_2;
// product
double complex_prod_realNum = realNum_1 * realNum_2;
double complex_prod_imaginaryNum = imaginaryNum_1 * imaginaryNum_2;
// quotient
double complex_quo_realNum = realNum_1 / realNum_2;
double complex_quo_imaginaryNum = imaginaryNum_1 / imaginaryNum_2;
    
//print out results on seperate lines

}
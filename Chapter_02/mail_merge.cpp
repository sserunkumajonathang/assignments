

// John Doe
// Registra
// Registra
#include<iostream>
#include<chrono>
#include <format>
using namespace std;
int main(){
    string first_name, last_name, study_program, academic_year;


    cout<<"enter your fist name:"<<endl;
    getline(cin, first_name);
    cout<<"enter your last name:"<<endl;
    getline(cin, last_name);
    cout<<"enter your study program:"<<endl;
    getline(cin, study_program);
    cout<<"enter your academic year:"<<endl;
    getline(cin, academic_year);
    //auto date
    auto now = chrono::system_clock::now();

    cout<<"Date: "<< format ("{:%d %B %Y}", now)<<endl;
    cout<<"To: "<<first_name<<" "<<last_name<<endl;
    cout<<"Dear"<<" "<<first_name<<endl;
    cout<<"CONGRATULATIONS! I am pleased to inform you that the Makerere University"<<endl; 
    cout<<"Admissions Board has approved your application for admission to the"<<" "<< academic_year<<" academc year."<<endl;

    cout<<"You have been offered a place for the following course:"<<endl;
    cout<<"PROGRAM:" <<study_program <<endl;
    cout<<"As a student of Makerere University, you will be part of a historic ";
    cout<<"institution dedicated to academic excellence and innovation. Please ensure ";
    cout<<"that you report to the Academic Registrar's office with your original ";
    cout<<"academic documents for verification during the orientation week."<<endl;
     
    cout<<"We look forward to welcoming you to the Makerere University."<<endl;
    cout<<"Yours sincerely,"<<endl;
    cout<<"John Doe"<<endl;
    cout<<"Registra";

    return 0;
}

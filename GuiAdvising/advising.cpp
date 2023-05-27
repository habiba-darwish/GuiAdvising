#include "advising.h"
#include <iostream>
#include<iostream>
#include <string>
#include <iomanip>
#include<fstream>
#include<string>
using namespace std;


advising::advising() {
    string name="hbrie";
    int ID=567 ;
    //string arr[7][7];
};
advising::advising(string name, int id) {
    string Name = name;
    int ID = id;
};
    //void advising::Writefiletoarray(string arr[][1]) {
    //    ifstream myfile("example.txt");
    //    if (myfile.is_open()) {
    //        string line;
    //        //string array[7][7];
    //        for (int i = 0; i < 1; i++) {
    //            for (int j = 0; j < 1; j++) {
    //                while (!myfile.eof()) {
    //                    //getline(myfile, line, '\n');
    //                    arr[i][j] = line;
    //                    cout << arr[i][j] << '\n';

    //                }
    //            }

    //        }
    //    }
    //}

    ////GUI
    ////fixed initialization for time date in schedules
    ////void DisplaySchedule(string arr[][7], int row) {
    ////
    ////    string arr1[7][7] = { {"  0000course/time","sat","sun","mon","tue","wed","thu"},{"8:300 AM-10:00 AM"},{"10:00 AM-11:30 AM"} ,{"11:30 AM-1:000 PM"},{"1:000 PM-2:300 PM"},
    ////      {"2:300 PM-4:000 PM"},{"4:000 PM-6:000 PM"} };
    ////    string arr2[7][7] = { {"  0000course/time","sat","sun","mon","tue","wed","thu"},{"8:300 AM-10:00 AM"},{"10:00 AM-11:30 AM"} ,{"11:30 AM-1:000 PM"},{"1:000 PM-2:300 PM"},
    ////        {"2:300 PM-4:000 PM"},{"4:000 PM-6:000 PM"} };
    ////    for (int i = 0; i < 7; i++) {
    ////        for (int j = 0; j < 7; j++) {
    ////            cout << setw(3) << arr[i][j] << "      |";
    ////        }
    ////        cout << endl;
    ////    }
    ////}
    //int advising::search(string array[][7], int row, int j, int i) {
    //    string x = { " " };
    //    if (array[i][j] == x)
    //        return 1;

    //    else
    //        return -1;
    //}
    ////instructor enroll his course the date and time of second group
    ////check overlapping in the first group
    //void advising::Group2(string arr1[][7], int row, bool run, string arr2[][7]) {
    //    if (run) {
    //        for (int i = 1; i < 7; i++) {
    //            for (int j = 1; j < 7; j++) {
    //                arr2[i][j] = { " " };

    //            }
    //        }
    //    }
    //    //DisplaySchedule(arr2, 7);
    //    string course;
    //    int i = 1, j = 1;
    //    bool button1 = 1, button2 = 1, button3 = 1;
    //    if (button1) {
    //        cin >> course;
    //        if (search(arr1, 7, i, j)) {
    //            arr2[i][j] = course;
    //        }
    //    }
    //    else if (button2) {
    //        i = i + 1;
    //        cin >> course;
    //        if (search(arr1, 7, i, j)) {
    //            arr2[i][j] = course;
    //        }
    //    }

    //}
    ////instructor enroll the date and time of first group
    //void advising::Group1(string arr1[][7], int row, bool run) {
    //    if (run) {
    //        for (int i = 1; i < 7; i++) {
    //            for (int j = 1; j < 7; j++) {
    //                arr1[i][j] = { " " };

    //            }
    //        }
    //    }
    //    // DisplaySchedule(arr1, 7);
    //    bool button1 = 1, button2 = 1, button3 = 1;
    //    int i = 1, j = 1;
    //    if (button1) {
    //        cin >> arr1[i][j];
    //    }
    //    else if (button2) {
    //        i = i + 1;
    //        cin >> arr1[i][j];
    //    }
    //}


    //void advising::WriteArrayToFile(string arr[][1]) {
    //    ofstream Nyfile;
    //    Nyfile.open("example.txt");
    //    for (int i = 0; i < 1; i++) {
    //        for (int j = 0; j < 1; j++) {
    //            Nyfile << arr[i][j] << endl;
    //        }
    //    };
    //}
void advising::writescheduletofile(int x)
{
    /*ifstream myfile("Schedule.txt");
    Writefiletoarray(arr);
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            cin >> arr[i][j];
        }
    }
    WriteArrayToFile(arr);*/
    
    ofstream Nyfile;
    Nyfile.open("habiba.txt");
    Nyfile <<x<< endl;
              
     

};

    //void advising::Writefiletoarray(string arr[][7])
    //{
    //    ifstream myfile("example.txt");
    //    if (myfile.is_open()) {
    //        string line;
    //        string array[7][7];
    //        for (int i = 0; i < 7; i++) {
    //            for (int j = 0; j < 7; j++) {
    //                while (!myfile.eof()) {
    //                    getline(myfile, line, '\n');
    //                    array[i][j] = line;
    //                    cout << array[i][j] << '\n';
    //
    //                }
    //            }
    //
    //        }
    //    }
    //}



    //int advising::search(string array[][7], int row, int j, int i)
    //{
    //    return 0;
    //}

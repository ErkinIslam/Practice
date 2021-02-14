#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("Grades.txt");
    ofstream fout;
    fout.open("FinalGrades.txt");

    if(fin.fail())
    {
        cerr << "Couldn't open the file Grades" << endl;
    }
    if(fout.fail())
    {
        cerr << "Couldn't open the file FinalGrades" << endl;
    }

    int countStudent = 0, count90 = 0;
    double sum = 0, average = 0;
    double TestScores[15];
//-----------------COUT------------------------------------
    cout << "Original Test Scores:  ";

        for (int i = 0; i < 15; i++)
        {
            fin >> TestScores[i];
            sum = sum + TestScores[i];
            countStudent++;
            cout << TestScores[i] << " ";
        }


    cout << endl;
    average = sum / countStudent;
    cout << "Average is: " << average;
    cout << endl;

    cout << "New Test Scores:       ";
    for (int j = 0; j < 15; j++)
    {
        if (TestScores[j] < average)
        {
            TestScores[j] = TestScores[j] + 10;

        }
        else if (TestScores[j] > average)
        {
            TestScores[j] = TestScores[j] + 5;

        }
        else if (TestScores[j] == average)
        {
            TestScores[j] = TestScores[j] + 7;

        }
        cout << TestScores[j] << " ";
        if (TestScores[j] > 90)
            {
                count90++;
            }
    }


    cout << endl;
    cout << count90 << " students got over 90 on the test" << endl;

//-----------------FOUT------------------------------------
    fout << "Original Test Scores:  ";

        for (int i = 0; i < 15; i++)
        {
            fin >> TestScores[i];
            sum = sum + TestScores[i];
            countStudent++;
            fout << TestScores[i] << " ";
        }


    fout << endl;
    average = sum / countStudent;
    fout << "Average is: " << average;
    fout << endl;

    fout << "New Test Scores:       ";
    for (int j = 0; j < 15; j++)
    {
        if (TestScores[j] < average)
        {
            TestScores[j] = TestScores[j] + 10;

        }
        else if (TestScores[j] > average)
        {
            TestScores[j] = TestScores[j] + 5;

        }
        else if (TestScores[j] == average)
        {
            TestScores[j] = TestScores[j] + 7;

        }
        fout << TestScores[j] << " ";
        if (TestScores[j] > 90)
            {
                count90++;
            }
    }


    fout << endl;
    fout << count90 << " students got over 90 on the test" << endl;
    return 0;
}

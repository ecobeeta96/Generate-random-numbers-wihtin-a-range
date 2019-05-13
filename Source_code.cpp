#include <bits/stdc++.h>

using namespace std;

int random(int min, int max);

int main()
{
   //create a output file object
    ofstream outFile("ran.txt");

   //user inputs
    cout << "How many random nubers needed? ";
    int number;
    cin >> number;

    cout << "Minimum value of a random number : " ;
    int minNum;
    cin >> minNum;

    cout << "Maximum value of a random number : ";
    int maxNum;
    cin >> maxNum;

   //vector for storing random numbers
    vector<int> Ran_1(number);

    //creating random numbers
    for(int i=0; i<number; i++)
    {
       Ran_1[i] = random(minNum,maxNum);
    }
    cout << "------------------------------------" << endl;
    cout << "Generated Random numbers are : " << endl;
    cout << "------------------------------------" << endl;

    for(int i=0; i< number ; i++)
    {
         outFile << Ran_1[i] << endl;
         cout << Ran_1[i] << endl;
    }


    cout << "\n----------------------------------------------" << endl;
    cout << "Random numbers are saved to \'ran.txt\' file " << endl;

    return 0;
}



// random number function
int random(int min, int max) 
{
   static bool first = true;
   if (first)
   {
      srand( time(NULL) ); 
      first = false;
   }
   return min + rand() % (( max + 1 ) - min);
}

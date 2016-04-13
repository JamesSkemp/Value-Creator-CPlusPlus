/******************************************
* Value Creator Version 1.0.4             *
* Created by JRS on 12.13.2002            *
* Updated by JRS 12.13.2002-12.14.2002    *
* Created using Dev-C++ Version 4         *
* Simple little program that adds one     *
* number a number of times to another     *
* number and displays the results in a    *
* text file for importation into selected *
* programs...                             *
* Visit my site at http://jamesrskemp.net/*
* or http://jamesrskemp.tripod.com/       *
* Email me at jamesrskemp@eml.cc          *
******************************************/

#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <fstream.h>

int main(int argc, char *argv[])
{
  int p_number; //Primary number (the number we start at)
  int s_number; //Second number that is used to increase or decrease primary number
  int t_number; //Number of times to run the program
  int m_change; //Value for making a change or not
  cout << "    Value Creator" << endl //Name of program
       << "      v 1.0.4" << endl; //Version of program
  cout << "Hello and welcome to my small program that will allow you to take a number" << endl
       << "and add another number to it a number of times equal to your choosing." << endl << endl;
initiate_quests:
  cout << "First, enter the number that you would like to begin with:  ";
  cin >> p_number;
  cout << "Now enter the number that you would like to increase this number by:  ";
  cin >> s_number;
  cout << "Now, enter the number of times that you want to do an increase:  ";
  cin >> t_number;
  cout << "That means that your values will go from " << (p_number+s_number)
       << " to " << (p_number+s_number*t_number) << endl << endl
       << "Would you like to change any of your values?  Enter 0 for no, 1 for yes:" << endl;
  cin >> m_change;

  if (m_change>0) {
    goto initiate_quests;
  }

  else

  t_number=(t_number+1);

  if(t_number<1) {
    int t_number=1;
  }
  else

  //Begin the first addition and make the number of times equal to 1
  int c_number=0;
  int c_number=(p_number+s_number);
  int c_times=1;


// Here is where we make a text file with some information.  Deleted after next run.
    std::ofstream my_file("ValueCreator.txt");
    if(my_file) {

beglooph:
  if(c_times<t_number) {
   cout << "Number now " << c_number << endl;
   my_file << "" << c_number << endl;
   cout << "Times now " << c_times << endl;
   c_number=(c_number+s_number);
   c_times=(c_times+1);
   goto beglooph;

  cout << "Number of Times to do " << t_number << endl
       << "Current Number " << c_number << endl
       << "Current Times " << c_times << endl
       << "Secondary Number " << s_number << endl
       << "Primary Number " << p_number << endl;

  }
  else

  cout << "You entered in the following:" << endl << endl
       << "First number: " << p_number << endl
       << "Number to add: " << s_number << endl
       << "Number of times to add: " << (t_number-1) << endl
       << "The number range was from " << (p_number+s_number) << " to " << (c_number-s_number) << endl
       << endl
       << "There should be a file called 'ValueCreator.txt' in the same folder as" << endl
       << " this program.  Open that file to see your end results." << endl << endl
       << "I hope you enjoyed my program - email jamesrskemp@eml.cc w/ comments/concerns" << endl << endl
       << "Okay, press return whenever you would like to exit...";
  goto exitroo;

  }
    else
        goto exitroo;

exitroo:
  std::cerr << "";
  getch();
  return 0;
}

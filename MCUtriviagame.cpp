#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;



// ///Project design
// helper function:
// 	check answer correct
// 	read in files of questions
// 	read in files of answers
// 	r
//Prompt user for answers
//ouotput correct or incorrect
/// save number of correct and incorrect
// after five questions wrong, yield score


// need to make vector of vectors for input answers and answer key

void format_user_answer(vector <string> user_answer){

	for( int i = 0 ; i < user_answer.size(); ++i){


		for( int j = 0 ; j < user_answer.at(i).size(); ++j){


			tolower(user_answer.at(i).at(j));
		}



	}





}


void check_answer(vector <string> &user_answer,vector<string> &answerskey, ostream &outs){
		


	for(int i = 0; i < answerskey.size(); ++i)
		{
			

				if(user_answer.at(i) == answerskey.at(i)){

						outs << "correct"<< endl;
					}

				
	

		}

}
			













int main(){


	ifstream question_inFile("questions.txt");
	ifstream answers_inFile("answers.txt");

	vector <string> questions_vector;
	

	string line1;
	while(getline(question_inFile,line1)){

		questions_vector.push_back(line1);

	}

	vector <string> answer_key_vector;
	string line2;
	
	while(getline(answers_inFile,line2)){

		answer_key_vector.push_back(line2);
	}



	
	vector <string> user_answer_bank;

	cout << "Welcome to MCU Trivia game!" << endl;

	cout << "What is your name? " ;

	string username;

	cin >> username;



cout << "--------------------------------------" << endl;
cout << "--------------------------------------" << endl;
cout << "--------------------------------------" << endl;
cout << "--------------------------------------" << endl;
cout << "--------------------------------------" << endl;


						

			for(int i = 0 ; i < questions_vector.size(); ++i){

					string input_user_answer;

					cout << questions_vector.at(i) << " ";

					cin >> input_user_answer;

					user_answer_bank.push_back(input_user_answer);
					


				}


		format_user_answer(user_answer_bank);



		ofstream outFile("user_answers.txt");

		check_answer(user_answer_bank, answer_key_vector, outFile);





			// for( int j = 0 ; j < saved_answer_bank.size(); ++j){


			// 	add_points()
			// }

			// if(saved_answer_bank.size() == questions_vector.size()){

			// 		cout << "Congratulations! You are an expert. You got all questions correct!" << endl;
			// 	}

			// int halfway_mark = (questions_vector.size())/2;

			// 	if(saved_answer_bank.size() < halfway_mark){

			// 		cout << "You are not an expert" << endl;
			// 		cout << "Your score was " << saved_answer_bank.size() << endl;
			// 	}

			// 	if ( saved_answer_bank.size() >=  halfway_mark){

			// 		cout << "You know a lot!" << endl; 
			// 		cout << "Your score was " << saved_answer_bank.size() <<endl;
			// 	}
	



	return 0;
}

	



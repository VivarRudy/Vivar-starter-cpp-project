#include <iostream>

using namespace std;
int main(){
    // TODO
    cout << "What score did you get for the Notebook1?";
    double score;
    cin >> score; 

char grade;
    if(score >= 9){
        grade = 'A';
    } else if (score >= 8) {
        grade = 'B';
    } else if  (score >= 7){
        grade = 'C';
    } else {
        grade = 'D';
    }

    if('0'){
        cout << "Must be true to get to here \n";
    }

    cout << "A score of " << score << " means " << grade << endl;
    
    return 0;
}
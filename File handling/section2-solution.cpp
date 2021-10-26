#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

void print_header() {

    
    cout<<std::setw(15)<<std::left<<"Student"
    <<std::right<<std::setw(5)<<"Scores"<<endl;

    cout<<std::setw(22)<<std::setfill('-')<<"";

    cout<<std::setfill(' ')<<endl; /* since setfill() persits, so its a good practice to set it back to default after our work is done */
}

void print_footer(double average) {

    cout<<std::setw(20)<<std::setfill('-')<<""<<endl;

    cout<<std::setfill(' ');

    cout<<std::setw(15)<<std::left<<"Average Score"<<std::setw(5)<<std::right<<average;
    
}

void print_student(const std::string &student, int score) {

    cout<<std::setprecision(1)<<std::fixed;

    cout<<std::setw(15)<<std::left<<student<<std::setw(5)<<std::right<<score<<endl;

}

int process_response(const std::string& response, const std::string& answer_key) {

    int score{0};

    for(int i=0; i<answer_key.size(); i++) {

        if( response.at(i)==answer_key.at(i) )
            score++;

    }

        return score;

}
int main() {


    std::string name {};
    std::string answer_key {};
    std::string response {};
    int running_sum {0};
    int total_students {0};
    double average_score {0.0};


    std::ifstream in_file("section2.txt");

    if(!in_file) {

        std::cerr<<"Error"<<std::endl;

        return (1);
    } 


        in_file>>answer_key;
        cout<<"Answer key is : "<<answer_key<<endl;

        print_header();

    while(in_file>>name>>response) {  // Read one name (Larry) and one response (ABCDE) at a time

        ++total_students;

        int score;
        
        score = process_response(response, answer_key);

        running_sum+=score;

        print_student(name,score);

    }

        if(total_students!=0)
            average_score = static_cast<double>(running_sum)/total_students;

            print_footer(average_score);

            in_file.close();

    return 0;
}
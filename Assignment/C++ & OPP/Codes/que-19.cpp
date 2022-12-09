#include <iostream>

using namespace std;

class batsman
{
    int total_run;
    double avg_run;
    int best_per;
    int matches;
    public:
    batsman(int run)
    {
        total_run = run;
        best_per = run;
        matches = 1;
    }
    void inputdata(int run)
    {
        total_run += run;
        best_per = (run > best_per) ? run : best_per;
        matches++;
    }
    double avg()
    {
        return total_run / matches;
    }

    void displaydata()
    {
        cout << "Total Runs: " << total_run << endl;
        cout << "Average: " << avg() << endl;
        cout << "Best Performance: " << best_per << endl;
    }
};

int main(void)
{
    batsman aniket(100);
    aniket.inputdata(20);
    aniket.inputdata(0);
    aniket.inputdata(120);
    aniket.displaydata();
    return 0;
}
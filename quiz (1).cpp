
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string answer1 = "mercury", answer2 = "mars", answer3 = "eight", answer4 = "gravity", answer5 = "photosynthesis";
    string userAnswer;
    int score = 0;

    cout << "Hi! This is a science quiz that I made. Please take note that answers are case sensitive, so make sure to write your answers in lowercase letters.\n\n";

    cout << "1. What planet is the closest to the sun?\n";
    cout << "Answer: ";
    cin >> userAnswer;
    if (userAnswer == answer1)
    {
        ++score;
        cout << "Your answer is correct!\n";
    }
    else
    {
        cout << "Your answer is incorrect.\n";
    }

    cout << "2. What planet is known as the red planet?\n";
    cout << "Answer: ";
    cin >> userAnswer;
    if (userAnswer == answer2)
    {
        ++score;
        cout << "Your answer is correct!\n";
    }
    else
    {
        cout << "Your answer is incorrect.\n";
    }

    cout << "3. How many planets are there in the solar system?\n";
    cout << "Answer: ";
    cin >> userAnswer;
    if (userAnswer == answer3)
    {
        ++score;
        cout << "Your answer is correct!\n";
    }
    else
    {
        cout << "Your answer is incorrect.\n";
    }

    cout << "4. What force pulls an object towards the center of the Earth?\n";
    cout << "Answer: ";
    cin >> userAnswer;
    if (userAnswer == answer4)
    {
        ++score;
        cout << "Your answer is correct!\n";
    }
    else
    {
        cout << "Your answer is incorrect.\n";
    }

    cout << "5. A process by which a plant produces its own food.\n";
    cout << "Answer: ";
    cin >> userAnswer;
    if (userAnswer == answer5)
    {
        ++score;
        cout << "Your answer is correct!\n\n";
    }
    else
    {
        cout << "Your answer is incorrect.\n\n";
    }

    cout << "Your total score: " << score << " out of 5\n";
    return 0;
}

#ifndef QUIZ_H
#define QUIZ_H
\
#include "Question.h"
#include "DataSource.h"

namespace quiz
{
    class Quiz
    {
        public:
            Quiz(DataSource* ds);
            Quiz(vector<Question*> questions);
            ~Quiz();
            bool HasNext();
            Question* GetCurrectQuestion();
            Question* NextQuestion();
            void CommitAnswer(vector<string> &answer);
            int GetScore();
            int GetTotalScore();

        private:
            int totalScore;
            int questionsCount;
            vector<Question*> questions;
            int current;
            int score;
            DataSource* ds;

            void CalculateTotalScore();

    };
}

#endif // QUIZ_H

#include <bits/stdc++.h>
#include <stdlib.h>
#include <sys/wait.h>
using namespace std;

void loop();
vector<string> split_lines(string_view line);
vector<char *> make_c_args(vector<string> &words);

int main(int ac, char **av)
{
    loop();
}

void loop()
{
    string line;
    while (true)
    {
        cout << "> ";
        if (!getline(cin, line))
        {
            break;
        }
        auto words = split_lines(line);
        if (words.empty())
        {
            continue;
        }
        auto args = make_c_args(words);

        pid_t pid = fork();
        if (pid == 0)
        {
            printf("Current PID: %i\n and Child Proceess current ID: %i", getpid(), pid);
        }
        else
        {
            wait(nullptr);
        }
    }
}

vector<string> split_lines(string_view line)
{
    vector<string> words;
    istringstream iss(string(line));
    string word;
    while (iss >> word)
    {
        words.push_back(word);
    }
    return words;
}

vector<char *> make_c_args(vector<string> &words)
{
    vector<char *> result;
    for (auto &word : words)
    {
        result.push_back(word.data());
    }
    result.push_back(nullptr);
    return result;
}
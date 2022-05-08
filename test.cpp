#include <string>
#include <vector>
#include <iostream>
#include <fstream>

std::vector<std::string> tokenise(std::string csvLine, char separator)
{
    // string vector tokens ## stores the tokens
    std::vector<std::string> tokens;
    // int start, end ##used to delineate the position of the tokens
    signed int start, end;
    std::string token;
    // start = csvLine.find_first_not_of(separator)
    start = csvLine.find_first_not_of(separator, 0);
    // do
    do{
    // end = next 'separator' after start
    end = csvLine.find_first_of(separator, start);
    //if start == csvLine.length or start == end ## nothing more to find break
    if (start == csvLine.length() || start == end) break;
    // if end >= 0 ## we found the separator
    if (end >= 0) token = csvLine.substr(start, end - start);
    // else token = csvLine.substr(start, csvLine.length - start) ## end is invalid
    else token = csvLine.substr(start, csvLine.length() - start);
    // tokens.push_back(token) ## save the token
    tokens.push_back(token);
    // start = end + 1 ## move past this token
    start = end + 1;
    // while (end > 0) ## continue loop condition
    }while(end > 0);

    return tokens;
}

int main()
{
    // std::vector<std::string> tokens;
    // std::string s = "2020/03/17 17:01:24.884492,ETH/BTC,bid,0.02187308,7.44564869";

    // tokens = tokenise(s, ',');

    // for (std::string& t : tokens)
    // {
    //     std::cout << t << std::endl;
    // }


    //instantiate ifstream object and pass it the name of the file to its constructor to open the file
    std::ifstream csvFile{"OrderBookDataset.csv"};
    std::string line;
    std::vector<std::string> tokens;

    if (csvFile.is_open())
    {
        std::cout << "File open" << std::endl;

        while(std::getline(csvFile, line))
        {
            std::cout << "Read line " << line << std::endl;
            tokens = tokenise(line, ',');
            if (tokens.size() != 5) //bad
            {
                std::cout << "Bad line" << std::endl;
                continue;
            }
            // we have 5 tokens
            double price = std::stod(tokens[3]);
            double amount = std::stod(tokens[4]);
            std::cout << price << ":" << amount << std::endl;

            
        }
        csvFile.close();
    }
    else
    {
        std::cout << "Could not open file" << std::endl;
    }

    return 0;
}
#ifndef CRYPTO_H
#define CRYPTO_H

#include <string>
#include <iostream>
#include <map>

/*
Crypto currency query class declaration
*/
class QueryCrypto {
public:
  // Currency pair
  QueryCrypto(std::string curPair, int id) : _curPair(curPair), _id(id) {};

  // Making http request
  void getData(); 
  void runQueries(); 
  // Data processing
  void saveCSVData(std::string &readBuffer); 
  std::map<std::string, std::string> parseHeaderData(std::string &readBuffer); 

  // getters
  std::string getCoinPair(){ return _curPair; }

  void printCoinPair() { std::cout << "Coin: " << _curPair << std::endl; }; 

private:
  std::string _curPair;                 // crypto currency pair i.e., BTC/USD
  std::string _currentWeight;           // Get info about current interval weight
  int _id; 

};

#endif
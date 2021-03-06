/******************************************************************
 *
 * uSQL for C++
 *
 * Copyright (C) Satoshi Konno 2012
 *
 * This is licensed under BSD-style license, see file COPYING.
 *
 ******************************************************************/

#include <boost/tokenizer.hpp>
#include "SQLProxyDataSet.h"

using namespace std;
using namespace boost;
using namespace uSQL;

#define USQL_DICTIONARY_SERIALIZE_MAP_SEP "\t"
#define USQL_DICTIONARY_SERIALIZE_VALUE_SEP "\r"

uSQL::SQLProxyDataSet::SQLProxyDataSet()
{
}

uSQL::SQLProxyDataSet::~SQLProxyDataSet()
{
}

bool uSQL::SQLProxyDataSet::parse(const std::string &aString)
{
  char_separator<char> valueSep(USQL_DICTIONARY_SERIALIZE_VALUE_SEP);
  tokenizer< char_separator<char> > values(aString, valueSep);
  for (tokenizer< char_separator<char> >::iterator value = values.begin(); value != values.end(); value++) {
    char_separator<char> mapSep(USQL_DICTIONARY_SERIALIZE_MAP_SEP);
    tokenizer< char_separator<char> > maps(*value, mapSep);
    tokenizer< char_separator<char> >::iterator map = maps.begin();
    if (map == maps.end())
      continue;
    string keyName = *map;
    map++;
    if (map == maps.end())
      continue;
    string keyValue = *map;
    set(keyName, keyValue);
  }
  return true;
}

bool uSQL::SQLProxyDataSet::hasData()
{
  return (0 < size());
}

void uSQL::SQLProxyDataSet::set(const std::string &keyName, const std::string &keyValue) 
{
  insert(std::pair<std::string, std::string>(keyName, keyValue));
}

std::vector<std::string> &uSQL::SQLProxyDataSet::getAllKeys() 
{
  allKeys.clear();
  
  for (map<string, string>::iterator set = begin(); set != end(); set++) {
    std::string keyName = set->first;
    allKeys.push_back(keyName);
  }
  
  return this->allKeys;
}
  
const std::string &uSQL::SQLProxyDataSet::getValue(const std::string &keyName) 
{
  static std::string nullValue;
  for (SQLProxyDataSet::iterator dict = begin(); dict != end(); dict++) {
    std::string key = (*dict).first;
    if (key.compare(keyName) == 0)
      return (*dict).second;
  }
  return nullValue;
}

bool uSQL::SQLProxyDataSet::isValue(const std::string &keyName, const std::string &value)
{
  std::string keyValue = getValue(keyName);
  return (keyValue.compare(value) == 0);
}
  
std::string &uSQL::SQLProxyDataSet::toString(std::string &buf)
{
  buf = "";
  for (SQLProxyDataSet::iterator dict = begin(); dict != end(); dict++) {
    buf.append((*dict).first);
    buf.append(USQL_DICTIONARY_SERIALIZE_MAP_SEP);
    buf.append((*dict).second);
    buf.append(USQL_DICTIONARY_SERIALIZE_VALUE_SEP);
  }
  
  return buf;
}


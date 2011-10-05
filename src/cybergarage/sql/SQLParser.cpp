/******************************************************************
*
* uSQL for C++
*
* SQLParser.cpp
*
* Copyright (C) Satoshi Konno 2011
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#include <antlr3.h>
#include <cybergarage/sql/SQLParser.h>

uSQL::SQLParser::SQLParser()
{
}

uSQL::SQLParser::~SQLParser()
{
    clear();
}

void uSQL::SQLParser::clear()
{
    for (std::vector<SQLStatement *>::iterator stmt = statements.begin(); stmt != statements.end(); stmt++)
        delete *stmt;
    statements.clear();
}

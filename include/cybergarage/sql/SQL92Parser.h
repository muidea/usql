/******************************************************************
*
* uSQL for C++
*
* SQL92Parser.h
*
* Copyright (C) Satoshi Konno 2011
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#ifndef CG_USQL_SQL92PARSER_H
#define CG_USQL_SQL92PARSER_H

#include <cybergarage/sql/SQLParser.h>

namespace uSQL {

class SQL92Parser : public SQLParser {

public:

	SQL92Parser();

	bool parse(const std::string &queryString);
};

}

#endif

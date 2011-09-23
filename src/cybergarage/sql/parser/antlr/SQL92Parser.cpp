/** \file
 *  This C source file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : SQL92.g
 *     -                            On : 2011-09-23 16:01:38
 *     -                for the parser : SQL92ParserParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
*/
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


/* =============================================================================
 * This is what the grammar programmer asked us to put at the top of every file.
 */

/******************************************************************
*
* uSQL for C++
*
* SQL92Parser for ANTLR
*
* Copyright (C) Satoshi Konno 2011
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

/* End of Header action.
 * =============================================================================
 */

/* -----------------------------------------
 * Include the ANTLR3 generated header file.
 */
#include    "SQL92Parser.h"
/* ----------------------------------------- */

/******************************************************************
*
* uSQL for C++
*
* SQL92.g
*
* Copyright (C) Satoshi Konno 2011
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/




/* MACROS that hide the C interface implementations from the
 * generated code, which makes it a little more understandable to the human eye.
 * I am very much against using C pre-processor macros for function calls and bits
 * of code as you cannot see what is happening when single stepping in debuggers
 * and so on. The exception (in my book at least) is for generated code, where you are
 * not maintaining it, but may wish to read and understand it. If you single step it, you know that input()
 * hides some indirect calls, but is always referring to the input stream. This is
 * probably more readable than ctx->input->istream->input(snarfle0->blarg) and allows me to rejig
 * the runtime interfaces without changing the generated code too often, without
 * confusing the reader of the generated output, who may not wish to know the gory
 * details of the interface inheritance.
 */

#define		CTX	ctx

/* Aids in accessing scopes for grammar programmers
 */
#undef	SCOPE_TYPE
#undef	SCOPE_STACK
#undef	SCOPE_TOP
#define	SCOPE_TYPE(scope)   pSQL92Parser_##scope##_SCOPE
#define SCOPE_STACK(scope)  pSQL92Parser_##scope##Stack
#define	SCOPE_TOP(scope)    ctx->pSQL92Parser_##scope##Top
#define	SCOPE_SIZE(scope)		ctx->pSQL92Parser_##scope##Stack_limit
#define SCOPE_INSTANCE(scope, i)	(ctx->SCOPE_STACK(scope)->get(ctx->SCOPE_STACK(scope),i))

/* Macros for accessing things in the parser
 */

#undef	    PARSER
#undef	    RECOGNIZER
#undef	    HAVEPARSEDRULE
#undef		MEMOIZE
#undef	    INPUT
#undef	    STRSTREAM
#undef	    HASEXCEPTION
#undef	    EXCEPTION
#undef	    MATCHT
#undef	    MATCHANYT
#undef	    FOLLOWSTACK
#undef	    FOLLOWPUSH
#undef	    FOLLOWPOP
#undef	    PRECOVER
#undef	    PREPORTERROR
#undef	    LA
#undef	    LT
#undef	    CONSTRUCTEX
#undef	    CONSUME
#undef	    MARK
#undef	    REWIND
#undef	    REWINDLAST
#undef	    PERRORRECOVERY
#undef	    HASFAILED
#undef	    FAILEDFLAG
#undef	    RECOVERFROMMISMATCHEDSET
#undef	    RECOVERFROMMISMATCHEDELEMENT
#undef		INDEX
#undef      ADAPTOR
#undef		SEEK
#undef	    RULEMEMO
#undef		DBG

#define	    PARSER				ctx->pParser
#define	    RECOGNIZER				PARSER->rec
#define	    PSRSTATE				RECOGNIZER->state
#define	    HAVEPARSEDRULE(r)			RECOGNIZER->alreadyParsedRule(RECOGNIZER, r)
#define	    MEMOIZE(ri,si)			RECOGNIZER->memoize(RECOGNIZER, ri, si)
#define	    INPUT				PARSER->tstream
#define	    STRSTREAM				INPUT
#define	    ISTREAM				INPUT->istream
#define	    INDEX()				ISTREAM->index(INPUT->istream)
#define	    HASEXCEPTION()			(PSRSTATE->error == ANTLR3_TRUE)
#define	    EXCEPTION				PSRSTATE->exception
#define	    MATCHT(t, fs)			RECOGNIZER->match(RECOGNIZER, t, fs)
#define	    MATCHANYT()				RECOGNIZER->matchAny(RECOGNIZER)
#define	    FOLLOWSTACK				PSRSTATE->following
#ifdef  SKIP_FOLLOW_SETS
#define	    FOLLOWPUSH(x)
#define	    FOLLOWPOP()
#else
#define	    FOLLOWPUSH(x)			FOLLOWSTACK->push(FOLLOWSTACK, ((void *)(&(x))), NULL)
#define	    FOLLOWPOP()				FOLLOWSTACK->pop(FOLLOWSTACK)
#endif
#define	    PRECOVER()				RECOGNIZER->recover(RECOGNIZER)
#define	    PREPORTERROR()			RECOGNIZER->reportError(RECOGNIZER)
#define	    LA(n)				INPUT->istream->_LA(ISTREAM, n)
#define	    LT(n)				INPUT->_LT(INPUT, n)
#define	    CONSTRUCTEX()			RECOGNIZER->exConstruct(RECOGNIZER)
#define	    CONSUME()				ISTREAM->consume(ISTREAM)
#define	    MARK()				ISTREAM->mark(ISTREAM)
#define	    REWIND(m)				ISTREAM->rewind(ISTREAM, m)
#define	    REWINDLAST()			ISTREAM->rewindLast(ISTREAM)
#define	    SEEK(n)				ISTREAM->seek(ISTREAM, n)
#define	    PERRORRECOVERY			PSRSTATE->errorRecovery
#define	    FAILEDFLAG				PSRSTATE->failed
#define	    HASFAILED()				(FAILEDFLAG == ANTLR3_TRUE)
#define	    BACKTRACKING			PSRSTATE->backtracking
#define	    RECOVERFROMMISMATCHEDSET(s)		RECOGNIZER->recoverFromMismatchedSet(RECOGNIZER, s)
#define	    RECOVERFROMMISMATCHEDELEMENT(e)	RECOGNIZER->recoverFromMismatchedElement(RECOGNIZER, s)
#define     ADAPTOR                         ctx->adaptor
#define		RULEMEMO						PSRSTATE->ruleMemo
#define		DBG								RECOGNIZER->debugger


#define		TOKTEXT(tok, txt)				tok, (pANTLR3_UINT8)txt

/* The 4 tokens defined below may well clash with your own #defines or token types. If so
 * then for the present you must use different names for your defines as these are hard coded
 * in the code generator. It would be better not to use such names internally, and maybe
 * we can change this in a forthcoming release. I deliberately do not #undef these
 * here as this will at least give you a redefined error somewhere if they clash.
 */
#define	    UP	    ANTLR3_TOKEN_UP
#define	    DOWN    ANTLR3_TOKEN_DOWN
#define	    EOR	    ANTLR3_TOKEN_EOR
#define	    INVALID ANTLR3_TOKEN_INVALID


/* =============================================================================
 * Functions to create and destroy scopes. First come the rule scopes, followed
 * by the global declared scopes.
 */



/* ============================================================================= */

/* =============================================================================
 * Start of recognizer
 */


/** \brief Table of all token names in symbolic order, mainly used for
 *         error reporting.
 */
pANTLR3_UINT8   SQL92ParserTokenNames[56+4]
     = {
        (pANTLR3_UINT8) "<invalid>",       /* String to print to indicate an invalid token */
        (pANTLR3_UINT8) "<EOR>",
        (pANTLR3_UINT8) "<DOWN>",
        (pANTLR3_UINT8) "<UP>",
        (pANTLR3_UINT8) "A",
        (pANTLR3_UINT8) "ADD",
        (pANTLR3_UINT8) "ALL",
        (pANTLR3_UINT8) "ALLOCATE",
        (pANTLR3_UINT8) "ALTER",
        (pANTLR3_UINT8) "AND",
        (pANTLR3_UINT8) "ANY",
        (pANTLR3_UINT8) "ARE",
        (pANTLR3_UINT8) "AS",
        (pANTLR3_UINT8) "ASC",
        (pANTLR3_UINT8) "ASSERTION",
        (pANTLR3_UINT8) "AT",
        (pANTLR3_UINT8) "AUTHORIZATION",
        (pANTLR3_UINT8) "AVG",
        (pANTLR3_UINT8) "B",
        (pANTLR3_UINT8) "BEGIN",
        (pANTLR3_UINT8) "BETWEEN",
        (pANTLR3_UINT8) "BIGINT",
        (pANTLR3_UINT8) "BIT",
        (pANTLR3_UINT8) "BOOLEAN",
        (pANTLR3_UINT8) "BOTH",
        (pANTLR3_UINT8) "BY",
        (pANTLR3_UINT8) "C",
        (pANTLR3_UINT8) "CALL",
        (pANTLR3_UINT8) "CASCADE",
        (pANTLR3_UINT8) "CASCADED",
        (pANTLR3_UINT8) "CASE",
        (pANTLR3_UINT8) "CAST",
        (pANTLR3_UINT8) "CHARACTER",
        (pANTLR3_UINT8) "COMMENT",
        (pANTLR3_UINT8) "D",
        (pANTLR3_UINT8) "E",
        (pANTLR3_UINT8) "F",
        (pANTLR3_UINT8) "FROM",
        (pANTLR3_UINT8) "G",
        (pANTLR3_UINT8) "H",
        (pANTLR3_UINT8) "I",
        (pANTLR3_UINT8) "J",
        (pANTLR3_UINT8) "K",
        (pANTLR3_UINT8) "L",
        (pANTLR3_UINT8) "M",
        (pANTLR3_UINT8) "N",
        (pANTLR3_UINT8) "O",
        (pANTLR3_UINT8) "P",
        (pANTLR3_UINT8) "Q",
        (pANTLR3_UINT8) "R",
        (pANTLR3_UINT8) "S",
        (pANTLR3_UINT8) "SELECT",
        (pANTLR3_UINT8) "T",
        (pANTLR3_UINT8) "U",
        (pANTLR3_UINT8) "V",
        (pANTLR3_UINT8) "W",
        (pANTLR3_UINT8) "WHERE",
        (pANTLR3_UINT8) "X",
        (pANTLR3_UINT8) "Y",
        (pANTLR3_UINT8) "Z"
       };



// Forward declare the locally static matching functions we have generated.
//
static 
 void
	statement    (pSQL92Parser ctx);
static 
 void
	select_statement    (pSQL92Parser ctx);
static void	SQL92ParserFree(pSQL92Parser ctx);
static void     SQL92ParserReset (pSQL92Parser ctx);

/* For use in tree output where we are accumulating rule labels via label += ruleRef
 * we need a function that knows how to free a return scope when the list is destroyed.
 * We cannot just use ANTLR3_FREE because in debug tracking mode, this is a macro.
 */
static	void ANTLR3_CDECL freeScope(void * scope)
{
    ANTLR3_FREE(scope);
}

/** \brief Name of the grammar file that generated this code
 */
static const char fileName[] = "SQL92.g";

/** \brief Return the name of the grammar file that generated this code.
 */
static const char * getGrammarFileName()
{
	return fileName;
}
/** \brief Create a new SQL92Parser parser and return a context for it.
 *
 * \param[in] instream Pointer to an input stream interface.
 *
 * \return Pointer to new parser context upon success.
 */
ANTLR3_API pSQL92Parser
SQL92ParserNew   (pANTLR3_COMMON_TOKEN_STREAM instream)
{
	// See if we can create a new parser with the standard constructor
	//
	return SQL92ParserNewSSD(instream, NULL);
}

/** \brief Create a new SQL92Parser parser and return a context for it.
 *
 * \param[in] instream Pointer to an input stream interface.
 *
 * \return Pointer to new parser context upon success.
 */
ANTLR3_API pSQL92Parser
SQL92ParserNewSSD   (pANTLR3_COMMON_TOKEN_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state)
{
    pSQL92Parser ctx;	    /* Context structure we will build and return   */

    ctx	= (pSQL92Parser) ANTLR3_CALLOC(1, sizeof(SQL92Parser));

    if	(ctx == NULL)
    {
		// Failed to allocate memory for parser context
		//
        return  NULL;
    }

    /* -------------------------------------------------------------------
     * Memory for basic structure is allocated, now to fill in
     * the base ANTLR3 structures. We initialize the function pointers
     * for the standard ANTLR3 parser function set, but upon return
     * from here, the programmer may set the pointers to provide custom
     * implementations of each function.
     *
     * We don't use the macros defined in SQL92Parser.h here, in order that you can get a sense
     * of what goes where.
     */

    /* Create a base parser/recognizer, using the supplied token stream
     */
    ctx->pParser	    = antlr3ParserNewStream(ANTLR3_SIZE_HINT, instream->tstream, state);
    /* Install the implementation of our SQL92Parser interface
     */
    ctx->statement	= statement;
    ctx->select_statement	= select_statement;
    ctx->free			= SQL92ParserFree;
    ctx->reset			= SQL92ParserReset;
    ctx->getGrammarFileName	= getGrammarFileName;

    /* Install the scope pushing methods.
     */

    /* Install the token table
     */
    PSRSTATE->tokenNames   = SQL92ParserTokenNames;


    /* Return the newly built parser to the caller
     */
    return  ctx;
}

static void
SQL92ParserReset (pSQL92Parser ctx)
{
    RECOGNIZER->reset(RECOGNIZER);
}

/** Free the parser resources
 */
 static void
 SQL92ParserFree(pSQL92Parser ctx)
 {
    /* Free any scope memory
     */

	// Free this parser
	//
    ctx->pParser->free(ctx->pParser);


    ANTLR3_FREE(ctx);

    /* Everything is released, so we can return
     */
    return;
 }

/** Return token names used by this 
parser

 *
 * The returned pointer is used as an index into the token names table (using the token
 * number as the index).
 *
 * \return Pointer to first char * in the table.
 */
static pANTLR3_UINT8    *getTokenNames()
{
        return SQL92ParserTokenNames;
}


/* Declare the bitsets
 */
/** Bitset defining follow set for error recovery in rule state: FOLLOW_select_statement_in_statement67  */
static	ANTLR3_BITWORD FOLLOW_select_statement_in_statement67_bits[]	= { ANTLR3_UINT64_LIT(0x0000000000000002) };
static  ANTLR3_BITSET_LIST FOLLOW_select_statement_in_statement67	= { FOLLOW_select_statement_in_statement67_bits, 1	};
/** Bitset defining follow set for error recovery in rule state: FOLLOW_SELECT_in_select_statement79  */
static	ANTLR3_BITWORD FOLLOW_SELECT_in_select_statement79_bits[]	= { ANTLR3_UINT64_LIT(0x0000000000000002) };
static  ANTLR3_BITSET_LIST FOLLOW_SELECT_in_select_statement79	= { FOLLOW_SELECT_in_select_statement79_bits, 1	};


/* ==============================================
 * Parsing rules
 */
/**
 * $ANTLR start statement
 * SQL92.g:64:1: statement : select_statement ;
 */
static void
statement(pSQL92Parser ctx)
{
    /* Initialize rule variables
     */

    {
        // SQL92.g:65:2: ( select_statement )
        // SQL92.g:65:4: select_statement
        {
            FOLLOWPUSH(FOLLOW_select_statement_in_statement67);
            select_statement(ctx);

            FOLLOWPOP();
            if  (HASEXCEPTION())
            {
                goto rulestatementEx;
            }


        }

    }

    // This is where rules clean up and exit
    //
    goto rulestatementEx; /* Prevent compiler warnings */
    rulestatementEx: ;

            if (HASEXCEPTION())
            {
                PREPORTERROR();
                PRECOVER();
            }
    return ;
}
/* $ANTLR end statement */

/**
 * $ANTLR start select_statement
 * SQL92.g:68:1: select_statement : SELECT ;
 */
static void
select_statement(pSQL92Parser ctx)
{
    /* Initialize rule variables
     */

    {
        // SQL92.g:69:2: ( SELECT )
        // SQL92.g:69:4: SELECT
        {
             MATCHT(SELECT, &FOLLOW_SELECT_in_select_statement79);
            if  (HASEXCEPTION())
            {
                goto ruleselect_statementEx;
            }


        }

    }

    // This is where rules clean up and exit
    //
    goto ruleselect_statementEx; /* Prevent compiler warnings */
    ruleselect_statementEx: ;

            if (HASEXCEPTION())
            {
                PREPORTERROR();
                PRECOVER();
            }
    return ;
}
/* $ANTLR end select_statement */
/* End of parsing rules
 * ==============================================
 */

/* ==============================================
 * Syntactic predicates
 */
/* End of syntactic predicates
 * ==============================================
 */






/* End of code
 * =============================================================================
 */

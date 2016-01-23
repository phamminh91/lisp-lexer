//
//  token.h
//  lisp-lexer
//
//  Created by Minh Pham on 1/23/16.
//  Copyright © 2016 Minh Pham. All rights reserved.
//

#ifndef TOKEN_H_
#define TOKEN_H_

#include <stdlib.h>
#include <stdio.h>
#include "string.h"

enum TokenType {
  T_OPAREN = 0,
  T_CPAREN = 1,
  
  T_IDENT = 2,
  T_VAR,
  T_CONST,
  T_QUOTE,
  T_COND,
  T_DEF,
  T_PROCEDURE,
  
  // +, -, *, /
  T_PLUS,
  T_MINUS,
  T_MUL,
  T_DIV,
};

struct token {
  enum TokenType type;
  char *s;
};

typedef struct token token;


void tok_print(const token *);
void tok_delete(token *);
token* tok_new();
token* tok_fromstring(enum TokenType, const char *, int lo, int hi);


#endif /* token_h */

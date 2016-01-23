//
//  lexer.c
//  lisp-lexer
//
//  Created by Minh Pham on 1/23/16.
//  Copyright © 2016 Minh Pham. All rights reserved.
//

#include "lexer.h"

tokenlist* lex(const char *s) {
  tokenlist *list = malloc(sizeof(tokenlist));
  if (!list)
    return NULL;
  
  // return every char as const token
  token *cur = list->head;
  while (*s != '\0') {
    cur = tok_fromstring(T_CONST, s, 0, 0);
    tok_print(cur);
    cur++;
    s++;
  }
  
  list->size = 0;
  list->head = cur;
  
  return list;
}
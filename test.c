//
//  main.c
//  lisp-lexer
//
//  Created by Minh Pham on 1/23/16.
//  Copyright © 2016 Minh Pham. All rights reserved.
//

#include <stdio.h>
#include "token.h"
#include "lexer.h"

int main() {
  char *s = "(+ (* 2 3) 1)";
  
  // test token
  token *t = tok_fromstring(T_OPAREN, s, 0, 0);
  token *tt = tok_fromstring(T_PLUS, s, 1, 1);
  tok_print(t);
  tok_print(tt);
  
  tok_delete(t);
  tok_delete(tt);
  
  // test tokenlist
  tokenlist *list = lex(s);
  toklist_print(list);
  return 0;
}

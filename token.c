//
//  token.c
//  lisp-lexer
//
//  Created by Minh Pham on 1/23/16.
//  Copyright © 2016 Minh Pham. All rights reserved.
//

#include "token.h"

char *tokstr[] = {
  "oparen",
  "cparen",
  
  "ident",
  "var",
  "constant",
  "quote",
  "condition",
  "definition",
  "procedure",
  
  "+",
  "-",
  "*",
  "/",
};

void tok_print(const token *t) {
  if (t) {
    char *s = t->s;
    printf("%12s: %s\n", tokstr[t->type], s ? s : "");
  }
}

void tok_delete(token *t) {
  if (t) {
    free(t);
    free(t->s);
  }
}

inline token* tok_new() {
  token *t = malloc(sizeof(token));
  if (!t)
    return NULL;
  return t;
}

token* tok_fromstring(enum TokenType type, const char *s, int lo, int hi) {
  if (!s)
    return NULL;
  
  token *t = tok_new();
  if (!t)
    return NULL;
  int slen = hi - lo + 1;
  char *ss = malloc((slen + 1) * sizeof(char));
  
  if (!ss) {
    free(t);
    return NULL;
  }
  
  memcpy(ss, s + lo, slen);
  ss[slen] = '\0';
  
  t->type = type;
  t->s = ss;
  
  return t;
}

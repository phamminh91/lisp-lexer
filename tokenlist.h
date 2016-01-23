//
//  tokenlist.h
//  lisp-lexer
//
//  Created by Minh Pham on 1/23/16.
//  Copyright © 2016 Minh Pham. All rights reserved.
//

#ifndef tokenlist_h
#define tokenlist_h

#include <stdio.h>
#include "token.h"

struct tokenlist {
  int size;
  token *head;
};

typedef struct tokenlist tokenlist;

#endif /* tokenlist_h */


#include "ielr_lexer.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 // 
//    ielr_lexer.cpp																	         

/*    Generated by: DFASTAR 6.3.006
      Grammar:      ielr.lgr
      Skeleton:     ..\..\skl\lexer.cpp.skl
      Output:       ielr_lexer.cpp
*/               
/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//    DFASTAR Lexer Tables.

		Token   ielr_lexer::token;				// Token.
		int     ielr_lexer::linenumb;		   // Line number of token.
		int     ielr_lexer::colnumb;			// Column number of token.
		int     ielr_lexer::tab;				// Tab setting for the input file.

/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 // 
//    Terminal Transition Matrix and Vectors.                            

   // Transition matrix. 
      uchar ielr_lexer::Tm [144] = 
      {
         21,    1,    1,   19,   21,   11,   18,   16,   17,    0,    1,    1,    0,    0,    0,    0,    0,    0,    2,    2,
          0,    0,    2,    2,    2,    2,    2,    5,    5,    5,    0,    4,    5,    5,    5,    5,    6,    6,    6,    0,
          4,   20,    6,    6,    6,    5,    5,    5,    0,    7,    5,    5,    5,    5,    8,    8,    8,    0,   12,    8,
          8,    8,    8,    9,    9,    9,    0,    7,   20,    9,    9,    9,    8,    8,    8,    0,   13,    8,    8,    8,
          8,   10,   10,   10,    0,   14,   10,   10,   10,   10,    0,   15,   10,   10,   10,   10,    0,    0,    0,    0,
          3,    2,    0,    0,    0,    6,    6,    6,    0,   12,   20,    6,    6,    6,    0,   13,   20,    6,    6,    6,
          9,    9,    9,    0,   14,   20,    9,    9,    9,    0,   15,   20,    9,    9,    9,    0,    0,    0,    0,    0,
          0,    0,    0,    0
      };

   // T_matrix row. 
      uchar ielr_lexer::Tr [22] = 
      {
          0,    9,   18,   27,   36,   45,   54,   63,   72,   81,   87,   96,  105,  111,  120,  126,  135,  135,  135,  135,
        135,  135
      };

   // T_matrix column. 
      uchar ielr_lexer::Tc [256] = 
      {
          0,    0,    0,    0,    0,    0,    0,    0,    0,    1,    2,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    3,    0,    0,    0,    0,    0,    1,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    4,    0,    0,    0,    0,    5,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    6,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    7,    8,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0
      };

   // Token numbers for each state. 
      char ielr_lexer::terminal [22] = 
      {
          0,   -1,   -1,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,    4,    3,    2,
         -1,    0
      };


/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//    DFASTAR Lexer.       																							  

/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 // 

void  ielr_lexer::lexer_init (char* input_start) 
{
		tab = 4;
      colnumb = 0;
		linenumb = 1;
		token.end = input_start;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 // 

int   ielr_lexer::get_token ()			// Medium lexer.		
{
      int x, y;								// State, next state.
		do 
		{
    		x = 0;
			token.start = token.end;
			token.linenumb = linenumb;
      	while ((y = Tm [Tr [x] + Tc [(uchar)*token.end]]) > 0)   
			{
				x = y;
				if (*token.end == '\n') linenumb++;
			   token.end++;
			}
		}
  	  	while (terminal[x] < 0);			// Ignore whitespace.		
		return terminal[x];					// Return terminal number.	
}

//                                                                                                 // 
/////////////////////////////////////////////////////////////////////////////////////////////////////



#include "calc_lexer.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 // 
//    calc_lexer.cpp																	         

/*    Generated by: DFASTAR 6.3.006
      Grammar:      calc.lgr
      Skeleton:     ..\..\skl\lexer.cpp.skl
      Output:       calc_lexer.cpp
*/               
/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//    DFASTAR Lexer Tables.

		Token   calc_lexer::token;				// Token.
		int     calc_lexer::linenumb;		   // Line number of token.
		int     calc_lexer::colnumb;			// Column number of token.
		int     calc_lexer::tab;				// Tab setting for the input file.

/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 // 
//    Terminal Transition Matrix and Vectors.                            

   // Transition matrix. 
      uchar calc_lexer::Tm [1116] = 
      {
         53,    3,    3,   49,   18,   47,   48,   43,   41,   42,   19,    2,   46,   17,    1,    1,    1,   13,    1,    1,
          1,   14,    1,    1,    1,    1,   15,    1,    1,   16,   44,   45,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    1,    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
          1,    1,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    2,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    3,    3,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    4,    4,    0,    0,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
          4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    7,    7,    7,
          0,    7,    7,    7,    6,    7,    7,    7,    7,    7,    7,    7,    7,    7,    7,    7,    7,    7,    7,    7,
          7,    7,    7,    7,    7,    7,    7,    7,    7,    8,    8,    8,    0,    8,    8,    8,    6,    8,    8,   52,
          8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,
          8,    7,    7,    7,    0,    7,    7,    7,    9,    7,    7,    7,    7,    7,    7,    7,    7,    7,    7,    7,
          7,    7,    7,    7,    7,    7,    7,    7,    7,    7,    7,    7,    7,   10,   10,   10,    0,   10,   10,   10,
         31,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,
         10,   10,   10,   10,   10,   11,   11,   11,    0,   11,   11,   11,    9,   11,   11,   52,   11,   11,   11,   11,
         11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   10,   10,   10,
          0,   10,   10,   10,   33,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,
         10,   10,   10,   10,   10,   10,   10,   10,   10,   12,   12,   12,    0,   12,   12,   12,   34,   12,   12,   12,
         12,   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,
         12,    0,   12,   12,   12,   35,   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,
         12,   12,   12,   12,   12,   12,   12,   12,   12,   12,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    1,    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,   21,    1,   20,    1,    1,    1,    1,    1,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,    0,    0,    1,    1,    1,    1,   36,    1,
          1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    1,    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,   22,    1,    1,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,    0,    0,    1,    1,    1,    1,    1,    1,
         23,    1,    1,    1,    1,    1,    1,    1,    1,    1,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,   50,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,   51,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    5,    0,    0,    4,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    1,    0,    0,    1,    1,   24,    1,    1,    1,    1,    1,    1,    1,    1,
          1,    1,    1,    1,    1,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,    0,    0,    1,
          1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,   25,    1,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    1,    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
         26,    1,    1,    1,    1,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,    0,    0,    1,
          1,    1,   27,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    1,    0,    0,    1,    1,    1,    1,    1,    1,    1,   28,    1,    1,    1,
          1,    1,    1,    1,    1,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,    0,    0,    1,
          1,    1,   37,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    1,    0,    0,    1,    1,    1,    1,    1,   29,    1,    1,    1,    1,    1,
          1,    1,    1,    1,    1,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,    0,    0,    1,
          1,    1,    1,    1,    1,    1,    1,    1,    1,   38,    1,    1,    1,    1,    1,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    1,    0,    0,    1,    1,    1,    1,   39,    1,    1,    1,    1,    1,    1,
          1,    1,    1,    1,    1,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,    0,    0,    1,
          1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,   30,    1,    1,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    1,    0,    0,    1,   32,    1,    1,    1,    1,    1,    1,    1,    1,    1,
          1,    1,    1,    1,    1,    0,    0,    8,    8,    8,    0,    8,    8,    8,   31,    8,    8,   52,    8,    8,
          8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,    0,    0,    1,    1,    1,    1,    1,    1,    1,
          1,    1,   40,    1,    1,    1,    1,    1,    1,    0,    0,    8,    8,    8,    0,    8,    8,    8,   33,    8,
          8,   52,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,
          8,    8,    8,   11,   11,   11,    0,   11,   11,   11,   34,   11,   11,   52,   11,   11,   11,   11,   11,   11,
         11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,    0,   11,   11,   11,   35,
         11,   11,   52,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,
         11,   11,   11,   11,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0
      };

   // T_matrix row. 
      ushort calc_lexer::Tr [54] = 
      {
          0,   32,   62,   93,  125,  157,  189,  221,  253,  285,  317,  349,  378,  410,  440,  470,  500,  530,  549,  574,
        595,  625,  655,  685,  715,  745,  775,  805,  835,  865,  895,  927,  959,  991, 1023, 1052,   32,   32,   32,   32,
         32, 1084, 1084, 1084, 1084, 1084, 1084, 1084, 1084, 1084, 1084, 1084, 1084, 1084
      };

   // T_matrix column. 
      uchar calc_lexer::Tc [256] = 
      {
          0,    0,    0,    0,    0,    0,    0,    0,    0,    1,    2,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    3,    0,    0,    0,    0,    0,    1,    4,    0,    0,    0,    0,    0,    0,
          5,    6,    7,    8,    0,    9,    0,   10,   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,    0,   12,
          0,   13,    0,    0,    0,   14,   14,   14,   14,   14,   14,   14,   14,   14,   14,   14,   14,   14,   14,   14,
         14,   14,   14,   14,   14,   14,   14,   14,   14,   14,   14,    0,    0,    0,    0,   14,    0,   15,   14,   14,
         16,   17,   18,   19,   20,   21,   14,   14,   22,   23,   24,   25,   26,   14,   27,   28,   29,   14,   14,   14,
         14,   14,   14,   30,    0,   31,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0
      };

   // Token numbers for each state. 
      char calc_lexer::terminal [54] = 
      {
          0,    1,    2,   -1,   -1,    0,    0,    0,    0,    0,    0,    0,    0,    1,    1,    1,    1,   13,    0,    9,
          1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    0,    1,    0,    0,    0,   15,   20,   19,   16,
         10,    6,    7,    8,   11,   12,   14,   17,   18,    3,    4,    5,   -1,    0
      };


/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//    DFASTAR Lexer.       																							  

/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 // 

void  calc_lexer::lexer_init (char* input_start) 
{
		tab = 4;
      colnumb = 0;
		linenumb = 1;
		token.end = input_start;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 // 

int   calc_lexer::get_token ()			// Medium lexer.		
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


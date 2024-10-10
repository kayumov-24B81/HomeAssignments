/* 
   Kayumov Airat st128100@student.spbu.ru
   p_operator
   this is p_operator file. it reads string and its size. Then it sorts trough chars of this string
   performs operations with them inside main stack, the returns answer(the only variable in main stack).
   Also this function can return error messages if error had accured.
*/
#include <iostream>
#include <string>
#include <cmath>

float p_operator(std :: string input, int len)
{
    
    /* size of number counter*/
    int nc = 0;
    
    /* iterations counter (current size of stack*/
    int ic = 0;
    
    /* parody on main working stack */
    float* p_stack = new float[ic];
    
    for(int i = 0; i < len; ++i)
    {
        /* checks the content of file, if it's space it increases the size of expected number*/
        if(not(input[i] == ' '))
        {
            ++nc;
        }
        else
        {
            float numb = 0;
            /* checks the content of char: if its operand it uses it to two latests members, if its a digit it writes the whole number using nc*/
            switch (input[i - 1])
            {
               case '+':
                    
                    if(ic < 2)
                    {
                        std :: cout << "Error: there are more operands than operators" << std :: endl;
                        std :: exit(0);
                    }

                    numb = p_stack[ic - 2] + p_stack[ic - 1];
                    
                    p_stack[ic - 2] = numb;
                    p_stack[ic - 1] = 0;
                    
                    ic += -1;
                    
                    break;
                    
                case '-':
                
                    if(ic < 2)
                    {
                        std :: cout << "Error: there are more operands than operators" << std :: endl;
                        std :: exit(0);
                    }
                    
                    numb = p_stack[ic - 2] - p_stack[ic - 1];
                    
                    p_stack[ic - 2] = numb;
                    p_stack[ic - 1] = 0;
                    
                    ic += -1;
            
                    break;
                
                case '*':
                
                    if(ic < 2)
                    {
                        std :: cout << "Error: there are more operands than operators" << std :: endl;
                        std :: exit(0);
                    }
                    
                    numb = p_stack[ic - 2] * p_stack[ic - 1];
                    
                    p_stack[ic - 2] = numb;
                    p_stack[ic - 1] = 0;
                    
                    ic += -1;
                    
                    break;
                    
                    
                case '/':
                
                    if(ic < 2)
                    {
                        std :: cout << "Error: there are more operands than operators" << std :: endl;
                        std :: exit(0);
                    }
                    
                    if(p_stack[ic - 1] == 0)
                    {
                        std :: cout << "Error: division by zero" << std :: endl;
                        std :: exit(0);
                    }

                    numb = p_stack[ic - 2] / p_stack[ic - 1];
                    
                    p_stack[ic - 2] = numb;
                    p_stack[ic - 1] = 0;
                    
                    ic += -1;

                    break;
                
                default:
                        
            	    int sp = i - nc;
            	    
                    for(int i2 = 0; i2 < nc; ++i2)
                    {	
                        numb += (input[sp + i2] - '0') * std :: pow(10, nc - i2 -1);
                    }
                    
                    p_stack[ic] = numb;

                    ic += 1;
                    
              }
              
              /* This segment is for remaking p_stack to better match needed size */
              
              float* temp = new float[ic];
              
              for(int i2 = 0; i2 < ic; ++i2)
              {
                  temp[i2] = p_stack[i2];
              }
              
              delete [] p_stack;
              
              float* p_stack = new float[ic];
              
              for(int i2 = 0; i2 < ic; ++i2)
              {
                  p_stack[i2] = temp[i2];
              }
              
              delete [] temp;
              
              nc = 0;
          }
    }
    
    if(ic > 1)
    {
        std :: cout << "Error: there are more operands than operators" << std :: endl;
        std :: exit(0);
    }

    float answer = p_stack[0];
    
    delete [] p_stack;
          
    return answer;

}

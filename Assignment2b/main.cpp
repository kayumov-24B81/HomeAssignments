#include <iostream>
#include <string>
#include <cmath>

int main()
{
    std :: string input = "";
    
    std :: getline(std :: cin, input);
    
    input += ' ';
    
    int len = input.length();
    
    int c = 0;
    int c2 = 0;
    
    float* p_stack = new float[c2];
    
    for(int i = 0; i < len; ++i)
    {
        if(not(input[i] == ' '))
        {
            ++c;
        }
        else
        {
            float numb = 0;
            
            switch (input[i - 1])
            {
               case '+':
                    
                    numb = p_stack[c2 - 2] + p_stack[c2 - 1];
                    
                    p_stack[c2 - 2] = numb;
                    p_stack[c2 - 1] = 0;
                    
                    c2 += -1;
                    
                    break;
                    
                case '-':
                    
                    numb = p_stack[c2 - 2] - p_stack[c2 - 1];
                    
                    p_stack[c2 - 2] = numb;
                    p_stack[c2 - 1] = 0;
                    
                    c2 += -1;
            
                    break;
                
                case '*':
                
                    numb = p_stack[c2 - 2] * p_stack[c2 - 1];
                    
                    p_stack[c2 - 2] = numb;
                    p_stack[c2 - 1] = 0;
                    
                    c2 += -1;
                    
                    break;
                    
                    
                case '/':
                
                    if(p_stack[c2 - 1] == 0)
                    {
                        std :: cout << "Error: division by zero" << std :: endl;
                        std :: exit(0);
                    }
                    else
                    {
                        
                        numb = p_stack[c2 - 2] / p_stack[c2 - 1];
                    
                        p_stack[c2 - 2] = numb;
                        p_stack[c2 - 1] = 0;
                    
                        c2 += -1;
                    }

                    break;
                
                default:
                        
            	    int sp = i - c;
            	    
                    for(int i2 = 0; i2 < c; ++i2)
                    {	
                        numb += (input[sp + i2] - '0') * std :: pow(10, c - i2 -1);
                    }
                    
                    p_stack[c2] = numb;

                    c2 += 1;
              }
              float* temp = new float[c2];
              
              for(int i2 = 0; i2 < c2; ++i2)
              {
                  temp[i2] = p_stack[i2];
              }
              
              delete [] p_stack;
              float* p_stack = new float[c2];
              
              for(int i2 = 0; i2 < c2; ++i2)
              {
                  p_stack[i2] = temp[i2];
              }
              
              delete [] temp;
              
              c = 0;
          }
    }
    
          
    for(int i = 0; i < c2; ++i)
    {
        std :: cout << p_stack[i] << std :: endl;
    }
    
    delete [] p_stack;
    return 0;
}

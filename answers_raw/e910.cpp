#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char code[500000];
int main(void) {
 scanf("%s", code);
 int length=strlen(code);
 char output;
 int i=0;
 while(i<length) {
  if(code[i]=='0') {//0
   if(code[i+1]=='0') {//00
    output=' ';
    i+=2;
   } else {//01
    if(code[i+2]=='0') {//010
     if(code[i+3]=='0') {//0100
      if(code[i+4]=='0') {//01000
       output='M';
       i+=5;
      } else {//01001
       if(code[i+5]=='0') {//010010
        output='.';
        i+=6;
       } else {//010011
        output='P';
        i+=6;
       }
      }
     } else {//0101
      if(code[i+4]=='0') {//01010
       output='F';
       i+=5;
      } else {//01011
       if(code[i+5]=='0') {//010110
        output='G';
        i+=6;
       } else {//010111
        if(code[i+6]=='0') {//0101110
         if(code[i+7]=='0') {//01011100
          if(code[i+8]=='0') {//010111000
           output='2';
           i+=9;
          } else {//010111001
           output='Q';
           i+=9;
          }
         } else {//01011101
          if(code[i+8]=='0') {//010111010
           if(code[i+9]=='0') {//0101110100
            if(code[i+10]=='0') {//01011101000
             output='!';
             i+=11;
            } else {//01011101001
             output='7';
             i+=11;
            }
           } else {//0101110101
            output='5';
            i+=10;
           }
          } else {//010111011
           output='0';
           i+=9;
          }
         }
        } else {//0101111
         if(code[i+7]=='0') {//01011110
          output=',';
          i+=8;
         } else {//01011111
          if(code[i+8]=='0') {//010111110
           if(code[i+9]=='0') {//0101111100
            if(code[i+10]=='0') {//01011111000
             output='J';
             i+=11;
            } else {//01011111001
             if(code[i+11]=='0') {//010111110010
              if(code[i+12]=='0') {//0101111100100
               output='?';
               i+=13;
              } else {//0101111100101
               output='9';
               i+=13;
              }
             } else {//010111110011
              output='4';
              i+=12;
             }
            }
           } else {//0101111101
            output='X';
            i+=10;
           }
          } else {//010111111
           output='K';
           i+=9;
          }
         }
        }
       }
      }
     }
    } else {//011
     if(code[i+3]=='0') {//0110
      output='I';
      i+=4;
     } else {//0111
      output='N';
      i+=4;
     }
    }
   }
  } else {//1
   if(code[i+1]=='0') {//10
    if(code[i+2]=='0') {//100
     if(code[i+3]=='0') {//1000
      output='A';
      i+=4;
     } else {//1001
      output='O';
      i+=4;
     }
    } else {//101
     if(code[i+3]=='0') {//1010
      if(code[i+4]=='0') {//10100
       output='L';
       i+=5;
      } else {//10101
       output='H';
       i+=5;
      }
     } else {//1011
      if(code[i+4]=='0') {//10110
       output='C';
       i+=5;
      } else {//10111
       if(code[i+5]=='0') {//101110
        output='Y';
        i+=6;
       } else {//101111
        output='U';
        i+=6;
       }
      }
     }
    }
   } else {//11
    if(code[i+2]=='0') {//110
     if(code[i+3]=='0') {//1100
      output='T';
      i+=4;
     } else {//1101
      if(code[i+4]=='0') {//11010
       output='D';
       i+=5;
      } else {//11011
       if(code[i+5]=='0') {//110110
        output='B';
        i+=6;
       } else {//110111
        if(code[i+6]=='0') {//1101110
         output='W';
         i+=7;
        } else {//1101111
         if(code[i+7]=='0') {//11011110
          if(code[i+8]=='0') {//110111100
           output='1';
           i+=9;
          } else {//110111101
           if(code[i+9]=='0') {//1101111010
            if(code[i+10]=='0') {//11011110100
             output='6';
             i+=11;
            } else {//11011110101
             output='8';
             i+=11;
            }
           } else {//1101111011
            if(code[i+10]=='0') {//11011110110
             output='Z';
             i+=11;
            } else {//11011110111
             output='3';
             i+=11;
            }
           }
          }
         } else {//11011111
          output='V';
          i+=8;
         }
        }
       }
      }
     }
    } else {//111
     if(code[i+3]=='0') {//1110
      if(code[i+4]=='0') {//11100
       output='R';
       i+=5;
      } else {//11101
       output='S';
       i+=5;
      }
     } else {//1111
      output='E';
      i+=4;
     }
    }
   }
  }
  printf("%c", output);
 }
 
 return 0;
}

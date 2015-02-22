/**************************************************************************
 Author: Jose Tizol
 Visual Studio 2010
 Version 1.2
 Date: 12/10/2014
 
 MYLIB.h
 **************************************************************************/

#ifndef MYLIB
#define MYLIB

/*-----------------------------------------------------------------------*/
class PASSWORD
{
private:
    string UserPassword;
    string SystemPassword;
    
    int UserLength, SystemLength;
    
public:
    void Initialize_buffer();
    void OriginalSytem_Password();
    void get_Password();
    void Compare_Passwords();
};
/*-----------------------------------------------------------------------*/

#endif

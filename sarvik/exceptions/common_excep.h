//
// Created by dwarak on 9/9/19.
//

#ifndef SARVIK_COMMON_EXCEP_H
#define SARVIK_COMMON_EXCEP_H


#include <exception>

namespace  sarvik
{
    namespace exceptions
    {
        class ForceNotImplementedExcep : public std::exception
        {
            const char* what() const throw()
            {
                return "Error: Force not implemented. \n";
            }
        };

        class BodyNotImplementedExcep : public std::exception
        {
            const char* what() const throw()
            {
                return "Error: Body type not implemented. \n";
            }
        };

    }
}

#endif //SARVIK_COMMON_EXCEP_H

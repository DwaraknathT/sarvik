//
// Created by dwarak on 9/9/19.
//

#ifndef SARVIK_EXCEPTION_H
#define SARVIK_EXCEPTION_H


#include <exception>

namespace  sarvik
{
    namespace exceptions
    {
        class ForceNotImplementedExcep : public std::exception
        {
            const char* what() const throw()
            {
                return "Error: Force not implemented.";
            }
        };
    }
}

#endif //SARVIK_EXCEPTION_H

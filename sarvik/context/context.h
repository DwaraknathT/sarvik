//
// Created by dwarak on 9/9/19.
//

#ifndef SARVIK_CONTEXT_H
#define SARVIK_CONTEXT_H

#include <string>
namespace sarvik
{
    // ABC for the context in which the
    // computations take place
    class Context
    {
        std::string ContextName; //Context identifier
    public:
        Context (std::string ContextName)
        {
            this->ContextName = ContextName;
        }

        std::string GetContextName ()
        {
            std::string ContextName = this->ContextName;
            return ContextName;
        }
    };
}

#endif //SARVIK_CONTEXT_H

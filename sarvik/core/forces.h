//
// Created by dwarak on 9/9/19.
//

#ifndef SARVIK_FORCES_H
#define SARVIK_FORCES_H

#include <string>

namespace sarvik
{
    namespace forces
    {
        // Abstract base class for all types of forces that acts on a given body
        // in a given core.
        class ForceBaseClass
        {
            std::string ForceName;
        public:
            ForceBaseClass(std::string ForceName)
            {
                this->ForceName = ForceName;
            }
            //function that returns the current force name
            std::string GetForceName ()
            {
                std::string ForceName = this->ForceName;
                return ForceName;
            }
        };
    }
}

#endif //SARVIK_FORCES_H

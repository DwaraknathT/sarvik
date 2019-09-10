//
// Created by dwarak on 9/10/19.
//
// Defines the interface we use to create bodies in out contexts
// Bodies can bo of two types 1) Rigid 2) Fluid
// Both Rigid and Fluids have different implementations and physics
// A context can have multiple bodies of the same type or even
// different types.

#ifndef SARVIK_BODIES_H
#define SARVIK_BODIES_H

#include <string>
#include "context.h"
#include <sarvik/exceptions/common_excep.h>

namespace sarvik
{
    namespace bodies
    {
        class Body
        {
            // Two possible options for type - Rigid, Fluid
            // and also mention the context the body belongs to.
            std::string type;
            std::string name;
            sarvik::Context* context;
        public:
            // Constructor to initialize the body details
            Body(std::string BodyType, std::string BodyName, sarvik::Context* ContextName)
            {
                this->type = BodyType;
                this->name = BodyName;
                this->context = ContextName;
            }
            // Virtual funciton to return Add body to context
            virtual

        };
    }
}

#endif //SARVIK_BODIES_H

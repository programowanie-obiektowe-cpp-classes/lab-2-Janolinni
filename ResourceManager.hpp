#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    ResourceManager() : resource(new Resource())
    {

    };

    ResourceManager(const ResourceManager& adres2)
    {
        resource = adres2.resource;
    };

    double const get() 
    {
        return resource -> get();
    };

    ~ResourceManager()
    {
        delete resource;
    };
    
private:
Resource* resource;
};

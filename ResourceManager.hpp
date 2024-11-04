#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    ResourceManager() : resource(new Resource())
    {

    };

    ResourceManager(const ResourceManager& adres) : resource(new Resource(*adres.resource))
    {
        
    };

    double const get() 
    {
        return resource -> get();
    };

    ResourceManager& operator = (const ResourceManager& adres)
    {
        if(this != &adres)
        {
            delete resource;
            resource = adres.resource;
        }
        return *this;
    }

    ~ResourceManager()
    {
        delete resource;
    };
    
private:
Resource* resource;
};

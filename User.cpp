#include <string>

class User
{
    private:
        int id;
        std::string email = "";

    public:
        User(int id): 
            id{id}
        {}
};
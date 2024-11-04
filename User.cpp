#include <string>

class User
{
    private:
        int id;
        std::string email = "petya@mail.com";
        int age = 18;

    public:
        User(int id): 
            id{id}
        {}
};
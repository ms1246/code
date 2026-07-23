#if !defined(TYPES_HPP)
#define TYPES_HPP
#include "utils.hpp"


#define lzvr Variant
#define sst ssize_t
#define st size_t

enum VariantType
{
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_CHAR,
    TYPE_BOOL,
};

union VariantValue
{
    int i;
    float f;
    char c;
    bool b;
};

class Variant
{
public:
    VariantType type;
    VariantValue value;

    Variant(int i) : type(TYPE_INT)
    {
        this->value.i = i;
    };
    Variant(float f) : type(TYPE_FLOAT)
    {
        this->value.f = f;
    };
    Variant(double d) : type(TYPE_FLOAT) // we don't have a double type, just put in the float
    {
        this->value.f = static_cast<float>(d);
    };
    Variant(char c) : type(TYPE_CHAR)
    {
        this->value.c = c;
    };
    Variant(bool b) : type(TYPE_BOOL)
    {
        this->value.b = b;
    };


    friend std::ostream &operator<<(std::ostream &os, const Variant &var)
    {
        if (var.type == TYPE_INT)
        {
            os << var.value.i;
        }
        if (var.type == TYPE_FLOAT)
        {
            os << var.value.f;
        }
        if (var.type == TYPE_CHAR)
        {
            os << var.value.c;
        }
        if (var.type == TYPE_BOOL)
        {
            os << yesno(var.value.b, TF);
        }

        return os;
    }
};

#endif // TYPES_HPP

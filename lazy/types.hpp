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
    TYPE_STR,
};

union VariantValue
{
    int i;
    float f;
    char c;
    bool b;
    char *s;
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

    Variant(const Variant &other)
    {
        this->type = other.type;
        this->value = other.value;
    };

    Variant &operator=(const Variant &other)
    {
        this->type = other.type;
        this->value = other.value;
        return *this;
    };

    Variant(const char *s) : type(TYPE_STR)
    {
        this->value.s = new char[strlen(s) + 1];
        strcpy(this->value.s, s);
    };

    Variant(bool b) : type(TYPE_BOOL)
    {
        this->value.b = b;
    };

    void *id()
    {
        return &this->value;
    };

    friend std::ostream &operator<<(std::ostream &os, const Variant &var)
    {

        switch (var.type)
        {
        case TYPE_INT:
            os << var.value.i;
            break;
        case TYPE_FLOAT:
            os << var.value.f;
            break;
        case TYPE_CHAR:
            os << var.value.c;
            break;
        case TYPE_BOOL:
            os << yesno(var.value.b, TF);
            break;
        case TYPE_STR:
            os << var.value.s;
            break;
        default:
            break;
        }
        return os;
    };
};
#endif // TYPES_HPP
